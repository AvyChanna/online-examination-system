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
	/// Summary for signup_student
	/// </summary>
	public ref class signup_student : public System::Windows::Forms::UserControl
	{
	public:
		signup_student(void)
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
		~signup_student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::CheckBox^  memChkBox;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  userTxt;
	private: System::Windows::Forms::TextBox^  confirmPassTxt;
	private: System::Windows::Forms::TextBox^  mailTxt;
	private: System::Windows::Forms::TextBox^  pNumTxt;
	private: System::Windows::Forms::TextBox^  rNumTxt;
	private: System::Windows::Forms::Button^  studBtn;
	private: System::Windows::Forms::TextBox^  passTxt;
	private: System::Windows::Forms::TextBox^  nameTxt;
	private: System::Windows::Forms::ComboBox^  branchCb;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->memChkBox = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->userTxt = (gcnew System::Windows::Forms::TextBox());
			this->confirmPassTxt = (gcnew System::Windows::Forms::TextBox());
			this->mailTxt = (gcnew System::Windows::Forms::TextBox());
			this->pNumTxt = (gcnew System::Windows::Forms::TextBox());
			this->rNumTxt = (gcnew System::Windows::Forms::TextBox());
			this->studBtn = (gcnew System::Windows::Forms::Button());
			this->passTxt = (gcnew System::Windows::Forms::TextBox());
			this->nameTxt = (gcnew System::Windows::Forms::TextBox());
			this->branchCb = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(271, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(271, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Full Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(271, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 17);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(271, 347);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 17);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Roll number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(261, 300);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 17);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Phone Number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(271, 245);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 17);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Email";
			// 
			// memChkBox
			// 
			this->memChkBox->AutoSize = true;
			this->memChkBox->Location = System::Drawing::Point(274, 395);
			this->memChkBox->Name = L"memChkBox";
			this->memChkBox->Size = System::Drawing::Size(111, 21);
			this->memChkBox->TabIndex = 47;
			this->memChkBox->Text = L"IITG Member";
			this->memChkBox->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(271, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 17);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Password Confirm";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(688, 93);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 17);
			this->label9->TabIndex = 49;
			this->label9->Text = L"Branch";
			// 
			// userTxt
			// 
			this->userTxt->Location = System::Drawing::Point(403, 87);
			this->userTxt->Name = L"userTxt";
			this->userTxt->Size = System::Drawing::Size(100, 22);
			this->userTxt->TabIndex = 50;
			this->userTxt->Text = L"shubham";
			// 
			// confirmPassTxt
			// 
			this->confirmPassTxt->Location = System::Drawing::Point(403, 210);
			this->confirmPassTxt->Name = L"confirmPassTxt";
			this->confirmPassTxt->Size = System::Drawing::Size(100, 22);
			this->confirmPassTxt->TabIndex = 51;
			this->confirmPassTxt->Text = L"sss";
			// 
			// mailTxt
			// 
			this->mailTxt->Location = System::Drawing::Point(403, 253);
			this->mailTxt->Name = L"mailTxt";
			this->mailTxt->Size = System::Drawing::Size(100, 22);
			this->mailTxt->TabIndex = 52;
			this->mailTxt->Text = L"skj@iitg";
			// 
			// pNumTxt
			// 
			this->pNumTxt->Location = System::Drawing::Point(403, 295);
			this->pNumTxt->Name = L"pNumTxt";
			this->pNumTxt->Size = System::Drawing::Size(100, 22);
			this->pNumTxt->TabIndex = 53;
			this->pNumTxt->Text = L"7412589630";
			this->pNumTxt->TextChanged += gcnew System::EventHandler(this, &signup_student::pNumTxt_TextChanged);
			// 
			// rNumTxt
			// 
			this->rNumTxt->Location = System::Drawing::Point(403, 342);
			this->rNumTxt->Name = L"rNumTxt";
			this->rNumTxt->Size = System::Drawing::Size(100, 22);
			this->rNumTxt->TabIndex = 54;
			this->rNumTxt->Text = L"147852369";
			this->rNumTxt->TextChanged += gcnew System::EventHandler(this, &signup_student::rNumTxt_TextChanged);
			// 
			// studBtn
			// 
			this->studBtn->Location = System::Drawing::Point(691, 430);
			this->studBtn->Name = L"studBtn";
			this->studBtn->Size = System::Drawing::Size(75, 23);
			this->studBtn->TabIndex = 60;
			this->studBtn->Text = L"Sumbit";
			this->studBtn->UseVisualStyleBackColor = true;
			this->studBtn->Click += gcnew System::EventHandler(this, &signup_student::studBtn_Click);
			// 
			// passTxt
			// 
			this->passTxt->Location = System::Drawing::Point(403, 181);
			this->passTxt->Name = L"passTxt";
			this->passTxt->Size = System::Drawing::Size(100, 22);
			this->passTxt->TabIndex = 57;
			this->passTxt->Text = L"sss";
			// 
			// nameTxt
			// 
			this->nameTxt->Location = System::Drawing::Point(403, 136);
			this->nameTxt->Name = L"nameTxt";
			this->nameTxt->Size = System::Drawing::Size(100, 22);
			this->nameTxt->TabIndex = 58;
			this->nameTxt->Text = L"shubham kumar";
			// 
			// branchCb
			// 
			this->branchCb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->branchCb->FormattingEnabled = true;
			this->branchCb->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"CSE", L"MNC", L"ECE", L"BT", L"EEE", L"ME", L"CE",
					L"CS"
			});
			this->branchCb->Location = System::Drawing::Point(747, 87);
			this->branchCb->Name = L"branchCb";
			this->branchCb->Size = System::Drawing::Size(121, 24);
			this->branchCb->TabIndex = 80;
			// 
			// signup_student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->branchCb);
			this->Controls->Add(this->studBtn);
			this->Controls->Add(this->nameTxt);
			this->Controls->Add(this->passTxt);
			this->Controls->Add(this->rNumTxt);
			this->Controls->Add(this->pNumTxt);
			this->Controls->Add(this->mailTxt);
			this->Controls->Add(this->confirmPassTxt);
			this->Controls->Add(this->userTxt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->memChkBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"signup_student";
			this->Size = System::Drawing::Size(1123, 547);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		
		private :bool validate(){
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
					 if (rNumTxt->TextLength != 9){
						 MessageBox::Show("Roll Number Length should be 9");
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
					 String^ des = "Student";
					 int check = 0;
					 if (memChkBox->Checked)
						 check = 1;
					 if (validate()){
							// MessageBox::Show(Convert::ToString(memChkBox->Checked));
							 String ^ PassSalt = MakeSalt(10);
							 String ^ PassHash = EncryptPassword(passTxt->Text, PassSalt);

							 Access->AddParam("@Username", userTxt->Text);
							 Access->AddParam("@Fullname", nameTxt->Text);
							 Access->AddParam("@PasswordHash", PassHash);
							 Access->AddParam("@PasswordSalt", PassSalt);
							 Access->AddParam("@Email", mailTxt->Text);
							 Access->AddParam("@Phoneno", pNumTxt->Text);
							 Access->AddParam("@Rollno", rNumTxt->Text);
							 Access->AddParam("@Branch", branchCb->Text);
							 Access->AddParam("@Designation", des);

							 //Access->ExecQuery("insert into [Users] ( [Username],[FullName],[PasswordHash],[PasswordSalt],[Email],[PhoneNo],[RollNo],[Branch],[Designation] ) Values ( @Username,@Fullname,@PasswordHash,@PasswordSalt,@Email,@PhoneNo,@RollNo,@Branch,@Designation)");// , "+check+" )");
							 Access->ExecQuery("insert into [Users] ( [Username],[FullName],[PasswordHash],[PasswordSalt],[Email],[PhoneNo],[RollNo],[Branch],[Designation],[IITG]) Values ( @Username,@Fullname,@PasswordHash,@PasswordSalt,@Email,@PhoneNo,@RollNo,@Branch,@Designation, "+check+" )");
							 		
						MessageBox::Show("Signup Successfull");
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
private: System::Void rNumTxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 try{
				 if (rNumTxt->Text != "")
					 int  SectNo = Convert::ToInt32(rNumTxt->Text);

			 }
			 catch (Exception ^ ex){

				 MessageBox::Show("Please enter integer values in required fields.", "Error");
				 rNumTxt->Clear();
				 return;
			 }


}
};
}
