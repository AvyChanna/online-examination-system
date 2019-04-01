#pragma once
#ifndef __profform__
#define __profform__
#include "ProfProfile.h"
#include "ProfEditProfile.h"
#include "CreateGroup.h"
#include "CreateExam.h"
#include "PastTestsSet.h"
#include "AdminForm.h"
#include"AddQuestions.h"
#include "ChangePassword.h"
namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Questions;

	//using namespace ProfProfile;
	/// <summary>
	/// Summary for ProfForm
	/// </summary>
	public ref class ProfForm : public System::Windows::Forms::Form
	{
	public:
		void AddExam(int aq){}
		ProfForm()
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
		~ProfForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnMyProfileProf;
	private: System::Windows::Forms::Button^  btnEditProfileProf;
	private: System::Windows::Forms::Button^  btnLogOut;

	private: System::Windows::Forms::Button^  btnPastTestsSet;
	private: System::Windows::Forms::Button^  btnCreateTest;
	private: System::Windows::Forms::Button^  btnAddGroup;
	private: System::Windows::Forms::Panel^  profContentPanel;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btn_changepass;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_changepass = (gcnew System::Windows::Forms::Button());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnPastTestsSet = (gcnew System::Windows::Forms::Button());
			this->btnCreateTest = (gcnew System::Windows::Forms::Button());
			this->btnAddGroup = (gcnew System::Windows::Forms::Button());
			this->btnEditProfileProf = (gcnew System::Windows::Forms::Button());
			this->btnMyProfileProf = (gcnew System::Windows::Forms::Button());
			this->profContentPanel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btn_changepass);
			this->panel1->Controls->Add(this->btnLogOut);
			this->panel1->Controls->Add(this->btnPastTestsSet);
			this->panel1->Controls->Add(this->btnCreateTest);
			this->panel1->Controls->Add(this->btnAddGroup);
			this->panel1->Controls->Add(this->btnEditProfileProf);
			this->panel1->Controls->Add(this->btnMyProfileProf);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(150, 432);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(40, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(60, 65);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			//this->pictureBox1->Click += gcnew System::EventHandler(this, &ProfForm::pictureBox1_Click);
			// 
			// btn_changepass
			// 
			this->btn_changepass->FlatAppearance->BorderSize = 0;
			this->btn_changepass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_changepass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_changepass->ForeColor = System::Drawing::Color::White;
			this->btn_changepass->Location = System::Drawing::Point(16, 281);
			this->btn_changepass->Margin = System::Windows::Forms::Padding(2);
			this->btn_changepass->Name = L"btn_changepass";
			this->btn_changepass->Size = System::Drawing::Size(112, 37);
			this->btn_changepass->TabIndex = 10;
			this->btn_changepass->Text = L"Change Password";
			this->btn_changepass->UseVisualStyleBackColor = true;
			this->btn_changepass->Click += gcnew System::EventHandler(this, &ProfForm::btn_changepass_Click);
			this->btn_changepass->MouseLeave += gcnew System::EventHandler(this, &ProfForm::btn_changepass_MouseLeave);
			this->btn_changepass->MouseHover += gcnew System::EventHandler(this, &ProfForm::btn_changepass_MouseHover);
			// 
			// btnLogOut
			// 
			this->btnLogOut->FlatAppearance->BorderSize = 0;
			this->btnLogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogOut->ForeColor = System::Drawing::Color::White;
			this->btnLogOut->Location = System::Drawing::Point(16, 321);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(2);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(112, 37);
			this->btnLogOut->TabIndex = 9;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->UseVisualStyleBackColor = true;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &ProfForm::btnLogOut_Click);
			this->btnLogOut->MouseLeave += gcnew System::EventHandler(this, &ProfForm::btnLogOut_MouseLeave);
			this->btnLogOut->MouseHover += gcnew System::EventHandler(this, &ProfForm::btnLogOut_MouseHover);
			// 
			// btnPastTestsSet
			// 
			this->btnPastTestsSet->FlatAppearance->BorderSize = 0;
			this->btnPastTestsSet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPastTestsSet->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPastTestsSet->ForeColor = System::Drawing::Color::White;
			this->btnPastTestsSet->Location = System::Drawing::Point(16, 240);
			this->btnPastTestsSet->Margin = System::Windows::Forms::Padding(2);
			this->btnPastTestsSet->Name = L"btnPastTestsSet";
			this->btnPastTestsSet->Size = System::Drawing::Size(112, 37);
			this->btnPastTestsSet->TabIndex = 7;
			this->btnPastTestsSet->Text = L"Past Tests Set";
			this->btnPastTestsSet->UseVisualStyleBackColor = true;
			this->btnPastTestsSet->Click += gcnew System::EventHandler(this, &ProfForm::btnPastTestsSet_Click);
			this->btnPastTestsSet->MouseLeave += gcnew System::EventHandler(this, &ProfForm::btnPastTestsSet_MouseLeave);
			this->btnPastTestsSet->MouseHover += gcnew System::EventHandler(this, &ProfForm::btnPastTestsSet_MouseHover);
			// 
			// btnCreateTest
			// 
			this->btnCreateTest->FlatAppearance->BorderSize = 0;
			this->btnCreateTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreateTest->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreateTest->ForeColor = System::Drawing::Color::White;
			this->btnCreateTest->Location = System::Drawing::Point(16, 201);
			this->btnCreateTest->Margin = System::Windows::Forms::Padding(2);
			this->btnCreateTest->Name = L"btnCreateTest";
			this->btnCreateTest->Size = System::Drawing::Size(112, 37);
			this->btnCreateTest->TabIndex = 6;
			this->btnCreateTest->Text = L"Create a Test";
			this->btnCreateTest->UseVisualStyleBackColor = true;
			this->btnCreateTest->Click += gcnew System::EventHandler(this, &ProfForm::btnCreateTest_Click);
			this->btnCreateTest->MouseLeave += gcnew System::EventHandler(this, &ProfForm::btnCreateTest_MouseLeave);
			this->btnCreateTest->MouseHover += gcnew System::EventHandler(this, &ProfForm::btnCreateTest_MouseHover);
			// 
			// btnAddGroup
			// 
			this->btnAddGroup->FlatAppearance->BorderSize = 0;
			this->btnAddGroup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddGroup->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddGroup->ForeColor = System::Drawing::Color::White;
			this->btnAddGroup->Location = System::Drawing::Point(16, 160);
			this->btnAddGroup->Margin = System::Windows::Forms::Padding(2);
			this->btnAddGroup->Name = L"btnAddGroup";
			this->btnAddGroup->Size = System::Drawing::Size(112, 37);
			this->btnAddGroup->TabIndex = 5;
			this->btnAddGroup->Text = L"Create a Group";
			this->btnAddGroup->UseVisualStyleBackColor = true;
			this->btnAddGroup->Click += gcnew System::EventHandler(this, &ProfForm::btnAddGroup_Click);
			this->btnAddGroup->MouseLeave += gcnew System::EventHandler(this, &ProfForm::btnAddGroup_MouseLeave);
			this->btnAddGroup->MouseHover += gcnew System::EventHandler(this, &ProfForm::btnAddGroup_MouseHover);
			// 
			// btnEditProfileProf
			// 
			this->btnEditProfileProf->FlatAppearance->BorderSize = 0;
			this->btnEditProfileProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditProfileProf->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditProfileProf->ForeColor = System::Drawing::Color::White;
			this->btnEditProfileProf->Location = System::Drawing::Point(16, 119);
			this->btnEditProfileProf->Margin = System::Windows::Forms::Padding(2);
			this->btnEditProfileProf->Name = L"btnEditProfileProf";
			this->btnEditProfileProf->Size = System::Drawing::Size(112, 37);
			this->btnEditProfileProf->TabIndex = 4;
			this->btnEditProfileProf->Text = L"Edit Profile";
			this->btnEditProfileProf->UseVisualStyleBackColor = true;
			this->btnEditProfileProf->Click += gcnew System::EventHandler(this, &ProfForm::btnEditProfileProf_Click);
			this->btnEditProfileProf->MouseLeave += gcnew System::EventHandler(this, &ProfForm::btnEditProfileProf_MouseLeave);
			this->btnEditProfileProf->MouseHover += gcnew System::EventHandler(this, &ProfForm::btnEditProfileProf_MouseHover);
			// 
			// btnMyProfileProf
			// 
			this->btnMyProfileProf->FlatAppearance->BorderSize = 0;
			this->btnMyProfileProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMyProfileProf->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMyProfileProf->ForeColor = System::Drawing::Color::White;
			this->btnMyProfileProf->Location = System::Drawing::Point(16, 79);
			this->btnMyProfileProf->Margin = System::Windows::Forms::Padding(2);
			this->btnMyProfileProf->Name = L"btnMyProfileProf";
			this->btnMyProfileProf->Size = System::Drawing::Size(112, 37);
			this->btnMyProfileProf->TabIndex = 3;
			this->btnMyProfileProf->Text = L"My Profile";
			this->btnMyProfileProf->UseVisualStyleBackColor = true;
			this->btnMyProfileProf->Click += gcnew System::EventHandler(this, &ProfForm::btnMyProfileProf_Click);
			this->btnMyProfileProf->MouseLeave += gcnew System::EventHandler(this, &ProfForm::btnMyProfileProf_MouseLeave);
			this->btnMyProfileProf->MouseHover += gcnew System::EventHandler(this, &ProfForm::btnMyProfileProf_MouseHover);
			// 
			// profContentPanel
			// 
			this->profContentPanel->BackColor = System::Drawing::Color::White;
			this->profContentPanel->Location = System::Drawing::Point(154, 0);
			this->profContentPanel->Margin = System::Windows::Forms::Padding(2);
			this->profContentPanel->Name = L"profContentPanel";
			this->profContentPanel->Size = System::Drawing::Size(686, 432);
			this->profContentPanel->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(150, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(8, 432);
			this->panel2->TabIndex = 5;
			// 
			// ProfForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 432);
			this->Controls->Add(this->profContentPanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ProfForm";
			this->Text = L"ProfForm";
			this->Load += gcnew System::EventHandler(this, &ProfForm::ProfForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnMyProfileProf_Click(System::Object^  sender, System::EventArgs^  e) {
				profContentPanel->Controls->Clear();
				ProfProfile^ ref = gcnew ProfProfile();
				profContentPanel->Controls->Add(ref);
				btnEditProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				btnMyProfileProf->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				btnAddGroup->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				btnCreateTest->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				btn_changepass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				btnPastTestsSet->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				


	}
private: System::Void btnEditProfileProf_Click(System::Object^  sender, System::EventArgs^  e) {
			  profContentPanel->Controls->Clear();
			  ProfEditProfile^ usr = gcnew ProfEditProfile();
			 profContentPanel->Controls->Add(usr);
			 btnEditProfileProf->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btnMyProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnAddGroup->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCreateTest->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btn_changepass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTestsSet->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
}
private: System::Void ProfForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 profContentPanel->Controls->Clear();
			 ProfProfile^ ref = gcnew ProfProfile();
			 profContentPanel->Controls->Add(ref);
			 btnEditProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnAddGroup->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCreateTest->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btn_changepass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTestsSet->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
}
private: System::Void btnAddGroup_Click(System::Object^  sender, System::EventArgs^  e) {
			 profContentPanel->Controls->Clear();
			 CreateGroup^ ref = gcnew CreateGroup();
			 profContentPanel->Controls->Add(ref);
			 btnEditProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnAddGroup->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btnCreateTest->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btn_changepass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTestsSet->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
}
private: System::Void btnCreateTest_Click(System::Object^  sender, System::EventArgs^  e) {
			 profContentPanel->Controls->Clear();
			 CreateExam^ ref = gcnew CreateExam();

			 profContentPanel->Controls->Add(ref);

			 btnEditProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnAddGroup->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCreateTest->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 btn_changepass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTestsSet->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
}
private: System::Void btnPastTestsSet_Click(System::Object^  sender, System::EventArgs^  e) {
			 profContentPanel->Controls->Clear();
			 PastTestsSet^ ref = gcnew PastTestsSet();
			 profContentPanel->Controls->Add(ref);
			 btnEditProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnAddGroup->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCreateTest->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btn_changepass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTestsSet->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
	private: System::Void btnLogOut_Click(System::Object^  sender, System::EventArgs^  e) {
				 btnEditProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnMyProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnAddGroup->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnCreateTest->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btn_changepass->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnLogOut->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				 btnPastTestsSet->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 if (MessageBox::Show("Are you sure you want to logout?", "Confirm", MessageBoxButtons::YesNo) == ::DialogResult::Yes)
				 {
					 if (this->Owner != nullptr)
					 {
						 this->Owner->Show();
						 this->Close();
					 }
				 }
	}

private: System::Void btnMyProfileProf_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnMyProfileProf->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnMyProfileProf_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnMyProfileProf->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
		 private: System::Void btnEditProfileProf_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					  btnEditProfileProf->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
		 }
private: System::Void btnEditProfileProf_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnEditProfileProf->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
private: System::Void btnAddGroup_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnAddGroup->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnAddGroup_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnAddGroup->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
private: System::Void btnCreateTest_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnCreateTest->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnCreateTest_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnCreateTest->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
private: System::Void btnLogOut_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnLogOut->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnLogOut_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnLogOut->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
private: System::Void btnPastTestsSet_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnPastTestsSet->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnPastTestsSet_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnPastTestsSet->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
private: System::Void btn_changepass_Click(System::Object^  sender, System::EventArgs^  e) {
			 profContentPanel->Controls->Clear();
			 ChangePassword ^ grp = gcnew ChangePassword();
			 profContentPanel->Controls->Add(grp);
			 btnEditProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnMyProfileProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnAddGroup->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnCreateTest->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPastTestsSet->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnLogOut->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btn_changepass->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btn_changepass_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btn_changepass->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btn_changepass_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			btn_changepass->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
};
}
#endif
