#pragma once
#include "WindowControl.h"
#include "Core.h"
#include <chrono>
#include <thread>
#include <cliext/map>
using namespace std::this_thread;
using namespace std::chrono;
const std::vector<std::string> animTestNames = { "Menu from settings", "Lab choice", "Transition", "Input show", "Add element",
"Input hide", "Add element [2]", "Add element [3]", "Error", "Input show [2]", "Delete", "Delete [2]", 
"Change system", "Button spam", "To menu", "Transition [2]", "Prev", "Prev [2]", "Next", "Next [2]", "Enter", "Back", "Next [3]", "Prev [3]", 
"Lab input", "Lab resolve", "To menu [2]", "Enter [2]", "Back [2]", "Lab input [2]", "To menu [3]", "Lab input [3]", "Answer" };
const std::vector<std::string> funcTestNames = { "Prev", "Prev [2]", "Next", "Next [2]", "Enter", "Enter [2]", "Back", "Erase", "Lab 1 get vars", 
"Lab 1 add", "Lab 1 get vars [2]", "Lab 1 convert", "Lab 1 convert [2]", "Lab 1 convert [3]", "Lab 1 math", "Lab 1 add [2]", 
"Lab 1 math [2]", "Lab 1 math [3]", "Lab 1 add [3]", "Lab 1 math [4]", "Lab 1 expand", "Lab 1 expand [2]", "Lab 1 expand [3]", 
"Lab 1 change sys", "Lab 1 change sys [2]", "Lab 1 change sys [3]", "Lab 1 del", "Lab 1 del [2]", "Lab show vars", "Lab get vars", 
"Lab show vars [2]", "Lab get vars [2]", "Lab show vars[3]", "Lab get vars [3]", "Get string", "Get string [2]", "Lab 2 resolve", 
"Lab 2 resolve [2]", "Lab 2 resolve [3]", "Lab 3 resolve", "Lab 3 resolve [2]", "Lab 3 resolve [3]", "Lab 4 resolve", "Lab 4 resolve [2]", 
"Lab 4 resolve [3]", "Lab 5 resolve", "Lab 5 resolve [2]", "Lab 5 resolve [3]", "Lab 6 resolve", "Lab 6 resolve [2]", "Lab 6 resolve [3]", 
"Lab 7 resolve", "Lab 7 resolve [2]", "Change settings", "Show settings", "Change settings [2]", "Get settings", "Show settings [2]", 
"Change settings [3]", "Get settings [2]", "Show settings [3]", "Get settings [3]"};
std::string type;

namespace ReshatorLaborator {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;


