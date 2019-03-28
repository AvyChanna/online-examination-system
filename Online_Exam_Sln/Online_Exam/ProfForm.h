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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnMyProfileProf;
	private: System::Windows::Forms::Button^  btnEditProfileProf;
	private: System::Windows::Forms::Button^  btnLogOut;
	private: System::Windows::Forms::Button^  btnHelp;
	private: System::Windows::Forms::Button^  btnPastTestsSet;
	private: System::Windows::Forms::Button^  btnCreateTest;
	private: System::Windows::Forms::Button^  btnAddGroup;
	private: System::Windows::Forms::Panel^  profContentPanel;
	private: System::Windows::Forms::Button^  button1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnHelp = (gcnew System::Windows::Forms::Button());
			this->btnPastTestsSet = (gcnew System::Windows::Forms::Button());
			this->btnCreateTest = (gcnew System::Windows::Forms::Button());
			this->btnAddGroup = (gcnew System::Windows::Forms::Button());
			this->btnEditProfileProf = (gcnew System::Windows::Forms::Button());
			this->btnMyProfileProf = (gcnew System::Windows::Forms::Button());
			this->profContentPanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(893, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WELCOME";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btnLogOut);
			this->panel1->Controls->Add(this->btnHelp);
			this->panel1->Controls->Add(this->btnPastTestsSet);
			this->panel1->Controls->Add(this->btnCreateTest);
			this->panel1->Controls->Add(this->btnAddGroup);
			this->panel1->Controls->Add(this->btnEditProfileProf);
			this->panel1->Controls->Add(this->btnMyProfileProf);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 533);
			this->panel1->TabIndex = 2;
			// 
			// btnLogOut
			// 
			this->btnLogOut->Location = System::Drawing::Point(0, 300);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(200, 46);
			this->btnLogOut->TabIndex = 9;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->UseVisualStyleBackColor = true;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &ProfForm::btnLogOut_Click);
			// 
			// btnHelp
			// 
			this->btnHelp->Location = System::Drawing::Point(0, 250);
			this->btnHelp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnHelp->Name = L"btnHelp";
			this->btnHelp->Size = System::Drawing::Size(200, 46);
			this->btnHelp->TabIndex = 8;
			this->btnHelp->Text = L"Help";
			this->btnHelp->UseVisualStyleBackColor = true;
			// 
			// btnPastTestsSet
			// 
			this->btnPastTestsSet->Location = System::Drawing::Point(0, 199);
			this->btnPastTestsSet->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPastTestsSet->Name = L"btnPastTestsSet";
			this->btnPastTestsSet->Size = System::Drawing::Size(200, 46);
			this->btnPastTestsSet->TabIndex = 7;
			this->btnPastTestsSet->Text = L"Past Tests Set";
			this->btnPastTestsSet->UseVisualStyleBackColor = true;
			this->btnPastTestsSet->Click += gcnew System::EventHandler(this, &ProfForm::btnPastTestsSet_Click);
			// 
			// btnCreateTest
			// 
			this->btnCreateTest->Location = System::Drawing::Point(0, 150);
			this->btnCreateTest->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCreateTest->Name = L"btnCreateTest";
			this->btnCreateTest->Size = System::Drawing::Size(200, 46);
			this->btnCreateTest->TabIndex = 6;
			this->btnCreateTest->Text = L"Create a Test";
			this->btnCreateTest->UseVisualStyleBackColor = true;
			this->btnCreateTest->Click += gcnew System::EventHandler(this, &ProfForm::btnCreateTest_Click);
			// 
			// btnAddGroup
			// 
			this->btnAddGroup->Location = System::Drawing::Point(0, 100);
			this->btnAddGroup->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddGroup->Name = L"btnAddGroup";
			this->btnAddGroup->Size = System::Drawing::Size(200, 46);
			this->btnAddGroup->TabIndex = 5;
			this->btnAddGroup->Text = L"Create a Group";
			this->btnAddGroup->UseVisualStyleBackColor = true;
			this->btnAddGroup->Click += gcnew System::EventHandler(this, &ProfForm::btnAddGroup_Click);
			// 
			// btnEditProfileProf
			// 
			this->btnEditProfileProf->Location = System::Drawing::Point(0, 50);
			this->btnEditProfileProf->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEditProfileProf->Name = L"btnEditProfileProf";
			this->btnEditProfileProf->Size = System::Drawing::Size(200, 46);
			this->btnEditProfileProf->TabIndex = 4;
			this->btnEditProfileProf->Text = L"Edit Profile";
			this->btnEditProfileProf->UseVisualStyleBackColor = true;
			this->btnEditProfileProf->Click += gcnew System::EventHandler(this, &ProfForm::btnEditProfileProf_Click);
			// 
			// btnMyProfileProf
			// 
			this->btnMyProfileProf->Location = System::Drawing::Point(0, 0);
			this->btnMyProfileProf->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnMyProfileProf->Name = L"btnMyProfileProf";
			this->btnMyProfileProf->Size = System::Drawing::Size(200, 46);
			this->btnMyProfileProf->TabIndex = 3;
			this->btnMyProfileProf->Text = L"My Profile";
			this->btnMyProfileProf->UseVisualStyleBackColor = true;
			this->btnMyProfileProf->Click += gcnew System::EventHandler(this, &ProfForm::btnMyProfileProf_Click);
			// 
			// profContentPanel
			// 
			this->profContentPanel->Location = System::Drawing::Point(205, 96);
			this->profContentPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->profContentPanel->Name = L"profContentPanel";
			this->profContentPanel->Size = System::Drawing::Size(903, 423);
			this->profContentPanel->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 285);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 37);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Add Ques";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProfForm::button1_Click);
			// 
			// ProfForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 532);
			this->Controls->Add(this->profContentPanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ProfForm";
			this->Text = L"ProfForm";
			this->Load += gcnew System::EventHandler(this, &ProfForm::ProfForm_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

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
			 profContentPanel->Controls->Clear();
			 PastTestsSet^ ref = gcnew PastTestsSet();
			 profContentPanel->Controls->Add(ref);
}
	private: System::Void btnLogOut_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 AdminForm ^ af = gcnew AdminForm();
				 af->Show();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 profContentPanel->Controls->Clear();
			 array<Int32> ^arr = gcnew array<Int32>(3);
			 array<Int32> ^arr1 = gcnew array<Int32>(3);
			 array<Int32> ^arr2 = gcnew array<Int32>(3);

			 arr2[0] = 10;//arr2=no of q to give to each student
			 arr2[1] = 11;
			 arr2[2] = 9;
			 arr1[0] = 5;//arr1=weight of each q in a seciton
			 arr1[1] = 7;
			 arr1[2] = 3;
			 arr[0] = 20;// arr=no of q in each section
			 arr[1] = 22;
			 arr[2] = 18;
			 AddQuestions^ ref = gcnew AddQuestions(3,arr,arr1,arr2);
			 profContentPanel->Controls->Add(ref);
}
};
}
#endif