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
			this->SuspendLayout();
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(493, 202);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(173, 22);
			this->txtPhone->TabIndex = 39;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(493, 155);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(173, 22);
			this->txtEmail->TabIndex = 38;
			// 
			// txtFullName
			// 
			this->txtFullName->Location = System::Drawing::Point(493, 106);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(173, 22);
			this->txtFullName->TabIndex = 36;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(493, 56);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->ReadOnly = true;
			this->txtUsername->Size = System::Drawing::Size(173, 22);
			this->txtUsername->TabIndex = 35;
			// 
			// lblBranch
			// 
			this->lblBranch->AutoSize = true;
			this->lblBranch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBranch->Location = System::Drawing::Point(243, 250);
			this->lblBranch->Name = L"lblBranch";
			this->lblBranch->Size = System::Drawing::Size(74, 25);
			this->lblBranch->TabIndex = 34;
			this->lblBranch->Text = L"Branch";
			// 
			// lblFullName
			// 
			this->lblFullName->AutoSize = true;
			this->lblFullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullName->Location = System::Drawing::Point(243, 106);
			this->lblFullName->Name = L"lblFullName";
			this->lblFullName->Size = System::Drawing::Size(100, 25);
			this->lblFullName->TabIndex = 32;
			this->lblFullName->Text = L"Full Name";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->Location = System::Drawing::Point(243, 202);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(143, 25);
			this->lblPhone->TabIndex = 31;
			this->lblPhone->Text = L"Phone Number";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(243, 155);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(60, 25);
			this->lblEmail->TabIndex = 29;
			this->lblEmail->Text = L"Email";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(243, 56);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(102, 25);
			this->lblUsername->TabIndex = 28;
			this->lblUsername->Text = L"Username";
			// 
			// txtBranch
			// 
			this->txtBranch->Location = System::Drawing::Point(493, 250);
			this->txtBranch->Name = L"txtBranch";
			this->txtBranch->ReadOnly = true;
			this->txtBranch->Size = System::Drawing::Size(173, 22);
			this->txtBranch->TabIndex = 41;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(388, 323);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(149, 35);
			this->btnUpdate->TabIndex = 42;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProfEditProfile::btnUpdate_Click);
			// 
			// ProfEditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			this->Size = System::Drawing::Size(903, 424);
			this->Load += gcnew System::EventHandler(this, &ProfEditProfile::ProfEditProfile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProfEditProfile_Load(System::Object^  sender, System::EventArgs^  e) {
				
				 OES ^Access = gcnew OES();
				 Access->ExecQuery("SELECT * FROM Users WHERE Username='" + gVar::b + "'");
				 if (Access->RecordCount == 1){

					 txtUsername->Text = Convert::ToString(Access->DBDT->Rows[0]["Username"]);
					 txtFullName->Text = Convert::ToString(Access->DBDT->Rows[0]["FullName"]);
					 txtEmail->Text = Convert::ToString(Access->DBDT->Rows[0]["Email"]);
					 txtPhone->Text = Convert::ToString(Access->DBDT->Rows[0]["PhoneNo"]);
					 txtBranch->Text = Convert::ToString(Access->DBDT->Rows[0]["Branch"]);

				 }
	}
private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {

			 OES ^Access = gcnew OES();
			 Access->ExecQuery("UPDATE Users SET FullName='" + txtFullName->Text + "', Email='" + txtEmail->Text + "',  PhoneNo='" + txtPhone->Text +  "' WHERE Username = '" + txtUsername->Text + "'");


			 //MessageBox::Show("UPDATE Users SET FullName='" + txtFullName->Text + "' WHERE Username = '" + txtUsername->Text + "'");
			 MessageBox::Show("Profile Updated Successfully");
}
};
}
#endif