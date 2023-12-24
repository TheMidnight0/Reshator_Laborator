#pragma once

namespace ReshatorLaborator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Answer
	/// </summary>
	public ref class Answer : public System::Windows::Forms::Form
	{
	public:
		Answer(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Answer()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBox;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Answer::typeid));
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox
			// 
			this->textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->textBox->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textBox->Location = System::Drawing::Point(-1, -1);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->ReadOnly = true;
			this->textBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox->Size = System::Drawing::Size(586, 456);
			this->textBox->TabIndex = 0;
			// 
			// Answer
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(582, 453);
			this->Controls->Add(this->textBox);
			this->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Answer";
			this->Text = L"Reshator Laborator Series - Answer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}