#pragma once
#include "Database.h"
#include "GlobalVar.h"
#include <iostream>
#ifndef __creategroup__
#define __creategroup__
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;
using namespace Global_Var;



namespace Online_Exam {

	/// <summary>
	/// Summary for CreateGroup
	/// </summary>
	public ref class CreateGroup : public System::Windows::Forms::UserControl
	{
	public:
		CreateGroup(void)
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
		~CreateGroup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblGroupName;
	protected:
	private: System::Windows::Forms::Label^  lblEnroll;
	private: System::Windows::Forms::Label^  lblAsk;
	private: System::Windows::Forms::TextBox^  txtGroupName;
	private: System::Windows::Forms::TextBox^  txtEnroll;


	private: System::Windows::Forms::CheckBox^  checkBox;
	private: System::Windows::Forms::Button^  btnCreate;

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
			this->lblGroupName = (gcnew System::Windows::Forms::Label());
			this->lblEnroll = (gcnew System::Windows::Forms::Label());
			this->lblAsk = (gcnew System::Windows::Forms::Label());
			this->txtGroupName = (gcnew System::Windows::Forms::TextBox());
			this->txtEnroll = (gcnew System::Windows::Forms::TextBox());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblGroupName
			// 
			this->lblGroupName->AutoSize = true;
			this->lblGroupName->Location = System::Drawing::Point(196, 97);
			this->lblGroupName->Name = L"lblGroupName";
			this->lblGroupName->Size = System::Drawing::Size(127, 17);
			this->lblGroupName->TabIndex = 0;
			this->lblGroupName->Text = L"Enter Group Name";
			// 
			// lblEnroll
			// 
			this->lblEnroll->AutoSize = true;
			this->lblEnroll->Location = System::Drawing::Point(196, 238);
			this->lblEnroll->Name = L"lblEnroll";
			this->lblEnroll->Size = System::Drawing::Size(141, 17);
			this->lblEnroll->TabIndex = 1;
			this->lblEnroll->Text = L"Enter Enrollment Key";
			// 
			// lblAsk
			// 
			this->lblAsk->AutoSize = true;
			this->lblAsk->Location = System::Drawing::Point(196, 169);
			this->lblAsk->Name = L"lblAsk";
			this->lblAsk->Size = System::Drawing::Size(261, 17);
			this->lblAsk->TabIndex = 2;
			this->lblAsk->Text = L"Do you want to have an enrollment key\?";
			// 
			// txtGroupName
			// 
			this->txtGroupName->Location = System::Drawing::Point(446, 92);
			this->txtGroupName->Name = L"txtGroupName";
			this->txtGroupName->Size = System::Drawing::Size(164, 22);
			this->txtGroupName->TabIndex = 3;
			// 
			// txtEnroll
			// 
			this->txtEnroll->Location = System::Drawing::Point(446, 238);
			this->txtEnroll->Name = L"txtEnroll";
			this->txtEnroll->Size = System::Drawing::Size(164, 22);
			this->txtEnroll->TabIndex = 4;
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(498, 169);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(18, 17);
			this->checkBox->TabIndex = 5;
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &CreateGroup::checkBox_CheckedChanged);
			// 
			// btnCreate
			// 
			this->btnCreate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCreate->Location = System::Drawing::Point(348, 319);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(218, 38);
			this->btnCreate->TabIndex = 6;
			this->btnCreate->Text = L"CREATE GROUP";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &CreateGroup::btnCreate_Click);
			// 
			// CreateGroup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->txtEnroll);
			this->Controls->Add(this->txtGroupName);
			this->Controls->Add(this->lblAsk);
			this->Controls->Add(this->lblEnroll);
			this->Controls->Add(this->lblGroupName);
			this->Name = L"CreateGroup";
			this->Size = System::Drawing::Size(903, 424);
			this->Load += gcnew System::EventHandler(this, &CreateGroup::CreateGroup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateGroup_Load(System::Object^  sender, System::EventArgs^  e) {
				 lblEnroll->Hide();
				 txtEnroll->Hide();

				
	}
private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox->Checked == true)
			 {

				 OES ^Access = gcnew OES();
				 Access->ExecQuery("insert into Groups (GroupID, EnrollmentKey) values('" + txtGroupName->Text + "', '" + txtEnroll->Text + "')");

			 }
			 else
			 {
				 OES ^Access = gcnew OES();
				 Access->ExecQuery("insert into Groups (GroupID) values('" + txtGroupName->Text + "')");

			 }

			 MessageBox::Show("Group successfully created");
}
private: System::Void checkBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox->Checked == true)
			 {
				 txtEnroll->Show();
				 lblEnroll->Show();
			 }
			 else
			 {
				 txtEnroll->Hide();
				 lblEnroll->Hide();
			 }
}
};
}
#endif