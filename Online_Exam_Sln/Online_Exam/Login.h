#pragma once
#include"Database.h"
#include"Encryption.h"
#include"GlobalVar.h"
#include "Signup.h"
#include "ProfForm.h"
#include "StudentForm.h"

namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Database;
	using namespace Encryption;
	using namespace Global_Var;
	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  textUsername;
	protected:


	private: System::Windows::Forms::TextBox^  textPassword;
	private: System::Windows::Forms::Button^  btnLogin;


	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	internal: System::Windows::Forms::PictureBox^  pictureBox2;
	private:
	internal: System::Windows::Forms::PictureBox^  pictureBox3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->textUsername = (gcnew System::Windows::Forms::TextBox());
			this->textPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// textUsername
			// 
			this->textUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->textUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textUsername->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F));
			this->textUsername->ForeColor = System::Drawing::Color::White;
			this->textUsername->Location = System::Drawing::Point(76, 211);
			this->textUsername->Margin = System::Windows::Forms::Padding(4);
			this->textUsername->Name = L"textUsername";
			this->textUsername->Size = System::Drawing::Size(364, 20);
			this->textUsername->TabIndex = 0;
			this->textUsername->Text = L"Username";
			// 
			// textPassword
			// 
			this->textPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->textPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textPassword->Location = System::Drawing::Point(76, 281);
			this->textPassword->Margin = System::Windows::Forms::Padding(4);
			this->textPassword->Name = L"textPassword";
			this->textPassword->Size = System::Drawing::Size(364, 23);
			this->textPassword->TabIndex = 1;
			this->textPassword->UseSystemPasswordChar = true;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Location = System::Drawing::Point(199, 413);
			this->btnLogin->Margin = System::Windows::Forms::Padding(4);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(111, 49);
			this->btnLogin->TabIndex = 2;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(318, 331);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(122, 17);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Forgot Password\?";
			this->linkLabel1->VisitedLinkColor = System::Drawing::SystemColors::WindowFrame;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->LinkColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(112, 519);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(239, 17);
			this->linkLabel2->TabIndex = 6;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Don\'t have an account\? Signup here";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel2_LinkClicked);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(184, 29);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(148, 129);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(43, 238);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(397, 1);
			this->panel1->TabIndex = 8;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(44, 313);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(396, 1);
			this->panel2->TabIndex = 9;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(42, 204);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(27, 27);
			this->pictureBox2->TabIndex = 31;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(42, 281);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(27, 27);
			this->pictureBox3->TabIndex = 34;
			this->pictureBox3->TabStop = false;
			// 
			// Login
			// 
			this->AcceptButton = this->btnLogin;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(498, 589);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->textPassword);
			this->Controls->Add(this->textUsername);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Login";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^Username = textUsername->Text;
				 String ^Password = textPassword->Text;
				 if (Username->Length == 0 && Password->Length == 0){
					 MessageBox::Show("Empty Username/Password");
					 return;
				 }
				 // access database and get all values
				 OES ^Access = gcnew OES();
				 Access->AddParam("@Username", Username);
				 Access->ExecQuery("Select Username, FullName, PasswordHash, PasswordSalt, TokenHash, TokenSalt, Email, PhoneNo, RollNo, Groups, IITG, Branch, Designation from Users where Username = @Username");
				 if (Access->DBDT->Rows->Count == 0 || Access->Exception->Length){
					 MessageBox::Show("Username\\Password is wrong");
					 return;
				 }
				

				 String ^DBUsername = Access->DBDT->Rows[0]->default[0]->ToString();
				 String ^DBFullname = Access->DBDT->Rows[0]->default[1]->ToString();
				 String ^DBPasshash = Access->DBDT->Rows[0]->default[2]->ToString();
				 String ^DBPasssalt = Access->DBDT->Rows[0]->default[3]->ToString();
				 String ^DBTokenhash = Access->DBDT->Rows[0]->default[4]->ToString();
				 String ^DBTokensalt = Access->DBDT->Rows[0]->default[5]->ToString();
				 String ^DBEmail = Access->DBDT->Rows[0]->default[6]->ToString();
				 String ^DBPhone = Access->DBDT->Rows[0]->default[7]->ToString();
				 String ^DBRollno = Access->DBDT->Rows[0]->default[8]->ToString();
				 String ^DBGroups = Access->DBDT->Rows[0]->default[9]->ToString();
				 String ^DBIITG = Access->DBDT->Rows[0]->default[10]->ToString();
				 String ^DBBranch = Access->DBDT->Rows[0]->default[11]->ToString();
				 String ^DBDesignation = Access->DBDT->Rows[0]->default[12]->ToString();

				 if (DBPasshash == EncryptPassword(Password, DBPasssalt)){
					 //login successful
					 gVar::Username = DBUsername;
					 gVar::Fullname = DBFullname;
					 gVar::Passhash = DBPasshash;
					 gVar::Passsalt = DBPasssalt;
					 gVar::Tokenhash = DBTokenhash;
					 gVar::Tokensalt = DBTokensalt;
					 gVar::Email = DBEmail;
					 gVar::Phone = DBPhone;
					 gVar::Rollno = DBRollno;
					 gVar::Groups = DBGroups;
					 gVar::IITG = DBIITG;
					 gVar::Branch = DBBranch;
					 gVar::Designation = DBDesignation;
					 if (DBDesignation == "Student"){
						 Login::Hide();
						 StudentForm^ form = gcnew StudentForm();
						 form->Show();

					 }
					 else{
						 Login::Hide();
						 ProfForm^ form = gcnew ProfForm();
						 form->Show();

					 }
							
				 }
				 else{
					 MessageBox::Show("Username\\Password is wrong");
				 }

				 if (DBPasshash == EncryptPassword(Password, DBTokenhash)){
					 //reset password
					 gVar::Username = DBUsername;
					 gVar::Fullname = DBFullname;
					 gVar::Passhash = DBPasshash;
					 gVar::Passsalt = DBPasssalt;
					 gVar::Tokenhash = DBTokenhash;
					 gVar::Tokensalt = DBTokensalt;
					 gVar::Email = DBEmail;
					 gVar::Phone = DBPhone;
					 gVar::Rollno = DBRollno;
					 gVar::Groups = DBGroups;
					 gVar::IITG = DBIITG;
					 gVar::Branch = DBBranch;
					 gVar::Designation = DBDesignation;
					 // TODO: make reset passwd function, ask for new password
				 }
				 






	}

private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 //TODO: open signup
			 Login::Hide();
			 Signup^ form = gcnew Signup();
			 form->Show();
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 // TODO: open mailer
}


};
}
