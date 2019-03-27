#pragma once
#ifndef __studentform__
#define __studentform__
#include "Database.h"
#include "ProfForm.h"
#include "StudentProfile.h"
#include "StudentEditProfile.h"
#include "GroupEnroll.h"
#include "Unenroll.h"
#include "Login.h"
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
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  sidePanel;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->sidePanel = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnEnroll = (gcnew System::Windows::Forms::Button());
			this->btnCertificates = (gcnew System::Windows::Forms::Button());
			this->btnMyProfileStudent = (gcnew System::Windows::Forms::Button());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnHelp = (gcnew System::Windows::Forms::Button());
			this->btnEditProfileStudent = (gcnew System::Windows::Forms::Button());
			this->btnPastTests = (gcnew System::Windows::Forms::Button());
			this->btnUnenroll = (gcnew System::Windows::Forms::Button());
			this->btnUpcomingTests = (gcnew System::Windows::Forms::Button());
			this->contentPanel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->sidePanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1049, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel1->Controls->Add(this->sidePanel);
			this->panel1->Controls->Add(this->btnEnroll);
			this->panel1->Controls->Add(this->btnCertificates);
			this->panel1->Controls->Add(this->btnMyProfileStudent);
			this->panel1->Controls->Add(this->btnLogOut);
			this->panel1->Controls->Add(this->btnHelp);
			this->panel1->Controls->Add(this->btnEditProfileStudent);
			this->panel1->Controls->Add(this->btnPastTests);
			this->panel1->Controls->Add(this->btnUnenroll);
			this->panel1->Controls->Add(this->btnUpcomingTests);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(249, 532);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentForm::panel1_Paint);
			// 
			// sidePanel
			// 
			this->sidePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->sidePanel->Controls->Add(this->flowLayoutPanel1);
			this->sidePanel->Location = System::Drawing::Point(0, 29);
			this->sidePanel->Name = L"sidePanel";
			this->sidePanel->Size = System::Drawing::Size(10, 46);
			this->sidePanel->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(7, 28);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(200, 100);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// btnEnroll
			// 
			this->btnEnroll->FlatAppearance->BorderSize = 0;
			this->btnEnroll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnroll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnroll->ForeColor = System::Drawing::Color::White;
			this->btnEnroll->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnroll.Image")));
			this->btnEnroll->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnEnroll->Location = System::Drawing::Point(12, 228);
			this->btnEnroll->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEnroll->Name = L"btnEnroll";
			this->btnEnroll->Size = System::Drawing::Size(237, 46);
			this->btnEnroll->TabIndex = 10;
			this->btnEnroll->Text = L"Enroll to a Group";
			this->btnEnroll->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnEnroll->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnEnroll->UseVisualStyleBackColor = true;
			this->btnEnroll->Click += gcnew System::EventHandler(this, &StudentForm::btnEnroll_Click);
			// 
			// btnCertificates
			// 
			this->btnCertificates->FlatAppearance->BorderSize = 0;
			this->btnCertificates->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCertificates->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCertificates->ForeColor = System::Drawing::Color::White;
			this->btnCertificates->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCertificates.Image")));
			this->btnCertificates->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnCertificates->Location = System::Drawing::Point(9, 329);
			this->btnCertificates->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCertificates->Name = L"btnCertificates";
			this->btnCertificates->Size = System::Drawing::Size(237, 46);
			this->btnCertificates->TabIndex = 9;
			this->btnCertificates->Text = L"Certificates";
			this->btnCertificates->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnCertificates->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCertificates->UseVisualStyleBackColor = true;
			this->btnCertificates->Click += gcnew System::EventHandler(this, &StudentForm::btnCertificates_Click);
			// 
			// btnMyProfileStudent
			// 
			this->btnMyProfileStudent->FlatAppearance->BorderSize = 0;
			this->btnMyProfileStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMyProfileStudent->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMyProfileStudent->ForeColor = System::Drawing::Color::White;
			this->btnMyProfileStudent->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMyProfileStudent.Image")));
			this->btnMyProfileStudent->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnMyProfileStudent->Location = System::Drawing::Point(10, 29);
			this->btnMyProfileStudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnMyProfileStudent->Name = L"btnMyProfileStudent";
			this->btnMyProfileStudent->Size = System::Drawing::Size(237, 46);
			this->btnMyProfileStudent->TabIndex = 2;
			this->btnMyProfileStudent->Text = L"My Profile";
			this->btnMyProfileStudent->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnMyProfileStudent->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnMyProfileStudent->UseVisualStyleBackColor = true;
			this->btnMyProfileStudent->Click += gcnew System::EventHandler(this, &StudentForm::btnMyProfileStudent_Click);
			// 
			// btnLogOut
			// 
			this->btnLogOut->FlatAppearance->BorderSize = 0;
			this->btnLogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogOut->ForeColor = System::Drawing::Color::White;
			this->btnLogOut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogOut.Image")));
			this->btnLogOut->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnLogOut->Location = System::Drawing::Point(9, 429);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(237, 46);
			this->btnLogOut->TabIndex = 8;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnLogOut->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnLogOut->UseVisualStyleBackColor = true;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &StudentForm::btnLogOut_Click);
			// 
			// btnHelp
			// 
			this->btnHelp->FlatAppearance->BorderSize = 0;
			this->btnHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHelp->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHelp->ForeColor = System::Drawing::Color::White;
			this->btnHelp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHelp.Image")));
			this->btnHelp->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnHelp->Location = System::Drawing::Point(9, 379);
			this->btnHelp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnHelp->Name = L"btnHelp";
			this->btnHelp->Size = System::Drawing::Size(237, 46);
			this->btnHelp->TabIndex = 7;
			this->btnHelp->Text = L"Help";
			this->btnHelp->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnHelp->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnHelp->UseVisualStyleBackColor = true;
			this->btnHelp->Click += gcnew System::EventHandler(this, &StudentForm::btnHelp_Click);
			// 
			// btnEditProfileStudent
			// 
			this->btnEditProfileStudent->FlatAppearance->BorderSize = 0;
			this->btnEditProfileStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditProfileStudent->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditProfileStudent->ForeColor = System::Drawing::Color::White;
			this->btnEditProfileStudent->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditProfileStudent.Image")));
			this->btnEditProfileStudent->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnEditProfileStudent->Location = System::Drawing::Point(9, 79);
			this->btnEditProfileStudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEditProfileStudent->Name = L"btnEditProfileStudent";
			this->btnEditProfileStudent->Size = System::Drawing::Size(237, 46);
			this->btnEditProfileStudent->TabIndex = 6;
			this->btnEditProfileStudent->Text = L"Edit Profile";
			this->btnEditProfileStudent->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnEditProfileStudent->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnEditProfileStudent->UseVisualStyleBackColor = true;
			this->btnEditProfileStudent->Click += gcnew System::EventHandler(this, &StudentForm::btnEditProfileStudent_Click);
			// 
			// btnPastTests
			// 
			this->btnPastTests->FlatAppearance->BorderSize = 0;
			this->btnPastTests->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPastTests->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPastTests->ForeColor = System::Drawing::Color::White;
			this->btnPastTests->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPastTests.Image")));
			this->btnPastTests->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnPastTests->Location = System::Drawing::Point(9, 179);
			this->btnPastTests->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPastTests->Name = L"btnPastTests";
			this->btnPastTests->Size = System::Drawing::Size(237, 46);
			this->btnPastTests->TabIndex = 4;
			this->btnPastTests->Text = L"Past Tests";
			this->btnPastTests->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnPastTests->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnPastTests->UseVisualStyleBackColor = true;
			this->btnPastTests->Click += gcnew System::EventHandler(this, &StudentForm::btnPastTests_Click);
			// 
			// btnUnenroll
			// 
			this->btnUnenroll->FlatAppearance->BorderSize = 0;
			this->btnUnenroll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUnenroll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUnenroll->ForeColor = System::Drawing::Color::White;
			this->btnUnenroll->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnUnenroll.Image")));
			this->btnUnenroll->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnUnenroll->Location = System::Drawing::Point(12, 279);
			this->btnUnenroll->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUnenroll->Name = L"btnUnenroll";
			this->btnUnenroll->Size = System::Drawing::Size(237, 46);
			this->btnUnenroll->TabIndex = 5;
			this->btnUnenroll->Text = L"Unenroll from a group";
			this->btnUnenroll->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnUnenroll->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnUnenroll->UseVisualStyleBackColor = true;
			this->btnUnenroll->Click += gcnew System::EventHandler(this, &StudentForm::btnUnenroll_Click);
			// 
			// btnUpcomingTests
			// 
			this->btnUpcomingTests->FlatAppearance->BorderSize = 0;
			this->btnUpcomingTests->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpcomingTests->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpcomingTests->ForeColor = System::Drawing::Color::White;
			this->btnUpcomingTests->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnUpcomingTests.Image")));
			this->btnUpcomingTests->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnUpcomingTests->Location = System::Drawing::Point(9, 129);
			this->btnUpcomingTests->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpcomingTests->Name = L"btnUpcomingTests";
			this->btnUpcomingTests->Size = System::Drawing::Size(237, 46);
			this->btnUpcomingTests->TabIndex = 3;
			this->btnUpcomingTests->Text = L"Upcoming Tests";
			this->btnUpcomingTests->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnUpcomingTests->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnUpcomingTests->UseVisualStyleBackColor = true;
			this->btnUpcomingTests->Click += gcnew System::EventHandler(this, &StudentForm::btnUpcomingTests_Click);
			// 
			// contentPanel
			// 
			this->contentPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->contentPanel->Location = System::Drawing::Point(249, 96);
			this->contentPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(1042, 436);
			this->contentPanel->TabIndex = 3;
			this->contentPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentForm::contentPanel_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(249, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1042, 10);
			this->panel2->TabIndex = 4;
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1291, 532);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->contentPanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			this->Load += gcnew System::EventHandler(this, &StudentForm::StudentForm_Load);
			this->panel1->ResumeLayout(false);
			this->sidePanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnEditProfileStudent_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 StudentEditProfile ^ usr = gcnew StudentEditProfile();
			 contentPanel->Controls->Add(usr);

			 //for sidepanel scrolling dont omit this one
			 sidePanel->Height = btnEditProfileStudent->Height;
			 sidePanel->Top = btnEditProfileStudent->Top;
}

