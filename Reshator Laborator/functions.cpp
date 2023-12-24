#include "Core.h"

// 
// Состояние главного окна - какое действие происходит или ожидает программа в данный момент.
// 
std::string WinState[2] = { "intro", "wait" };
// 
// Описание каждой лабораторной.
// 
const std::string lab_desc[7] = {
	"Системы счисления.\nАрифметические операции в разных\nсистемах счисления.\nПеревод из одной системы счисления в другую.",
	"Основы алгоритмизации.\nПостроение блок-схем линейных и\nразветвляющихся вычислительных процессов.",
	"Построение блок-схем циклических\nвычислительных процессов.",
	"Построение блок-схем итерационных\nвычислительных процессов.",
	"Действия над одномерными\nмассивами в блок-схемах.",
	"Действия над матрицами в блок-схемах.",
	"Представление информации в ПЭВМ\nтипа IBM PC/AT." };
// 
// Количество подзаданий в каждом задании каждой лабораторной.
// 
const std::vector<std::vector<int>> lab_tasks_max = {
	{0}, {0, 1, 1}, {1, 1, 1}, {1, 1}, {0, 0, 0}, {0, 0}, {1, 1} };
// 
// 
// 
const std::vector<std::vector<std::vector<std::string>>> vars = { { },
	{ {"x первой точки", "y первой точки", "x второй точки", "y второй точки"}, {"x"}, {"x точки", "y точки"} },
	{ {"n"}, {"n", "x"}, { } },
	{ {"x", "E"}, {"x", "E"} },
	{ {"n", "элементы массива", "OPENWINDOW"}, {"n", "элементы вектора", "OPENWINDOW"}, {"n", "элементы вектора", "OPENWINDOW"}},
	{ {"количество строк и столбцов матрицы через пробел", "MATRIX", "OPENWINDOW"}, {"количество строк и столбцов матрицы через пробел", "MATRIX", "OPENWINDOW"}},
	{ { }, { } } };
