#pragma once
#include "Database.h"
#include "GlobalVar.h"
#include <iostream>

#ifndef __editprofileprof__
#define __editprofileprof__

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
	/// Summary for ProfEditProfile
	/// </summary>
	public ref class ProfEditProfile : public System::Windows::Forms::UserControl
	{
	public:
		ProfEditProfile(void)
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
		~ProfEditProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtPhone;
	protected:
	private: System::Windows::Forms::TextBox^  txtEmail;
	private: System::Windows::Forms::TextBox^  txtFullName;
	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::Label^  lblBranch;

	private: System::Windows::Forms::Label^  lblFullName;
	private: System::Windows::Forms::Label^  lblPhone;
	private: System::Windows::Forms::Label^  lblEmail;
	private: System::Windows::Forms::Label^  lblUsername;
	private: System::Windows::Forms::TextBox^  txtBranch;
	private: System::Windows::Forms::Button^  btnUpdate;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;


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
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtFullName = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->lblBranch = (gcnew System::Windows::Forms::Label());
			this->lblFullName = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->txtBranch = (gcnew System::Windows::Forms::TextBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// txtPhone
			// 
			this->txtPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(111, 291);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(232, 27);
			this->txtPhone->TabIndex = 39;
			this->txtPhone->TextChanged += gcnew System::EventHandler(this, &ProfEditProfile::txtPhone_TextChanged);
			// 
			// txtEmail
			// 
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(111, 193);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(232, 27);
			this->txtEmail->TabIndex = 38;
			// 
			// txtFullName
			// 
			this->txtFullName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtFullName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFullName->Location = System::Drawing::Point(111, 87);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(232, 27);
			this->txtFullName->TabIndex = 36;
			// 
			// txtUsername
			// 
			this->txtUsername->BackColor = System::Drawing::Color::White;
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(494, 87);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->ReadOnly = true;
			this->txtUsername->Size = System::Drawing::Size(232, 27);
			this->txtUsername->TabIndex = 35;
			// 
			// lblBranch
			// 
			this->lblBranch->AutoSize = true;
			this->lblBranch->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBranch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblBranch->Location = System::Drawing::Point(490, 169);
			this->lblBranch->Name = L"lblBranch";
			this->lblBranch->Size = System::Drawing::Size(68, 21);
			this->lblBranch->TabIndex = 34;
			this->lblBranch->Text = L"Branch";
			// 
			// lblFullName
			// 
			this->lblFullName->AutoSize = true;
			this->lblFullName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblFullName->Location = System::Drawing::Point(107, 63);
			this->lblFullName->Name = L"lblFullName";
			this->lblFullName->Size = System::Drawing::Size(90, 21);
			this->lblFullName->TabIndex = 32;
			this->lblFullName->Text = L"Full Name";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblPhone->Location = System::Drawing::Point(107, 267);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(133, 21);
			this->lblPhone->TabIndex = 31;
			this->lblPhone->Text = L"Phone Number";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblEmail->Location = System::Drawing::Point(107, 169);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(52, 21);
			this->lblEmail->TabIndex = 29;
			this->lblEmail->Text = L"Email";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->lblUsername->Location = System::Drawing::Point(490, 63);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(93, 21);
			this->lblUsername->TabIndex = 28;
			this->lblUsername->Text = L"Username";
			// 
			// txtBranch
			// 
			this->txtBranch->BackColor = System::Drawing::Color::White;
			this->txtBranch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBranch->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBranch->Location = System::Drawing::Point(494, 193);
			this->txtBranch->Name = L"txtBranch";
			this->txtBranch->ReadOnly = true;
			this->txtBranch->Size = System::Drawing::Size(232, 27);
			this->txtBranch->TabIndex = 41;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::White;
			this->btnUpdate->Location = System::Drawing::Point(339, 405);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(175, 47);
			this->btnUpdate->TabIndex = 42;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProfEditProfile::btnUpdate_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(111, 120);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(232, 1);
			this->panel2->TabIndex = 44;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(111, 324);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(232, 1);
			this->panel3->TabIndex = 45;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(111, 226);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(232, 1);
			this->panel4->TabIndex = 46;
			// 
			// ProfEditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->txtBranch);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtFullName);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->lblBranch);
			this->Controls->Add(this->lblFullName);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblUsername);
			this->Name = L"ProfEditProfile";
			this->Size = System::Drawing::Size(914, 532);
			this->Load += gcnew System::EventHandler(this, &ProfEditProfile::ProfEditProfile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProfEditProfile_Load(System::Object^  sender, System::EventArgs^  e) {
				
				 OES ^Access = gcnew OES();
				 Access->ExecQuery("SELECT * FROM Users WHERE Username='" + gVar::Username + "'");
				 if (Access->RecordCount == 1){

					 txtUsername->Text = Convert::ToString(Access->DBDT->Rows[0]["Username"]);
					 txtFullName->Text = Convert::ToString(Access->DBDT->Rows[0]["FullName"]);
					 txtEmail->Text = Convert::ToString(Access->DBDT->Rows[0]["Email"]);
					 txtPhone->Text = Convert::ToString(Access->DBDT->Rows[0]["PhoneNo"]);
					 txtBranch->Text = Convert::ToString(Access->DBDT->Rows[0]["Branch"]);

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
				 Access->ExecQuery("UPDATE Users SET FullName='" + txtFullName->Text + "', Email='" + txtEmail->Text + "',  PhoneNo='" + txtPhone->Text + "' WHERE Username = '" + txtUsername->Text + "'");


				 //MessageBox::Show("UPDATE Users SET FullName='" + txtFullName->Text + "' WHERE Username = '" + txtUsername->Text + "'");
				 MessageBox::Show("Profile Updated Successfully");
			 }
}
private: System::Void txtPhone_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
}
};
}
#endif