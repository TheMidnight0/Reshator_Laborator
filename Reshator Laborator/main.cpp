#include "WindowControl.h"
#include "MainWindow.h"
#include "Answer.h"
#include "Tester.h"
#include <Windows.h>
#include <functional>
#include <thread>
#include <future>
using namespace System;
using namespace System::Windows::Forms;

std::string InvokeControl[2];
ref class SealedWindow abstract sealed {
public:
    static ReshatorLaborator::MainWindow^ MainWindow;
    static ReshatorLaborator::Answer^ Answer;
};

void show_answer(String^ text = L"") {
    if (WindowData::Answer->CanFocus) {
        SealedWindow::Answer->Invoke(gcnew Action(SealedWindow::Answer, &ReshatorLaborator::Answer::Close));
    }
    ReshatorLaborator::Answer^ form = gcnew ReshatorLaborator::Answer;
    form->textBox->Text = text;
    SealedWindow::Answer = form;
    WindowData::Answer = form;
    WindowData::textBox = form->textBox;
    if (!WindowData::MainWindow->Enabled) {
        form->Enabled = false;
    }
    if (SealedWindow::MainWindow->Visible) {
        form->Show();
    }
}

void access_main() {
    if (InvokeControl[0] == "show") {
        SealedWindow::MainWindow->Show();
    }
    if (InvokeControl[0] == "hide") {
        SealedWindow::MainWindow->Hide();
    }
    if (InvokeControl[0] == "enable") {
        SealedWindow::MainWindow->Enabled = true;
    }
    if (InvokeControl[0] == "disable") {
        SealedWindow::MainWindow->Enabled = false;
    }
    if (InvokeControl[0] == "input1") {
        SealedWindow::MainWindow->input1->Text = gcnew String(InvokeControl[1].data());
    }
    if (InvokeControl[0] == "input2") {
        SealedWindow::MainWindow->input2->Text = gcnew String(InvokeControl[1].data());
    }
}

void access_ans() {
    if (InvokeControl[0] == "show") {
        SealedWindow::Answer->Show();
    }
    if (InvokeControl[0] == "hide") {
        SealedWindow::Answer->Hide();
    }
    if (InvokeControl[0] == "enable") {
        SealedWindow::Answer->Enabled = true;
    }
    if (InvokeControl[0] == "disable") {
        SealedWindow::Answer->Enabled = false;
    }
}

void show_window(bool Enabled) {
    InvokeControl[0] = "show";
    SealedWindow::MainWindow->Invoke(gcnew Action(&access_main));
    if (WindowData::Answer->CanFocus) {
        SealedWindow::Answer->Invoke(gcnew Action(&access_ans));
    }
    if (Enabled) {
        InvokeControl[0] = "enable";
    }
    else {
        InvokeControl[0] = "disable";
    }
    SealedWindow::MainWindow->Invoke(gcnew Action(&access_main));
    if (WindowData::Answer->CanFocus) {
        SealedWindow::Answer->Invoke(gcnew Action(&access_ans));
    }
}

void hide_window() {
    InvokeControl[0] = "hide";
    SealedWindow::MainWindow->Invoke(gcnew Action(&access_main));
    if (WindowData::Answer->Visible) {
        SealedWindow::Answer->Invoke(gcnew Action(&access_ans));
    }
    InvokeControl[0] = "disable";
    SealedWindow::MainWindow->Invoke(gcnew Action(&access_main));
    if (WindowData::Answer->Visible) {
        SealedWindow::Answer->Invoke(gcnew Action(&access_ans));
    }
}

