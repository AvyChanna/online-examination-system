#pragma once
//#include "Database.h"
//#include "ProfForm.h"
#include "StudentProfile.h"
#include "StudentEditProfile.h"
#include "GroupEnroll.h"
#include "Unenroll.h"
#include "UpcomingTests.h"
#include "PastTest.h"
#include "Login.h"
#include"displayAnswer.h"
#include "ChangePassword.h"
#include "Instructions.h"

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

	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnEditProfileStudent;

	private: System::Windows::Forms::Button^  btnPastTests;
	private: System::Windows::Forms::Button^  btnUnenroll;

	private: System::Windows::Forms::Button^  btnUpcomingTests;
	private: System::Windows::Forms::Button^  btnMyProfileStudent;
	private: System::Windows::Forms::Button^  btnLogOut;



	private: System::Windows::Forms::Button^  btnCertificates;
	private: System::Windows::Forms::Button^  btnEnroll;
	private: System::Windows::Forms::Panel^  contentPanel;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btnChangePass;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnChangePass = (gcnew System::Windows::Forms::Button());
			this->btnEnroll = (gcnew System::Windows::Forms::Button());
			this->btnMyProfileStudent = (gcnew System::Windows::Forms::Button());
			this->btnCertificates = (gcnew System::Windows::Forms::Button());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnEditProfileStudent = (gcnew System::Windows::Forms::Button());
			this->btnPastTests = (gcnew System::Windows::Forms::Button());
			this->btnUnenroll = (gcnew System::Windows::Forms::Button());
			this->btnUpcomingTests = (gcnew System::Windows::Forms::Button());
			this->contentPanel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btnChangePass);
			this->panel1->Controls->Add(this->btnEnroll);
			this->panel1->Controls->Add(this->btnMyProfileStudent);
			this->panel1->Controls->Add(this->btnCertificates);
			this->panel1->Controls->Add(this->btnLogOut);
			this->panel1->Controls->Add(this->btnEditProfileStudent);
			this->panel1->Controls->Add(this->btnPastTests);
			this->panel1->Controls->Add(this->btnUnenroll);
			this->panel1->Controls->Add(this->btnUpcomingTests);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 532);
			this->panel1->TabIndex = 1;
			// 
			// btnChangePass
			// 
			this->btnChangePass->FlatAppearance->BorderSize = 0;
			this->btnChangePass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnChangePass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChangePass->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnChangePass->Location = System::Drawing::Point(15, 174);
			this->btnChangePass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnChangePass->Name = L"btnChangePass";
			this->btnChangePass->Size = System::Drawing::Size(150, 46);
			this->btnChangePass->TabIndex = 11;
			this->btnChangePass->Text = L"Change Password";
			this->btnChangePass->UseVisualStyleBackColor = true;
			this->btnChangePass->Click += gcnew System::EventHandler(this, &StudentForm::btnChangePass_Click);
			this->btnChangePass->MouseLeave += gcnew System::EventHandler(this, &StudentForm::btnChangePass_MouseLeave);
			this->btnChangePass->MouseHover += gcnew System::EventHandler(this, &StudentForm::btnChangePass_MouseHover);
			// 
			// btnEnroll
			// 
			this->btnEnroll->FlatAppearance->BorderSize = 0;
			this->btnEnroll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnroll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnroll->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEnroll->Location = System::Drawing::Point(15, 324);
			this->btnEnroll->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEnroll->Name = L"btnEnroll";
			this->btnEnroll->Size = System::Drawing::Size(150, 46);
			this->btnEnroll->TabIndex = 10;
			this->btnEnroll->Text = L"Enroll to a Group";
			this->btnEnroll->UseVisualStyleBackColor = true;
			this->btnEnroll->Click += gcnew System::EventHandler(this, &StudentForm::btnEnroll_Click);
			this->btnEnroll->MouseLeave += gcnew System::EventHandler(this, &StudentForm::btnEnroll_MouseLeave);
			this->btnEnroll->MouseHover += gcnew System::EventHandler(this, &StudentForm::btnEnroll_MouseHover);
			// 
			// btnMyProfileStudent
			// 
			this->btnMyProfileStudent->FlatAppearance->BorderSize = 0;
			this->btnMyProfileStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMyProfileStudent->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMyProfileStudent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMyProfileStudent->Location = System::Drawing::Point(12, 74);
			this->btnMyProfileStudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnMyProfileStudent->Name = L"btnMyProfileStudent";
			this->btnMyProfileStudent->Size = System::Drawing::Size(150, 46);
			this->btnMyProfileStudent->TabIndex = 2;
			this->btnMyProfileStudent->Text = L"My Profile";
			this->btnMyProfileStudent->UseVisualStyleBackColor = true;
			this->btnMyProfileStudent->Click += gcnew System::EventHandler(this, &StudentForm::btnMyProfileStudent_Click);
			this->btnMyProfileStudent->MouseLeave += gcnew System::EventHandler(this, &StudentForm::btnMyProfileStudent_MouseLeave);
			this->btnMyProfileStudent->MouseHover += gcnew System::EventHandler(this, &StudentForm::btnMyProfileStudent_MouseHover);
			// 
			// btnCertificates
			// 
			this->btnCertificates->FlatAppearance->BorderSize = 0;
			this->btnCertificates->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCertificates->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCertificates->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCertificates->Location = System::Drawing::Point(15, 434);
			this->btnCertificates->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCertificates->Name = L"btnCertificates";
			this->btnCertificates->Size = System::Drawing::Size(150, 46);
			this->btnCertificates->TabIndex = 9;
			this->btnCertificates->Text = L"Certificates";
			this->btnCertificates->UseVisualStyleBackColor = true;
			this->btnCertificates->Click += gcnew System::EventHandler(this, &StudentForm::btnCertificates_Click);
			this->btnCertificates->MouseLeave += gcnew System::EventHandler(this, &StudentForm::btnCertificates_MouseLeave);
			this->btnCertificates->MouseHover += gcnew System::EventHandler(this, &StudentForm::btnCertificates_MouseHover);
			// 
			// btnLogOut
			// 
			this->btnLogOut->FlatAppearance->BorderSize = 0;
			this->btnLogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogOut->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnLogOut->Location = System::Drawing::Point(15, 484);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(150, 46);
			this->btnLogOut->TabIndex = 8;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->UseVisualStyleBackColor = true;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &StudentForm::btnLogOut_Click);
			this->btnLogOut->MouseLeave += gcnew System::EventHandler(this, &StudentForm::btnLogOut_MouseLeave);
			this->btnLogOut->MouseHover += gcnew System::EventHandler(this, &StudentForm::btnLogOut_MouseHover);
			// 
			// btnEditProfileStudent
			// 
			this->btnEditProfileStudent->FlatAppearance->BorderSize = 0;
			this->btnEditProfileStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditProfileStudent->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditProfileStudent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEditProfileStudent->Location = System::Drawing::Point(12, 124);
			this->btnEditProfileStudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEditProfileStudent->Name = L"btnEditProfileStudent";
			this->btnEditProfileStudent->Size = System::Drawing::Size(150, 46);
			this->btnEditProfileStudent->TabIndex = 6;
			this->btnEditProfileStudent->Text = L"Edit Profile";
			this->btnEditProfileStudent->UseVisualStyleBackColor = true;
			this->btnEditProfileStudent->Click += gcnew System::EventHandler(this, &StudentForm::btnEditProfileStudent_Click);
			this->btnEditProfileStudent->MouseLeave += gcnew System::EventHandler(this, &StudentForm::btnEditProfileStudent_MouseLeave);
			this->btnEditProfileStudent->MouseHover += gcnew System::EventHandler(this, &StudentForm::btnEditProfileStudent_MouseHover);
			// 
			// btnPastTests
			// 
			this->btnPastTests->FlatAppearance->BorderSize = 0;
			this->btnPastTests->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPastTests->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPastTests->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnPastTests->Location = System::Drawing::Point(15, 274);
			this->btnPastTests->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPastTests->Name = L"btnPastTests";
			this->btnPastTests->Size = System::Drawing::Size(150, 46);
			this->btnPastTests->TabIndex = 4;
			this->btnPastTests->Text = L"Past Tests";
			this->btnPastTests->UseVisualStyleBackColor = true;
			this->btnPastTests->Click += gcnew System::EventHandler(this, &StudentForm::btnPastTests_Click);
			this->btnPastTests->MouseLeave += gcnew System::EventHandler(this, &StudentForm::btnPastTests_MouseLeave);
			this->btnPastTests->MouseHover += gcnew System::EventHandler(this, &StudentForm::btnPastTests_MouseHover);
			// 
			// btnUnenroll
			// 
			this->btnUnenroll->FlatAppearance->BorderSize = 0;
			this->btnUnenroll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUnenroll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUnenroll->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnUnenroll->Location = System::Drawing::Point(15, 374);
			this->btnUnenroll->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUnenroll->Name = L"btnUnenroll";
			this->btnUnenroll->Size = System::Drawing::Size(150, 69);
			this->btnUnenroll->TabIndex = 5;
			this->btnUnenroll->Text = L"Unenroll me from a Group";
			this->btnUnenroll->UseVisualStyleBackColor = true;
			this->btnUnenroll->Click += gcnew System::EventHandler(this, &StudentForm::btnUnenroll_Click);
			this->btnUnenroll->MouseLeave += gcnew System::EventHandler(this, &StudentForm::btnUnenroll_MouseLeave);
			this->btnUnenroll->MouseHover += gcnew System::EventHandler(this, &StudentForm::btnUnenroll_MouseHover);
			// 
			// btnUpcomingTests
			// 
			this->btnUpcomingTests->FlatAppearance->BorderSize = 0;
			this->btnUpcomingTests->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpcomingTests->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpcomingTests->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnUpcomingTests->Location = System::Drawing::Point(12, 224);
			this->btnUpcomingTests->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpcomingTests->Name = L"btnUpcomingTests";
			this->btnUpcomingTests->Size = System::Drawing::Size(150, 46);
			this->btnUpcomingTests->TabIndex = 3;
			this->btnUpcomingTests->Text = L"Upcoming Tests";
			this->btnUpcomingTests->UseVisualStyleBackColor = true;
			this->btnUpcomingTests->Click += gcnew System::EventHandler(this, &StudentForm::btnUpcomingTests_Click);
			this->btnUpcomingTests->MouseLeave += gcnew System::EventHandler(this, &StudentForm::btnUpcomingTests_MouseLeave);
			this->btnUpcomingTests->MouseHover += gcnew System::EventHandler(this, &StudentForm::btnUpcomingTests_MouseHover);
			// 
			// contentPanel
			// 
			this->contentPanel->Location = System::Drawing::Point(206, 0);
			this->contentPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(915, 532);
			this->contentPanel->TabIndex = 3;
			this->contentPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentForm::contentPanel_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(200, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(10, 532);
			this->panel2->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(54, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(60, 57);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1121, 532);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->contentPanel);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			this->Load += gcnew System::EventHandler(this, &StudentForm::StudentForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btnEditProfileStudent_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 StudentEditProfile ^ usr = gcnew StudentEditProfile();
			 contentPanel->Controls->Add(usr);
			 btnEditProfileStudent->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btnMyProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUpcomingTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
		     btnUnenroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnEnroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCertificates->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnChangePass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);

}

