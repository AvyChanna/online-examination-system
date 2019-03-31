#pragma once
#include "Encryption.h"
#include "Database.h"
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
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtPassword
			// 
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(70, 100);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(286, 21);
			this->txtPassword->TabIndex = 0;
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtConfirmPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConfirmPassword->Location = System::Drawing::Point(70, 220);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->PasswordChar = '*';
			this->txtConfirmPassword->Size = System::Drawing::Size(286, 21);
			this->txtConfirmPassword->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter new password";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(65, 192);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 36);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Confirm Password";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(339, 464);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 42);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Change Password";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ChangePassword::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(630, 532);
			this->panel1->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel3->Location = System::Drawing::Point(70, 126);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(286, 1);
			this->panel3->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel4->Location = System::Drawing::Point(70, 245);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(286, 1);
			this->panel4->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->txtConfirmPassword);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->txtPassword);
			this->panel2->Location = System::Drawing::Point(152, 84);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(615, 345);
			this->panel2->TabIndex = 6;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ChangePassword::panel2_Paint);
			// 
			// ChangePassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"ChangePassword";
			this->Size = System::Drawing::Size(913, 530);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

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
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
};
}