void command(std::string action, std::string value) {
    if (action == "button1") {
        SealedWindow::MainWindow->button1->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button1_Click));
    }
    if (action == "button2") {
        SealedWindow::MainWindow->button2->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button2_Click));
    }
    if (action == "button3") {
        SealedWindow::MainWindow->button3->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button3_Click));
    }
    if (action == "button4") {
        SealedWindow::MainWindow->button4->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button4_Click));
    }
    if (action == "button5") {
        SealedWindow::MainWindow->button5->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button5_Click));
    }
    if (action == "button6") {
        SealedWindow::MainWindow->button6->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button6_Click));
    }
    if (action == "button7") {
        SealedWindow::MainWindow->button7->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button7_Click));
    }
    if (action == "button8") {
        SealedWindow::MainWindow->button8->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button8_Click));
    }
    if (action == "button9") {
        SealedWindow::MainWindow->button9->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button9_Click));
    }
    if (action == "button10") {
        SealedWindow::MainWindow->button10->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button10_Click));
    }
    if (action == "button11") {
        SealedWindow::MainWindow->button11->Invoke(gcnew System::EventHandler(SealedWindow::MainWindow, &ReshatorLaborator::MainWindow::button11_Click));
    }
    if (action == "input1") {
        InvokeControl[0] = "input1";
        InvokeControl[1] = value;
        SealedWindow::MainWindow->Invoke(gcnew Action(&access_main));
    }
    if (action == "input2") {
        InvokeControl[0] = "input2";
        InvokeControl[1] = value;
        SealedWindow::MainWindow->Invoke(gcnew Action(&access_main));
    }
    if (action == "close") {
        if (WindowData::Answer->Visible) {
            SealedWindow::Answer->Invoke(gcnew Action(SealedWindow::Answer, &ReshatorLaborator::Answer::Close));
        }
    }
}

void enable_tester() {
    InvokeControl[0] = "hide";
    SealedWindow::MainWindow->Invoke(gcnew Action(&access_main));
    if (WindowData::Answer->CanFocus) {
        SealedWindow::Answer->Invoke(gcnew Action(&access_ans));
    }
    Application::Run(gcnew ReshatorLaborator::Tester);
    InvokeControl[0] = "show";
    SealedWindow::MainWindow->Invoke(gcnew Action(&access_main));
    if (WindowData::Answer->CanFocus) {
        SealedWindow::Answer->Invoke(gcnew Action(&access_ans));
    }
    InvokeControl[0] = "enable";
    SealedWindow::MainWindow->Invoke(gcnew Action(&access_main));
    if (WindowData::Answer->CanFocus) {
        SealedWindow::Answer->Invoke(gcnew Action(&access_ans));
    }
}

void main() {
    get_settings();
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SealedWindow::MainWindow = gcnew ReshatorLaborator::MainWindow;
    SealedWindow::Answer = gcnew ReshatorLaborator::Answer;
    WindowData::MainWindow = SealedWindow::MainWindow;
    WindowData::button1 = SealedWindow::MainWindow->button1;
    WindowData::button2 = SealedWindow::MainWindow->button2;
    WindowData::button3 = SealedWindow::MainWindow->button3;
    WindowData::button4 = SealedWindow::MainWindow->button4;
    WindowData::button5 = SealedWindow::MainWindow->button5;
    WindowData::button6 = SealedWindow::MainWindow->button6;
    WindowData::button7 = SealedWindow::MainWindow->button7;
    WindowData::button8 = SealedWindow::MainWindow->button8;
    WindowData::button9 = SealedWindow::MainWindow->button9;
    WindowData::button10 = SealedWindow::MainWindow->button10;
    WindowData::button11 = SealedWindow::MainWindow->button11;
    WindowData::label1 = SealedWindow::MainWindow->label1;
    WindowData::label2 = SealedWindow::MainWindow->label2;
    WindowData::picture1 = SealedWindow::MainWindow->picture1;
    WindowData::picture2 = SealedWindow::MainWindow->picture2;
    WindowData::input1 = SealedWindow::MainWindow->input1;
    WindowData::input2 = SealedWindow::MainWindow->input2;
    WindowData::Answer = SealedWindow::Answer;
    WindowData::textBox = SealedWindow::Answer->textBox;
    Application::Run(SealedWindow::MainWindow);
}