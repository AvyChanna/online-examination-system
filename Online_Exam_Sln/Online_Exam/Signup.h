#pragma once


#include "prof_signup.h"
#include "signup_student.h"



namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  profBtn;

	private: System::Windows::Forms::Button^  studBtn;

	private: System::Windows::Forms::Panel^  signupPanel;
	private: System::Windows::Forms::Button^  loginBtn;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Signup::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->profBtn = (gcnew System::Windows::Forms::Button());
			this->studBtn = (gcnew System::Windows::Forms::Button());
			this->signupPanel = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->loginBtn);
			this->panel1->Controls->Add(this->profBtn);
			this->panel1->Controls->Add(this->studBtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(249, 532);
			this->panel1->TabIndex = 40;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->panel4->Location = System::Drawing::Point(3, 149);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(12, 46);
			this->panel4->TabIndex = 7;
			// 
			// loginBtn
			// 
			this->loginBtn->AutoSize = true;
			this->loginBtn->FlatAppearance->BorderSize = 0;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::Transparent;
			this->loginBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginBtn.Image")));
			this->loginBtn->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->loginBtn->Location = System::Drawing::Point(12, 456);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(237, 46);
			this->loginBtn->TabIndex = 43;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			this->loginBtn->Click += gcnew System::EventHandler(this, &Signup::loginBtn_Click);
			// 
			// profBtn
			// 
			this->profBtn->AutoSize = true;
			this->profBtn->FlatAppearance->BorderSize = 0;
			this->profBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->profBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profBtn->ForeColor = System::Drawing::Color::Transparent;
			this->profBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profBtn.Image")));
			this->profBtn->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->profBtn->Location = System::Drawing::Point(12, 233);
			this->profBtn->Name = L"profBtn";
			this->profBtn->Size = System::Drawing::Size(237, 46);
			this->profBtn->TabIndex = 42;
			this->profBtn->Text = L"Professor";
			this->profBtn->UseVisualStyleBackColor = true;
			this->profBtn->Click += gcnew System::EventHandler(this, &Signup::profBtn_Click);
			// 
			// studBtn
			// 
			this->studBtn->AutoSize = true;
			this->studBtn->FlatAppearance->BorderSize = 0;
			this->studBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->studBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studBtn->ForeColor = System::Drawing::Color::Transparent;
			this->studBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"studBtn.Image")));
			this->studBtn->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->studBtn->Location = System::Drawing::Point(12, 149);
			this->studBtn->Name = L"studBtn";
			this->studBtn->Size = System::Drawing::Size(237, 46);
			this->studBtn->TabIndex = 41;
			this->studBtn->Text = L"Student";
			this->studBtn->UseVisualStyleBackColor = true;
			this->studBtn->Click += gcnew System::EventHandler(this, &Signup::studBtn_Click);
			// 
			// signupPanel
			// 
			this->signupPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->signupPanel->Location = System::Drawing::Point(249, 12);
			this->signupPanel->Name = L"signupPanel";
			this->signupPanel->Size = System::Drawing::Size(757, 520);
			this->signupPanel->TabIndex = 41;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(249, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(757, 10);
			this->panel3->TabIndex = 42;
			// 
			// Signup
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ClientSize = System::Drawing::Size(1006, 532);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->signupPanel);
			this->Controls->Add(this->panel1);
			this->Name = L"Signup";
			this->Text = L"Signup";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void studBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 signupPanel->Controls->Clear();
			 signup_student ^ ref = gcnew signup_student();
			 signupPanel->Controls->Add(ref);
}
private: System::Void profBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 signupPanel->Controls->Clear();
			 prof_signup ^ ref = gcnew prof_signup();
			 signupPanel->Controls->Add(ref);
}
private: System::Void loginBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			
			
			 
			 
}

};
}
