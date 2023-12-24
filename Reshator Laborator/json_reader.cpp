#include <fstream>
#include "json.hpp"
#include "Core.h"
using json = nlohmann::json;

// 
// Объект структуры настроек, полученных из файла settings.json.
// 
Settings settings;
// 
// Записывает в объект структуры все параметры из файла settings.json. Если такового нет - создает новый.
// 
void get_settings() {
	std::ifstream file("settings.json");
	json js;
	if (file) {
		file >> js;
		file.close();
		settings.intro = js["intro"];
		settings.rain = js["rain"];
	}
	else {
		std::ofstream file("settings.json");
		json js;
		js["intro"] = true; settings.intro = true;
		js["rain"] = true; settings.rain = true;
		file << js;
		file.close();
	}
}
// 
// Выдает значение настройки в зависимости от его индекса.
// 
std::string show_settings(int ind) {
	if (ind == 0) {
		if (settings.intro) return "Включено";
		else return "Выключено";
	}
	if (ind == 1) {
		if (settings.rain) return "Включено";
		else return "Выключено";
	}
	return "";
}
// 
// Меняет один параметр настроек и записывает изменения в файл settings.json.
// 
void change_settings(System::String^ parameter, int index) {
	std::ifstream file("settings.json");
	json js;
	file >> js;
	file.close();
	std::ofstream file2("settings.json");
	if (index == 0) {
		if (parameter == L"Выключено") {
			js["intro"] = false; settings.intro = false;
		}
		else {
			js["intro"] = true; settings.intro = true;
		}
	}
	if (index == 1) {
		if (parameter == L"Выключено") {
			js["rain"] = false; settings.rain = false;
		}
		else {
			js["rain"] = true; settings.rain = true;
		}
	}
	file2 << js;
	file2.close();
}