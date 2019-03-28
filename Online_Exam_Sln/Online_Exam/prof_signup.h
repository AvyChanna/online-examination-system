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

namespace Online_Exam {

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
	private: System::Windows::Forms::Button^  studBtn;
	protected:
	private: System::Windows::Forms::TextBox^  nameTxt;
	private: System::Windows::Forms::TextBox^  passTxt;

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
	private: System::Windows::Forms::Label^  existLbl;



	protected:





















	protected:



















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
			this->existLbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// studBtn
			// 
			this->studBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->studBtn->FlatAppearance->BorderSize = 0;
			this->studBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->studBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studBtn->ForeColor = System::Drawing::Color::White;
			this->studBtn->Location = System::Drawing::Point(555, 430);
			this->studBtn->Name = L"studBtn";
			this->studBtn->Size = System::Drawing::Size(95, 41);
			this->studBtn->TabIndex = 78;
			this->studBtn->Text = L"Sumbit";
			this->studBtn->UseVisualStyleBackColor = false;
			this->studBtn->Click += gcnew System::EventHandler(this, &prof_signup::studBtn_Click);
			// 
			// nameTxt
			// 
			this->nameTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->nameTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTxt->ForeColor = System::Drawing::Color::White;
			this->nameTxt->Location = System::Drawing::Point(216, 136);
			this->nameTxt->Name = L"nameTxt";
			this->nameTxt->Size = System::Drawing::Size(190, 27);
			this->nameTxt->TabIndex = 77;
			this->nameTxt->Text = L"shubham kumar";
			// 
			// passTxt
			// 
			this->passTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->passTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTxt->ForeColor = System::Drawing::Color::White;
			this->passTxt->Location = System::Drawing::Point(216, 172);
			this->passTxt->Name = L"passTxt";
			this->passTxt->Size = System::Drawing::Size(190, 27);
			this->passTxt->TabIndex = 76;
			this->passTxt->Text = L"sss";
			// 
			// pNumTxt
			// 
			this->pNumTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->pNumTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pNumTxt->ForeColor = System::Drawing::Color::White;
			this->pNumTxt->Location = System::Drawing::Point(216, 300);
			this->pNumTxt->Name = L"pNumTxt";
			this->pNumTxt->Size = System::Drawing::Size(190, 27);
			this->pNumTxt->TabIndex = 73;
			this->pNumTxt->Text = L"7412589630";
			this->pNumTxt->TextChanged += gcnew System::EventHandler(this, &prof_signup::pNumTxt_TextChanged);
			// 
			// mailTxt
			// 
			this->mailTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->mailTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mailTxt->ForeColor = System::Drawing::Color::White;
			this->mailTxt->Location = System::Drawing::Point(216, 256);
			this->mailTxt->Name = L"mailTxt";
			this->mailTxt->Size = System::Drawing::Size(190, 27);
			this->mailTxt->TabIndex = 72;
			this->mailTxt->Text = L"skj@iitg";
			// 
			// confirmPassTxt
			// 
			this->confirmPassTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->confirmPassTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmPassTxt->ForeColor = System::Drawing::Color::White;
			this->confirmPassTxt->Location = System::Drawing::Point(216, 211);
			this->confirmPassTxt->Name = L"confirmPassTxt";
			this->confirmPassTxt->Size = System::Drawing::Size(190, 27);
			this->confirmPassTxt->TabIndex = 71;
			this->confirmPassTxt->Text = L"sss";
			// 
			// userTxt
			// 
			this->userTxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->userTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userTxt->ForeColor = System::Drawing::Color::White;
			this->userTxt->Location = System::Drawing::Point(216, 89);
			this->userTxt->Name = L"userTxt";
			this->userTxt->Size = System::Drawing::Size(190, 27);
			this->userTxt->TabIndex = 70;
			this->userTxt->Text = L"shubham";
			this->userTxt->TextChanged += gcnew System::EventHandler(this, &prof_signup::userTxt_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(450, 132);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 20);
			this->label9->TabIndex = 69;
			this->label9->Text = L"Branch";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(52, 214);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(147, 20);
			this->label8->TabIndex = 68;
			this->label8->Text = L"Password Confirm";
			// 
			// memChkBox
			// 
			this->memChkBox->AutoSize = true;
			this->memChkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->memChkBox->ForeColor = System::Drawing::Color::White;
			this->memChkBox->Location = System::Drawing::Point(362, 384);
			this->memChkBox->Name = L"memChkBox";
			this->memChkBox->Size = System::Drawing::Size(128, 24);
			this->memChkBox->TabIndex = 67;
			this->memChkBox->Text = L"IITG Member";
			this->memChkBox->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(52, 255);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 20);
			this->label6->TabIndex = 66;
			this->label6->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(52, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 20);
			this->label5->TabIndex = 65;
			this->label5->Text = L"Phone Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(52, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 63;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(52, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 20);
			this->label2->TabIndex = 62;
			this->label2->Text = L"Full Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(52, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 20);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Username";
			// 
			// branchCb
			// 
			this->branchCb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->branchCb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->branchCb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->branchCb->ForeColor = System::Drawing::Color::White;
			this->branchCb->FormattingEnabled = true;
			this->branchCb->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"CSE", L"MNC", L"ECE", L"BT", L"EEE", L"ME", L"CE",
					L"CS"
			});
			this->branchCb->Location = System::Drawing::Point(531, 128);
			this->branchCb->Name = L"branchCb";
			this->branchCb->Size = System::Drawing::Size(157, 28);
			this->branchCb->TabIndex = 79;
			// 
			// existLbl
			// 
			this->existLbl->AutoSize = true;
			this->existLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->existLbl->ForeColor = System::Drawing::Color::White;
			this->existLbl->Location = System::Drawing::Point(424, 92);
			this->existLbl->Name = L"existLbl";
			this->existLbl->Size = System::Drawing::Size(186, 20);
			this->existLbl->TabIndex = 80;
			this->existLbl->Text = L"Username does not exit";
			// 
			// prof_signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->Controls->Add(this->existLbl);
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
			this->Name = L"prof_signup";
			this->Size = System::Drawing::Size(757, 547);
			this->Load += gcnew System::EventHandler(this, &prof_signup::prof_signup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:bool validate(){
					OES^Access = gcnew OES();
					String ^str = userTxt->Text;
					Access->AddParam("@userName", str);
					Access->ExecQuery("SELECT * FROM Users WHERE Username =@userName");
					if (Access->DBDT->Rows->Count != 0 || Access->Exception->Length){
						MessageBox::Show("UserName exist Already or error Occurs");
						return false;
					}


					if (passTxt->Text != confirmPassTxt->Text){
						MessageBox::Show("Password do not match");
						passTxt->Clear();
						confirmPassTxt->Clear();
						return false;
					}
					if (pNumTxt->TextLength != 10){
						MessageBox::Show("Phone Number Length should be 10");
						return false;
					}
					
					if (userTxt->Text->Trim() == ""){
						MessageBox::Show("UserName can not be Empty");
						return false;
					}
					if (nameTxt->Text->Trim() == ""){
						MessageBox::Show("Name can not be Empty");
						return false;
					}
					if (mailTxt->Text->Trim() == ""){
						MessageBox::Show("Email Field can not be Empty");
						return false;
					}
					if (branchCb->Text == ""){
						MessageBox::Show("Please select a branch");
						return false;
					}
					return true;

		}


	private: System::Void studBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 OES^ Access = gcnew OES();
				 String^ des = "Professor";
				 int check = 0;
				 if (memChkBox->Checked)
					 check = 1;

				 if (validate()){
					 try{
						 String ^ PassSalt = MakeSalt();
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
					 catch (Exception^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
				 






	}
private: System::Void pNumTxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 if (pNumTxt->Text != "")
					 int  SectNo = Convert::ToInt32(pNumTxt->Text);

			 }
			 catch (Exception ^ ex){

				 MessageBox::Show("Please enter integer values in required fields.", "Error");
				 pNumTxt->Clear();
				 return;
			 }



}
private: System::Void userTxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 OES^Access = gcnew OES();
			 String ^str = userTxt->Text;
			 Access->AddParam("@userName", str);
			 Access->ExecQuery("SELECT * FROM Users WHERE Username =@userName");
			 if (Access->DBDT->Rows->Count != 0 || Access->Exception->Length){
				 existLbl->Text = "Username Not available";

			 }
			 else{
				 existLbl->Text = "Username available";
			 }

			 if (str->Trim() == ""){
				 existLbl->Text = "";
			 }

}
private: System::Void prof_signup_Load(System::Object^  sender, System::EventArgs^  e) {
			 existLbl->Text = "";
}
};
}
