#pragma once
#include "Encryption.h"
#include "Database.h";
#include "GlobalVar.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Encryption;
using namespace Database;
using namespace Global_Var;


namespace Online_Exam {

	/// <summary>
	/// Summary for ChangePassword
	/// </summary>
	public ref class ChangePassword : public System::Windows::Forms::UserControl
	{
	public:
		ChangePassword(void)
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
		~ChangePassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtPassword;
	protected:
	private: System::Windows::Forms::TextBox^  txtConfirmPassword;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;

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
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(428, 121);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(179, 22);
			this->txtPassword->TabIndex = 0;
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->Location = System::Drawing::Point(428, 175);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->PasswordChar = '*';
			this->txtConfirmPassword->Size = System::Drawing::Size(179, 22);
			this->txtConfirmPassword->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(203, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter new password";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(203, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Confirm Password";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(333, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(205, 65);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Change Password";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChangePassword::button1_Click);
			// 
			// ChangePassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtConfirmPassword);
			this->Controls->Add(this->txtPassword);
			this->Name = L"ChangePassword";
			this->Size = System::Drawing::Size(903, 423);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^ str1 = txtPassword->Text;
				 String ^ str2 = txtConfirmPassword->Text;
				 if (str1 != str2||(str1->Trim()==""))
				 {
					 MessageBox::Show("Entered Passwords do not match, please avoid spaces before and after the password", "Wrong Details");
				 }
				 else
				 {
					 String ^ passSalt = MakeSalt(10);
					 String ^ passwordHash = EncryptPassword(str1, passSalt);
					 OES ^ Access = gcnew OES();
					 Access->AddParam("@passwordHash", passwordHash);
					 Access->AddParam("@passSalt", passSalt);
					 Access->ExecQuery("UPDATE Users SET PasswordHash= @passwordHash, PasswordSalt = @passSalt WHERE Username = '" + gVar::Username + "'");
					 MessageBox::Show("Password Changed Successfully", "Success");
				 }
				 txtPassword->Text = "";
				 txtConfirmPassword->Text = "";
	}
	};
}