private: System::Void btnMyProfileStudent_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 StudentProfile ^ usr = gcnew StudentProfile();
			 contentPanel->Controls->Add(usr);

			 //for sidepanel scrolling dont omit this one
			 sidePanel->Height = btnMyProfileStudent->Height;
			 sidePanel->Top = btnMyProfileStudent->Top;

}
private: System::Void btnUpcomingTests_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();

			 //for sidepanel scrolling dont omit this one
			 sidePanel->Height = btnUpcomingTests->Height;
			 sidePanel->Top = btnUpcomingTests->Top;
}
private: System::Void btnPastTests_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();

			 //for sidepanel scrolling dont omit this one
			 sidePanel->Height = btnPastTests->Height;
			 sidePanel->Top = btnPastTests->Top;
}
private: System::Void btnUnenroll_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 Unenroll ^ usr = gcnew Unenroll();
			 contentPanel->Controls->Add(usr);
			 //for side panel scrollin
			 sidePanel->Height = btnUnenroll->Height;
			 sidePanel->Top = btnUnenroll->Top;
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
			 //scroll in
			 sidePanel->Height = btnMyProfileStudent->Height;
			 sidePanel->Top = btnMyProfileStudent->Top;

}
private: System::Void btnEnroll_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 GroupEnroll ^ grp = gcnew GroupEnroll();
			 contentPanel->Controls->Add(grp);
			 //for side panel scrollin
			 sidePanel->Height = btnEnroll->Height;
			 sidePanel->Top = btnEnroll->Top;

}
private: System::Void btnLogOut_Click(System::Object^  sender, System::EventArgs^  e) {
		
}


private: System::Void btnCertificates_Click(System::Object^  sender, System::EventArgs^  e) {
			 //for side panel scrollin
			 sidePanel->Height = btnCertificates->Height;
			 sidePanel->Top = btnCertificates->Top;
}
private: System::Void btnHelp_Click(System::Object^  sender, System::EventArgs^  e) {
			 //for side panel scrollin
			 sidePanel->Height = btnHelp->Height;
			 sidePanel->Top = btnHelp->Top;
}

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
#endif