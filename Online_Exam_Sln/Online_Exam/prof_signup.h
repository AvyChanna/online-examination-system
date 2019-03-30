#pragma once
#include "Database.h"
#include "Encryption.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;
using namespace Encryption;

namespace Online_Exam
{

	/// <summary>
	/// Summary for prof_signup
	/// </summary>
	public ref class prof_signup : public System::Windows::Forms::UserControl
	{
		public:
			prof_signup(void)
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
			~prof_signup()
			{
				if (components)
				{
					delete components;
				}
			}
			private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container ^components;
	private: System::Windows::Forms::TextBox^  pNumTxt;
	private: System::Windows::Forms::TextBox^  mailTxt;
	private: System::Windows::Forms::TextBox^  confirmPassTxt;
	private: System::Windows::Forms::TextBox^  userTxt;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::CheckBox^  memChkBox;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  branchCb;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
		
		private:
			System::Windows::Forms::Button^  studBtn;
		protected:
		private:
			System::Windows::Forms::TextBox^  nameTxt;
		private:
			System::Windows::Forms::TextBox^  passTxt;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->studBtn = (gcnew System::Windows::Forms::Button());
			this->nameTxt = (gcnew System::Windows::Forms::TextBox());
			this->passTxt = (gcnew System::Windows::Forms::TextBox());
			this->pNumTxt = (gcnew System::Windows::Forms::TextBox());
			this->mailTxt = (gcnew System::Windows::Forms::TextBox());
			this->confirmPassTxt = (gcnew System::Windows::Forms::TextBox());
			this->userTxt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->memChkBox = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->branchCb = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// studBtn
			// 
			this->studBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->studBtn->FlatAppearance->BorderSize = 0;
			this->studBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->studBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studBtn->ForeColor = System::Drawing::Color::White;
			this->studBtn->Location = System::Drawing::Point(208, 302);
			this->studBtn->Margin = System::Windows::Forms::Padding(2);
			this->studBtn->Name = L"studBtn";
			this->studBtn->Size = System::Drawing::Size(126, 33);
			this->studBtn->TabIndex = 78;
			this->studBtn->Text = L"Submit";
			this->studBtn->UseVisualStyleBackColor = false;
			this->studBtn->Click += gcnew System::EventHandler(this, &prof_signup::studBtn_Click);
			// 
			// nameTxt
			// 
			this->nameTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTxt->Location = System::Drawing::Point(91, 122);
			this->nameTxt->Margin = System::Windows::Forms::Padding(2);
			this->nameTxt->Name = L"nameTxt";
			this->nameTxt->Size = System::Drawing::Size(164, 18);
			this->nameTxt->TabIndex = 77;
			// 
			// passTxt
			// 
			this->passTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passTxt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->passTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTxt->Location = System::Drawing::Point(321, 54);
			this->passTxt->Margin = System::Windows::Forms::Padding(2);
			this->passTxt->Name = L"passTxt";
			this->passTxt->Size = System::Drawing::Size(164, 18);
			this->passTxt->TabIndex = 76;
			this->passTxt->UseSystemPasswordChar = true;
			// 
			// pNumTxt
			// 
			this->pNumTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pNumTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pNumTxt->Location = System::Drawing::Point(91, 245);
			this->pNumTxt->Margin = System::Windows::Forms::Padding(2);
			this->pNumTxt->Name = L"pNumTxt";
			this->pNumTxt->Size = System::Drawing::Size(164, 18);
			this->pNumTxt->TabIndex = 73;
			this->pNumTxt->TextChanged += gcnew System::EventHandler(this, &prof_signup::pNumTxt_TextChanged);
			// 
			// mailTxt
			// 
			this->mailTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mailTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mailTxt->Location = System::Drawing::Point(91, 183);
			this->mailTxt->Margin = System::Windows::Forms::Padding(2);
			this->mailTxt->Name = L"mailTxt";
			this->mailTxt->Size = System::Drawing::Size(164, 18);
			this->mailTxt->TabIndex = 72;
			// 
			// confirmPassTxt
			// 
			this->confirmPassTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->confirmPassTxt->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->confirmPassTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmPassTxt->Location = System::Drawing::Point(321, 122);
			this->confirmPassTxt->Margin = System::Windows::Forms::Padding(2);
			this->confirmPassTxt->Name = L"confirmPassTxt";
			this->confirmPassTxt->Size = System::Drawing::Size(164, 18);
			this->confirmPassTxt->TabIndex = 71;
			this->confirmPassTxt->UseSystemPasswordChar = true;
			// 
			// userTxt
			// 
			this->userTxt->BackColor = System::Drawing::Color::White;
			this->userTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->userTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userTxt->Location = System::Drawing::Point(91, 54);
			this->userTxt->Margin = System::Windows::Forms::Padding(2);
			this->userTxt->Name = L"userTxt";
			this->userTxt->Size = System::Drawing::Size(164, 18);
			this->userTxt->TabIndex = 70;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label9->Location = System::Drawing::Point(318, 162);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 17);
			this->label9->TabIndex = 69;
			this->label9->Text = L"Branch";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label8->Location = System::Drawing::Point(318, 98);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 17);
			this->label8->TabIndex = 68;
			this->label8->Text = L"Password Confirm";
			// 
			// memChkBox
			// 
			this->memChkBox->AutoSize = true;
			this->memChkBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memChkBox->ForeColor = System::Drawing::Color::Gray;
			this->memChkBox->Location = System::Drawing::Point(329, 249);
			this->memChkBox->Margin = System::Windows::Forms::Padding(2);
			this->memChkBox->Name = L"memChkBox";
			this->memChkBox->Size = System::Drawing::Size(115, 21);
			this->memChkBox->TabIndex = 67;
			this->memChkBox->Text = L"IITG Member";
			this->memChkBox->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label6->Location = System::Drawing::Point(88, 162);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 66;
			this->label6->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label5->Location = System::Drawing::Point(88, 225);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 17);
			this->label5->TabIndex = 65;
			this->label5->Text = L"Phone Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label3->Location = System::Drawing::Point(318, 32);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 17);
			this->label3->TabIndex = 63;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label2->Location = System::Drawing::Point(88, 98);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 17);
			this->label2->TabIndex = 62;
			this->label2->Text = L"Full Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label1->Location = System::Drawing::Point(88, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Username";
			// 
			// branchCb
			// 
			this->branchCb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->branchCb->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->branchCb->FormattingEnabled = true;
			this->branchCb->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"CSE", L"MNC", L"ECE", L"BT", L"EEE", L"ME", L"CE",
					L"CS"
			});
			this->branchCb->Location = System::Drawing::Point(321, 183);
			this->branchCb->Margin = System::Windows::Forms::Padding(2);
			this->branchCb->Name = L"branchCb";
			this->branchCb->Size = System::Drawing::Size(164, 25);
			this->branchCb->TabIndex = 79;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(322, 143);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(164, 1);
			this->panel1->TabIndex = 80;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(91, 205);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(164, 1);
			this->panel2->TabIndex = 81;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Location = System::Drawing::Point(91, 143);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(164, 1);
			this->panel3->TabIndex = 82;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Location = System::Drawing::Point(88, 74);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(164, 1);
			this->panel4->TabIndex = 83;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(91, 266);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(164, 1);
			this->panel5->TabIndex = 84;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Black;
			this->panel6->Location = System::Drawing::Point(321, 74);
			this->panel6->Margin = System::Windows::Forms::Padding(2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(164, 1);
			this->panel6->TabIndex = 85;
			// 
			// prof_signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->branchCb);
			this->Controls->Add(this->studBtn);
			this->Controls->Add(this->nameTxt);
			this->Controls->Add(this->passTxt);
			this->Controls->Add(this->pNumTxt);
			this->Controls->Add(this->mailTxt);
			this->Controls->Add(this->confirmPassTxt);
			this->Controls->Add(this->userTxt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->memChkBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"prof_signup";
			this->Size = System::Drawing::Size(585, 358);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			bool validate()
			{
				OES^Access = gcnew OES();
				String ^str = userTxt->Text;
				Access->AddParam("@userName", str);
				Access->ExecQuery("SELECT * FROM Users WHERE Username =@userName");
				if (Access->DBDT->Rows->Count != 0 || Access->Exception->Length)
				{
					MessageBox::Show("UserName exist Already or error Occurs");
					return false;
				}


				if (passTxt->Text != confirmPassTxt->Text)
				{
					MessageBox::Show("Password do not match");
					passTxt->Clear();
					confirmPassTxt->Clear();
					return false;
				}
				/*if (pNumTxt->TextLength != 10)
				{
					MessageBox::Show("Phone Number Length should be 10");
					return false;
				}

				if (userTxt->Text->Trim() == "")
				{
					MessageBox::Show("UserName can not be Empty");
					return false;
				}*/
				for (int i = 0; i < pNumTxt->TextLength; i++)
				{
					if (pNumTxt->Text[i]>'9' || pNumTxt->Text[i] < '0')
					{
						MessageBox::Show("Phone Number should consist only digits 0-9", "Wrong Details");
						return false;
					}
				}
				if (nameTxt->Text->Trim() == "")
				{
					MessageBox::Show("Name can not be Empty", "Wrong Details");
					return false;
				}
				if (mailTxt->Text->Trim() == "")
				{
					MessageBox::Show("Email Field can not be Empty", "Wrong Details");
					return false;
				}
				if (branchCb->Text == "")
				{
					MessageBox::Show("Please select a branch", "Wrong Details");
					return false;
				}
				if (pNumTxt->Text->Trim() == "")
				{
					MessageBox::Show("Please enter Phone Number", "Wroong Details");
					return false;
				}
				str = nameTxt->Text;
				String ^str1 = "";
				for (int i = 0; i < str->Length; i++)
				{
					if (str[i] != ' ')
					{
						if (i>0 && str[i - 1] == ' ') str1 += " ";
						str1 += str[i];
					}
				}
				nameTxt->Text = str1;
				userTxt->Text = userTxt->Text->Trim();
				nameTxt->Text = nameTxt->Text->Trim();
				mailTxt->Text = mailTxt->Text->Trim();
				pNumTxt->Text = pNumTxt->Text->Trim();
				//rNumTxt->Text = rNumTxt->Text->Trim();
				return true;

			}


		private:
			System::Void studBtn_Click(System::Object^  sender, System::EventArgs^  e)
			{
				OES^ Access = gcnew OES();
				String^ des = "Professor";
				int check = 0;
				if (memChkBox->Checked)
					check = 1;

				if (validate())
				{
					try
					{
						String ^ PassSalt = MakeSalt(10);
						String ^ PassHash = EncryptPassword(passTxt->Text, PassSalt);

						Access->AddParam("@Username", userTxt->Text);
						Access->AddParam("@Fullname", nameTxt->Text);
						Access->AddParam("@PasswordHash", PassHash);
						Access->AddParam("@PasswordSalt", PassSalt);
						Access->AddParam("@Email", mailTxt->Text);
						Access->AddParam("@Phoneno", pNumTxt->Text);
						Access->AddParam("@Branch", branchCb->Text);
						Access->AddParam("@Designation", des);

						//Access->ExecQuery("insert into [Users] ( [Username],[FullName],[PasswordHash],[PasswordSalt],[Email],[PhoneNo],[Branch],[Designation] ) Values ( @Username,@Fullname,@PasswordHash,@PasswordSalt,@Email,@PhoneNo,@RollNo,@Branch,@Designation)");// , "+check+" )");
						Access->ExecQuery("insert into [Users] ( [Username],[FullName],[PasswordHash],[PasswordSalt],[Email],[PhoneNo],[Branch],[Designation],[IITG]) Values ( @Username,@Fullname,@PasswordHash,@PasswordSalt,@Email,@PhoneNo,@Branch,@Designation, " + check + " )");


						MessageBox::Show("Signup Successful");
					}
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message);
					}
				}







			}
		private:
			System::Void pNumTxt_TextChanged(System::Object^  sender, System::EventArgs^  e)
			{
				try
				{
					if (pNumTxt->Text != "")
						int  SectNo = Convert::ToInt32(pNumTxt->Text);

				}
				catch (Exception ^ ex)
				{

					MessageBox::Show("Please enter integer values in required fields.", "Error");
					pNumTxt->Clear();
					return;
				}



			}
	};
}
