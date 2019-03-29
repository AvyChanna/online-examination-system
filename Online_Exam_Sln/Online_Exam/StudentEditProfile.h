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
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// lblBranch
			// 
			this->lblBranch->AutoSize = true;
			this->lblBranch->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBranch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblBranch->Location = System::Drawing::Point(93, 152);
			this->lblBranch->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblBranch->Name = L"lblBranch";
			this->lblBranch->Size = System::Drawing::Size(68, 21);
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
			this->lblIITG->Location = System::Drawing::Point(93, 313);
			this->lblIITG->Name = L"lblIITG";
			this->lblIITG->Size = System::Drawing::Size(113, 21);
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
			this->lblFullName->Location = System::Drawing::Point(494, 77);
			this->lblFullName->Name = L"lblFullName";
			this->lblFullName->Size = System::Drawing::Size(75, 18);
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
			this->lblPhone->Location = System::Drawing::Point(494, 226);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(133, 21);
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
			this->lblRoll->Location = System::Drawing::Point(494, 152);
			this->lblRoll->Name = L"lblRoll";
			this->lblRoll->Size = System::Drawing::Size(71, 21);
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
			this->lblEmail->Location = System::Drawing::Point(93, 226);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(52, 21);
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
			this->lblUsername->Location = System::Drawing::Point(93, 77);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(93, 21);
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
			this->txtUsername->Location = System::Drawing::Point(98, 106);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->ReadOnly = true;
			this->txtUsername->Size = System::Drawing::Size(229, 27);
			this->txtUsername->TabIndex = 20;
			// 
			// txtFullName
			// 
			this->txtFullName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtFullName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFullName->Location = System::Drawing::Point(499, 106);
			this->txtFullName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(229, 27);
			this->txtFullName->TabIndex = 21;
			// 
			// txtRoll
			// 
			this->txtRoll->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtRoll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRoll->Location = System::Drawing::Point(499, 181);
			this->txtRoll->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRoll->Name = L"txtRoll";
			this->txtRoll->Size = System::Drawing::Size(229, 27);
			this->txtRoll->TabIndex = 22;
			// 
			// txtEmail
			// 
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(98, 255);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(229, 27);
			this->txtEmail->TabIndex = 23;
			// 
			// txtPhone
			// 
			this->txtPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(497, 255);
			this->txtPhone->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(229, 27);
			this->txtPhone->TabIndex = 24;
			// 
			// txtIITG
			// 
			this->txtIITG->BackColor = System::Drawing::Color::White;
			this->txtIITG->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtIITG->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIITG->Location = System::Drawing::Point(97, 338);
			this->txtIITG->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtIITG->Name = L"txtIITG";
			this->txtIITG->ReadOnly = true;
			this->txtIITG->Size = System::Drawing::Size(229, 27);
			this->txtIITG->TabIndex = 25;
			// 
			// txtBranch
			// 
			this->txtBranch->BackColor = System::Drawing::Color::White;
			this->txtBranch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBranch->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBranch->Location = System::Drawing::Point(98, 181);
			this->txtBranch->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtBranch->Name = L"txtBranch";
			this->txtBranch->ReadOnly = true;
			this->txtBranch->Size = System::Drawing::Size(229, 27);
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
			this->btnUpdate->Location = System::Drawing::Point(350, 413);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(191, 56);
			this->btnUpdate->TabIndex = 27;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StudentEditProfile::btnUpdate_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(98, 140);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(232, 1);
			this->panel1->TabIndex = 28;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(499, 140);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(232, 1);
			this->panel2->TabIndex = 29;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(499, 289);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(232, 1);
			this->panel3->TabIndex = 30;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(499, 215);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(232, 1);
			this->panel4->TabIndex = 31;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel5->Location = System::Drawing::Point(98, 215);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(232, 1);
			this->panel5->TabIndex = 32;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel6->Location = System::Drawing::Point(98, 289);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(232, 1);
			this->panel6->TabIndex = 33;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel7->Location = System::Drawing::Point(98, 372);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(232, 1);
			this->panel7->TabIndex = 34;
			// 
			// StudentEditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
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
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"StudentEditProfile";
			this->Size = System::Drawing::Size(915, 532);
			this->Load += gcnew System::EventHandler(this, &StudentEditProfile::StudentEditProfile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentEditProfile_Load(System::Object^  sender, System::EventArgs^  e) {

				 OES ^Access = gcnew OES();
				 Access->ExecQuery("SELECT * FROM Users WHERE Username='" + gVar::Username + "'");
				 if (Access->RecordCount == 1){

					txtUsername->Text = Convert::ToString(Access->DBDT->Rows[0]["Username"]);
					 txtFullName->Text = Convert::ToString(Access->DBDT->Rows[0]["FullName"]);
					 txtRoll->Text = Convert::ToString(Access->DBDT->Rows[0]["RollNo"]);
					 txtEmail->Text = Convert::ToString(Access->DBDT->Rows[0]["Email"]);
					 txtPhone->Text = Convert::ToString(Access->DBDT->Rows[0]["PhoneNo"]);
					 txtBranch->Text = Convert::ToString(Access->DBDT->Rows[0]["Branch"]);
					 String ^s = Convert::ToString(Access->DBDT->Rows[0]["IITG"]);
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
	
				
				if (txtPhone->TextLength != 10){
					MessageBox::Show("Phone Number Length should be 10");
					return false;
				}
				if (txtRoll->TextLength != 9){
					MessageBox::Show("Roll Number Length should be 9");
					return false;
				}
				
				if (txtFullName->Text->Trim() == ""){
					MessageBox::Show("Name can not be Empty");
					return false;
				}
				if (txtEmail->Text->Trim() == ""){
					MessageBox::Show("Email Field can not be Empty");
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