private: System::Void btnMyProfileStudent_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 StudentProfile ^ usr = gcnew StudentProfile();
			 contentPanel->Controls->Add(usr);
			 btnEditProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileStudent->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btnUpcomingTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUnenroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnEnroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCertificates->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnChangePass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);

}
private: System::Void btnUpcomingTests_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 UpcomingTests ^ usr = gcnew UpcomingTests();
			 contentPanel->Controls->Add(usr);
			 btnEditProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUpcomingTests->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btnPastTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUnenroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnEnroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCertificates->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnChangePass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
}
private: System::Void btnPastTests_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 //displayAnswer ^ usr = gcnew displayAnswer(11);
			 PastTest ^ usr = gcnew PastTest();
			 contentPanel->Controls->Add(usr);
			 btnEditProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUpcomingTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTests->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btnUnenroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnEnroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCertificates->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnChangePass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
}
private: System::Void btnUnenroll_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 Unenroll ^ usr = gcnew Unenroll();
			 contentPanel->Controls->Add(usr);
			 btnEditProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUpcomingTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUnenroll->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btnEnroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCertificates->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnChangePass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
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
			 btnEditProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUpcomingTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUnenroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnEnroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCertificates->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnChangePass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
}
private: System::Void btnEnroll_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 GroupEnroll ^ grp = gcnew GroupEnroll();
			 contentPanel->Controls->Add(grp);
			 btnEditProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUpcomingTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUnenroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnEnroll->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btnCertificates->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
		 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
		 btnChangePass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
}
private: System::Void btnLogOut_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 btnEditProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUpcomingTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUnenroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnEnroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCertificates->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btnChangePass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
		
}

