#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define _USE_MATH_DEFINES
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
#include <map>

struct Settings {
	bool ldm_mode;
	bool intro;
	bool rain;
	std::string tester = "Запустить";
};

extern std::string WinState[2];
extern Settings settings;
extern const std::map<std::string, std::string> settings_name;
extern const std::string lab_desc[7];
extern std::vector<std::string> vars_value;
extern std::vector<double> numbers;
extern std::vector<std::string> converted;
extern int lab;
extern int task;
extern int subtask;

void get_settings();
std::string show_settings(int);
void change_settings(System::String^, int);
void erase();
void prev();
void enter();
void next();
void back();
std::string lab1_get_vars();
std::string lab1_convert(int);
int lab1_math(std::string, int, int);
std::string lab1_expand(int);
std::string lab1_add(System::String^, int);
std::string lab1_del(int);
bool lab1_change_sys(int, int);
void lab_show_vars(System::String^);
std::string lab_get_vars();
std::string lab2_resolve();
std::string lab3_resolve();
std::string lab4_resolve();
std::string lab5_resolve();
std::string lab6_resolve();
std::string lab7_resolve();
std::string get_string(System::String^);
void show_answer(System::String^);
void enable_tester();

#endif