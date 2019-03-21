#pragma once
#ifndef __studentform__
#define __studentform__
#include "Database.h"
#include "ProfForm.h"
#include "StudentProfile.h"
#include "StudentEditProfile.h"
#include "GroupEnroll.h"
#include "Unenroll.h"
#include "UpcomingTests.h"
namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace StudentProfile;
	/// <summary>
	/// Summary for StudentForm
	/// </summary>
	public ref class StudentForm : public System::Windows::Forms::Form
	{
	public:
		StudentForm(void)
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
		~StudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnEditProfileStudent;

	private: System::Windows::Forms::Button^  btnPastTests;
	private: System::Windows::Forms::Button^  btnUnenroll;

	private: System::Windows::Forms::Button^  btnUpcomingTests;
	private: System::Windows::Forms::Button^  btnMyProfileStudent;
	private: System::Windows::Forms::Button^  btnLogOut;


	private: System::Windows::Forms::Button^  btnHelp;
	private: System::Windows::Forms::Button^  btnCertificates;
	private: System::Windows::Forms::Button^  btnEnroll;
	private: System::Windows::Forms::Panel^  contentPanel;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnEnroll = (gcnew System::Windows::Forms::Button());
			this->btnCertificates = (gcnew System::Windows::Forms::Button());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnHelp = (gcnew System::Windows::Forms::Button());
			this->btnEditProfileStudent = (gcnew System::Windows::Forms::Button());
			this->btnPastTests = (gcnew System::Windows::Forms::Button());
			this->btnUnenroll = (gcnew System::Windows::Forms::Button());
			this->btnUpcomingTests = (gcnew System::Windows::Forms::Button());
			this->btnMyProfileStudent = (gcnew System::Windows::Forms::Button());
			this->contentPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(670, 19);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnEnroll);
			this->panel1->Controls->Add(this->btnCertificates);
			this->panel1->Controls->Add(this->btnLogOut);
			this->panel1->Controls->Add(this->btnHelp);
			this->panel1->Controls->Add(this->btnEditProfileStudent);
			this->panel1->Controls->Add(this->btnPastTests);
			this->panel1->Controls->Add(this->btnUnenroll);
			this->panel1->Controls->Add(this->btnUpcomingTests);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(150, 433);
			this->panel1->TabIndex = 1;
			// 
			// btnEnroll
			// 
			this->btnEnroll->Location = System::Drawing::Point(2, 162);
			this->btnEnroll->Margin = System::Windows::Forms::Padding(2);
			this->btnEnroll->Name = L"btnEnroll";
			this->btnEnroll->Size = System::Drawing::Size(150, 37);
			this->btnEnroll->TabIndex = 10;
			this->btnEnroll->Text = L"Enroll to a Group";
			this->btnEnroll->UseVisualStyleBackColor = true;
			this->btnEnroll->Click += gcnew System::EventHandler(this, &StudentForm::btnEnroll_Click);
			// 
			// btnCertificates
			// 
			this->btnCertificates->Location = System::Drawing::Point(0, 244);
			this->btnCertificates->Margin = System::Windows::Forms::Padding(2);
			this->btnCertificates->Name = L"btnCertificates";
			this->btnCertificates->Size = System::Drawing::Size(150, 37);
			this->btnCertificates->TabIndex = 9;
			this->btnCertificates->Text = L"Certificates";
			this->btnCertificates->UseVisualStyleBackColor = true;
			// 
			// btnLogOut
			// 
			this->btnLogOut->Location = System::Drawing::Point(0, 325);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(2);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(150, 37);
			this->btnLogOut->TabIndex = 8;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->UseVisualStyleBackColor = true;
			// 
			// btnHelp
			// 
			this->btnHelp->Location = System::Drawing::Point(0, 284);
			this->btnHelp->Margin = System::Windows::Forms::Padding(2);
			this->btnHelp->Name = L"btnHelp";
			this->btnHelp->Size = System::Drawing::Size(150, 37);
			this->btnHelp->TabIndex = 7;
			this->btnHelp->Text = L"Help";
			this->btnHelp->UseVisualStyleBackColor = true;
			// 
			// btnEditProfileStudent
			// 
			this->btnEditProfileStudent->Location = System::Drawing::Point(0, 41);
			this->btnEditProfileStudent->Margin = System::Windows::Forms::Padding(2);
			this->btnEditProfileStudent->Name = L"btnEditProfileStudent";
			this->btnEditProfileStudent->Size = System::Drawing::Size(150, 37);
			this->btnEditProfileStudent->TabIndex = 6;
			this->btnEditProfileStudent->Text = L"Edit Profile";
			this->btnEditProfileStudent->UseVisualStyleBackColor = true;
			this->btnEditProfileStudent->Click += gcnew System::EventHandler(this, &StudentForm::btnEditProfileStudent_Click);
			// 
			// btnPastTests
			// 
			this->btnPastTests->Location = System::Drawing::Point(0, 122);
			this->btnPastTests->Margin = System::Windows::Forms::Padding(2);
			this->btnPastTests->Name = L"btnPastTests";
			this->btnPastTests->Size = System::Drawing::Size(150, 37);
			this->btnPastTests->TabIndex = 4;
			this->btnPastTests->Text = L"Past Tests";
			this->btnPastTests->UseVisualStyleBackColor = true;
			this->btnPastTests->Click += gcnew System::EventHandler(this, &StudentForm::btnPastTests_Click);
			// 
			// btnUnenroll
			// 
			this->btnUnenroll->Location = System::Drawing::Point(2, 203);
			this->btnUnenroll->Margin = System::Windows::Forms::Padding(2);
			this->btnUnenroll->Name = L"btnUnenroll";
			this->btnUnenroll->Size = System::Drawing::Size(150, 37);
			this->btnUnenroll->TabIndex = 5;
			this->btnUnenroll->Text = L"Unenroll me from a Group";
			this->btnUnenroll->UseVisualStyleBackColor = true;
			this->btnUnenroll->Click += gcnew System::EventHandler(this, &StudentForm::btnUnenroll_Click);
			// 
			// btnUpcomingTests
			// 
			this->btnUpcomingTests->Location = System::Drawing::Point(0, 81);
			this->btnUpcomingTests->Margin = System::Windows::Forms::Padding(2);
			this->btnUpcomingTests->Name = L"btnUpcomingTests";
			this->btnUpcomingTests->Size = System::Drawing::Size(150, 37);
			this->btnUpcomingTests->TabIndex = 3;
			this->btnUpcomingTests->Text = L"Upcoming Tests";
			this->btnUpcomingTests->UseVisualStyleBackColor = true;
			this->btnUpcomingTests->Click += gcnew System::EventHandler(this, &StudentForm::btnUpcomingTests_Click);
			// 
			// btnMyProfileStudent
			// 
			this->btnMyProfileStudent->Location = System::Drawing::Point(0, 0);
			this->btnMyProfileStudent->Margin = System::Windows::Forms::Padding(2);
			this->btnMyProfileStudent->Name = L"btnMyProfileStudent";
			this->btnMyProfileStudent->Size = System::Drawing::Size(150, 37);
			this->btnMyProfileStudent->TabIndex = 2;
			this->btnMyProfileStudent->Text = L"My Profile";
			this->btnMyProfileStudent->UseVisualStyleBackColor = true;
			this->btnMyProfileStudent->Click += gcnew System::EventHandler(this, &StudentForm::btnMyProfileStudent_Click);
			// 
			// contentPanel
			// 
			this->contentPanel->Location = System::Drawing::Point(154, 78);
			this->contentPanel->Margin = System::Windows::Forms::Padding(2);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(677, 344);
			this->contentPanel->TabIndex = 3;
			this->contentPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentForm::contentPanel_Paint);
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 432);
			this->Controls->Add(this->contentPanel);
			this->Controls->Add(this->btnMyProfileStudent);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			this->Load += gcnew System::EventHandler(this, &StudentForm::StudentForm_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnEditProfileStudent_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 StudentEditProfile ^ usr = gcnew StudentEditProfile();
			 contentPanel->Controls->Add(usr);
}

private: System::Void btnMyProfileStudent_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 StudentProfile ^ usr = gcnew StudentProfile();
			 contentPanel->Controls->Add(usr);
}
private: System::Void btnUpcomingTests_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 UpcomingTests ^ usr = gcnew UpcomingTests();
			 contentPanel->Controls->Add(usr);
}
private: System::Void btnPastTests_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
}
private: System::Void btnUnenroll_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 Unenroll ^ usr = gcnew Unenroll();
			 contentPanel->Controls->Add(usr);
}
public: System::Void refreshUnenroll() {
			contentPanel->Controls->Clear();
			contentPanel->Controls->Add(gcnew Unenroll);
}

private: System::Void contentPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void StudentForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 StudentProfile ^ usr = gcnew StudentProfile();
			 contentPanel->Controls->Add(usr);
}
private: System::Void btnEnroll_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 GroupEnroll ^ grp = gcnew GroupEnroll();
			 contentPanel->Controls->Add(grp);
}
};
}
#endif