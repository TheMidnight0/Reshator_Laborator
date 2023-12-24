#include "Core.h"

// 
// Решение лабораторной 2.
// 
std::string lab2_resolve() {
	if (task == 0) {
		double x1 = std::stod(vars_value[0]), y1 = std::stod(vars_value[1]), x2 = std::stod(vars_value[2]), y2 = std::stod(vars_value[3]), result;
		result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		return "Точка A(" + std::to_string(x1) + "; " + std::to_string(y1) + ")\nТочка B(" + std::to_string(x2) + "; " + std::to_string(y2) +
			")\nРасстояние между двумя заданными точками: " + std::to_string(result);
	}
	if (task == 9) {
		double x = numbers[0], y = 0;
		if (x >= -2 && x <= 2) {
			y = pow(x, 2);
		}
		else {
			y = 4;
		}
		return lab_get_vars() + "Y = " + std::to_string(y);
	}
	if (task == 10) {
		double x = std::stod(vars_value[0]), y = std::stod(vars_value[1]);
		if ((sqrt(pow(x, 2) + pow(y, 2)) <= 1 && x > 0 && y > 0) || (x <= 0 && y <= 0 && x >= -1 && y >= -1)) {
			return "A(" + std::to_string(x) + "; " + std::to_string(y) + ")\nТочка попадает внутрь заданной области.";
		}
		else {
			return "A(" + std::to_string(x) + "; " + std::to_string(y) + ")\nТочка НЕ попадает внутрь заданной области.";
		}
	}
	return "";
}
// 
// Решение лабораторной 3.
// 
std::string lab3_resolve() {
	double result = 0, n;
	int cycle = 1;
	if (task == 0) {
		n = stod(vars_value[0]);
		result = 1;
		while (cycle <= n) {
			result *= 1 + 1 / pow(cycle, 2);
			cycle++;
		}
		return "Результат суммы: " + std::to_string(result);
	}
	if (task == 1) {
		n = stod(vars_value[0]);
		double x = stod(vars_value[1]);
		int fact = 1;
		if (subtask == 2) {
			result = 1;
			while (cycle <= n) {
				fact *= cycle;
				result *= 1 + sin(cycle * x) / fact;
				fact = 1;
				cycle++;
			}
		}
		return "Результат суммы: " + std::to_string(result);
	}
	if (task == 2) {
		std::string answer;
		double x = 0.5, b = 0.6, h = 0.01;
		for (; x - h < b; x += h) {
			if (subtask == 2) {
				result = 1 + exp(x);
			}
			answer += "Значение функции f(x) на шаге " + std::to_string(x) + ": " + std::to_string(result) + "\n";
		}
		return answer;
	}
	return "";
}
// 
// Решение лабораторной 4.
// 
std::string lab4_resolve() {
	double result = 0, elem = NULL, fact = 1, x = stod(vars_value[0]), E = stod(vars_value[1]);
	int fact2 = 1;
	if (task == 0) {
		elem = x;
		result = elem;
		for (int k = 1; fabs(elem) > E && k < 10000; k++) {
			fact *= k;
			elem *= -1 * pow(x, 4) * (4 * (k - 1) + 1) / (fact * (4 * k + 1));
			result += elem;
		}
		return lab_get_vars() + "Приближенное значение суммы: " + std::to_string(result);
	}
	if (task == 1) {
		elem = x;
		result = elem;
		for (int m = 2; fabs(elem) <= E && m < 10000; m++) {
			fact = (2 * m - 2) * (2 * m - 1);
			elem *= pow(x, 2) / fact;
			result += elem;
		}
		elem = fabs(result - sinh(x));
		return lab_get_vars() + "Приближенное значение суммы: " + std::to_string(result) + "\nПогрешность вычислений: " + std::to_string(elem);
	}
	return "";
}
// 
// Решение лабораторной 5.
// 
std::string lab5_resolve() {
	if (task == 0) {
		vars_value[1] += " ";
		std::stringstream ss(vars_value[1]);
		size_t size = size_t(stoi(vars_value[0]));
		std::vector<double> vec;
		std::string one, type = "пустой";
		while (std::getline(ss, one, ' ')) {
			try {
				if (vec.size() < size) {
					vec.push_back(std::stod(one));
				}
				else {
					break;
				}
			}
			catch (...) {}
		}
		if (vec.size() > 0) {
			double prev = vec[0], current;
			for (int i = 1; i < vec.size(); i++) {
				current = vec[i];
				if (current == prev && type == "пустой") {
					continue;
				}
				if (current >= prev && (type == "пустой" || type == "строго возрастающий" || type == "неубывающий")) {
					if (current > prev && (type == "пустой" || type == "строго возрастающий")) {
						type = "строго возрастающий";
					}
					else {
						type = "неубывающий";
					}
					prev = current;
					continue;
				}
				if (current <= prev && (type == "пустой" || type == "строго убывающий" || type == "невозрастающий")) {
					if (current < prev && (type == "пустой" || type == "строго убывающий")) {
						type = "строго убывающий";
					}
					else {
						type = "невозрастающий";
					}
					prev = current;
					continue;
				}
				type = "другой";
				prev = current;
				break;
			}
		}
		return lab_get_vars() + "Тип массива - " + type + ".";
	}
	if (task == 1) {
		vars_value[1] += " ";
		std::stringstream ss(vars_value[1]);
		size_t size = size_t(stoi(vars_value[0]));
		std::vector<double> vec;
		std::string one;
		while (std::getline(ss, one, ' ')) {
			try {
				if (vec.size() < size) {
					vec.push_back(std::stod(one));
				}
				else {
					break;
				}
			}
			catch (...) {}
		}
		double max;
		max = 0;
		for (int i = 0; i < vec.size(); i++) {
			if (abs(vec[i]) > max) {
				max = abs(vec[i]);
			}
		}
		for (int i = 0; i < vec.size(); i++) {
			vec[i] = vec[i] / max;
		}
		std::string end;
		for (int i = 0; i < vec.size(); ++i) {
			std::ostringstream doubleStr;
			doubleStr << vec[i];
			end += doubleStr.str() + " ";
		}
		return lab_get_vars() + "Нормализованный вектор: " + end;
	}
	if (task == 2) {
		std::stringstream ss(vars_value[1]);
		size_t size = size_t(stoi(vars_value[0]));
		std::vector<double> vec;
		std::string one;
		while (std::getline(ss, one, ' ')) {
			try {
				if (vec.size() < size) {
					vec.push_back(std::stod(one));
				}
				else {
					break;
				}
			}
			catch (...) {}
		}
		std::string result;
		size_t i;
		for (i = 0; i < vec.size() - 1; i++) {
			for (size_t j = vec.size() - 1; j > i; j--) {
				if (vec[j - 1] > vec[j]) {
					double temp = vec[j - 1];
					vec[j - 1] = vec[j];
					vec[j] = temp;
				}
			}
			std::string row = "[";
			for (int j = 0; j < vec.size(); ++j) {
				std::ostringstream doubleStr;
				doubleStr << vec[j];
				if (i == j) {
					row += doubleStr.str() + "] ";
				}
				else {
					row += doubleStr.str() + " ";
				}
			}
			result += "\r\n(" + std::to_string(i + 1) + ") " + row;

		}
		std::string row = "[";
		for (int j = 0; j < vec.size(); ++j) {
			std::ostringstream doubleStr;
			doubleStr << vec[j];
			if (i == j) {
				row += doubleStr.str() + "] ";
			}
			else {
				row += doubleStr.str() + " ";
			}
		}
		result += "\r\n(" + std::to_string(i + 1) + ") " + row;
		return lab_get_vars() + "Сортировка по возрастанию: " + result;
	}
	return "";
}
// 
// Решение лабораторной 6.
// 
std::string lab6_resolve() {
	if (task == 0) {
		std::stringstream ss(vars_value[0]);
		std::string matrixstr = vars_value[1];
		int rows, cols;
		std::string temp;
		std::getline(ss, temp, ' ');
		rows = stoi(temp);
		getline(ss, temp);
		cols = stoi(temp);
		std::vector<std::vector<double>> matrix;
		ss.str("");
		ss.clear();
		ss << matrixstr;
		getline(ss, temp, '\n');
		while (getline(ss, temp, '\n')) {
			if (matrix.size() < rows) {
				matrix.push_back({});
				std::stringstream ss2(temp);
				while (std::getline(ss2, temp, ' ')) {
					if (matrix[matrix.size() - 1].size() < cols) {
						try {
							matrix[matrix.size() - 1].push_back(std::stod(temp));
						}
						catch (...) {}
					}
					else {
						break;
					}
				}
				for (size_t i = matrix[matrix.size() - 1].size(); i < cols; i++) {
					matrix[matrix.size() - 1].push_back(0);
				}
			}
			else {
				break;
			}
		}
		int negative = 0, positive = 0, zero = 0;
		for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[i].size(); j++) {
				if (matrix[i][j] < 0) {
					negative++;
				}
				if (matrix[i][j] > 0) {
					positive++;
				}
				if (matrix[i][j] == 0) {
					zero++;
				}
			}
		}
		return lab_get_vars() + "Положительных элементов: " + std::to_string(positive) + "\r\nОтрицательных элементов: " + std::to_string(negative) + "\r\nНулевых элементов: " + std::to_string(zero);
	}
	if (task == 1) {
		std::stringstream ss(vars_value[0]);
		std::string matrixstr = vars_value[1];
		int rows, cols;
		std::string temp;
		std::getline(ss, temp, ' ');
		rows = stoi(temp);
		std::getline(ss, temp);
		cols = stoi(temp);
		std::vector<std::vector<int>> matrix;
		ss.str("");
		ss.clear();
		ss << matrixstr;
		std::getline(ss, temp, '\n');
		while (std::getline(ss, temp, '\n')) {
			if (matrix.size() < rows) {
				matrix.push_back({});
				std::stringstream ss2(temp);
				while (std::getline(ss2, temp, ' ')) {
					if (matrix[matrix.size() - 1].size() < cols) {
						try {
							matrix[matrix.size() - 1].push_back(std::stoi(temp));
						}
						catch (...) {}
					}
					else {
						break;
					}
				}
				for (size_t i = matrix[matrix.size() - 1].size(); i < cols; i++) {
					matrix[matrix.size() - 1].push_back(0);
				}
			}
			else {
				break;
			}
		}
		int min = -1;
		bool positive = true;
		std::vector<int> column;
		std::vector<int> saved_column = {};
		for (int i = 0, j = 0; j < matrix[matrix.size() - 1].size(); i++) {
			if (i == matrix.size()) {
				if (positive) {
					int result = 1;
					for (int m = 0; m < column.size(); m++) {
						result *= column[m];
					}
					if (result < min || min == -1) {
						min = result;
						saved_column = column;
					}
				}
				column.clear();
				positive = true;
				i = 0;
				j++;
				if (j == matrix[i].size()) {
					break;
				}
			}
			column.push_back(matrix[i][j]);
			if (matrix[i][j] <= 0) {
				positive = false;
			}
		}
		ss.str("");
		ss.clear();
		copy(saved_column.begin(), saved_column.end(), std::ostream_iterator<int>(ss, " "));
		std::string s = ss.str();
		s = s.substr(0, s.length() - 1);
		return lab_get_vars() + "Столбец с минимальным произведением: " + s;
	}
	return "";
}
// 
// Решение лабораторной 7.
// 
std::string lab7_resolve() {
	const char numbers_char[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A' ,'B' ,'C' ,'D' ,'E' ,'F' };
	if (task == 0) {
		std::string input = "-D17";
		int system = 16;
		bool minus = false;
		if (input[0] == '-') {
			minus = true;
			input = input.substr(1);
		}
		int ten_sys = 0;
		for (int i = 0; i < input.size(); i++) {
			ten_sys += int(std::distance(std::begin(numbers_char), std::find(std::begin(numbers_char), std::end(numbers_char), input[i]))) * int(pow(system, input.size() - 1 - i));
		}
		std::string two_sys;
		while (ten_sys != 0) {
			two_sys = std::to_string(ten_sys % 2) + two_sys;
			ten_sys /= 2;
		}
		while (two_sys.size() != 32) {
			two_sys = "0" + two_sys;
		}
		if (minus) {
			for (int i = 0; i < two_sys.size(); i++) {
				if (two_sys[i] == '0') {
					two_sys[i] = '1';
				}
				else {
					two_sys[i] = '0';
				}
			}
			for (size_t i = two_sys.size() - 1; minus; i--) {
				if (two_sys[i] == '1') {
					two_sys[i] = '0';
				}
				else {
					two_sys[i] = '1';
					minus = false;
				}
			}
		}
		return "Входное число: -D17\r\nСистема исчисления: 16\r\nДвоичное число: " + two_sys;
	}
	if (task == 1) {
		std::string bytes = "00000001110101111001100110011111";
		int num = 0;
		unsigned int unsigned_num = 0;
		float float_num = 0;
		std::string bytes2 = bytes;
		if (bytes[0] == '1') {
			for (size_t i = bytes2.size() - 1; i > 0; i--) {
				if (bytes2[i] == '0') {
					bytes2[i] = '1';
				}
				else {
					bytes2[i] = '0';
					i = 0;
				}
			}
			for (int i = 0; i < bytes2.size(); i++) {
				if (bytes2[i] == '0') {
					bytes2[i] = '1';
				}
				else {
					bytes2[i] = '0';
				}
			}
		}
		for (int i = 0; i < bytes2.size(); i++) {
			num += int(bytes2[i] - '0') * int(pow(2, bytes2.size() - 1 - i));
		}
		if (bytes[0] == '1') {
			num *= -1;
		}

		for (int i = 0; i < bytes.size(); i++) {
			unsigned_num += int(bytes[i] - '0') * int(pow(2, bytes.size() - 1 - i));
		}

		std::string m = bytes.substr(1, 8);
		std::string fl = bytes.substr(9);
		int exp = 0;
		for (int i = 0; i < m.size(); i++) {
			exp += int(m[i] - '0') * int(pow(2, m.size() - 1 - i));
		}
		exp -= 127;
		int size = exp;
		fl = "1" + fl;
		while (exp != 0) {
			if (exp < 0) {
				fl = "0" + fl;
				exp += 1;
			}
			else {
				fl += "0";
				exp -= 1;
			}
		}
		for (int i = 0; i < fl.size() && i < 32; i++) {
			float_num += float(int(fl[i] - '0') * pow(2, size - i));
		}
		return "Входные байты: " + bytes + "\r\nЦелое число: " + std::to_string(num) + "\r\nЦелое беззнаковое число: " + std::to_string(unsigned_num) + "\r\nЧисло с плавающей точкой: " + std::to_string(float_num);
	}
	return "";
}