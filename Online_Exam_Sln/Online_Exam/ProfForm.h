#pragma once
#ifndef __profform__
#define __profform__
#include "ProfProfile.h"
#include "ProfEditProfile.h"
#include "CreateGroup.h"
#include "CreateExam.h"

namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//using namespace ProfProfile;
	/// <summary>
	/// Summary for ProfForm
	/// </summary>
	public ref class ProfForm : public System::Windows::Forms::Form
	{
	public:
		ProfForm(void)
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
	private: System::Windows::Forms::Button^  btnHelp;
	private: System::Windows::Forms::Button^  btnPastTestsSet;
	private: System::Windows::Forms::Button^  btnCreateTest;
	private: System::Windows::Forms::Button^  btnAddGroup;
	private: System::Windows::Forms::Panel^  profContentPanel;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;


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
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnHelp = (gcnew System::Windows::Forms::Button());
			this->btnPastTestsSet = (gcnew System::Windows::Forms::Button());
			this->btnCreateTest = (gcnew System::Windows::Forms::Button());
			this->btnAddGroup = (gcnew System::Windows::Forms::Button());
			this->btnEditProfileProf = (gcnew System::Windows::Forms::Button());
			this->btnMyProfileProf = (gcnew System::Windows::Forms::Button());
			this->profContentPanel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->btnLogOut);
			this->panel1->Controls->Add(this->btnHelp);
			this->panel1->Controls->Add(this->btnPastTestsSet);
			this->panel1->Controls->Add(this->btnCreateTest);
			this->panel1->Controls->Add(this->btnAddGroup);
			this->panel1->Controls->Add(this->btnEditProfileProf);
			this->panel1->Controls->Add(this->btnMyProfileProf);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(249, 532);
			this->panel1->TabIndex = 2;
			// 
			// btnLogOut
			// 
			this->btnLogOut->AutoSize = true;
			this->btnLogOut->FlatAppearance->BorderSize = 0;
			this->btnLogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogOut->ForeColor = System::Drawing::Color::Transparent;
			this->btnLogOut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogOut.Image")));
			this->btnLogOut->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnLogOut->Location = System::Drawing::Point(12, 449);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(237, 46);
			this->btnLogOut->TabIndex = 9;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->UseVisualStyleBackColor = true;
			// 
			// btnHelp
			// 
			this->btnHelp->AutoSize = true;
			this->btnHelp->FlatAppearance->BorderSize = 0;
			this->btnHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHelp->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHelp->ForeColor = System::Drawing::Color::Transparent;
			this->btnHelp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHelp.Image")));
			this->btnHelp->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnHelp->Location = System::Drawing::Point(12, 295);
			this->btnHelp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnHelp->Name = L"btnHelp";
			this->btnHelp->Size = System::Drawing::Size(237, 46);
			this->btnHelp->TabIndex = 8;
			this->btnHelp->Text = L"Help";
			this->btnHelp->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnHelp->UseVisualStyleBackColor = true;
			// 
			// btnPastTestsSet
			// 
			this->btnPastTestsSet->AutoSize = true;
			this->btnPastTestsSet->FlatAppearance->BorderSize = 0;
			this->btnPastTestsSet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPastTestsSet->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPastTestsSet->ForeColor = System::Drawing::Color::Transparent;
			this->btnPastTestsSet->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPastTestsSet.Image")));
			this->btnPastTestsSet->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnPastTestsSet->Location = System::Drawing::Point(12, 244);
			this->btnPastTestsSet->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPastTestsSet->Name = L"btnPastTestsSet";
			this->btnPastTestsSet->Size = System::Drawing::Size(237, 46);
			this->btnPastTestsSet->TabIndex = 7;
			this->btnPastTestsSet->Text = L"Past Tests Set";
			this->btnPastTestsSet->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnPastTestsSet->UseVisualStyleBackColor = true;
			this->btnPastTestsSet->Click += gcnew System::EventHandler(this, &ProfForm::btnPastTestsSet_Click);
			// 
			// btnCreateTest
			// 
			this->btnCreateTest->AutoSize = true;
			this->btnCreateTest->FlatAppearance->BorderSize = 0;
			this->btnCreateTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreateTest->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreateTest->ForeColor = System::Drawing::Color::Transparent;
			this->btnCreateTest->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCreateTest.Image")));
			this->btnCreateTest->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnCreateTest->Location = System::Drawing::Point(12, 195);
			this->btnCreateTest->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCreateTest->Name = L"btnCreateTest";
			this->btnCreateTest->Size = System::Drawing::Size(237, 46);
			this->btnCreateTest->TabIndex = 6;
			this->btnCreateTest->Text = L"Create a Test";
			this->btnCreateTest->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCreateTest->UseVisualStyleBackColor = true;
			this->btnCreateTest->Click += gcnew System::EventHandler(this, &ProfForm::btnCreateTest_Click);
			// 
			// btnAddGroup
			// 
			this->btnAddGroup->AutoSize = true;
			this->btnAddGroup->FlatAppearance->BorderSize = 0;
			this->btnAddGroup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddGroup->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddGroup->ForeColor = System::Drawing::Color::Transparent;
			this->btnAddGroup->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddGroup.Image")));
			this->btnAddGroup->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnAddGroup->Location = System::Drawing::Point(12, 145);
			this->btnAddGroup->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddGroup->Name = L"btnAddGroup";
			this->btnAddGroup->Size = System::Drawing::Size(237, 46);
			this->btnAddGroup->TabIndex = 5;
			this->btnAddGroup->Text = L"Create a Group";
			this->btnAddGroup->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAddGroup->UseVisualStyleBackColor = true;
			this->btnAddGroup->Click += gcnew System::EventHandler(this, &ProfForm::btnAddGroup_Click);
			// 
			// btnEditProfileProf
			// 
			this->btnEditProfileProf->AutoSize = true;
			this->btnEditProfileProf->FlatAppearance->BorderSize = 0;
			this->btnEditProfileProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditProfileProf->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditProfileProf->ForeColor = System::Drawing::Color::Transparent;
			this->btnEditProfileProf->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditProfileProf.Image")));
			this->btnEditProfileProf->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnEditProfileProf->Location = System::Drawing::Point(12, 95);
			this->btnEditProfileProf->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEditProfileProf->Name = L"btnEditProfileProf";
			this->btnEditProfileProf->Size = System::Drawing::Size(237, 46);
			this->btnEditProfileProf->TabIndex = 4;
			this->btnEditProfileProf->Text = L"Edit Profile";
			this->btnEditProfileProf->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnEditProfileProf->UseVisualStyleBackColor = true;
			this->btnEditProfileProf->Click += gcnew System::EventHandler(this, &ProfForm::btnEditProfileProf_Click);
			// 
			// btnMyProfileProf
			// 
			this->btnMyProfileProf->AutoSize = true;
			this->btnMyProfileProf->FlatAppearance->BorderSize = 0;
			this->btnMyProfileProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMyProfileProf->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMyProfileProf->ForeColor = System::Drawing::Color::Transparent;
			this->btnMyProfileProf->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMyProfileProf.Image")));
			this->btnMyProfileProf->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnMyProfileProf->Location = System::Drawing::Point(12, 45);
			this->btnMyProfileProf->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnMyProfileProf->Name = L"btnMyProfileProf";
			this->btnMyProfileProf->Size = System::Drawing::Size(237, 46);
			this->btnMyProfileProf->TabIndex = 3;
			this->btnMyProfileProf->Text = L"My Profile";
			this->btnMyProfileProf->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnMyProfileProf->UseVisualStyleBackColor = true;
			this->btnMyProfileProf->Click += gcnew System::EventHandler(this, &ProfForm::btnMyProfileProf_Click);
			// 
			// profContentPanel
			// 
			this->profContentPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->profContentPanel->Location = System::Drawing::Point(249, 11);
			this->profContentPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->profContentPanel->Name = L"profContentPanel";
			this->profContentPanel->Size = System::Drawing::Size(757, 521);
			this->profContentPanel->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(349, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(0, 0);
			this->panel2->TabIndex = 4;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(249, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(757, 10);
			this->panel3->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->panel4->Location = System::Drawing::Point(3, 45);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(12, 46);
			this->panel4->TabIndex = 6;
			// 
			// ProfForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ClientSize = System::Drawing::Size(1006, 532);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->profContentPanel);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ProfForm";
			this->Text = L"ProfForm";
			this->Load += gcnew System::EventHandler(this, &ProfForm::ProfForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnMyProfileProf_Click(System::Object^  sender, System::EventArgs^  e) {
				profContentPanel->Controls->Clear();
				ProfProfile^ ref = gcnew ProfProfile();
				profContentPanel->Controls->Add(ref);


	}
private: System::Void btnEditProfileProf_Click(System::Object^  sender, System::EventArgs^  e) {
			  profContentPanel->Controls->Clear();
			  ProfEditProfile^ usr = gcnew ProfEditProfile();
			 profContentPanel->Controls->Add(usr);
}
private: System::Void ProfForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 profContentPanel->Controls->Clear();
			 ProfProfile^ ref = gcnew ProfProfile();
			 profContentPanel->Controls->Add(ref);
}
private: System::Void btnAddGroup_Click(System::Object^  sender, System::EventArgs^  e) {
			 profContentPanel->Controls->Clear();
			 CreateGroup^ ref = gcnew CreateGroup();
			 profContentPanel->Controls->Add(ref);
}
private: System::Void btnCreateTest_Click(System::Object^  sender, System::EventArgs^  e) {
			 profContentPanel->Controls->Clear();
			 CreateExam^ ref = gcnew CreateExam();
			 profContentPanel->Controls->Add(ref);
}
private: System::Void btnPastTestsSet_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
#endif