#pragma once
#include"Database.h"
#include"Encryption.h"
#include"GlobalVar.h"
#include"Signup.h"
#include"ProfForm.h"
#include"StudentForm.h"
#include"NewPass.h"
namespace Online_Exam
{
	using namespace System::Net::Mail;
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
			String ^Username;
			String ^Password;
			String ^Email;
			Login(void)
			{
				InitializeComponent();
				Username = "";
				Password = "";
				Email = "";
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
		private:
			System::Windows::Forms::Label^  label1;
		private:
			System::Windows::Forms::TextBox^  textUsername;
		protected:

		private:
			System::Windows::Forms::Label^  label2;
		private:
			System::Windows::Forms::TextBox^  textPassword;
		private:
			System::Windows::Forms::Button^  btnLogin;


		private:
			System::Windows::Forms::LinkLabel^  linkLabel1;
		private:
			System::Windows::Forms::LinkLabel^  linkLabel2;
		private:
			System::Windows::Forms::PictureBox^  pictureBox1;

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
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->textUsername = (gcnew System::Windows::Forms::TextBox());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->textPassword = (gcnew System::Windows::Forms::TextBox());
				this->btnLogin = (gcnew System::Windows::Forms::Button());
				this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
				this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->Location = System::Drawing::Point(377, 10);
				this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(139, 31);
				this->label1->TabIndex = 3;
				this->label1->Text = L"Username";
				// 
				// textUsername
				// 
				this->textUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textUsername->Location = System::Drawing::Point(384, 46);
				this->textUsername->Margin = System::Windows::Forms::Padding(4);
				this->textUsername->Name = L"textUsername";
				this->textUsername->Size = System::Drawing::Size(363, 30);
				this->textUsername->TabIndex = 0;
				this->textUsername->TextChanged += gcnew System::EventHandler(this, &Login::textUsername_TextChanged);
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->Location = System::Drawing::Point(377, 101);
				this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(134, 31);
				this->label2->TabIndex = 4;
				this->label2->Text = L"Password";
				// 
				// textPassword
				// 
				this->textPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->textPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textPassword->Location = System::Drawing::Point(384, 137);
				this->textPassword->Margin = System::Windows::Forms::Padding(4);
				this->textPassword->Name = L"textPassword";
				this->textPassword->Size = System::Drawing::Size(363, 30);
				this->textPassword->TabIndex = 1;
				this->textPassword->UseSystemPasswordChar = true;
				this->textPassword->TextChanged += gcnew System::EventHandler(this, &Login::textUsername_TextChanged);
				// 
				// btnLogin
				// 
				this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btnLogin->Location = System::Drawing::Point(516, 235);
				this->btnLogin->Margin = System::Windows::Forms::Padding(4);
				this->btnLogin->Name = L"btnLogin";
				this->btnLogin->Size = System::Drawing::Size(100, 28);
				this->btnLogin->TabIndex = 2;
				this->btnLogin->Text = L"Login";
				this->btnLogin->UseVisualStyleBackColor = true;
				this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
				// 
				// linkLabel1
				// 
				this->linkLabel1->AutoSize = true;
				this->linkLabel1->Location = System::Drawing::Point(625, 172);
				this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->linkLabel1->Name = L"linkLabel1";
				this->linkLabel1->Size = System::Drawing::Size(122, 17);
				this->linkLabel1->TabIndex = 5;
				this->linkLabel1->TabStop = true;
				this->linkLabel1->Text = L"Forgot Password\?";
				this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
				// 
				// linkLabel2
				// 
				this->linkLabel2->AutoSize = true;
				this->linkLabel2->Location = System::Drawing::Point(444, 290);
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
				this->pictureBox1->Location = System::Drawing::Point(40, 18);
				this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(315, 273);
				this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox1->TabIndex = 7;
				this->pictureBox1->TabStop = false;
				// 
				// Login
				// 
				this->AcceptButton = this->btnLogin;
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(775, 319);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->linkLabel2);
				this->Controls->Add(this->linkLabel1);
				this->Controls->Add(this->btnLogin);
				this->Controls->Add(this->textPassword);
				this->Controls->Add(this->textUsername);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				this->Margin = System::Windows::Forms::Padding(4);
				this->MaximizeBox = false;
				this->MinimizeBox = false;
				this->Name = L"Login";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
				this->Text = L"Login";
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
			#pragma endregion
		private:
			System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e)
			{
				if (Username->Length == 0 || Password->Length == 0)
				{
					MessageBox::Show("Empty Username/Password");
					return;
				}
				// access database and get all values
				OES ^Access = gcnew OES();
				Access->AddParam("@Username", Username);
				Access->ExecQuery("Select Username, FullName, PasswordHash, PasswordSalt, TokenHash, TokenSalt, Email, PhoneNo, RollNo, Groups, IITG, Branch, Designation from Users where Username = @Username");
				if (Access->DBDT->Rows->Count == 0 || Access->Exception->Length)
				{
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

				if (DBPasshash == EncryptPassword(Password, DBPasssalt))
				{
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
					if (DBDesignation == "Student")
					{
						Hide();
						StudentForm^ form = gcnew StudentForm();
						form->ShowDialog();
						Show();
					}
					else
					{
						Hide();
						ProfForm^ form = gcnew ProfForm();
						form->ShowDialog();
						Show();
					}
					return;
				}
				else
				{
					if (!String::IsNullOrEmpty(DBTokenhash) && DBTokenhash == EncryptPassword(Password, DBTokensalt))
					{
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
						OES ^Access2 = gcnew OES();
						Access2->AddParam("@Username", DBUsername);
						Access2->ExecQuery("Update Users set TokenHash = NULL , TokenSalt = NULL where Username = @Username");
						if (Access2->Exception->Length)
						{
							MessageBox::Show("Error in processing token");
							return;
						}

						(gcnew NewPass(DBUsername))->ShowDialog();
					}
					else
						MessageBox::Show("Username\\Password is wrong");
				}
			}

		private:
			System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
			{
				Hide();
				(gcnew Signup())->ShowDialog();
					
				Show();
			}
		private:
			System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
			{
				if (Username->Trim() == "")
				{
					MessageBox::Show("Please Enter your Username", "Invalid Username");
					return;
				}
				OES ^Access = gcnew OES();
				Access->AddParam("@Username", Username);
				Access->ExecQuery("Select Email from Users where Username = @Username");
				if (Access->DBDT->Rows->Count == 0 || Access->Exception->Length)
				{
					MessageBox::Show("Username does not exist", "Invalid Username");
					return;
				}
			Email = Access->DBDT->Rows[0]->default[0]->ToString();
				String ^token = "";
				token = MakeSalt(20);
				String ^TokenHash = "";
				String ^TokenSalt = "";
				TokenSalt = MakeSalt(10);
				TokenHash = EncryptPassword(token, TokenSalt);
				Access->AddParam("@TokenHash", TokenHash);
				Access->AddParam("@TokenSalt", TokenSalt);
				Access->AddParam("@Username", Username);
				Access->ExecQuery("Update Users set TokenHash = @TokenHash , TokenSalt = @TokenSalt where Username = @Username");
				if (Access->Exception->Length)
				{
					MessageBox::Show("Could not edit Database");
					return;
				}
				try
				{

					SmtpClient ^SmtpObj = gcnew SmtpClient("smtp.gmail.com", 587);
					MailMessage ^ MailMsg = gcnew MailMessage();
					SmtpObj->UseDefaultCredentials = false;
					SmtpObj->Credentials = gcnew Net::NetworkCredential("iitg.oes.cse@gmail.com", "iitg.oes1234");
					SmtpObj->EnableSsl = true;

					MailMsg->From = gcnew MailAddress("iitg.oes.cse@gmail.com");
					MailMsg->To->Add(Email);
					MailMsg->Subject = "IITG Online Exam Account Password Token";
					MailMsg->IsBodyHtml = false;
					MailMsg->Body = "Hello, your token is " + token + " . Change your password as soon as possible. If you have not requested this token, ignore this message.";
					SmtpObj->Send(MailMsg);
				}
				catch (Exception ^ex)
				{
					MessageBox::Show("Could not send mail. Nevertheless, for testing, here is your token - " + token);
					return;
				}
				MessageBox::Show("Your new token has been sent to you by mail");
			}
		private:
			System::Void textUsername_TextChanged(System::Object^  sender, System::EventArgs^  e)
			{
				Username = textUsername->Text;
				Password = textPassword->Text;
			}

	};
}
