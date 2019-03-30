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
			this->SuspendLayout();
			// 
			// studBtn
			// 
			this->studBtn->Location = System::Drawing::Point(646, 442);
			this->studBtn->Name = L"studBtn";
			this->studBtn->Size = System::Drawing::Size(75, 23);
			this->studBtn->TabIndex = 78;
			this->studBtn->Text = L"Sumbit";
			this->studBtn->UseVisualStyleBackColor = true;
			this->studBtn->Click += gcnew System::EventHandler(this, &prof_signup::studBtn_Click);
			// 
			// nameTxt
			// 
			this->nameTxt->Location = System::Drawing::Point(358, 148);
			this->nameTxt->Name = L"nameTxt";
			this->nameTxt->Size = System::Drawing::Size(100, 22);
			this->nameTxt->TabIndex = 77;
			this->nameTxt->Text = L"shubham kumar";
			// 
			// passTxt
			// 
			this->passTxt->Location = System::Drawing::Point(358, 193);
			this->passTxt->Name = L"passTxt";
			this->passTxt->Size = System::Drawing::Size(100, 22);
			this->passTxt->TabIndex = 76;
			this->passTxt->Text = L"sss";
			// 
			// pNumTxt
			// 
			this->pNumTxt->Location = System::Drawing::Point(358, 307);
			this->pNumTxt->Name = L"pNumTxt";
			this->pNumTxt->Size = System::Drawing::Size(100, 22);
			this->pNumTxt->TabIndex = 73;
			this->pNumTxt->Text = L"7412589630";
			this->pNumTxt->TextChanged += gcnew System::EventHandler(this, &prof_signup::pNumTxt_TextChanged);
			// 
			// mailTxt
			// 
			this->mailTxt->Location = System::Drawing::Point(358, 265);
			this->mailTxt->Name = L"mailTxt";
			this->mailTxt->Size = System::Drawing::Size(100, 22);
			this->mailTxt->TabIndex = 72;
			this->mailTxt->Text = L"skj@iitg";
			// 
			// confirmPassTxt
			// 
			this->confirmPassTxt->Location = System::Drawing::Point(358, 222);
			this->confirmPassTxt->Name = L"confirmPassTxt";
			this->confirmPassTxt->Size = System::Drawing::Size(100, 22);
			this->confirmPassTxt->TabIndex = 71;
			this->confirmPassTxt->Text = L"sss";
			// 
			// userTxt
			// 
			this->userTxt->Location = System::Drawing::Point(358, 99);
			this->userTxt->Name = L"userTxt";
			this->userTxt->Size = System::Drawing::Size(100, 22);
			this->userTxt->TabIndex = 70;
			this->userTxt->Text = L"shubham";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(643, 105);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 17);
			this->label9->TabIndex = 69;
			this->label9->Text = L"Branch";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(226, 222);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 17);
			this->label8->TabIndex = 68;
			this->label8->Text = L"Password Confirm";
			// 
			// memChkBox
			// 
			this->memChkBox->AutoSize = true;
			this->memChkBox->Location = System::Drawing::Point(229, 407);
			this->memChkBox->Name = L"memChkBox";
			this->memChkBox->Size = System::Drawing::Size(111, 21);
			this->memChkBox->TabIndex = 67;
			this->memChkBox->Text = L"IITG Member";
			this->memChkBox->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(226, 257);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 17);
			this->label6->TabIndex = 66;
			this->label6->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(216, 312);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 17);
			this->label5->TabIndex = 65;
			this->label5->Text = L"Phone Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(226, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 17);
			this->label3->TabIndex = 63;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(226, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 62;
			this->label2->Text = L"Full Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(226, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Username";
			// 
			// branchCb
			// 
			this->branchCb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->branchCb->FormattingEnabled = true;
			this->branchCb->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"CSE", L"MNC", L"ECE", L"BT", L"EEE", L"ME", L"CE",
					L"CS"
			});
			this->branchCb->Location = System::Drawing::Point(747, 99);
			this->branchCb->Name = L"branchCb";
			this->branchCb->Size = System::Drawing::Size(121, 24);
			this->branchCb->TabIndex = 79;
			// 
			// prof_signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			this->Size = System::Drawing::Size(1018, 564);
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
};
}
