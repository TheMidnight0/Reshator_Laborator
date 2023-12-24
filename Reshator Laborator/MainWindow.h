#pragma once
#include "Core.h"

namespace ReshatorLaborator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button3;
	public: System::Windows::Forms::Button^ button4;
	public: System::Windows::Forms::Button^ button5;
	public: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::Button^ button7;
	public: System::Windows::Forms::Button^ button8;
	public: System::Windows::Forms::Button^ button9;
	public: System::Windows::Forms::Button^ button10;
	public: System::Windows::Forms::Button^ button11;
	public: System::Windows::Forms::PictureBox^ picture1;
	public: System::Windows::Forms::PictureBox^ picture2;
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ jumper;
	public: System::Windows::Forms::Timer^ intro;
	public: System::Windows::Forms::Timer^ menu_anim;
	public: System::Windows::Forms::TextBox^ input1;
	public: System::Windows::Forms::TextBox^ input2;
	public: System::Windows::Forms::Timer^ lab_choice;
	private: System::Windows::Forms::Timer^ transition;
	private: System::Windows::Forms::Timer^ menu_quick;
	private: System::Windows::Forms::Timer^ make_text;
	private: System::Windows::Forms::Timer^ input_show;
	private: System::Windows::Forms::Timer^ input_hide;
	private: System::Windows::Forms::Timer^ menu_far;
	private: System::Windows::Forms::Timer^ subtask_show;
	private: System::Windows::Forms::Timer^ subtask_hide;
	private: System::Windows::Forms::Timer^ task_input;
	private: System::Windows::Forms::Timer^ task_resolve;
	private: System::Windows::Forms::Timer^ to_settings;
	private: System::Windows::Forms::Timer^ menu_settings;
	private: System::ComponentModel::IContainer^ components;

		   /// <summary>
		   /// Обязательная переменная конструктора.
		   /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->button10 = (gcnew System::Windows::Forms::Button());
			   this->button11 = (gcnew System::Windows::Forms::Button());
			   this->picture1 = (gcnew System::Windows::Forms::PictureBox());
			   this->picture2 = (gcnew System::Windows::Forms::PictureBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->jumper = (gcnew System::Windows::Forms::Label());
			   this->intro = (gcnew System::Windows::Forms::Timer(this->components));
			   this->menu_anim = (gcnew System::Windows::Forms::Timer(this->components));
			   this->input1 = (gcnew System::Windows::Forms::TextBox());
			   this->input2 = (gcnew System::Windows::Forms::TextBox());
			   this->lab_choice = (gcnew System::Windows::Forms::Timer(this->components));
			   this->transition = (gcnew System::Windows::Forms::Timer(this->components));
			   this->menu_quick = (gcnew System::Windows::Forms::Timer(this->components));
			   this->make_text = (gcnew System::Windows::Forms::Timer(this->components));
			   this->input_show = (gcnew System::Windows::Forms::Timer(this->components));
			   this->input_hide = (gcnew System::Windows::Forms::Timer(this->components));
			   this->menu_far = (gcnew System::Windows::Forms::Timer(this->components));
			   this->subtask_show = (gcnew System::Windows::Forms::Timer(this->components));
			   this->subtask_hide = (gcnew System::Windows::Forms::Timer(this->components));
			   this->task_input = (gcnew System::Windows::Forms::Timer(this->components));
			   this->task_resolve = (gcnew System::Windows::Forms::Timer(this->components));
			   this->to_settings = (gcnew System::Windows::Forms::Timer(this->components));
			   this->menu_settings = (gcnew System::Windows::Forms::Timer(this->components));
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->Enabled = false;
			   this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			   this->button1->Location = System::Drawing::Point(565, -19);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(150, 90);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Назад";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Enabled = false;
			   this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18));
			   this->button2->Location = System::Drawing::Point(565, -24);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(150, 90);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"Выбрать";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->Enabled = false;
			   this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			   this->button3->Location = System::Drawing::Point(579, -19);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(150, 90);
			   this->button3->TabIndex = 2;
			   this->button3->Text = L"Вперед";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->Enabled = false;
			   this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			   this->button4->Location = System::Drawing::Point(12, 401);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(235, 90);
			   this->button4->TabIndex = 3;
			   this->button4->Text = L"Дождь\r\nВключено";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MainWindow::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			   this->button5->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			   this->button5->Location = System::Drawing::Point(434, 401);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(235, 90);
			   this->button5->TabIndex = 4;
			   this->button5->Text = L"Интро\r\nВыключено";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			   // 
			   // button6
			   // 
			   this->button6->Enabled = false;
			   this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18));
			   this->button6->Location = System::Drawing::Point(141, 315);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(400, 75);
			   this->button6->TabIndex = 5;
			   this->button6->Text = L"Выключено";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button6_Click);
			   // 
			   // button7
			   // 
			   this->button7->Enabled = false;
			   this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16));
			   this->button7->Location = System::Drawing::Point(565, -19);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(186, 90);
			   this->button7->TabIndex = 6;
			   this->button7->Text = L"change system";
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &MainWindow::button7_Click);
			   // 
			   // button8
			   // 
			   this->button8->Enabled = false;
			   this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			   this->button8->Location = System::Drawing::Point(579, -24);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(150, 90);
			   this->button8->TabIndex = 7;
			   this->button8->Text = L"expand";
			   this->button8->UseVisualStyleBackColor = true;
			   this->button8->Click += gcnew System::EventHandler(this, &MainWindow::button8_Click);
			   // 
			   // button9
			   // 
			   this->button9->Enabled = false;
			   this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16));
			   this->button9->Location = System::Drawing::Point(579, -10);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(140, 76);
			   this->button9->TabIndex = 8;
			   this->button9->Text = L"Принять";
			   this->button9->UseVisualStyleBackColor = true;
			   this->button9->Click += gcnew System::EventHandler(this, &MainWindow::button9_Click);
			   // 
			   // button10
			   // 
			   this->button10->Enabled = false;
			   this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			   this->button10->Location = System::Drawing::Point(608, -29);
			   this->button10->Name = L"button10";
			   this->button10->Size = System::Drawing::Size(90, 90);
			   this->button10->TabIndex = 9;
			   this->button10->Text = L"del";
			   this->button10->UseVisualStyleBackColor = true;
			   this->button10->Click += gcnew System::EventHandler(this, &MainWindow::button10_Click);
			   // 
			   // button11
			   // 
			   this->button11->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			   this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			   this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				   static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button11->Location = System::Drawing::Point(253, 401);
			   this->button11->Name = L"button11";
			   this->button11->Size = System::Drawing::Size(175, 90);
			   this->button11->TabIndex = 15;
			   this->button11->Text = L"В меню";
			   this->button11->UseVisualStyleBackColor = true;
			   this->button11->Click += gcnew System::EventHandler(this, &MainWindow::button11_Click);
			   // 
			   // picture1
			   // 
			   this->picture1->Location = System::Drawing::Point(12, 8);
			   this->picture1->Name = L"picture1";
			   this->picture1->Size = System::Drawing::Size(106, 63);
			   this->picture1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->picture1->TabIndex = 10;
			   this->picture1->TabStop = false;
			   // 
			   // picture2
			   // 
			   this->picture2->Location = System::Drawing::Point(25, 67);
			   this->picture2->Name = L"picture2";
			   this->picture2->Size = System::Drawing::Size(75, 27);
			   this->picture2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->picture2->TabIndex = 11;
			   this->picture2->TabStop = false;
			   // 
			   // label1
			   // 
			   this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
			   this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			   this->label1->Location = System::Drawing::Point(216, 12);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(250, 65);
			   this->label1->TabIndex = 12;
			   this->label1->Text = L"Настройки";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // label2
			   // 
			   this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22));
			   this->label2->Location = System::Drawing::Point(141, 122);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(400, 180);
			   this->label2->TabIndex = 13;
			   this->label2->Text = L"Дождь в меню";
			   this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // jumper
			   // 
			   this->jumper->Location = System::Drawing::Point(571, 8);
			   this->jumper->Name = L"jumper";
			   this->jumper->Size = System::Drawing::Size(176, 47);
			   this->jumper->TabIndex = 14;
			   this->jumper->Text = L"JUMPER";
			   this->jumper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // intro
			   // 
			   this->intro->Interval = 1;
			   this->intro->Tick += gcnew System::EventHandler(this, &MainWindow::intro_Tick);
			   // 
			   // menu_anim
			   // 
			   this->menu_anim->Interval = 1;
			   this->menu_anim->Tick += gcnew System::EventHandler(this, &MainWindow::menu_anim_Tick);
			   // 
			   // input1
			   // 
			   this->input1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22));
			   this->input1->Location = System::Drawing::Point(106, 60);
			   this->input1->Name = L"input1";
			   this->input1->Size = System::Drawing::Size(306, 59);
			   this->input1->TabIndex = 10;
			   // 
			   // input2
			   // 
			   this->input2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22));
			   this->input2->Location = System::Drawing::Point(434, 60);
			   this->input2->Name = L"input2";
			   this->input2->Size = System::Drawing::Size(37, 59);
			   this->input2->TabIndex = 11;
			   // 
			   // lab_choice
			   // 
			   this->lab_choice->Interval = 1;
			   this->lab_choice->Tick += gcnew System::EventHandler(this, &MainWindow::lab_choice_Tick);
			   // 
			   // transition
			   // 
			   this->transition->Interval = 1;
			   this->transition->Tick += gcnew System::EventHandler(this, &MainWindow::transition_Tick);
			   // 
			   // menu_quick
			   // 
			   this->menu_quick->Interval = 1;
			   this->menu_quick->Tick += gcnew System::EventHandler(this, &MainWindow::menu_quick_Tick);
			   // 
			   // make_text
			   // 
			   this->make_text->Interval = 1;
			   this->make_text->Tick += gcnew System::EventHandler(this, &MainWindow::make_text_Tick);
			   // 
			   // input_show
			   // 
			   this->input_show->Interval = 1;
			   this->input_show->Tick += gcnew System::EventHandler(this, &MainWindow::input_show_Tick);
			   // 
			   // input_hide
			   // 
			   this->input_hide->Interval = 1;
			   this->input_hide->Tick += gcnew System::EventHandler(this, &MainWindow::input_hide_Tick);
			   // 
			   // menu_far
			   // 
			   this->menu_far->Interval = 1;
			   this->menu_far->Tick += gcnew System::EventHandler(this, &MainWindow::menu_far_Tick);
			   // 
			   // subtask_show
			   // 
			   this->subtask_show->Interval = 1;
			   this->subtask_show->Tick += gcnew System::EventHandler(this, &MainWindow::subtask_show_Tick);
			   // 
			   // subtask_hide
			   // 
			   this->subtask_hide->Interval = 1;
			   this->subtask_hide->Tick += gcnew System::EventHandler(this, &MainWindow::subtask_hide_Tick);
			   // 
			   // task_input
			   // 
			   this->task_input->Interval = 1;
			   this->task_input->Tick += gcnew System::EventHandler(this, &MainWindow::task_input_Tick);
			   // 
			   // task_resolve
			   // 
			   this->task_resolve->Interval = 1;
			   this->task_resolve->Tick += gcnew System::EventHandler(this, &MainWindow::task_resolve_Tick);
			   // 
			   // to_settings
			   // 
			   this->to_settings->Interval = 1;
			   this->to_settings->Tick += gcnew System::EventHandler(this, &MainWindow::to_settings_Tick);
			   // 
			   // menu_settings
			   // 
			   this->menu_settings->Interval = 1;
			   this->menu_settings->Tick += gcnew System::EventHandler(this, &MainWindow::menu_settings_Tick);
			   // 
			   // MainWindow
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::SystemColors::ControlText;
			   this->ClientSize = System::Drawing::Size(682, 503);
			   this->Controls->Add(this->jumper);
			   this->Controls->Add(this->input2);
			   this->Controls->Add(this->input1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->picture1);
			   this->Controls->Add(this->picture2);
			   this->Controls->Add(this->button11);
			   this->Controls->Add(this->button10);
			   this->Controls->Add(this->button9);
			   this->Controls->Add(this->button8);
			   this->Controls->Add(this->button7);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ForeColor = System::Drawing::SystemColors::HighlightText;
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->KeyPreview = true;
			   this->Margin = System::Windows::Forms::Padding(8, 9, 8, 9);
			   this->MaximizeBox = false;
			   this->Name = L"MainWindow";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Reshator Laborator Series";
			   this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainWindow::MainWindow_KeyDown);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	int count1 = 1, count2 = 0, anim_count = 0, y1 = 0, y2 = 0, y3 = 0, x, y;
	double move1 = 0.0, move2 = 0.0;
	String^ line;
	Label^ rain1 = gcnew System::Windows::Forms::Label;
	Label^ rain2 = gcnew System::Windows::Forms::Label;
	Label^ rain3 = gcnew System::Windows::Forms::Label;
	Label^ rain4 = gcnew System::Windows::Forms::Label;
	Label^ rain5 = gcnew System::Windows::Forms::Label;
	Label^ rain6 = gcnew System::Windows::Forms::Label;
	void reset() {
		this->BackColor = System::Drawing::SystemColors::ControlText;
		this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
		this->button1->Size = System::Drawing::Size(300, 90);
		this->button1->Location = System::Drawing::Point(191, 600);
		this->button1->FlatAppearance->BorderSize = 0;
		this->button1->Text = L"НАЧАТЬ";
		this->button1->Enabled = false;
		this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
		this->button2->Size = System::Drawing::Size(300, 90);
		this->button2->Location = System::Drawing::Point(191, 600);
		this->button2->FlatAppearance->BorderSize = 0;
		this->button2->Text = L"НАСТРОЙКИ";
		this->button2->Enabled = false;
		this->button3->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
		this->button3->Size = System::Drawing::Size(300, 90);
		this->button3->Location = System::Drawing::Point(191, 600);
		this->button3->FlatAppearance->BorderSize = 0;
		this->button3->Text = L"ВЫХОД";
		this->button3->Enabled = false;
		this->button8->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
		this->button8->Size = System::Drawing::Size(90, 90);
		this->button8->Location = System::Drawing::Point(200, 600);
		this->button8->FlatAppearance->BorderSize = 1;
		this->button8->Text = L"5";
		this->button8->Enabled = false;
		this->button9->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
		this->button9->Size = System::Drawing::Size(90, 90);
		this->button9->Location = System::Drawing::Point(200, 600);
		this->button9->FlatAppearance->BorderSize = 1;
		this->button9->Text = L"6";
		this->button9->Enabled = false;
		this->button10->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
		this->button10->Size = System::Drawing::Size(90, 90);
		this->button10->Location = System::Drawing::Point(200, 600);
		this->button10->FlatAppearance->BorderSize = 1;
		this->button10->Text = L"7";
		this->button10->Enabled = false;
		this->button10->ResetBackColor();
		this->button11->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22));
		this->button11->Size = System::Drawing::Size(378, 90);
		this->button11->Location = System::Drawing::Point(200, 600);
		this->button11->FlatAppearance->BorderSize = 1;
		this->button11->Text = L"В МЕНЮ";
		this->button11->Enabled = false;
		this->picture1->Size = System::Drawing::Size(300, 125);
		this->picture1->Location = System::Drawing::Point(186, 5);
		this->picture1->Image = Image::FromFile("Logo\\Reshator Laborator.png");
		this->picture1->ResetBackColor();
		this->picture2->Size = System::Drawing::Size(175, 65);
		this->picture2->Location = System::Drawing::Point(248, 125);
		this->picture2->Image = Image::FromFile("Logo\\Series.png");
		this->picture2->ResetBackColor();
		this->input1->Size = System::Drawing::Size(200, 54);
		this->input1->Location = System::Drawing::Point(200, -100);
		this->input1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22));
		this->input1->Enabled = false;
		this->input1->Text = L"";
		this->input2->Size = System::Drawing::Size(100, 54);
		this->input2->Location = System::Drawing::Point(200, -100);
		this->input2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22));
		this->input2->Enabled = false;
		this->input2->Text = L"";
		y1 = this->picture1->Top;
		y2 = this->picture2->Top;
		y3 = this->label1->Top;
		this->Text = L"Reshator Laborator Series";
		reset_for_settings();
		erase();
	}
	void reset_for_settings() {
		this->button4->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
		this->button4->Size = System::Drawing::Size(90, 90);
		this->button4->Location = System::Drawing::Point(200, 600);
		this->button4->FlatAppearance->BorderSize = 1;
		this->button4->Text = L"1";
		this->button4->Enabled = false;
		this->button5->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
		this->button5->Size = System::Drawing::Size(90, 90);
		this->button5->Location = System::Drawing::Point(200, 600);
		this->button5->FlatAppearance->BorderSize = 1;
		this->button5->Text = L"2";
		this->button5->Enabled = false;
		this->button6->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
		this->button6->Size = System::Drawing::Size(90, 90);
		this->button6->Location = System::Drawing::Point(200, 600);
		this->button6->FlatAppearance->BorderSize = 1;
		this->button6->Text = L"3";
		this->button6->Enabled = false;
		this->button7->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
		this->button7->Size = System::Drawing::Size(90, 90);
		this->button7->Location = System::Drawing::Point(200, 600);
		this->button7->FlatAppearance->BorderSize = 1;
		this->button7->Text = L"4";
		this->button7->Enabled = false;
		this->label1->Size = System::Drawing::Size(450, 100);
		this->label1->Location = System::Drawing::Point(868, 12);
		this->label1->Text = L"Выберите лабораторную\nработу:";
		this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22));
		this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->label1->TextAlign = System::Drawing::ContentAlignment::TopLeft;
		this->label1->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->label1->ResetBackColor();
		this->label2->Size = System::Drawing::Size(400, 180);
		this->label2->Location = System::Drawing::Point(705, 0);
		this->label2->ResetBackColor();
	}
	void rain_show() {
		if (settings.rain == true) {
			rain1->Location = System::Drawing::Point(rand() % 182 + 502, -562);
			rain2->Location = System::Drawing::Point(rand() % 182, -436);
			rain3->Location = System::Drawing::Point(rand() % 182 + 502, -293);
			rain4->Location = System::Drawing::Point(rand() % 182, -184);
			rain5->Location = System::Drawing::Point(rand() % 182 + 502, -117);
			rain6->Location = System::Drawing::Point(rand() % 182, -29);
			rain1->Show();
			rain2->Show();
			rain3->Show();
			rain4->Show();
			rain5->Show();
			rain6->Show();
		}
	}
	void rain_hide() {
		rain1->Hide();
		rain2->Hide();
		rain3->Hide();
		rain4->Hide();
		rain5->Hide();
		rain6->Hide();
	}
	void task_draw() {
		this->picture1->Image = Image::FromFile("Tasks\\Lab " + (lab + 1) + "\\" + (task + 1) + ".jpg");
		if (WinState[1] == "subtask") {
			this->label1->Text = L"Задание " + (task + 1) + " | Подзадание " + (subtask + 1);
			this->picture2->Image = Image::FromFile("Subtasks\\Lab " + (lab + 1) + "\\" + (task + 1) + "_" + (subtask + 1) + ".jpg");
		}
		else {
			this->label1->Text = L"Задание " + (task + 1);
		}
	}
	void settings_reload() {
		auto it = settings_name.begin();
		advance(it, task);
		WinState[1] = it->first;
		this->label2->Text = gcnew String(it->second.data());
		it = settings_name.begin();
		if (task == 0) {
			advance(it, settings_name.size() - 1);
			this->button5->Text = gcnew String((it->second + "\n" + show_settings(int(settings_name.size()) - 1)).data());
		}
		else {
			advance(it, task - 1);
			this->button5->Text = gcnew String((it->second + "\n" + show_settings(task - 1)).data());
		}
		this->button4->Text = gcnew String(show_settings(task).data());
		if (this->button4->Text == L"") {
			this->button4->Text = L"Запустить";
		}
		it = settings_name.begin();
		if (task == settings_name.size() - 1) {
			advance(it, 0);
			this->button7->Text = gcnew String((it->second + "\n" + show_settings(0)).data());
		}
		else {
			advance(it, task + 1);
			this->button7->Text = gcnew String((it->second + "\n" + show_settings(task + 1)).data());
		}

	}
	public: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		this->jumper->Location = System::Drawing::Point(705, 0);
		reset();
		rain1->Text = L"|";
		rain1->AutoSize = true;
		rain1->ForeColor = System::Drawing::Color::MidnightBlue;
		this->Controls->Add(rain1);
		rain2->Text = L"|";
		rain2->AutoSize = true;
		rain2->ForeColor = System::Drawing::Color::MidnightBlue;
		this->Controls->Add(rain2);
		rain3->Text = L"|";
		rain3->AutoSize = true;
		rain3->ForeColor = System::Drawing::Color::MidnightBlue;
		this->Controls->Add(rain3);
		rain4->Text = L"|";
		rain4->AutoSize = true;
		rain4->ForeColor = System::Drawing::Color::MidnightBlue;
		this->Controls->Add(rain4);
		rain5->Text = L"|";
		rain5->AutoSize = true;
		rain5->ForeColor = System::Drawing::Color::MidnightBlue;
		this->Controls->Add(rain5);
		rain6->Text = L"|";
		rain6->AutoSize = true;
		rain6->ForeColor = System::Drawing::Color::MidnightBlue;
		this->Controls->Add(rain6);
		rain_hide();
		intro->Start();
	}
	public: System::Void MainWindow_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (WinState[0] == "menu") {
			if (e->KeyCode == Keys::Escape) {
				button3_Click(button3, nullptr);
			}
		}
		if (WinState[0] == "lab_choice") {
			if (e->KeyCode == Keys::D1) {
				button4_Click(button4, nullptr);
			}
			if (e->KeyCode == Keys::D2) {
				button5_Click(button5, nullptr);
			}
			if (e->KeyCode == Keys::D3) {
				button6_Click(button6, nullptr);
			}
			if (e->KeyCode == Keys::D4) {
				button7_Click(button7, nullptr);
			}
			if (e->KeyCode == Keys::D5) {
				button8_Click(button8, nullptr);
			}
			if (e->KeyCode == Keys::D6) {
				button9_Click(button9, nullptr);
			}
			if (e->KeyCode == Keys::D7) {
				button10_Click(button10, nullptr);
			}
			if (e->KeyCode == Keys::Escape) {
				button11_Click(button11, nullptr);
			}
		}
		if (WinState[0] == "lab_1") {
			if (e->KeyCode == Keys::Oemplus) {
				button1_Click(button1, nullptr);
			}
			if (e->KeyCode == Keys::OemMinus) {
				button2_Click(button2, nullptr);
			}
			if (e->KeyCode == Keys::Multiply) {
				button3_Click(button3, nullptr);
			}
			if (e->KeyCode == Keys::Divide) {
				button4_Click(button4, nullptr);
			}
			if (e->KeyCode == Keys::Delete) {
				button7_Click(button7, nullptr);
			}
			if (e->KeyCode == Keys::Escape) {
				button9_Click(button9, nullptr);
			}
			if (e->KeyCode == Keys::Enter) {
				button10_Click(button10, nullptr);
			}
		}
		if (WinState[0] == "lab_task_choice") {
			if (e->KeyCode == Keys::A) {
				button1_Click(button1, nullptr);
			}
			if (e->KeyCode == Keys::W) {
				button2_Click(button2, nullptr);
			}
			if (e->KeyCode == Keys::D) {
				button3_Click(button3, nullptr);
			}
			if (e->KeyCode == Keys::S) {
				button4_Click(button4, nullptr);
			}
			if (e->KeyCode == Keys::Escape) {
				button5_Click(button5, nullptr);
			}
		}
		if (WinState[0] == "lab_input") {
			if (e->KeyCode == Keys::Enter) {
				button6_Click(button6, nullptr);
			}
		}
	}
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "menu") {
			menu_quick->Stop();
			menu_far->Stop();
			menu_settings->Stop();
			lab_choice->Stop();
			intro->Stop();
			count1 = 0;
			count2 = 0;
			move1 = 0;
			move2 = 0;
			lab_choice->Start();
		}
		if (WinState[0] == "lab_1") {
			make_text->Stop();
			input_show->Stop();
			input_hide->Stop();
			count2 = 0;
			anim_count = 0;
			move2 = 0;
			WinState[1] = "+";
			line = L"Введите 2 номера чисел, которые вы хотите сложить." + gcnew String(lab1_get_vars().data());
			input_show->Start();
			make_text->Start();
		}
		if (WinState[0] == "lab_task_choice") {
			prev();
			task_draw();
		}
	}
	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "menu") {
			menu_quick->Stop();
			menu_far->Stop();
			lab_choice->Stop();
			menu_settings->Stop();
			intro->Stop();
			count1 = 0;
			count2 = 0;
			move1 = 0;
			move2 = 0;
			to_settings->Start();
		}
		if (WinState[0] == "lab_1") {
			make_text->Stop();
			input_show->Stop();
			input_hide->Stop();
			count2 = 0;
			anim_count = 0;
			move2 = 0;
			WinState[1] = "-";
			line = L"Введите 2 номера чисел, которые вы хотите вычесть." + gcnew String(lab1_get_vars().data());
			input_show->Start();
			make_text->Start();
		}
		if (WinState[0] == "lab_task_choice") {
			transition->Stop();
			count1 = 0;
			move1 = 0;
			enter();
			if (WinState[1] == "subtask") {
				subtask_hide->Stop();
				task_draw();
				count2 = 0;
				move2 = 0;
				subtask_show->Start();
			}
			else {
				subtask_show->Stop();
				subtask_hide->Stop();
				count2 = 0;
				move2 = 0;
				task_input->Start();
			}
		}
	}
	public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "menu") {
			this->Close();
		}
		if (WinState[0] == "lab_1") {
			make_text->Stop();
			input_show->Stop();
			input_hide->Stop();
			count2 = 0;
			anim_count = 0;
			move2 = 0;
			WinState[1] = "*";
			line = L"Введите 2 номера чисел, которые вы хотите перемножить." + gcnew String(lab1_get_vars().data());
			input_show->Start();
			make_text->Start();
		}
		if (WinState[0] == "lab_task_choice") {
			next();
			task_draw();
		}
	}
	public: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "lab_choice") {
			lab_choice->Stop();
			count2 = 0;
			move2 = 0;
			lab = 0;
			x = this->button4->Left + 45;
			y = this->button4->Top + 45;
			transition->Start();
		}
		if (WinState[0] == "lab_1") {
			make_text->Stop();
			input_show->Stop();
			input_hide->Stop();
			count2 = 0;
			anim_count = 0;
			move2 = 0;
			WinState[1] = "/";
			line = L"Введите 2 номера чисел, которые вы хотите разделить." + gcnew String(lab1_get_vars().data());
			input_show->Start();
			make_text->Start();
		}
		if (WinState[0] == "lab_task_choice" && WinState[1] == "subtask") {
			back();
			task_draw();
			subtask_show->Stop();
			count2 = 0;
			move2 = 0;
			subtask_hide->Start();
		}
		if (WinState[0] == "settings") {
			if (task != 2) {
				if (this->button4->Text == L"Выключено") {
					this->button4->Text = L"Включено";
					change_settings(this->button4->Text, task);
				}
				else {
					this->button4->Text = L"Выключено";
					change_settings(this->button4->Text, task);
				}
			}
			else {
				Thread^ thisThread = gcnew Thread(
					gcnew ThreadStart(&enable_tester));
				thisThread->Start();
			}
		}
	}
	public: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "lab_choice") {
			lab_choice->Stop();
			count2 = 0;
			move2 = 0;
			lab = 1;
			x = this->button5->Left + 45;
			y = this->button5->Top + 45;
			transition->Start();
		}
		if (WinState[0] == "lab_1") {
			make_text->Stop();
			input_show->Stop();
			input_hide->Stop();
			count2 = 0;
			anim_count = 0;
			move2 = 0;
			WinState[1] = "expand";
			line = L"Введите номер числа, которого вы хотите привести\nв развернутый вид." + gcnew String(lab1_get_vars().data());
			input_show->Start();
			make_text->Start();
		}
		if (WinState[0] == "lab_task_choice" || WinState[0] == "lab_resolve") {
			menu_far->Start();
		}
		if (WinState[0] == "settings") {
			if (task == 0) task = int(settings_name.size()) - 1;
			else task--;
			settings_reload();
		}
	}
	public: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "lab_choice") {
			lab_choice->Stop();
			count2 = 0;
			move2 = 0;
			lab = 2;
			x = this->button6->Left + 45;
			y = this->button6->Top + 45;
			transition->Start();
		}
		if (WinState[0] == "lab_1") {
			make_text->Stop();
			anim_count = 0;
			if (converted.size() == 6) {
				line = L"Вы не можете иметь в памяти более 6 чисел.\nПопробуйте выбрать другое действие." + gcnew String(lab1_get_vars().data());
			}
			else {
				input_show->Stop();
				input_hide->Stop();
				count2 = 0;
				move2 = 0;
				WinState[1] = "add";
				line = L"Введите число, которое вы хотите добавить,\nа также его систему исчисления." + gcnew String(lab1_get_vars().data());
				input_show->Start();
			}
			make_text->Start();
		}
		if (WinState[0] == "lab_input") {
			make_text->Stop();
			anim_count = 0;
			try {
				lab_show_vars(this->input1->Text);
				line = gcnew String((lab_get_vars() + "Введите " + WinState[1] + ".").data());
			}
			catch (FormatException^) {
				line = gcnew String((lab_get_vars() + "Введите " + WinState[1] + ".\nОшибка при полученнии данных.\nПопробуйте еще раз.").data());
			}
			this->input1->Text = L"";
			this->label1->Text = L"";
			if (WinState[1] != "DONE" && WinState[1] != "OPENWINDOW") {
				make_text->Start();
			}
			else {
				task_input->Stop();
				move2 = 0;
				count2 = 0;
				task_resolve->Start();
			}
		}
		if (WinState[0] == "settings") {
			to_settings->Stop();
			count2 = 0;
			move2 = 0;
			menu_settings->Start();
		}
	}
	public: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "lab_choice") {
			lab_choice->Stop();
			count2 = 0;
			move2 = 0;
			lab = 3;
			x = this->button7->Left + 45;
			y = this->button7->Top + 45;
			transition->Start();
		}
		if (WinState[0] == "lab_1") {
			make_text->Stop();
			input_show->Stop();
			input_hide->Stop();
			count2 = 0;
			anim_count = 0;
			move2 = 0;
			WinState[1] = "del";
			line = L"Введите номер числа, которого вы хотите удалить." + gcnew String(lab1_get_vars().data());
			input_show->Start();
			make_text->Start();
		}
		if (WinState[0] == "settings") {
			if (task == int(settings_name.size()) - 1) task = 0;
			else task++;
			settings_reload();
		}
	}
	public: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "lab_choice") {
			lab_choice->Stop();
			count2 = 0;
			move2 = 0;
			lab = 4;
			x = this->button8->Left + 45;
			y = this->button8->Top + 45;
			transition->Start();
		}
		if (WinState[0] == "lab_1") {
			make_text->Stop();
			input_show->Stop();
			input_hide->Stop();
			count2 = 0;
			anim_count = 0;
			move2 = 0;
			WinState[1] = "change_system";
			line = L"Введите номер числа и новую систему исчисления\nдля него." + gcnew String(lab1_get_vars().data());
			input_show->Start();
			make_text->Start();
		}
	}
	public: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "lab_choice") {
			lab_choice->Stop();
			count2 = 0;
			move2 = 0;
			lab = 5;
			x = this->button9->Left + 45;
			y = this->button9->Top + 45;
			transition->Start();
		}
		if (WinState[0] == "lab_1") {
			make_text->Stop();
			input_show->Stop();
			input_hide->Stop();
			count2 = 0;
			anim_count = 0;
			move2 = 0;
			menu_far->Start();
		}
	}
	public: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "lab_choice") {
			lab_choice->Stop();
			count2 = 0;
			move2 = 0;
			lab = 6;
			x = this->button10->Left + 45;
			y = this->button10->Top + 45;
			transition->Start();
		}
		if (WinState[0] == "lab_1" && WinState[1] != "wait") {
			make_text->Stop();
			input_show->Stop();
			input_hide->Stop();
			count2 = 0;
			anim_count = 0;
			move2 = 0;
			std::string result = "";
			if (WinState[1] == "+" || WinState[1] == "-" || WinState[1] == "*" || WinState[1] == "/") {
				try {
					int i = lab1_math(WinState[1], Int32::Parse(this->input1->Text) - 1, Int32::Parse(this->input2->Text) - 1);
					if (i != -1) {
						if (WinState[1] == "+") {
							line = L"Результат сложения: " + gcnew String(converted[i].data()) + gcnew String(lab1_get_vars().data());
						}
						if (WinState[1] == "-") {
							line = L"Результат вычитания: " + gcnew String(converted[i].data()) + gcnew String(lab1_get_vars().data());
						}
						if (WinState[1] == "*") {
							line = L"Результат умножения: " + gcnew String(converted[i].data()) + gcnew String(lab1_get_vars().data());
						}
						if (WinState[1] == "/") {
							line = L"Результат деления: " + gcnew String(converted[i].data()) + gcnew String(lab1_get_vars().data());
						}
						WinState[1] = "wait";
						input_hide->Start();
					}
					else {
						line = L"Произошла ошибка в ходе выполнения операции.\nПопробуйте ввести другие данные." + gcnew String(lab1_get_vars().data());
					}
				}
				catch (FormatException^) {
					line = L"Неверный формат ввода.\nПопробуйте ввести другие данные." + gcnew String(lab1_get_vars().data());
				}
			}
			if (WinState[1] == "expand") {
				try {
					result = lab1_expand(Int32::Parse(this->input1->Text) - 1);
					if (result != "") {
						line = L"Число " + this->input1->Text + " в разложенном виде: " + gcnew String(result.data()) + gcnew String(lab1_get_vars().data());
						WinState[1] = "wait";
						input_hide->Start();
					}
					else {
						line = L"Произошла ошибка в ходе выполнения операции.\nПопробуйте ввести другие данные." + gcnew String(lab1_get_vars().data());
					}
				}
				catch (FormatException^) {
					line = L"Неверный формат ввода.\nПопробуйте ввести другие данные." + gcnew String(lab1_get_vars().data());
				}
			}
			if (WinState[1] == "add") {
				try {
					result = lab1_add(this->input1->Text, Int32::Parse(this->input2->Text));
					if (result != "") {
						line = L"Добавлено новое число: " + gcnew String(result.data()) + gcnew String(lab1_get_vars().data());
						WinState[1] = "wait";
						input_hide->Start();
					}
					else {
						line = L"Произошла ошибка в ходе выполнения операции.\nПопробуйте ввести другие данные." + gcnew String(lab1_get_vars().data());
					}
				}
				catch (FormatException^) {
					line = L"Неверный формат ввода.\nПопробуйте ввести другие данные." + gcnew String(lab1_get_vars().data());
				}
			}
			if (WinState[1] == "del") {
				try {
					result = lab1_del(Int32::Parse(this->input1->Text) - 1);
					if (result != "") {
						line = L"Число " + gcnew String(result.data()) + " было удалено." + gcnew String(lab1_get_vars().data());
						WinState[1] = "wait";
						input_hide->Start();
					}
					else {
						line = L"Произошла ошибка в ходе выполнения операции.\nПопробуйте ввести другие данные." + gcnew String(lab1_get_vars().data());
					}
				}
				catch (FormatException^) {
					line = L"Неверный формат ввода.\nПопробуйте ввести другие данные." + gcnew String(lab1_get_vars().data());
				}
			}
			if (WinState[1] == "change_system") {
				try {
					if (lab1_change_sys(Int32::Parse(this->input1->Text) - 1, Int32::Parse(this->input2->Text))) {
						line = L"Система исчисления числа " + this->input1->Text + " была изменена на: " + this->input2->Text + gcnew String(lab1_get_vars().data());
					}
					else {
						line = L"Произошла ошибка в ходе выполнения операции.\nПопробуйте ввести другие данные." + gcnew String(lab1_get_vars().data());
					}
				}
				catch (FormatException^) {
					line = L"Неверный формат ввода.\nПопробуйте ввести другие данные." + gcnew String(lab1_get_vars().data());
				}
				WinState[1] = "wait";
				input_hide->Start();
			}
			this->input1->Text = L"";
			this->input2->Text = L"";
			make_text->Start();
		}
	}
	public: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WinState[0] == "lab_choice") {
			lab_choice->Stop();
			move2 = 0;
			count2 = 0;
			menu_quick->Start();
		}
	}
	public: System::Void intro_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count1 == 1) {
			if (settings.intro == true) {
				this->picture1->Size = System::Drawing::Size(1, 1);
				this->picture1->Location = System::Drawing::Point(350, 275);
				this->picture2->Size = System::Drawing::Size(1, 1);
				this->picture2->Location = System::Drawing::Point(0, 555);
			}
			else {
				count1 = 400;
				this->picture1->Size = System::Drawing::Size(310, 125);
				this->picture1->Location = System::Drawing::Point(186, 6);
				this->picture2->Size = System::Drawing::Size(185, 65);
				this->picture2->Location = System::Drawing::Point(248, 126);
				y1 = this->picture1->Top;
				y2 = this->picture2->Top;
				rain_show();
				menu_anim->Start();
			}
		}
		if (count1 < 100) {
			move1 += (100 - move1) * 0.05;
			this->picture1->Size = System::Drawing::Size(int(move1 * 6), int(move1 * 2.5));
			this->picture1->Location = System::Drawing::Point(int(350 - move1 * 3.09), int(275 - move1 * 1.49));
		}
		if (count1 == 100) {
			move1 = 0;
			this->picture1->Size = System::Drawing::Size(600, 250);
			this->picture1->Location = System::Drawing::Point(41, 126);
		}
		if (count1 < 200 && count1 > 100) {
			move1 += (100 - move1) * 0.05;
			this->picture1->Size = System::Drawing::Size(int(600 - move1), int(250 - move1 * 0.5));
			this->picture1->Location = System::Drawing::Point(int(41 + move1 * 0.5), int(126 - move1 * 0.5));
			this->picture2->Size = System::Drawing::Size(int(move1 * 4), int(move1 * 1.5));
			this->picture2->Location = System::Drawing::Point(int(350 - move1 * 2.09), int(275));
		}
		if (count1 == 200) {
			move1 = 100;
		}
		if (count1 < 300 && count1 > 200) {
			move1 -= (101 - move1) * 0.05;
			if (move1 < 0) {
				move1 = 0;
				count1 = 300;
			}
			this->picture1->Size = System::Drawing::Size(int(500 - (100 - move1) * 1.9), int(200 - (100 - move1) * 0.75));
			this->picture1->Location = System::Drawing::Point(int(91 + (100 - move1) * 0.95), int(76 - (100 - move1) * 0.7));
			this->picture2->Size = System::Drawing::Size(int(400 - (100 - move1) * 2.15), int(150 - (100 - move1) * 0.85));
			this->picture2->Location = System::Drawing::Point(int(141 + (100 - move1) * 1.07), int(275 - (100 - move1) * 1.49));
		}
		if (count1 == 300) {
			y1 = this->picture1->Top;
			y2 = this->picture2->Top;
			rain_show();
			menu_anim->Start();
		}
		if (count1 < 400 && count1 > 300) {
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(int((400 - count1) * 2.55))),
				static_cast<System::Int32>(static_cast<System::Byte>(int((400 - count1) * 2.55))), static_cast<System::Int32>(static_cast<System::Byte>(int((400 - count1) * 2.55))));
		}
		if (count1 == 400) {
			anim_count = 0;
			this->button1->Enabled = true;
			this->button2->Enabled = true;
			this->button3->Enabled = true;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			WinState[0] = "menu";
		}
		if (count1 < 500 && count1 > 400) {
			move1 += (100 - move1) * 0.05;
			this->button1->Location = System::Drawing::Point(191, int(560 - move1 * 3.61));
			this->button2->Location = System::Drawing::Point(191, int(560 - move1 * 2.62));
			this->button3->Location = System::Drawing::Point(191, int(560 - move1 * 1.63));
		}
		if (count1 == 500) {
			move1 = 0;
			count1 = 0;
			intro->Stop();
		}
		count1++;
	}
	public: System::Void menu_anim_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (anim_count > 360) {
			anim_count = 0;
		}
		if (WinState[0] != "intro") {
			this->picture1->Top = int(y1 + cos((anim_count + 90) * M_PI / 180) * 5);
			this->picture2->Top = int(y2 + cos((anim_count + 90) * M_PI / 180) * 5);
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(int(sin(anim_count * M_PI / 360) * 25))));
		}
		if (WinState[0] == "lab_choice" || WinState[0] == "settings") {
			this->label1->Top = int(y3 + cos((anim_count - 45) * M_PI / 180) * 5);
		}
		anim_count++;
		if (settings.rain == true) {
			if (!rain1->Visible) {
				rain_show();
			}
			rain1->Location = System::Drawing::Point(rain1->Left + rand() % 2 - 1, rain1->Top + 14);
			rain2->Location = System::Drawing::Point(rain2->Left + rand() % 2 - 1, rain2->Top + 13);
			rain3->Location = System::Drawing::Point(rain3->Left + rand() % 2 - 1, rain3->Top + 12);
			rain4->Location = System::Drawing::Point(rain4->Left + rand() % 2 - 1, rain4->Top + 10);
			rain5->Location = System::Drawing::Point(rain5->Left + rand() % 2 - 1, rain5->Top + 11);
			rain6->Location = System::Drawing::Point(rain6->Left + rand() % 2 - 1, rain6->Top + 12);
			if (WinState[0] == "intro" || WinState[0] == "menu") {
				if (rain1->Top > 560) {
					rain1->Location = System::Drawing::Point(rand() % 182 + 502, -10);
				}
				if (rain2->Top > 560) {
					rain2->Location = System::Drawing::Point(rand() % 182, -10);
				}
				if (rain3->Top > 560) {
					rain3->Location = System::Drawing::Point(rand() % 182 + 502, -10);
				}
				if (rain4->Top > 560) {
					rain4->Location = System::Drawing::Point(rand() % 182, -10);
				}
				if (rain5->Top > 560) {
					rain5->Location = System::Drawing::Point(rand() % 182 + 502, -10);
				}
				if (rain6->Top > 560) {
					rain6->Location = System::Drawing::Point(rand() % 182, -10);
				}
			}
			else {
				if (rain1->Top > 560) {
					rain1->Location = System::Drawing::Point(rand() % 700, -10);
				}
				if (rain2->Top > 560) {
					rain2->Location = System::Drawing::Point(rand() % 700, -10);
				}
				if (rain3->Top > 560) {
					rain3->Location = System::Drawing::Point(rand() % 700, -10);
				}
				if (rain4->Top > 560) {
					rain4->Location = System::Drawing::Point(rand() % 700, -10);
				}
				if (rain5->Top > 560) {
					rain5->Location = System::Drawing::Point(rand() % 700, -10);
				}
				if (rain6->Top > 560) {
					rain6->Location = System::Drawing::Point(rand() % 700, -10);
				}
			}
		}
		else {
			if (rain1->Visible) {
				rain_hide();
			}
		}
	}
	public: System::Void lab_choice_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 == 0) {
			WinState[0] = "lab_choice";
			reset_for_settings();
			this->button4->Enabled = true;
			this->button5->Enabled = true;
			this->button6->Enabled = true;
			this->button7->Enabled = true;
			this->button8->Enabled = true;
			this->button9->Enabled = true;
			this->button10->Enabled = true;
			this->button11->Enabled = true;
			y3 = this->label1->Top;
		}
		if (count2 < 100) {
			move2 += (100 - move2) * 0.08;
			this->picture1->Size = System::Drawing::Size(int(310 - move2 * 1.6), int(125 - move2 * 0.65));
			this->picture1->Left = int(186 - move2 * 1.76);
			this->picture2->Size = System::Drawing::Size(int(185 - move2), int(65 - move2 * 0.35));
			this->picture2->Left = int(248 - move2 * 2.06);
			this->button1->Location = System::Drawing::Point(int(191 - move2 * 7), this->button1->Top);
			this->button2->Location = System::Drawing::Point(int(191 - move2 * 7), this->button2->Top);
			this->button3->Location = System::Drawing::Point(int(191 - move2 * 7), this->button3->Top);
			this->button4->Location = System::Drawing::Point(int(848 - move2 * 7), 159);
			this->button5->Location = System::Drawing::Point(int(944 - move2 * 7), 159);
			this->button6->Location = System::Drawing::Point(int(1040 - move2 * 7), 159);
			this->button7->Location = System::Drawing::Point(int(1136 - move2 * 7), 159);
			this->button8->Location = System::Drawing::Point(int(900 - move2 * 7), 255);
			this->button9->Location = System::Drawing::Point(int(996 - move2 * 7), 255);
			this->button10->Location = System::Drawing::Point(int(1092 - move2 * 7), 255);
			this->button11->Location = System::Drawing::Point(int(857 - move2 * 7), 380);
			this->label1->Left = int(868 - move2 * 7);
			y1 = int(6 + move2 * 0.04);
			y2 = int(125 - move2 * 0.58);
		}
		if (count2 == 100) {
			this->button1->Enabled = false;
			this->button2->Enabled = false;
			this->button3->Enabled = false;
			move2 = 0;
			count2 = 0;
			lab_choice->Stop();
		}
		count2++;
	}
	public: System::Void menu_quick_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 == 0) {
			WinState[0] = "menu";
			this->button1->Enabled = true;
			this->button2->Enabled = true;
			this->button3->Enabled = true;
		}
		if (count2 < 100) {
			move2 += (100 - move2) * 0.05;
			this->picture1->Size = System::Drawing::Size(int(150 + move2 * 1.6), int(60 + move2 * 0.65));
			this->picture1->Left = int(10 + move2 * 1.76);
			this->picture2->Size = System::Drawing::Size(int(85 + move2), int(30 + move2 * 0.35));
			this->picture2->Left = int(42 + move2 * 2.06);
			this->button1->Location = System::Drawing::Point(int(-509 + move2 * 7), 199);
			this->button2->Location = System::Drawing::Point(int(-509 + move2 * 7), 298);
			this->button3->Location = System::Drawing::Point(int(-509 + move2 * 7), 397);
			this->button4->Location = System::Drawing::Point(int(148 + move2 * 7), 159);
			this->button5->Location = System::Drawing::Point(int(244 + move2 * 7), 159);
			this->button6->Location = System::Drawing::Point(int(340 + move2 * 7), 159);
			this->button7->Location = System::Drawing::Point(int(436 + move2 * 7), 159);
			this->button8->Location = System::Drawing::Point(int(200 + move2 * 7), 255);
			this->button9->Location = System::Drawing::Point(int(296 + move2 * 7), 255);
			this->button10->Location = System::Drawing::Point(int(392 + move2 * 7), 255);
			this->button11->Location = System::Drawing::Point(int(157 + move2 * 7), 381);
			this->label1->Left = int(168 + move2 * 7);
			y1 = int(10 - move2 * 0.04);
			y2 = int(67 + move2 * 0.58);
		}
		if (count2 == 100) {
			this->button1->Enabled = true;
			this->button2->Enabled = true;
			this->button3->Enabled = true;
			this->button4->Enabled = false;
			this->button5->Enabled = false;
			this->button6->Enabled = false;
			this->button7->Enabled = false;
			this->button8->Enabled = false;
			this->button9->Enabled = false;
			this->button10->Enabled = false;
			this->button11->Enabled = false;
			count2 = 0;
			move2 = 0;
			menu_quick->Stop();
		}
		count2++;
	}
	public: System::Void transition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count1 == 0) {
			WinState[0] = "animation";
			this->jumper->Size = System::Drawing::Size(1, 1);
			this->jumper->Location = System::Drawing::Point(x, y);
			this->jumper->BackColor = System::Drawing::SystemColors::ControlText;
			this->jumper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->jumper->Text = L"" + (lab + 1);
			this->Text = L"Reshator Laborator Series - Лабораторная " + (lab + 1);
		}
		if (count1 < 120) {
			move1 += (100 - move1) * 0.05;
			this->jumper->Size = System::Drawing::Size(int(move1 * 8), int(move1 * 8));
			this->jumper->Location = System::Drawing::Point(int(x - move1 / 100 * x - move1 * 0.55), int(y - move1 / 100 * y - move1 * 1.5));
			this->jumper->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", float(move1 * 0.75)));
		}
		if (count1 == 120) {
			menu_anim->Stop();
			anim_count = 0;
			move1 = 0;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->label1->Size = System::Drawing::Size(600, 200);
			this->label1->Location = System::Drawing::Point(41, 600);
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18));
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Text = gcnew String(lab_desc[lab].data());
			this->label1->BringToFront();
		}
		if (count1 < 220 && count1 > 120) {
			move1 += (100 - move1) * 0.06;
			this->label1->Location = System::Drawing::Point(41, int(600 - move1 * 3.7));
			this->jumper->Location = System::Drawing::Point(-55, int(-150 - move1 * 0.8));
		}
		if (count1 == 220) {
			move1 = 100;
			rain_hide();
			if (lab == 0) {
				this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
				this->button1->Size = System::Drawing::Size(90, 90);
				this->button1->Location = System::Drawing::Point(74, 305);
				this->button1->FlatAppearance->BorderSize = 1;
				this->button1->Text = L"+";
				this->button1->Enabled = true;
				this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
				this->button2->Size = System::Drawing::Size(90, 90);
				this->button2->Location = System::Drawing::Point(170, 305);
				this->button2->FlatAppearance->BorderSize = 1;
				this->button2->Text = L"-";
				this->button2->Enabled = true;
				this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
				this->button3->Size = System::Drawing::Size(90, 90);
				this->button3->Location = System::Drawing::Point(266, 305);
				this->button3->FlatAppearance->BorderSize = 1;
				this->button3->Text = L"*";
				this->button3->Enabled = true;
				this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
				this->button4->Size = System::Drawing::Size(90, 90);
				this->button4->Location = System::Drawing::Point(362, 305);
				this->button4->FlatAppearance->BorderSize = 1;
				this->button4->Text = L"/";
				this->button4->Enabled = true;
				this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				this->button5->Size = System::Drawing::Size(150, 90);
				this->button5->Location = System::Drawing::Point(458, 305);
				this->button5->FlatAppearance->BorderSize = 1;
				this->button5->Text = L"expand";
				this->button5->Enabled = true;
				this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				this->button6->Size = System::Drawing::Size(90, 90);
				this->button6->Location = System::Drawing::Point(74, 401);
				this->button6->FlatAppearance->BorderSize = 1;
				this->button6->Text = L"add";
				this->button6->Enabled = true;
				this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				this->button7->Size = System::Drawing::Size(90, 90);
				this->button7->Location = System::Drawing::Point(170, 401);
				this->button7->FlatAppearance->BorderSize = 1;
				this->button7->Text = L"del";
				this->button7->Enabled = true;
				this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18));
				this->button8->Size = System::Drawing::Size(186, 90);
				this->button8->Location = System::Drawing::Point(266, 401);
				this->button8->FlatAppearance->BorderSize = 1;
				this->button8->Text = L"change\nsystem";
				this->button8->Enabled = true;
				this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18));
				this->button9->Size = System::Drawing::Size(150, 90);
				this->button9->Location = System::Drawing::Point(458, 401);
				this->button9->FlatAppearance->BorderSize = 1;
				this->button9->Text = L"В меню";
				this->button9->Enabled = true;
				this->button10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16));
				this->button10->Size = System::Drawing::Size(140, 76);
				this->button10->Location = System::Drawing::Point(732, 12);
				this->button10->FlatAppearance->BorderSize = 1;
				this->button10->Text = L"Принять";
				this->button10->Enabled = false;
				this->button11->Location = System::Drawing::Point(705, 0);
				this->button11->Enabled = false;
				this->picture1->Location = System::Drawing::Point(705, 0);
				this->picture2->Location = System::Drawing::Point(705, 0);
			}
			else {
				this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				this->button1->Size = System::Drawing::Size(150, 90);
				this->button1->Location = System::Drawing::Point(110, 305);
				this->button1->FlatAppearance->BorderSize = 1;
				this->button1->Text = L"Назад";
				this->button1->Enabled = true;
				this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				this->button2->Size = System::Drawing::Size(150, 90);
				this->button2->Location = System::Drawing::Point(266, 305);
				this->button2->FlatAppearance->BorderSize = 1;
				this->button2->Text = L"Выбрать";
				this->button2->Enabled = true;
				this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				this->button3->Size = System::Drawing::Size(150, 90);
				this->button3->Location = System::Drawing::Point(422, 305);
				this->button3->FlatAppearance->BorderSize = 1;
				this->button3->Text = L"Вперед";
				this->button3->Enabled = true;
				this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				this->button4->Size = System::Drawing::Size(228, 90);
				this->button4->Location = System::Drawing::Point(344, 601);
				this->button4->FlatAppearance->BorderSize = 1;
				this->button4->Text = L"К заданиям";
				this->button4->Enabled = false;
				this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				this->button5->Size = System::Drawing::Size(462, 90);
				this->button5->Location = System::Drawing::Point(110, 401);
				this->button5->FlatAppearance->BorderSize = 1;
				this->button5->Text = L"В меню";
				this->button5->Enabled = true;
				this->button6->Location = System::Drawing::Point(705, 0);
				this->button6->Enabled = false;
				this->button7->Location = System::Drawing::Point(705, 0);
				this->button7->Enabled = false;
				this->button8->Location = System::Drawing::Point(705, 0);
				this->button8->Enabled = false;
				this->button9->Location = System::Drawing::Point(705, 0);
				this->button9->Enabled = false;
				this->button10->Location = System::Drawing::Point(705, 0);
				this->button10->Enabled = false;
				this->button11->Location = System::Drawing::Point(705, 0);
				this->button11->Enabled = false;
				this->picture1->Size = System::Drawing::Size(1, 100);
				this->picture1->Location = System::Drawing::Point(705, 0);
				this->picture1->Size = System::Drawing::Size(614, 100);
				this->picture2->Location = System::Drawing::Point(705, 0);
				this->picture2->Size = System::Drawing::Size(614, 100);
			}
		}
		if (count1 < 380 && count1 > 260) {
			move1 -= (101 - move1) * 0.05;
			if (move1 < 0) {
				count1 = 380;
			}
			this->label1->Location = System::Drawing::Point(41, int(1060 - move1 * 8.3));
			this->jumper->Location = System::Drawing::Point(-55, int(600 - move1 * 8.3));
		}
		if (count1 == 380) {
			if (lab == 0) {
				move1 = 0;
				this->label1->TextAlign = System::Drawing::ContentAlignment::TopLeft;
				this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14));
				this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->label1->Text = L"";
				line = L"Выберите действие с помощью кнопок на панели снизу." + gcnew String(lab1_get_vars().data());
				make_text->Start();
				WinState[0] = "lab_1";
				WinState[1] = "wait";
			}
			else {
				this->picture1->BackColor = System::Drawing::SystemColors::HighlightText;
				this->picture2->BackColor = System::Drawing::SystemColors::HighlightText;
				this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 28));
				this->label1->Size = System::Drawing::Size(618, 60);
				this->label2->BackColor = System::Drawing::SystemColors::HighlightText;
				this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->label2->SendToBack();
				WinState[0] = "lab_task_choice";
				WinState[1] = "task";
				task_draw();
			}
		}
		if (count1 < 480 && count1 > 380) {
			move1 += (100 - move1) * 0.06;
			if (lab == 0) {
				this->label1->Size = System::Drawing::Size(int(move1 * 6.2), 200);
				this->label1->Location = System::Drawing::Point(int(341 - move1 * 3.09), 96);
				this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(int(255 - move1 * 2.55))), static_cast<System::Int32>(static_cast<System::Byte>(int(255 - move1 * 2.55))),
					static_cast<System::Int32>(static_cast<System::Byte>(int(255 - move1 * 1.95))));
			}
			else {
				this->label1->Location = System::Drawing::Point(32, int(-188 + move1 * 2));
				this->label2->Size = System::Drawing::Size(int(move1 * 6.18), 200);
				this->label2->Location = System::Drawing::Point(int(341 - move1 * 3.09), 96);
				this->picture1->Size = System::Drawing::Size(int(move1 * 6.16), 100);
				this->picture1->Location = System::Drawing::Point(int(341 - move1 * 3.08), 146);
			}
		}
		if (count1 == 480) {
			count1 = 0;
			move1 = 0;
			transition->Stop();
		}
		count1++;
	}
	public: System::Void make_text_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (anim_count == 0) {
			this->label1->Text = L"";
		}
		if (anim_count < line->Length) {
			this->label1->Text += line[anim_count];
			anim_count++;
			if (anim_count < line->Length) {
				while (line[anim_count] == ' ' && anim_count + 1 < line->Length) {
					this->label1->Text += line[anim_count];
					anim_count++;
				}
			}
		}
		else {
			anim_count = -1;
			make_text->Stop();
		}
	}
	public: System::Void input_show_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 == 1) {
			this->button10->Enabled = true;
			this->input1->Enabled = true;
			if (WinState[1] != "del" && WinState[1] != "expand") {
				this->input2->Enabled = true;
			}
			else {
				this->input2->Location = System::Drawing::Point(1100, 25);
				this->input2->Enabled = false;
			}
		}
		if (count2 < 75) {
			move2 += (100 - move2) * 0.08;
			this->button10->Size = System::Drawing::Size(int(move2 * 1.4 + 1), 76);
			this->button10->Location = System::Drawing::Point(int(102 - move2 * 0.7), 12);
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(int(255 - move2 * 2.55))), static_cast<System::Int32>(static_cast<System::Byte>(int(255 - move2 * 2.55))),
				static_cast<System::Int32>(static_cast<System::Byte>(int(255 - move2 * 2.55))));
			if (WinState[1] == "del" || WinState[1] == "expand") {
				this->input1->Width = int(move2 * 3.8);
				this->input1->Location = System::Drawing::Point(int(418 - move2 * 1.9), 29);
			}
			else {
				this->input1->Width = int(move2 * 2.6 + 1);
				this->input1->Location = System::Drawing::Point(int(358 - move2 * 1.3), 29);
				this->input2->Width = int(move2 * 0.6 + 1);
				this->input2->Location = System::Drawing::Point(int(578 - move2 * 0.3), 29);
			}
		}
		if (count2 == 75) {
			count2 = 0;
			move2 = 0;
			input_show->Stop();
		}
		count2++;
	}
	public: System::Void input_hide_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 < 75) {
			move2 += (100 - move2) * 0.08;
			this->button10->Size = System::Drawing::Size(int(140 - move2 * 1.4), 76);
			this->button10->Location = System::Drawing::Point(int(32 + move2 * 0.7), 12);
			if (!input2->Enabled) {
				this->input1->Size = System::Drawing::Size(int(380 - move2 * 3.8), 59);
				this->input1->Location = System::Drawing::Point(int(228 + move2 * 1.9), 29);
			}
			else {
				this->input1->Size = System::Drawing::Size(int(260 - move2 * 2.60), 59);
				this->input1->Location = System::Drawing::Point(int(228 + move2 * 1.3), 29);
				this->input2->Size = System::Drawing::Size(int(60 - move2 * 0.6), 59);
				this->input2->Location = System::Drawing::Point(int(548 + move2 * 0.3), 29);
			}
		}
		if (count2 == 75) {
			this->button10->Location = System::Drawing::Point(732, 12);
			this->input1->Location = System::Drawing::Point(895, 25);
			this->input2->Location = System::Drawing::Point(1100, 25);
			this->button10->Enabled = false;
			this->input1->Enabled = false;
			this->input2->Enabled = false;
			count2 = 0;
			move2 = 0;
			input_hide->Stop();
		}
		count2++;
	}
	public: System::Void menu_far_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count1 == 1) {
			WinState[0] = "animation";
			this->jumper->BackColor = System::Drawing::SystemColors::ControlText;
			this->jumper->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->jumper->Location = System::Drawing::Point(-85, -950);
			this->jumper->Size = System::Drawing::Size(800, 800);
			this->jumper->Font = gcnew System::Drawing::Font(L"Comic Sans MS", 50);
			this->jumper->Text = L"Возвращаемся в меню...";
			this->jumper->BringToFront();

		}
		if (count1 < 100) {
			move1 += (100 - move1) * 0.06;
			this->jumper->Location = System::Drawing::Point(-55, int(-1050 + move1 * 9));
		}
		if (count1 == 100) {
			make_text->Stop();
			move1 = 100;
			move2 = 0;
			count2 = 0;
			anim_count = 0;
			reset();
			rain_show();
			menu_anim->Start();
			this->button1->Location = System::Drawing::Point(191, 199);
			this->button2->Location = System::Drawing::Point(191, 298);
			this->button3->Location = System::Drawing::Point(191, 397);
			this->button1->Enabled = true;
			this->button2->Enabled = true;
			this->button3->Enabled = true;
			WinState[0] = "menu";
		}
		if (count1 < 220 && count1 > 120) {
			move1 -= (101 - move1) * 0.05;
			this->jumper->Location = System::Drawing::Point(-55, int(750 - move1 * 9));
		}
		if (count1 == 220) {
			move1 = 0;
			count1 = 0;
			menu_far->Stop();
		}
		count1++;
	}
	public: System::Void subtask_show_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 == 1) {
			this->button4->Enabled = true;
			this->label1->Location = System::Drawing::Point(32, 12);
			this->label2->Size = System::Drawing::Size(618, 200);
			this->label2->Location = System::Drawing::Point(32, 96);
			if (lab == 1 && task == 2) {
				this->picture2->Size = System::Drawing::Size(1, 198);
				this->picture2->Location = System::Drawing::Point(341, 97);
				this->picture2->BringToFront();
			}
			else {
				this->picture1->Size = System::Drawing::Size(616, 100);
				this->picture2->Size = System::Drawing::Size(616, 100);
				this->picture1->Location = System::Drawing::Point(33, 146);
				this->picture1->BringToFront();
			}
		}
		if (count2 < 90) {
			move2 += (100 - move2) * 0.07;
			if (lab == 1 && task == 2) {
				this->picture2->Size = System::Drawing::Size(int(move2 * 6.16), 198);
				this->picture2->Location = System::Drawing::Point(int(341 - move2 * 3.08), 97);
			}
			else {
				this->picture1->Location = System::Drawing::Point(34, int(146 - move2 * 0.49));
				this->picture2->Location = System::Drawing::Point(34, int(146 + move2 * 0.49));
			}
			this->button4->Location = System::Drawing::Point(344, int(601 - move2 * 2));
			this->button5->Size = System::Drawing::Size(int(462 - move2 * 2.34), 90);
		}
		if (count2 == 90) {
			count2 = 0;
			move2 = 0;
			subtask_show->Stop();
		}
		count2++;
	}
	public: System::Void subtask_hide_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 < 90) {
			move2 += (100 - move2) * 0.07;
			if (picture2->Height > 100) {
				this->picture2->Size = System::Drawing::Size(int(616 - move2 * 6.16), 198);
				this->picture2->Location = System::Drawing::Point(int(34 + move2 * 3.08), 97);
			}
			else {
				this->picture1->Location = System::Drawing::Point(34, int(97 + move2 * 0.49));
				this->picture2->Location = System::Drawing::Point(34, int(195 - move2 * 0.49));
			}
			this->button4->Location = System::Drawing::Point(344, int(401 + move2 * 2));
			this->button5->Size = System::Drawing::Size(int(228 + move2 * 2.34), 90);
		}
		if (count2 == 90) {
			this->button4->Enabled = false;
			this->picture2->Size = System::Drawing::Size(616, 100);
			this->picture2->Location = System::Drawing::Point(705, 0);
			count2 = 0;
			move2 = 0;
			subtask_hide->Stop();
		}
		count2++;
	}
	public: System::Void task_input_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 == 1) {
			WinState[0] = "animation";
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16));
			this->button6->Size = System::Drawing::Size(140, 76);
			this->button6->Location = System::Drawing::Point(732, 12);
			this->button6->FlatAppearance->BorderSize = 1;
			this->button6->Text = L"Принять";
			this->button6->Enabled = true;
			this->label1->Location = System::Drawing::Point(32, 12);
			this->label2->Size = System::Drawing::Size(618, 200);
			this->label2->Location = System::Drawing::Point(32, 96);
			if (WinState[1] == "task_input") {
				this->Text = L"Reshator Laborator Series - Лабораторная " + (lab + 1) + " // Задание " + (task + 1);
				this->picture1->Size = System::Drawing::Size(616, 100);
				this->picture1->Location = System::Drawing::Point(34, 146);
				this->picture2->Location = System::Drawing::Point(705, 0);
			}
			else {
				this->Text = L"Reshator Laborator Series - Лабораторная " + (lab + 1) + " // Задание " + (task + 1) + " // Подзадание " + (subtask + 1);
				if (lab == 1 && task == 2) {
					this->picture1->Location = System::Drawing::Point(34, 97);
					this->picture2->Size = System::Drawing::Size(616, 198);
					this->picture2->Location = System::Drawing::Point(34, 97);
				}
				else {
					this->picture1->Location = System::Drawing::Point(34, 97);
					this->picture2->Location = System::Drawing::Point(34, 195);
				}
			}
			this->input1->Size = System::Drawing::Size(380, 59);
			this->input1->Location = System::Drawing::Point(928, 29);
			this->input1->Enabled = true;
		}
		if (count2 < 100) {
			move2 += (100 - move2) * 0.06;
			this->button1->Location = System::Drawing::Point(int(110 - move2 * 7), 305);
			this->button2->Location = System::Drawing::Point(int(266 - move2 * 7), 305);
			this->button3->Location = System::Drawing::Point(int(422 - move2 * 7), 305);
			if (this->button5->Width < 400) {
				this->button4->Left = int(344 - move2 * 7);
			}
			this->button5->Location = System::Drawing::Point(int(110 - move2 * 7), 401);
			this->button6->Location = System::Drawing::Point(int(732 - move2 * 7), 12);
			this->label1->Location = System::Drawing::Point(int(32 - move2 * 7), 12);
			this->input1->Location = System::Drawing::Point(int(928 - move2 * 7), 29);
			if (lab == 1 && task == 2) {
				this->picture2->Size = System::Drawing::Size(616, int(198 - move2 * 0.98));
				this->picture2->Location = System::Drawing::Point(34, int(97 + move2 * 0.98));
			}
		}
		if (count2 == 100) {
			move2 = 0;
			this->button1->Enabled = false;
			this->button2->Enabled = false;
			this->button3->Enabled = false;
			this->button4->Enabled = false;
			this->button5->Enabled = false;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Text = L"";
			lab_show_vars("-");
			if (WinState[1] != "DONE" && WinState[1] != "OPENWINDOW") {
				line = gcnew String(("Введите " + WinState[1] + ".").data());
				make_text->Start();
				WinState[0] = "lab_input";
			}
		}
		if (count2 < 200 && count2 > 100) {
			move2 += (100 - move2) * 0.06;
			this->label1->Size = System::Drawing::Size(int(move2 * 6.18), 175);
			this->label1->Location = System::Drawing::Point(int(341 - move2 * 3.09), 300);
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(int(255 - move2 * 2.55))), static_cast<System::Int32>(static_cast<System::Byte>(int(255 - move2 * 2.55))),
				static_cast<System::Int32>(static_cast<System::Byte>(int(255 - move2 * 1.95))));
		}
		if (count2 == 200) {
			count2 = 0;
			move2 = 0;
			if (WinState[1] == "DONE" || WinState[1] == "OPENWINDOW") {
				task_resolve->Start();
			}
			task_input->Stop();
		}
		count2++;
	}
	public: System::Void task_resolve_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 == 1) {
			WinState[0] = "lab_resolve";
			this->button5->Enabled = true;
			this->button5->Size = System::Drawing::Size(462, 90);
			this->label1->Size = System::Drawing::Size(618, 175);
			this->label1->Location = System::Drawing::Point(32, 300);
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			if (lab == 1) {
				line = gcnew String(lab2_resolve().data());
			}
			if (lab == 2) {
				line = gcnew String(lab3_resolve().data());
			}
			if (lab == 3) {
				line = gcnew String(lab4_resolve().data());
			}
			if (lab == 4) {
				line = gcnew String(lab5_resolve().data());
			}
			if (lab == 5) {
				line = gcnew String(lab6_resolve().data());
			}
			if (lab == 6) {
				line = gcnew String(lab7_resolve().data());
			}
			if (WinState[1] == "OPENWINDOW") {
				show_answer(line);
				line = L"Решение открыто в другом окне.";
			}
			make_text->Start();
			WinState[1] = "wait";
		}
		if (count2 < 100) {
			move2 += (100 - move2) * 0.06;
			this->button5->Location = System::Drawing::Point(110, int(601 - move2 * 2));
			this->button6->Top = int(12 - move2 * 0.9);
			if (this->picture2->Left < 704) {
				if (lab == 1 && task == 10) {
					this->picture1->Top = int(146 - move2 * 0.9);
					this->picture2->Top = int(97 - move2 * 0.9);
				}
				else {
					this->picture1->Top = int(97 - move2 * 0.9);
					this->picture2->Top = int(195 - move2 * 0.9);
				}
			}
			else {
				this->picture1->Top = int(146 - move2 * 0.9);
			}
			this->label1->Top = int(300 - move2 * 0.9);
			this->label2->Top = int(96 - move2 * 0.9);
			this->input1->Top = int(29 - move2 * 0.9);
		}
		if (count2 == 100) {
			this->button6->Enabled = false;
			this->input1->Enabled = false;
			count2 = 0;
			move2 = 0;
			task_resolve->Stop();
		}
		count2++;
	}
	public: System::Void to_settings_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 == 0) {
			WinState[0] = "settings";
			task = 0;
			settings_reload();
			this->button4->Size = System::Drawing::Size(400, 75);
			this->button4->Enabled = true;
			this->button5->Size = System::Drawing::Size(235, 90);
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->button5->Enabled = true;
			this->button6->Size = System::Drawing::Size(175, 90);
			this->button6->Text = L"В меню";
			this->button6->Enabled = true;
			this->button7->Size = System::Drawing::Size(235, 90);
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15));
			this->button7->Enabled = true;
			this->label1->Size = System::Drawing::Size(250, 65);
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Text = L"Настройки";
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->BringToFront();
			y3 = this->label1->Top;
		}
		if (count2 < 100) {
			move2 += (100 - move2) * 0.06;
			this->picture1->Size = System::Drawing::Size(int(310 - move2 * 1.6), int(125 - move2 * 0.65));
			this->picture1->Left = int(186 - move2 * 1.76);
			this->picture2->Size = System::Drawing::Size(int(185 - move2), int(65 - move2 * 0.35));
			this->picture2->Left = int(248 - move2 * 2.06);
			this->button1->Location = System::Drawing::Point(int(191 - move2 * 7), this->button1->Top);
			this->button2->Location = System::Drawing::Point(int(191 - move2 * 7), this->button2->Top);
			this->button3->Location = System::Drawing::Point(int(191 - move2 * 7), this->button3->Top);
			this->button4->Location = System::Drawing::Point(int(841 - move2 * 7), 315);
			this->button5->Location = System::Drawing::Point(int(712 - move2 * 7), 401);
			this->button6->Location = System::Drawing::Point(int(953 - move2 * 7), 401);
			this->button7->Location = System::Drawing::Point(int(1134 - move2 * 7), 401);
			this->label1->Location = System::Drawing::Point(int(916 - move2 * 7), this->label1->Top);
			this->label2->Location = System::Drawing::Point(int(841 - move2 * 7), 122);
			y1 = int(6 + move2 * 0.04);
			y2 = int(125 - move2 * 0.58);
		}
		if (count2 == 100) {
			this->button1->Enabled = false;
			this->button2->Enabled = false;
			this->button3->Enabled = false;
			move2 = 0;
			count2 = 0;
			to_settings->Stop();
		}
		count2++;
	}
	public: System::Void menu_settings_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 == 0) {
			WinState[0] = "menu";
			this->button1->Enabled = true;
			this->button2->Enabled = true;
			this->button3->Enabled = true;
			task = 0;
		}
		if (count2 < 100) {
			move2 += (100 - move2) * 0.06;
			this->picture1->Size = System::Drawing::Size(int(150 + move2 * 1.6 + 1), int(60 + move2 * 0.65 + 1));
			this->picture1->Left = int(10 + move2 * 1.76 + 1);
			this->picture2->Size = System::Drawing::Size(int(85 + move2 + 1), int(30 + move2 * 0.35 + 1));
			this->picture2->Left = int(42 + move2 * 2.06 + 1);
			this->button1->Location = System::Drawing::Point(int(-509 + move2 * 7 + 2), 199);
			this->button2->Location = System::Drawing::Point(int(-509 + move2 * 7 + 2), 298);
			this->button3->Location = System::Drawing::Point(int(-509 + move2 * 7 + 2), 397);
			this->button4->Location = System::Drawing::Point(int(141 + move2 * 7 + 2), 315);
			this->button5->Location = System::Drawing::Point(int(12 + move2 * 7 + 2), 401);
			this->button6->Location = System::Drawing::Point(int(253 + move2 * 7 + 2), 401);
			this->button7->Location = System::Drawing::Point(int(434 + move2 * 7 + 2), 401);
			this->label1->Left = int(216 + move2 * 7 + 2);
			this->label2->Left = int(141 + move2 * 7 + 2);
			y1 = int(10 - move2 * 0.04 - 2);
			y2 = int(67 + move2 * 0.58 + 2);
		}
		if (count2 == 100) {
			this->button4->Enabled = false;
			this->button5->Enabled = false;
			this->button6->Enabled = false;
			this->button7->Enabled = false;
			this->button8->Enabled = false;
			this->button9->Enabled = false;
			this->button10->Enabled = false;
			this->button11->Enabled = false;
			count2 = 0;
			move2 = 0;
			menu_settings->Stop();
		}
		count2++;
	}
	};
}