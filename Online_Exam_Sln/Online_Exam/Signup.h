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
			this->profBtn = (gcnew System::Windows::Forms::Button());
			this->studBtn = (gcnew System::Windows::Forms::Button());
			this->signupPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->profBtn);
			this->panel1->Controls->Add(this->studBtn);
			this->panel1->Location = System::Drawing::Point(2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(183, 487);
			this->panel1->TabIndex = 40;
			// 
			// profBtn
			// 
			this->profBtn->Location = System::Drawing::Point(3, 120);
			this->profBtn->Name = L"profBtn";
			this->profBtn->Size = System::Drawing::Size(177, 48);
			this->profBtn->TabIndex = 42;
			this->profBtn->Text = L"Professor";
			this->profBtn->UseVisualStyleBackColor = true;
			this->profBtn->Click += gcnew System::EventHandler(this, &Signup::profBtn_Click);
			// 
			// studBtn
			// 
			this->studBtn->Location = System::Drawing::Point(3, 40);
			this->studBtn->Name = L"studBtn";
			this->studBtn->Size = System::Drawing::Size(177, 46);
			this->studBtn->TabIndex = 41;
			this->studBtn->Text = L"Student";
			this->studBtn->UseVisualStyleBackColor = true;
			this->studBtn->Click += gcnew System::EventHandler(this, &Signup::studBtn_Click);
			// 
			// signupPanel
			// 
			this->signupPanel->Location = System::Drawing::Point(188, 3);
			this->signupPanel->Name = L"signupPanel";
			this->signupPanel->Size = System::Drawing::Size(877, 487);
			this->signupPanel->TabIndex = 41;
			// 
			// Signup
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 490);
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
}
private: System::Void profBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 signupPanel->Controls->Clear();
			 prof_signup ^ ref = gcnew prof_signup();
			 signupPanel->Controls->Add(ref);
}
};
}