private: System::Void btnCertificates_Click(System::Object^  sender, System::EventArgs^  e) {
			 btnEditProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUpcomingTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUnenroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnEnroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCertificates->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnChangePass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);

}
private: System::Void btnMyProfileStudent_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnMyProfileStudent->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnMyProfileStudent_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnMyProfileStudent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			 
}
private: System::Void btnEditProfileStudent_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnEditProfileStudent->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnEditProfileStudent_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnEditProfileStudent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;

}
private: System::Void btnUpcomingTests_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnUpcomingTests->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnUpcomingTests_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnUpcomingTests->ForeColor = System::Drawing::SystemColors::ButtonHighlight;

}
private: System::Void btnPastTests_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnPastTests->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnPastTests_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnPastTests->ForeColor = System::Drawing::SystemColors::ButtonHighlight;

}
private: System::Void btnUnenroll_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnUnenroll->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnUnenroll_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnUnenroll->ForeColor = System::Drawing::SystemColors::ButtonHighlight;

}
private: System::Void btnEnroll_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnEnroll->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnEnroll_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnEnroll->ForeColor = System::Drawing::SystemColors::ButtonHighlight;

}
private: System::Void btnLogOut_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnLogOut->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnLogOut_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnLogOut->ForeColor = System::Drawing::SystemColors::ButtonHighlight;

}
private: System::Void btnCertificates_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnCertificates->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnCertificates_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnCertificates->ForeColor = System::Drawing::SystemColors::ButtonHighlight;

}

private: System::Void btnChangePass_Click(System::Object^  sender, System::EventArgs^  e) {
			 contentPanel->Controls->Clear();
			 ChangePassword ^ ch = gcnew ChangePassword();
			 contentPanel->Controls->Add(ch); 
			 btnEditProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileStudent->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUpcomingTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTests->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnUnenroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnEnroll->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCertificates->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnChangePass->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
}


private: System::Void btnChangePass_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnChangePass->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnChangePass_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnChangePass->ForeColor = System::Drawing::SystemColors::ButtonHighlight;

}

};
}
