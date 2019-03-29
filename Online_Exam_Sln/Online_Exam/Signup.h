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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->profBtn = (gcnew System::Windows::Forms::Button());
			this->studBtn = (gcnew System::Windows::Forms::Button());
			this->signupPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->studBtn);
			this->panel1->Controls->Add(this->loginBtn);
			this->panel1->Controls->Add(this->profBtn);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(781, 48);
			this->panel1->TabIndex = 40;
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::White;
			this->loginBtn->Location = System::Drawing::Point(0, 0);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(180, 48);
			this->loginBtn->TabIndex = 43;
			this->loginBtn->Text = L"      Login";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &Signup::loginBtn_Click);
			// 
			// profBtn
			// 
			this->profBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->profBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->profBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profBtn->ForeColor = System::Drawing::Color::White;
			this->profBtn->Location = System::Drawing::Point(480, 0);
			this->profBtn->Name = L"profBtn";
			this->profBtn->Size = System::Drawing::Size(300, 48);
			this->profBtn->TabIndex = 42;
			this->profBtn->Text = L"Professor";
			this->profBtn->UseVisualStyleBackColor = false;
			this->profBtn->Click += gcnew System::EventHandler(this, &Signup::profBtn_Click);
			// 
			// studBtn
			// 
			this->studBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->studBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->studBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studBtn->ForeColor = System::Drawing::Color::White;
			this->studBtn->Location = System::Drawing::Point(180, 0);
			this->studBtn->Name = L"studBtn";
			this->studBtn->Size = System::Drawing::Size(300, 48);
			this->studBtn->TabIndex = 41;
			this->studBtn->Text = L"Student";
			this->studBtn->UseVisualStyleBackColor = false;
			this->studBtn->Click += gcnew System::EventHandler(this, &Signup::studBtn_Click);
			// 
			// signupPanel
			// 
			this->signupPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->signupPanel->Location = System::Drawing::Point(0, 49);
			this->signupPanel->Name = L"signupPanel";
			this->signupPanel->Size = System::Drawing::Size(780, 441);
			this->signupPanel->TabIndex = 41;
			// 
			// Signup
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 490);
			this->Controls->Add(this->signupPanel);
			this->Controls->Add(this->panel1);
			this->Name = L"Signup";
			this->Text = L"Signup";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void studBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 signupPanel->Controls->Clear();
			 signup_student ^ ref = gcnew signup_student();
			 signupPanel->Controls->Add(ref);
			 studBtn->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 profBtn->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 loginBtn->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);

}
private: System::Void profBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 signupPanel->Controls->Clear();
			 prof_signup ^ ref = gcnew prof_signup();
			 signupPanel->Controls->Add(ref);
			 profBtn->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 studBtn->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 loginBtn->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
}
private: System::Void loginBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 loginBtn->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 profBtn->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 studBtn->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 
			
			 
			 
}
};
}
