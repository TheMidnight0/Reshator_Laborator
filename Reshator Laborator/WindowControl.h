#pragma once
#ifndef CONTROLS_H
#define CONTROLS_H
#include <string>
#include <vector>

ref class WindowData abstract sealed {
public:
    static System::Windows::Forms::Form^ MainWindow;
    static System::Windows::Forms::Button^ button1;
    static System::Windows::Forms::Button^ button2;
    static System::Windows::Forms::Button^ button3;
    static System::Windows::Forms::Button^ button4;
    static System::Windows::Forms::Button^ button5;
    static System::Windows::Forms::Button^ button6;
    static System::Windows::Forms::Button^ button7;
    static System::Windows::Forms::Button^ button8;
    static System::Windows::Forms::Button^ button9;
    static System::Windows::Forms::Button^ button10;
    static System::Windows::Forms::Button^ button11;
    static System::Windows::Forms::Label^ label1;
    static System::Windows::Forms::Label^ label2;
    static System::Windows::Forms::PictureBox^ picture1;
    static System::Windows::Forms::PictureBox^ picture2;
    static System::Windows::Forms::TextBox^ input1;
    static System::Windows::Forms::TextBox^ input2;
    static System::Windows::Forms::Form^ Answer;
    static System::Windows::Forms::TextBox^ textBox;
};

void show_window(bool = false);
void hide_window();
void command(std::string, std::string = "");

#endif