	/// <summary>
	/// Сводка для Tester
	/// </summary>
	public ref class Tester : public System::Windows::Forms::Form
	{
	public:
		Tester(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Tester()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ fullTest;
	private: System::Windows::Forms::Button^ animTest;
	private: System::Windows::Forms::Button^ funcTest;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::CheckBox^ showForm;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::ListBox^ listBox;
	private: System::Windows::Forms::ProgressBar^ progressBar;

	private: System::Windows::Forms::Label^ percentage;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Tester::typeid));
			this->fullTest = (gcnew System::Windows::Forms::Button());
			this->showForm = (gcnew System::Windows::Forms::CheckBox());
			this->animTest = (gcnew System::Windows::Forms::Button());
			this->funcTest = (gcnew System::Windows::Forms::Button());
			this->label = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->percentage = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// fullTest
			// 
			this->fullTest->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->fullTest->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->fullTest->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->fullTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fullTest->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fullTest->Location = System::Drawing::Point(543, -35);
			this->fullTest->Name = L"fullTest";
			this->fullTest->Size = System::Drawing::Size(500, 75);
			this->fullTest->TabIndex = 0;
			this->fullTest->Text = L"Полный тест";
			this->fullTest->UseVisualStyleBackColor = true;
			this->fullTest->Click += gcnew System::EventHandler(this, &Tester::fullTest_Click);
			// 
			// showForm
			// 
			this->showForm->AutoSize = true;
			this->showForm->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->showForm->Location = System::Drawing::Point(543, 8);
			this->showForm->Name = L"showForm";
			this->showForm->Size = System::Drawing::Size(338, 32);
			this->showForm->TabIndex = 4;
			this->showForm->Text = L"Показать форму во время теста";
			this->showForm->UseVisualStyleBackColor = true;
			// 
			// animTest
			// 
			this->animTest->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->animTest->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->animTest->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->animTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->animTest->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->animTest->Location = System::Drawing::Point(543, -35);
			this->animTest->Name = L"animTest";
			this->animTest->Size = System::Drawing::Size(500, 75);
			this->animTest->TabIndex = 1;
			this->animTest->Text = L"Тест анимаций";
			this->animTest->UseVisualStyleBackColor = true;
			this->animTest->Click += gcnew System::EventHandler(this, &Tester::animTest_Click);
			// 
			// funcTest
			// 
			this->funcTest->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->funcTest->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->funcTest->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->funcTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->funcTest->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->funcTest->Location = System::Drawing::Point(543, -35);
			this->funcTest->Name = L"funcTest";
			this->funcTest->Size = System::Drawing::Size(500, 75);
			this->funcTest->TabIndex = 2;
			this->funcTest->Text = L"Тест функций";
			this->funcTest->UseVisualStyleBackColor = true;
			this->funcTest->Click += gcnew System::EventHandler(this, &Tester::funcTest_Click);
			// 
			// label
			// 
			this->label->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->label->Location = System::Drawing::Point(12, 8);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(558, 50);
			this->label->TabIndex = 4;
			this->label->Text = L"Полный тест программы\r\n";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// exit
			// 
			this->exit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->Location = System::Drawing::Point(552, -52);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(500, 75);
			this->exit->TabIndex = 3;
			this->exit->Text = L"Выход";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &Tester::exit_Click);
			// 
			// listBox
			// 
			this->listBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->listBox->ForeColor = System::Drawing::Color::White;
			this->listBox->FormattingEnabled = true;
			this->listBox->ItemHeight = 28;
			this->listBox->Location = System::Drawing::Point(12, 86);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(558, 256);
			this->listBox->TabIndex = 5;
			this->listBox->DoubleClick += gcnew System::EventHandler(this, &Tester::listBox_DoubleClick);
			// 
			// progressBar
			// 
			this->progressBar->BackColor = System::Drawing::SystemColors::ControlText;
			this->progressBar->Location = System::Drawing::Point(41, 388);
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(500, 30);
			this->progressBar->Step = 50;
			this->progressBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar->TabIndex = 0;
			// 
			// percentage
			// 
			this->percentage->Location = System::Drawing::Point(41, 356);
			this->percentage->Name = L"percentage";
			this->percentage->Size = System::Drawing::Size(500, 25);
			this->percentage->TabIndex = 6;
			this->percentage->Text = L"50%";
			this->percentage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Tester
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(582, 453);
			this->ControlBox = false;
			this->Controls->Add(this->percentage);
			this->Controls->Add(this->progressBar);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->label);
			this->Controls->Add(this->funcTest);
			this->Controls->Add(this->animTest);
			this->Controls->Add(this->showForm);
			this->Controls->Add(this->fullTest);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Tester";
			this->Text = L"Reshator Laborator Series - Tester";
			this->Load += gcnew System::EventHandler(this, &Tester::Tester_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	List<String^>^ errorList = gcnew List<String^>();
	void reset() {
		this->fullTest->Location = System::Drawing::Point(41, 77);
		this->fullTest->Size = System::Drawing::Size(500, 75);
		this->fullTest->Enabled = true;
		this->animTest->Location = System::Drawing::Point(41, 158);
		this->animTest->Size = System::Drawing::Size(500, 75);
		this->animTest->Enabled = true;
		this->funcTest->Location = System::Drawing::Point(41, 239);
		this->funcTest->Size = System::Drawing::Size(500, 75);
		this->funcTest->Enabled = true;
		this->exit->Location = System::Drawing::Point(41, 366);
		this->exit->Size = System::Drawing::Size(500, 75);
		this->exit->Enabled = true;
		this->showForm->Location = System::Drawing::Point(128, 320);
		this->showForm->Size = System::Drawing::Size(338, 32);
		this->progressBar->Location = System::Drawing::Point(641, 388);
		this->progressBar->Size = System::Drawing::Size(500, 30);
		this->progressBar->Value = this->progressBar->Minimum;
		this->progressBar->Step = 1;
		this->percentage->Location = System::Drawing::Point(641, 356);
		this->percentage->Text = L"0%";
		this->label->Location = System::Drawing::Point(12, 8);
		this->label->Size = System::Drawing::Size(558, 75);
		this->label->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
		this->label->Text = L"Вас приветствует мастер проверки RLS!\r\nВыберите вид тестирования программы.";
		this->listBox->Location = System::Drawing::Point(612, 86);
		this->listBox->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
		this->listBox->Items->Clear();
		errorList->Clear();
	}
	delegate void ChangePropertiesDelegate(Control^ obj, String^ propertyName, Object^ value);
	void change_form_object(Control^ obj, String^ propertyName, Object^ value) {
		if (obj->InvokeRequired) {
			ChangePropertiesDelegate^ myDelegate = gcnew ChangePropertiesDelegate(this, &ReshatorLaborator::Tester::change_form_object);
			cli::array<System::Object^>^ args = gcnew cli::array<System::Object^>{obj, propertyName, value};
			obj->Invoke(myDelegate, args);
		}
		else {
			obj->GetType()->GetProperty(propertyName)->SetValue(obj, value, nullptr);
		}
	}
	delegate void AddItem(ListBox^ listBox, int index, String^ item);
	void add_item(ListBox^ listBox, int index, String^ item) {
		if (listBox->InvokeRequired) {
			AddItem^ myDelegate = gcnew AddItem(this, &ReshatorLaborator::Tester::add_item);
			cli::array<System::Object^>^ args = gcnew cli::array<System::Object^>{listBox, index, item};
			listBox->Invoke(myDelegate, args);
		}
		else {
			if (index == -1) {
				listBox->Items->Add(item);
			}
			else {
				listBox->Items[index] = item;
			}
		}
	}
	void compare(Object^ object1, Object^ object2, String^ text1) {
		if (!object1->Equals(object2)) {
			errorList[errorList->Count - 1] += text1 + " != " + object2 + "\n" + text1 + " = " + object1 + "\n";
		}
	}
	void log_in(std::string current, std::string next) {
		if (current != "") {
			add_item(this->listBox, this->listBox->Items->Count - 1, gcnew String((current + ": " + (errorList[errorList->Count - 1] == "" ? "OK" : "BAD")).data()));
			this->progressBar->Invoke(gcnew Action(this->progressBar, &ProgressBar::PerformStep));
			auto percentage = int(double(this->progressBar->Value) / this->progressBar->Maximum * 100);
			change_form_object(this->percentage, "Text", percentage + "%");
			if (errorList[errorList->Count - 1] != "") {
				if (this->listBox->BackColor.B != 0) {
					change_form_object(this->listBox, "BackColor", System::Drawing::Color::FromArgb(this->listBox->BackColor.R + 10 > 60 ? 60 : this->listBox->BackColor.R + 10, 0, this->listBox->BackColor.B - 10 < 0 ? 0 : this->listBox->BackColor.B - 10));
				}
			}
		}
		if (next != "") {
			add_item(this->listBox, -1, gcnew String((next + ": ...").data()));
			errorList->Add("");
		}
	}
	private: System::Void Tester_Load(System::Object^ sender, System::EventArgs^ e) {
		reset();
	}
	private: System::Void fullTest_Click(System::Object^ sender, System::EventArgs^ e) {
		type = "full";
		Thread^ thisThread = gcnew Thread(
			gcnew ThreadStart(this, &ReshatorLaborator::Tester::start_test));
		thisThread->Start();
	}
	private: System::Void animTest_Click(System::Object^ sender, System::EventArgs^ e) {
		type = "anim";
		Thread^ thisThread = gcnew Thread(
			gcnew ThreadStart(this, &ReshatorLaborator::Tester::start_test));
		thisThread->Start();
	}
	private: System::Void funcTest_Click(System::Object^ sender, System::EventArgs^ e) {
		type = "func";
		Thread^ thisThread = gcnew Thread(
			gcnew ThreadStart(this, &ReshatorLaborator::Tester::start_test));
		thisThread->Start();
	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->progressBar->Value != this->progressBar->Minimum) {
			reset();
		}
		else {
			this->Close();
		}
	}
	private: System::Void listBox_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		if (this->listBox->SelectedIndex != -1) {
			auto name = this->listBox->SelectedItem->ToString()->Split(':')[0];
			if (errorList[this->listBox->SelectedIndex] == "") {
				MessageBox::Show("No errors found in this test!", name + ": No errors", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show(errorList[this->listBox->SelectedIndex], name + ": Error list", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	void start_test() {
		change_form_object(this->fullTest, "Enabled", false);
		change_form_object(this->animTest, "Enabled", false);
		change_form_object(this->funcTest, "Enabled", false);
		change_form_object(this->exit, "Enabled", false);
		change_form_object(this->listBox, "Enabled", true);
		change_form_object(this->fullTest, "Location", System::Drawing::Point(641, 77));
		change_form_object(this->animTest, "Location", System::Drawing::Point(641, 158));
		change_form_object(this->funcTest, "Location", System::Drawing::Point(641, 239));
		change_form_object(this->exit, "Location", System::Drawing::Point(641, 360));
		change_form_object(this->showForm, "Location", System::Drawing::Point(728, 320));
		change_form_object(this->progressBar, "Location", System::Drawing::Point(41, 388));
		change_form_object(this->percentage, "Location", System::Drawing::Point(41, 356));
		change_form_object(this->listBox, "Location", System::Drawing::Point(12, 86));
		change_form_object(this->label, "Text", L"Пожалуйста, дождитесь завершения теста.\nПринудительный выход приведет за собой сбой программы.");
		if (this->showForm->Checked) {
			show_window();
		}
		if (type == "full") {
			change_form_object(this->progressBar, "Maximum", int(9 + 6));
			anim_test();
			func_test();
		}
		if (type == "anim") {
			change_form_object(this->progressBar, "Maximum", int(9));
			anim_test();
		}
		if (type == "func") {
			change_form_object(this->progressBar, "Maximum", int(6));
			func_test();
		}
		hide_window();
		change_form_object(this->exit, "Location", System::Drawing::Point(41, 360));
		change_form_object(this->exit, "Enabled", true);
		change_form_object(this->progressBar, "Location", System::Drawing::Point(641, 360));
		change_form_object(this->percentage, "Location", System::Drawing::Point(641, 356));
	}
	void anim_test() {
		// Menu from settings
		log_in("", animTestNames[0]);
		command("button6");
		sleep_for(seconds(2));
		compare(WindowData::button1->Location, System::Drawing::Point(191, 199), "button1->Location");
		compare(WindowData::button2->Location, System::Drawing::Point(191, 298), "button2->Location");
		compare(WindowData::button3->Location, System::Drawing::Point(191, 397), "button3->Location");
		compare(WindowData::picture1->Size, System::Drawing::Size(310, 125), "picture1->Size");
		compare(WindowData::picture1->Left, 186, "picture1->Left");
		compare(WindowData::picture2->Size, System::Drawing::Size(185, 65), "picture2->Size");
		compare(WindowData::picture2->Left, 248, "picture2->Left");
		log_in(animTestNames[0], animTestNames[1]);
		// Lab choice
		command("button1");
		sleep_for(seconds(2));
		compare(WindowData::button4->Location, System::Drawing::Point(148, 159), "button4->Location");
		compare(WindowData::button5->Location, System::Drawing::Point(244, 159), "button5->Location");
		compare(WindowData::button6->Location, System::Drawing::Point(340, 159), "button6->Location");
		compare(WindowData::button7->Location, System::Drawing::Point(436, 159), "button7->Location");
		compare(WindowData::label1->Left, 168, "label1->Left");
		log_in(animTestNames[1], animTestNames[2]);
		// Transition
		command("button4");
		sleep_for(seconds(8));
		compare(WindowData::button1->Location, System::Drawing::Point(74, 305), "button1->Location");
		compare(WindowData::button2->Font, gcnew System::Drawing::Font(L"Comic Sans MS", 25), "button2->Font");
		compare(WindowData::button3->Size, System::Drawing::Size(90, 90), "button3->Size");
		compare(WindowData::button4->FlatAppearance->BorderSize, 1, "button4->FlatAppearance->BorderSize");
		compare(WindowData::button5->Text, "expand", "button5->Text");
		compare(WindowData::button7->Location, System::Drawing::Point(170, 401), "button7->Location");
		compare(WindowData::button8->Text, "change\nsystem", "button8->Text");
		compare(WindowData::button10->Size, System::Drawing::Size(140, 76), "button10->Size");
		compare(WindowData::label1->Size, System::Drawing::Size(618, 200), "label1->Size");
		compare(WindowData::label1->Location, System::Drawing::Point(32, 96), "label1->Location");
		compare(WindowData::label1->BackColor, System::Drawing::Color::FromArgb(0, 0, 60), "label1->BackColor");
		log_in(animTestNames[2], animTestNames[3]);
		// Input show
		command("button6");
		sleep_for(seconds(2));
		compare(WindowData::button10->Size, System::Drawing::Size(140, 76), "button10->Size");
		compare(WindowData::button10->Location, System::Drawing::Point(32, 12), "button10->Location");
		compare(WindowData::button10->BackColor, System::Drawing::Color::FromArgb(0, 0, 0), "button10->BackColor");
		compare(WindowData::input1->Width, 260, "input1->Size");
		compare(WindowData::input1->Location, System::Drawing::Point(228, 29), "input1->Location");
		compare(WindowData::input2->Width, 60, "input2->Size");
		compare(WindowData::input2->Location, System::Drawing::Point(548, 29), "input2->Location");
		log_in(animTestNames[3], animTestNames[4]);
		// Add element
		compare(WindowData::label1->Text, "Введите число, которое вы хотите добавить,\nа также его систему исчисления.\nЧисла в памяти:", "label1->Text");
		log_in(animTestNames[4], animTestNames[5]);
		// Input hide
		command("input1", "15");
		command("input2", "10");
		sleep_for(seconds(2));
		command("button10");
		sleep_for(seconds(2));
		compare(WindowData::button10->Location, System::Drawing::Point(732, 12), "button10->Location");
		compare(WindowData::input1->Location, System::Drawing::Point(895, 25), "input1->Location");
		compare(WindowData::input2->Location, System::Drawing::Point(1100, 25), "input2->Location");
		log_in(animTestNames[5], animTestNames[6]);
		// Add element [2]
		sleep_for(seconds(2));
		compare(WindowData::label1->Text, "Добавлено новое число: (10) 15\nЧисла в памяти:\n1 - (10) 15", "label1->Text");
		log_in(animTestNames[6], animTestNames[7]);
		// Add element [3]
		command("button6");
		sleep_for(milliseconds(500));
		command("input1", "1010");
		command("input2", "2");
		sleep_for(milliseconds(500));
		command("button10");
		sleep_for(milliseconds(500));
		command("button6");
		sleep_for(milliseconds(500));
		command("input1", "17");
		command("input2", "8");
		sleep_for(milliseconds(500));
		command("button10");
		sleep_for(milliseconds(500));
		command("button6");
		sleep_for(milliseconds(500));
		command("input1", "13");
		command("input2", "10");
		sleep_for(milliseconds(500));
		command("button10");
		sleep_for(milliseconds(500));
		command("button6");
		sleep_for(milliseconds(500));
		command("input1", "-6,9");
		command("input2", "10");
		sleep_for(milliseconds(500));
		command("button10");
		sleep_for(milliseconds(500));
		command("button6");
		sleep_for(milliseconds(500));
		command("input1", "-6.5");
		command("input2", "8");
		sleep_for(milliseconds(500));
		command("button10");
		sleep_for(milliseconds(500));
		command("button6");
		sleep_for(seconds(2));
		compare(WindowData::label1->Text->Split(':')[0], "Вы не можете иметь в памяти более 6 чисел.\nПопробуйте выбрать другое действие.\nЧисла в памяти", "label1->Text");
		log_in(animTestNames[7], animTestNames[8]);
		// Error
		command("button3");
		sleep_for(milliseconds(500));
		command("input1", "SADNAJKSUICBHDAJ");
		command("input2", "AWKJDBANKSJDAHBC");
		sleep_for(milliseconds(500));
		command("button10");
		sleep_for(seconds(2));
		compare(WindowData::label1->Text->Split(':')[0], "Неверный формат ввода.\nПопробуйте ввести другие данные.\nЧисла в памяти", "label1->Text");
		command("button4");
		sleep_for(milliseconds(500));
		command("input1", "-1");
		command("input2", "7");
		sleep_for(milliseconds(500));
		command("button10");
		sleep_for(seconds(2));
		compare(WindowData::label1->Text->Split(':')[0], "Произошла ошибка в ходе выполнения операции.\nПопробуйте ввести другие данные.\nЧисла в памяти", "label1->Text");
		log_in(animTestNames[8], "");
		// End
		command("button9");
		sleep_for(seconds(4));
		command("button2");
		sleep_for(seconds(2));
		command("button5");
	}
	void func_test() {
		// Prev
		log_in("", funcTestNames[0]);
		WinState[1] = "subtask";
		lab = 1;
		task = 1;
		subtask = 0;
		prev();
		compare(subtask, safe_cast<System::Object^>(0), "subtask");
		log_in(funcTestNames[0], funcTestNames[1]);
		// Prev [2]
		WinState[1] = "task";
		task = 0;
		prev();
		compare(task, 2, "task");
		log_in(funcTestNames[1], funcTestNames[2]);
		// Next
		task = 2;
		next();
		compare(task, safe_cast<System::Object^>(0), "task");
		log_in(funcTestNames[2], funcTestNames[3]);
		// Next [2]
		WinState[1] = "subtask";
		task = 1;
		subtask = 0;
		next();
		compare(subtask, safe_cast<System::Object^>(0), "subtask");
		log_in(funcTestNames[3], funcTestNames[4]);
		// Enter
		WinState[1] = "task";
		subtask = 5;
		enter();
		compare(gcnew String(WinState[1].data()), gcnew String("subtask"), "WinState[1]");
		compare(subtask, safe_cast<System::Object^>(0), "subtask");
		log_in(funcTestNames[4], funcTestNames[5]);
		// Enter [2]
		enter();
		compare(gcnew String(WinState[1].data()), gcnew String("subtask_input"), "WinState[1]");
		log_in(funcTestNames[5], "");
		// End
		task = 2;
		sleep_for(seconds(1));
	}
};
}