// 
// Список символьных обозначений для каждого числа в любой системе исчисления по индексу элемента.
// 
const char numbers_char[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A' ,'B' ,'C' ,'D' ,'E' ,'F' };
// 
// 
// 
const std::map<std::string, std::string> settings_name = { {"intro", "Заставка"}, {"rain", "Дождь в меню"}, {"tester", "Открыть мастер проверки"} };
// 
// Вектора для хранения чисел, индекс лабораторной, задания и подзадания.
// 
std::vector<std::string> vars_value;
std::vector<double> numbers;
std::vector<std::string> converted;
std::vector<int> numbers_system;
int lab = 0;
int task = 0;
int subtask = 0;
// 
// Стирает все значения векторов и выбранных лабораторных, заданий и подзаданий.
// 
void erase() {
	vars_value.clear();
	numbers.clear();
	converted.clear();
	numbers_system.clear();
	lab = 0;
	task = 0;
	subtask = 0;
}
// 
// Позволяет переместиться к предыдущей задаче или подзадаче в меню выбора задач.
// 
void prev() {
	if (WinState[1] == "task") {
		if (task == 0) {
			task = int(lab_tasks_max[lab].size() - 1);
		}
		else {
			task--;
		}
	}
	else {
		if (subtask == 0) {
			subtask = lab_tasks_max[lab][task] - 1;
		}
		else {
			subtask--;
		}
	}
}
// 
// Позволяет выбрать задачу или подзадачу посредством изменения WinState.
// 
void enter() {
	if (WinState[1] == "task") {
		if (lab_tasks_max[lab][task] != 0) {
			subtask = 0;
			WinState[1] = "subtask";
		}
		else {
			WinState[1] = "task_input";
		}
	}
	else {
		WinState[1] = "subtask_input";
	}
}
// 
// Позволяет переместиться к следующей задаче или подзадаче в меню выбора задач.
// 
void next() {
	if (WinState[1] == "task") {
		if (task == lab_tasks_max[lab].size() - 1) {
			task = 0;
		}
		else {
			task++;
		}
	}
	else {
		if (subtask == lab_tasks_max[lab][task] - 1) {
			subtask = 0;
		}
		else {
			subtask++;
		}
	}
}
// 
// Позволяет вернуться из меню выбора подзадач в меню выбора задач.
// 
void back() {
	WinState[1] = "task";
	subtask = 0;
}
// 
// Дает на выходе строку из имеющихся чисел и их систем исчисления для лабораторной 1.
// 
std::string lab1_get_vars() {
	std::string temp = "\nЧисла в памяти:", temp2;
	for (int i = 0; i < numbers.size(); i++) {
		if (i % 2 == 0) {
			temp += "\n";
		}
		else {
			for (int j = 0; j < 28 - temp2.length(); j++) {
				temp += " ";
			}
		}
		temp2 = std::to_string(i + 1) + " - (" + std::to_string(numbers_system[i]) + ") " + converted[i];
		temp += temp2;
	}
	return temp;
}
// 
// Переводит одно число в другую систему исчисления, забирая число и систему из векторов numbers и numbers_system.
// 
std::string lab1_convert(int ind) {
	std::string result, temp;
	int fir = int(floor(abs(numbers[ind]))), sys = numbers_system[ind];
	double sec = floor((abs(numbers[ind]) - double(fir)) * 100000000) / 100000000;
	if (fir == 0) {
		result = "0";
	}
	while (fir != 0) {
		result = numbers_char[fir % sys] + result;
		fir /= sys;
	}
	if (sec > 0) {
		result += ".";
		for (int i = 0; i < 4; i++) {
			sec *= sys;
			temp += numbers_char[int(floor(sec))];
			if (numbers_char[int(floor(sec))] != '0') {
				result += temp;
				temp = "";
			}
			sec = sec - floor(sec);
		}
	}
	if (numbers[ind] < 0) {
		result = "-" + result;
	}
	return result;
}
// 
// Совершает 4 математические операции с двумя числами из numbers по индексам.
// 
int lab1_math(std::string task, int ind1, int ind2) {
	double result = 0;
	if (ind1 < 0 || ind1 >= numbers.size() || ind2 < 0 || ind2 >= numbers.size() || ind1 == ind2) {
		return -1;
	}
	if (task == "+") {
		result = numbers[ind1] + numbers[ind2];
	}
	if (task == "-") {
		result = numbers[ind1] - numbers[ind2];
	}
	if (task == "*") {
		result = numbers[ind1] * numbers[ind2];
	}
	if (task == "/") {
		if (numbers[ind2] == 0) {
			return -1;
		}
		result = numbers[ind1] / numbers[ind2];
	}
	numbers[ind1] = result;
	converted[ind1] = lab1_convert(ind1);
	numbers.erase(numbers.begin() + ind2);
	converted.erase(converted.begin() + ind2);
	numbers_system.erase(numbers_system.begin() + ind2);
	if (ind1 > ind2) {
		return ind1 - 1;
	}
	else {
		return ind1;
	}
}
// 
// Выдает одно число в развернутом виде по индексу из списка converted.
// 
std::string lab1_expand(int ind) {
	int size = -1;
	std::string result, num = converted[ind];
	bool minus = false;
	if (ind < 0 || ind >= numbers.size()) {
		return "";
	}
	for (int i = 0; i < num.length(); i++) {
		if (num[i] != '-') {
			if (num[i] == ',' || num[i] == '.') {
				break;
			}
			size++;
		}
	}
	for (int i = 0; i < num.length(); i++) {
		if (num[i] == '-') {
			minus = true;
		}
		if (num[i] != '.' && num[i] != '-') {
			if (minus) {
				result += "-" + std::to_string(int(std::distance(std::begin(numbers_char), std::find(std::begin(numbers_char), std::end(numbers_char), num[i])))) + " * " + std::to_string(numbers_system[ind]) + "^" + std::to_string(size);
			}
			else {
				if (result != "") {
					result += " + ";
				}
				result += std::to_string(int(std::distance(std::begin(numbers_char), std::find(std::begin(numbers_char), std::end(numbers_char), num[i])))) + " * " + std::to_string(numbers_system[ind]) + "^" + std::to_string(size);
			}
			size--;
		}
	}
	return result;
}
// 
// Добавляет новое число в три вектора для лабораторной 1.
// 
std::string lab1_add(System::String^ num, int sys) {
	double result = 0;
	int size = -1, temp;
	bool minus = false;
	if (num->Length > 18) {
		return "";
	}
	for (int i = 0; i < num->Length; i++) {
		if (num[i] != '-') {
			if (num[i] == ',' || num[i] == '.') {
				if (num[i] == ',') {
					num = num->Replace(L',', L'.');
				}
				break;
			}
			size++;
		}
	}
	if (size == -1) {
		return "";
	}
	for (int i = 0; i < num->Length; i++) {
		if (num[i] != ',' && num[i] != '.' && num[i] != '-') {
			temp = int(std::distance(std::begin(numbers_char), std::find(std::begin(numbers_char), std::end(numbers_char), num[i])));
			if (temp >= sys) {
				return "";
			}
			result += std::distance(std::begin(numbers_char), std::find(std::begin(numbers_char), std::end(numbers_char), num[i])) * pow(sys, size);
			size--;
		}
		if (num[i] == '-') {
			minus = true;
		}
	}
	if (minus) {
		result *= -1;
	}
	numbers.push_back(result);
	numbers_system.push_back(sys);
	converted.push_back(lab1_convert(int(converted.size())));
	return "(" + std::to_string(sys) + ") " + converted[converted.size() - 1];
}
// 
// Удаляет число пло индексу из трех векторов.
// 
std::string lab1_del(int ind) {
	if (ind > -1 && ind < numbers.size()) {
		std::string temp = "(" + std::to_string(numbers_system[ind]) + ") " + converted[ind];
		numbers.erase(numbers.begin() + ind);
		converted.erase(converted.begin() + ind);
		numbers_system.erase(numbers_system.begin() + ind);
		return temp;
	}
	else {
		return "";
	}
}
// 
// Меняет систему исчисления для числа по индексу и переводит его в новой системе в converted.
// 
bool lab1_change_sys(int ind, int sys) {
	if (ind > -1 && ind < numbers.size() && sys > -1 && sys < 17) {
		numbers_system[ind] = sys;
		converted[ind] = lab1_convert(ind);
		return true;
	}
	else {
		return false;
	}
}
// 
// Дает на выходе подсказку для текстового поля о том, какую переменную нужно ввести пользователю.
// 
void lab_show_vars(System::String^ num) {
	static int matrix_ind;
	static int matrix_size;
	static std::string matrix;
	if (num == "-") {
		matrix_ind = -1;
		matrix_size = 0;
		matrix = "";
	}
	if (num != "-" && matrix_ind == -1) {
		vars_value.push_back(get_string(num));
	}
	if (matrix_ind == -1) {
		if (vars_value.size() < vars[lab][task].size()) {
			WinState[1] = vars[lab][task][vars_value.size()];
			if (WinState[1] == "MATRIX") {
				std::stringstream ss(vars_value[vars_value.size() - 1]);
				std::string num;
				std::getline(ss, num, ' ');
				std::getline(ss, num);
				matrix_size = std::stoi(num);
				matrix_ind = 0;
			}
		}
		else {
			WinState[1] = "DONE";
		}
	}
	if (matrix_ind != -1) {
		if (matrix_ind != 0) {
			matrix += "\r\n" + get_string(num);
		}
		if (matrix_ind == matrix_size) {
			vars_value.push_back(matrix);
			matrix_ind = -1;
			matrix_size = 0;
			matrix = "";
			if (vars_value.size() < vars[lab][task].size()) {
				WinState[1] = vars[lab][task][vars_value.size()];
			}
			else {
				WinState[1] = "DONE";
			}
		}
		else {
			matrix_ind++;
			WinState[1] = "элементы " + std::to_string(matrix_ind) + " строки матрицы";
		}
	}
}
//
// Выдает на выходе список введенных переменных.
//
std::string lab_get_vars() {
	std::string result, name;
	for (int i = 0; i < vars_value.size(); i++) {
		name = vars[lab][task][i];
		name[0] = toupper(name[0]);
		result += name + ": " + vars_value[i] + "\r\n";
	}
	return result;
}
// 
// Конвертирует System::String^ в std::string.
// 
std::string get_string(System::String^ text) {
	using namespace System;
	using namespace Runtime::InteropServices;
	std::string res;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(text)).ToPointer();
	res = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return res;
}