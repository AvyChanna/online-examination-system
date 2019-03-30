#pragma once
#include "Database.h"
#include "GlobalVar.h"
#include <iostream>
#ifndef __editprofile__
#define __editprofile__
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
	/// Summary for StudentEditProfile
	/// </summary>
	public ref class StudentEditProfile : public System::Windows::Forms::UserControl
	{
	public:
		StudentEditProfile(void)
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
		~StudentEditProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblBranch;
	protected:

	protected:
	private: System::Windows::Forms::Label^  lblIITG;
	private: System::Windows::Forms::Label^  lblFullName;
	private: System::Windows::Forms::Label^  lblPhone;
	private: System::Windows::Forms::Label^  lblRoll;
	private: System::Windows::Forms::Label^  lblEmail;
	private: System::Windows::Forms::Label^  lblUsername;
	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::TextBox^  txtFullName;
	private: System::Windows::Forms::TextBox^  txtRoll;
	private: System::Windows::Forms::TextBox^  txtEmail;
	private: System::Windows::Forms::TextBox^  txtPhone;
	private: System::Windows::Forms::TextBox^  txtIITG;
	private: System::Windows::Forms::TextBox^  txtBranch;
	private: System::Windows::Forms::Button^  btnUpdate;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::Panel^  panel6;


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
			this->lblBranch = (gcnew System::Windows::Forms::Label());
			this->lblIITG = (gcnew System::Windows::Forms::Label());
			this->lblFullName = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblRoll = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtFullName = (gcnew System::Windows::Forms::TextBox());
			this->txtRoll = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtIITG = (gcnew System::Windows::Forms::TextBox());
			this->txtBranch = (gcnew System::Windows::Forms::TextBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// lblBranch
			// 
			this->lblBranch->AutoSize = true;
			this->lblBranch->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBranch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblBranch->Location = System::Drawing::Point(382, 114);
			this->lblBranch->Name = L"lblBranch";
			this->lblBranch->Size = System::Drawing::Size(58, 19);
			this->lblBranch->TabIndex = 19;
			this->lblBranch->Text = L"Branch";
			this->lblBranch->Click += gcnew System::EventHandler(this, &StudentEditProfile::lblBranch_Click);
			// 
			// lblIITG
			// 
			this->lblIITG->AutoSize = true;
			this->lblIITG->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIITG->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblIITG->Location = System::Drawing::Point(383, 174);
			this->lblIITG->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblIITG->Name = L"lblIITG";
			this->lblIITG->Size = System::Drawing::Size(90, 19);
			this->lblIITG->TabIndex = 18;
			this->lblIITG->Text = L"IITG Student";
			this->lblIITG->Click += gcnew System::EventHandler(this, &StudentEditProfile::lblIITG_Click);
			// 
			// lblFullName
			// 
			this->lblFullName->AutoSize = true;
			this->lblFullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblFullName->Location = System::Drawing::Point(79, 53);
			this->lblFullName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblFullName->Name = L"lblFullName";
			this->lblFullName->Size = System::Drawing::Size(64, 15);
			this->lblFullName->TabIndex = 17;
			this->lblFullName->Text = L"Full Name";
			this->lblFullName->Click += gcnew System::EventHandler(this, &StudentEditProfile::lblFullName_Click);
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblPhone->Location = System::Drawing::Point(79, 174);
			this->lblPhone->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(112, 19);
			this->lblPhone->TabIndex = 16;
			this->lblPhone->Text = L"Phone Number";
			this->lblPhone->Click += gcnew System::EventHandler(this, &StudentEditProfile::lblPhone_Click);
			// 
			// lblRoll
			// 
			this->lblRoll->AutoSize = true;
			this->lblRoll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRoll->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblRoll->Location = System::Drawing::Point(79, 114);
			this->lblRoll->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblRoll->Name = L"lblRoll";
			this->lblRoll->Size = System::Drawing::Size(60, 19);
			this->lblRoll->TabIndex = 15;
			this->lblRoll->Text = L"Roll No.";
			this->lblRoll->Click += gcnew System::EventHandler(this, &StudentEditProfile::lblRoll_Click);
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblEmail->Location = System::Drawing::Point(78, 245);
			this->lblEmail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(46, 19);
			this->lblEmail->TabIndex = 14;
			this->lblEmail->Text = L"Email";
			this->lblEmail->Click += gcnew System::EventHandler(this, &StudentEditProfile::lblEmail_Click);
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblUsername->Location = System::Drawing::Point(382, 53);
			this->lblUsername->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(77, 19);
			this->lblUsername->TabIndex = 13;
			this->lblUsername->Text = L"Username";
			this->lblUsername->Click += gcnew System::EventHandler(this, &StudentEditProfile::lblUsername_Click);
			// 
			// txtUsername
			// 
			this->txtUsername->BackColor = System::Drawing::Color::White;
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(386, 76);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->ReadOnly = true;
			this->txtUsername->Size = System::Drawing::Size(172, 22);
			this->txtUsername->TabIndex = 20;
			// 
			// txtFullName
			// 
			this->txtFullName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtFullName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFullName->Location = System::Drawing::Point(82, 76);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(172, 22);
			this->txtFullName->TabIndex = 21;
			// 
			// txtRoll
			// 
			this->txtRoll->BackColor = System::Drawing::Color::White;
			this->txtRoll->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtRoll->CausesValidation = false;
			this->txtRoll->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txtRoll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRoll->Location = System::Drawing::Point(82, 137);
			this->txtRoll->Name = L"txtRoll";
			this->txtRoll->ReadOnly = true;
			this->txtRoll->Size = System::Drawing::Size(172, 22);
			this->txtRoll->TabIndex = 22;
			// 
			// txtEmail
			// 
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(82, 268);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(172, 22);
			this->txtEmail->TabIndex = 23;
			// 
			// txtPhone
			// 
			this->txtPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(81, 197);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(172, 22);
			this->txtPhone->TabIndex = 24;
			// 
			// txtIITG
			// 
			this->txtIITG->BackColor = System::Drawing::Color::White;
			this->txtIITG->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtIITG->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIITG->Location = System::Drawing::Point(386, 194);
			this->txtIITG->Name = L"txtIITG";
			this->txtIITG->ReadOnly = true;
			this->txtIITG->Size = System::Drawing::Size(172, 22);
			this->txtIITG->TabIndex = 25;
			// 
			// txtBranch
			// 
			this->txtBranch->BackColor = System::Drawing::Color::White;
			this->txtBranch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBranch->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBranch->Location = System::Drawing::Point(386, 137);
			this->txtBranch->Name = L"txtBranch";
			this->txtBranch->ReadOnly = true;
			this->txtBranch->Size = System::Drawing::Size(172, 22);
			this->txtBranch->TabIndex = 26;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::White;
			this->btnUpdate->Location = System::Drawing::Point(262, 336);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(143, 46);
			this->btnUpdate->TabIndex = 27;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StudentEditProfile::btnUpdate_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(82, 104);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(174, 1);
			this->panel2->TabIndex = 29;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(82, 225);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(174, 1);
			this->panel3->TabIndex = 30;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(82, 165);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(174, 1);
			this->panel4->TabIndex = 31;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel6->Location = System::Drawing::Point(82, 296);
			this->panel6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(174, 1);
			this->panel6->TabIndex = 33;
			// 
			// StudentEditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->txtBranch);
			this->Controls->Add(this->txtIITG);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtRoll);
			this->Controls->Add(this->txtFullName);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->lblBranch);
			this->Controls->Add(this->lblIITG);
			this->Controls->Add(this->lblFullName);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblRoll);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblUsername);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"StudentEditProfile";
			this->Size = System::Drawing::Size(686, 432);
			this->Load += gcnew System::EventHandler(this, &StudentEditProfile::StudentEditProfile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentEditProfile_Load(System::Object^  sender, System::EventArgs^  e) {

				 OES ^Access = gcnew OES();
				 Access->ExecQuery("SELECT * FROM Users WHERE Username='" + gVar::Username + "'");
				 if (Access->RecordCount == 1){

					 txtUsername->Text = Convert::ToString(Access->DBDT->Rows[0]->default["Username"]);
					 txtFullName->Text = Convert::ToString(Access->DBDT->Rows[0]->default["FullName"]);
					 txtRoll->Text = Convert::ToString(Access->DBDT->Rows[0]->default["RollNo"]);
					 txtEmail->Text = Convert::ToString(Access->DBDT->Rows[0]->default["Email"]);
					 txtPhone->Text = Convert::ToString(Access->DBDT->Rows[0]->default["PhoneNo"]);
					 txtBranch->Text = Convert::ToString(Access->DBDT->Rows[0]->default["Branch"]);
					 String ^s = Convert::ToString(Access->DBDT->Rows[0]->default["IITG"]);
					 if (s->CompareTo("True") == 0)
					 {
						 txtIITG->Text = "Yes";
					 }
					 else
					 {
						 txtIITG->Text = "No";
					 }

				 }
	}

	private:bool validate(){
				txtFullName->Text = txtFullName->Text->Trim();
				txtEmail->Text = txtEmail->Text->Trim();
				txtPhone->Text = txtPhone->Text->Trim();
				String ^ str = txtPhone->Text;
				for (int i = 0; i < str->Length; i++)
				{
					if (str[i]>'9' || str[i] < '0')
					{
						MessageBox::Show("Phone Number should not have digits aparts from 0-9", "Wrong Details");
						return false;
					}
				}
				str = txtFullName->Text;
				String ^ str1 = "";
				for (int i = 0; i < str->Length; i++)
				{
					if (str[i] != ' ')
					{
						if (i>0 && str[i - 1] == ' ') str1 += " ";
						str1 += str[i];
					}
				}
				txtFullName->Text = str1;
				
				if (txtFullName->Text->Trim() == ""){
					MessageBox::Show("Name can not be Empty", "Wrong Details");
					return false;
				}
				if (txtEmail->Text->Trim() == ""){
					MessageBox::Show("Email Field can not be Empty", "Wrong Details");
					return false;
				}
				if (txtPhone->Text->Trim() == ""){
					MessageBox::Show("Phone number can not be Empty", "Wrong Details");
					return false;
				}
				return true;

	}
private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {

			 OES ^Access = gcnew OES();
			 if (validate()){
				 Access->ExecQuery("UPDATE Users SET FullName='" + txtFullName->Text + "', Email='" + txtEmail->Text + "',  PhoneNo='" + txtPhone->Text + "', RollNo='" + txtRoll->Text + "' WHERE Username = '" + txtUsername->Text + "'");
				 MessageBox::Show("Profile Updated Successfully");
			 }
			 
			 //MessageBox::Show("UPDATE Users SET FullName='" + txtFullName->Text + "' WHERE Username = '" + txtUsername->Text + "'");
			 
			 
}

private: System::Void lblUsername_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblFullName_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblBranch_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblRoll_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblEmail_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblPhone_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblIITG_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
#endif
