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
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label1;

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblGroupName
			// 
			this->lblGroupName->AutoSize = true;
			this->lblGroupName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupName->ForeColor = System::Drawing::Color::Black;
			this->lblGroupName->Location = System::Drawing::Point(67, 57);
			this->lblGroupName->Name = L"lblGroupName";
			this->lblGroupName->Size = System::Drawing::Size(166, 21);
			this->lblGroupName->TabIndex = 0;
			this->lblGroupName->Text = L"Enter Group Name";
			// 
			// lblEnroll
			// 
			this->lblEnroll->AutoSize = true;
			this->lblEnroll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEnroll->ForeColor = System::Drawing::Color::Black;
			this->lblEnroll->Location = System::Drawing::Point(67, 233);
			this->lblEnroll->Name = L"lblEnroll";
			this->lblEnroll->Size = System::Drawing::Size(175, 21);
			this->lblEnroll->TabIndex = 1;
			this->lblEnroll->Text = L"Enter Enrollment Key";
			// 
			// lblAsk
			// 
			this->lblAsk->AutoSize = true;
			this->lblAsk->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAsk->ForeColor = System::Drawing::Color::Black;
			this->lblAsk->Location = System::Drawing::Point(67, 139);
			this->lblAsk->Name = L"lblAsk";
			this->lblAsk->Size = System::Drawing::Size(349, 21);
			this->lblAsk->TabIndex = 2;
			this->lblAsk->Text = L"Do you want to have an enrollment key\?";
			// 
			// txtGroupName
			// 
			this->txtGroupName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtGroupName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGroupName->Location = System::Drawing::Point(337, 53);
			this->txtGroupName->Name = L"txtGroupName";
			this->txtGroupName->Size = System::Drawing::Size(232, 25);
			this->txtGroupName->TabIndex = 3;
			// 
			// txtEnroll
			// 
			this->txtEnroll->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEnroll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEnroll->Location = System::Drawing::Point(337, 231);
			this->txtEnroll->Name = L"txtEnroll";
			this->txtEnroll->Size = System::Drawing::Size(232, 25);
			this->txtEnroll->TabIndex = 4;
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(540, 143);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(18, 17);
			this->checkBox->TabIndex = 5;
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &CreateGroup::checkBox_CheckedChanged);
			// 
			// btnCreate
			// 
			this->btnCreate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btnCreate->FlatAppearance->BorderSize = 0;
			this->btnCreate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreate->ForeColor = System::Drawing::Color::Black;
			this->btnCreate->Location = System::Drawing::Point(337, 449);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(296, 51);
			this->btnCreate->TabIndex = 6;
			this->btnCreate->Text = L"CREATE GROUP";
			this->btnCreate->UseVisualStyleBackColor = false;
			this->btnCreate->Click += gcnew System::EventHandler(this, &CreateGroup::btnCreate_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(337, 84);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(232, 1);
			this->panel2->TabIndex = 45;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(337, 262);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(232, 1);
			this->panel1->TabIndex = 45;
			this->panel1->Visible = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->checkBox);
			this->panel3->Controls->Add(this->txtEnroll);
			this->panel3->Controls->Add(this->txtGroupName);
			this->panel3->Controls->Add(this->lblAsk);
			this->panel3->Controls->Add(this->lblEnroll);
			this->panel3->Controls->Add(this->lblGroupName);
			this->panel3->Location = System::Drawing::Point(101, 107);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(658, 321);
			this->panel3->TabIndex = 46;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CreateGroup::panel3_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->btnCreate);
			this->panel4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(662, 532);
			this->panel4->TabIndex = 46;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(57, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 34);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Create Group";
			// 
			// CreateGroup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Name = L"CreateGroup";
			this->Size = System::Drawing::Size(914, 532);
			this->Load += gcnew System::EventHandler(this, &CreateGroup::CreateGroup_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CreateGroup_Load(System::Object^  sender, System::EventArgs^  e) {
				 lblEnroll->Hide();
				 txtEnroll->Hide();

				
	}
private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtGroupName->Text = txtGroupName->Text->Trim();
			 txtEnroll->Text = txtEnroll->Text->Trim();
			 OES ^ Access1 = gcnew OES();
			 Access1->ExecQuery("SELECT * FROM Groups WHERE GroupName='" + txtGroupName->Text + "'");
			 if (Access1->RecordCount > 0)
			 {
				 MessageBox::Show("Please use another name for the Group. The current name already exists", "Error");
				 return;
			 }
			 if (checkBox->Checked == true)
			 {
				 OES ^Access = gcnew OES();
				 Access->AddParam("@GroupName", txtGroupName->Text);
				 Access->AddParam("@EnrollmentKey", txtEnroll->Text);
				 Access->ExecQuery("insert into Groups (GroupName, EnrollmentKey) values(@GroupName, @EnrollmentKey)");

			 }
			 else
			 {
				 OES ^Access = gcnew OES();
				 Access->AddParam("@GroupName", txtGroupName->Text);
				 Access->ExecQuery("insert into Groups (GroupName) values(@GroupName)");

			 }

			 MessageBox::Show("Group successfully created");
}
private: System::Void checkBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox->Checked == true)
			 {
				 txtEnroll->Show();
				 lblEnroll->Show();
				 panel1->Show();
			 }
			 else
			 {
				 txtEnroll->Hide();
				 lblEnroll->Hide();
				panel1->Hide();
			 }
}
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
#endif