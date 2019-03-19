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
			this->SuspendLayout();
			// 
			// lblBranch
			// 
			this->lblBranch->AutoSize = true;
			this->lblBranch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->lblBranch->Location = System::Drawing::Point(100, 350);
			this->lblBranch->Name = L"lblBranch";
			this->lblBranch->Size = System::Drawing::Size(74, 25);
			this->lblBranch->TabIndex = 19;
			this->lblBranch->Text = L"Branch";

			// 
			// lblIITG
			// 
			this->lblIITG->AutoSize = true;
			this->lblIITG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIITG->Location = System::Drawing::Point(75, 244);
			this->lblIITG->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblIITG->Name = L"lblIITG";
			this->lblIITG->Size = System::Drawing::Size(102, 20);
			this->lblIITG->TabIndex = 18;
			this->lblIITG->Text = L"IITG Student";
			// 
			// lblFullName
			// 
			this->lblFullName->AutoSize = true;
			this->lblFullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullName->Location = System::Drawing::Point(75, 81);
			this->lblFullName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblFullName->Name = L"lblFullName";
			this->lblFullName->Size = System::Drawing::Size(80, 20);
			this->lblFullName->TabIndex = 17;
			this->lblFullName->Text = L"Full Name";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->Location = System::Drawing::Point(75, 203);
			this->lblPhone->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(115, 20);
			this->lblPhone->TabIndex = 16;
			this->lblPhone->Text = L"Phone Number";
			// 
			// lblRoll
			// 
			this->lblRoll->AutoSize = true;
			this->lblRoll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRoll->Location = System::Drawing::Point(75, 122);
			this->lblRoll->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblRoll->Name = L"lblRoll";
			this->lblRoll->Size = System::Drawing::Size(64, 20);
			this->lblRoll->TabIndex = 15;
			this->lblRoll->Text = L"Roll No.";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(75, 162);
			this->lblEmail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(48, 20);
			this->lblEmail->TabIndex = 14;
			this->lblEmail->Text = L"Email";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(75, 41);
			this->lblUsername->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(83, 20);
			this->lblUsername->TabIndex = 13;
			this->lblUsername->Text = L"Username";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(350, 50);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->ReadOnly = true;
			this->txtUsername->Size = System::Drawing::Size(173, 22);
			this->txtUsername->TabIndex = 20;
			// 
			// txtFullName
			// 
			this->txtFullName->Location = System::Drawing::Point(350, 100);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(173, 22);
			this->txtFullName->TabIndex = 21;
			// 
			// txtRoll
			// 
			this->txtRoll->Location = System::Drawing::Point(350, 150);
			this->txtRoll->Name = L"txtRoll";
			this->txtRoll->Size = System::Drawing::Size(173, 22);
			this->txtRoll->TabIndex = 22;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(350, 200);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(173, 22);
			this->txtEmail->TabIndex = 23;
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(350, 250);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(173, 22);
			this->txtPhone->TabIndex = 24;
			// 
			// txtIITG
			// 
			this->txtIITG->Location = System::Drawing::Point(350, 300);
			this->txtIITG->Name = L"txtIITG";
			this->txtIITG->ReadOnly = true;
			this->txtIITG->Size = System::Drawing::Size(173, 22);
			this->txtIITG->TabIndex = 25;
			// 
			// txtBranch
			// 
			this->txtBranch->Location = System::Drawing::Point(350, 350);
			this->txtBranch->Name = L"txtBranch";
			this->txtBranch->ReadOnly = true;
			this->txtBranch->Size = System::Drawing::Size(173, 22);
			this->txtBranch->TabIndex = 26;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(263, 386);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(149, 35);
			this->btnUpdate->TabIndex = 27;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StudentEditProfile::btnUpdate_Click);
			// 
			// StudentEditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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

			this->Size = System::Drawing::Size(903, 424);

			this->Load += gcnew System::EventHandler(this, &StudentEditProfile::StudentEditProfile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentEditProfile_Load(System::Object^  sender, System::EventArgs^  e) {

				 OES ^Access = gcnew OES();
				 Access->ExecQuery("SELECT * FROM Users WHERE Username='" + gVar::b + "'");
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
private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {

			 OES ^Access = gcnew OES();
			 Access->ExecQuery("UPDATE Users SET FullName='" + txtFullName->Text + "', Email='" + txtEmail->Text + "',  PhoneNo='" + txtPhone->Text + "', RollNo='" + txtRoll->Text + "' WHERE Username = '" + txtUsername->Text + "'");
			 
			 
			 //MessageBox::Show("UPDATE Users SET FullName='" + txtFullName->Text + "' WHERE Username = '" + txtUsername->Text + "'");
			 MessageBox::Show("Profile Updated Successfully");
			 
}

};
}
#endif
