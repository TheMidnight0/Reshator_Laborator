#include <fstream>
#include "json.hpp"
#include "Core.h"
using json = nlohmann::json;

// 
// ������ ��������� ��������, ���������� �� ����� settings.json.
// 
Settings settings;
// 
// ���������� � ������ ��������� ��� ��������� �� ����� settings.json. ���� �������� ��� - ������� �����.
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
// ������ �������� ��������� � ����������� �� ��� �������.
// 
std::string show_settings(int ind) {
	if (ind == 0) {
		if (settings.intro) return "��������";
		else return "���������";
	}
	if (ind == 1) {
		if (settings.rain) return "��������";
		else return "���������";
	}
	return "";
}
// 
// ������ ���� �������� �������� � ���������� ��������� � ���� settings.json.
// 
void change_settings(System::String^ parameter, int index) {
	std::ifstream file("settings.json");
	json js;
	file >> js;
	file.close();
	std::ofstream file2("settings.json");
	if (index == 0) {
		if (parameter == L"���������") {
			js["intro"] = false; settings.intro = false;
		}
		else {
			js["intro"] = true; settings.intro = true;
		}
	}
	if (index == 1) {
		if (parameter == L"���������") {
			js["rain"] = false; settings.rain = false;
		}
		else {
			js["rain"] = true; settings.rain = true;
		}
	}
	file2 << js;
	file2.close();
}