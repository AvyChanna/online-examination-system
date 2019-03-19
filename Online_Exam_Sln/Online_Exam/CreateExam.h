#pragma once

#include "Database.h"
#include <map>
#include <iostream>
#include <string>
#include <ctime>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;

typedef System::Collections::Generic::Dictionary<System::String^, int> Map;

//typedef std::map<char, int> Map;
namespace Online_Exam {

	/// <summary>
	/// Summary for CreateExam
	/// </summary>
	public ref class CreateExam : public System::Windows::Forms::UserControl
	{
	public:
		Map gID;
	private: System::Windows::Forms::Button^  btnCreate;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtExamLen;

	private: System::Windows::Forms::Button^  btnSlot;
	private: System::Windows::Forms::Label^  label9;
	public:
		Map gSel;
		array<System::String ^>^ start;

		CreateExam(void)
		{

			start = gcnew array<System::String ^>{"", "", "", "", "", ""};
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateExam()
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
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lblP;


	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtPass;



	private: System::Windows::Forms::TextBox^  txtSesNo;

	private: System::Windows::Forms::TextBox^  txtSectWgt;

	private: System::Windows::Forms::TextBox^  txtSectNo;
	private: System::Windows::Forms::ComboBox^  cmbStr;
	private: System::Windows::Forms::DateTimePicker^  calStr;
	private: System::Windows::Forms::Button^  btnAddQ;










	private: System::Windows::Forms::ListBox^  lstUnsel;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnRem;
	private: System::Windows::Forms::ListBox^  lstSel;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblP = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->txtSesNo = (gcnew System::Windows::Forms::TextBox());
			this->txtSectWgt = (gcnew System::Windows::Forms::TextBox());
			this->txtSectNo = (gcnew System::Windows::Forms::TextBox());
			this->cmbStr = (gcnew System::Windows::Forms::ComboBox());
			this->calStr = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnAddQ = (gcnew System::Windows::Forms::Button());
			this->lstUnsel = (gcnew System::Windows::Forms::ListBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRem = (gcnew System::Windows::Forms::Button());
			this->lstSel = (gcnew System::Windows::Forms::ListBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtExamLen = (gcnew System::Windows::Forms::TextBox());
			this->btnSlot = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(237, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Exam Details";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Test Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(548, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Selected Groups:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(86, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Number of Sections";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(86, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 26);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Section Weightage (Hyphen Separated):";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(86, 189);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 29);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Number of Sessions (Max 5):";
			this->label6->Click += gcnew System::EventHandler(this, &CreateExam::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(86, 255);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Start Time of Sessions:";
			this->label7->Click += gcnew System::EventHandler(this, &CreateExam::label7_Click);
			// 
			// lblP
			// 
			this->lblP->AutoSize = true;
			this->lblP->Location = System::Drawing::Point(85, 165);
			this->lblP->Name = L"lblP";
			this->lblP->Size = System::Drawing::Size(91, 13);
			this->lblP->TabIndex = 8;
			this->lblP->Text = L"Pass Percentage:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(241, 65);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 20);
			this->txtName->TabIndex = 9;
			this->txtName->TextChanged += gcnew System::EventHandler(this, &CreateExam::txtName_TextChanged);
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(241, 162);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(100, 20);
			this->txtPass->TabIndex = 11;
			// 
			// txtSesNo
			// 
			this->txtSesNo->Location = System::Drawing::Point(241, 191);
			this->txtSesNo->Name = L"txtSesNo";
			this->txtSesNo->Size = System::Drawing::Size(100, 20);
			this->txtSesNo->TabIndex = 14;
			this->txtSesNo->TextChanged += gcnew System::EventHandler(this, &CreateExam::txtSesNo_TextChanged);
			// 
			// txtSectWgt
			// 
			this->txtSectWgt->Location = System::Drawing::Point(241, 130);
			this->txtSectWgt->Name = L"txtSectWgt";
			this->txtSectWgt->Size = System::Drawing::Size(100, 20);
			this->txtSectWgt->TabIndex = 15;
			// 
			// txtSectNo
			// 
			this->txtSectNo->Location = System::Drawing::Point(241, 97);
			this->txtSectNo->Name = L"txtSectNo";
			this->txtSectNo->Size = System::Drawing::Size(100, 20);
			this->txtSectNo->TabIndex = 16;
			// 
			// cmbStr
			// 
			this->cmbStr->FormattingEnabled = true;
			this->cmbStr->Location = System::Drawing::Point(241, 251);
			this->cmbStr->Name = L"cmbStr";
			this->cmbStr->Size = System::Drawing::Size(61, 21);
			this->cmbStr->TabIndex = 18;
			this->cmbStr->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateExam::comboBox1_SelectedIndexChanged);
			// 
			// calStr
			// 
			this->calStr->CustomFormat = L"dd-MM-yyyy HH:mm:ss";
			this->calStr->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->calStr->Location = System::Drawing::Point(325, 252);
			this->calStr->Name = L"calStr";
			this->calStr->Size = System::Drawing::Size(138, 20);
			this->calStr->TabIndex = 19;
			this->calStr->ValueChanged += gcnew System::EventHandler(this, &CreateExam::dateTimePicker1_ValueChanged);
			// 
			// btnAddQ
			// 
			this->btnAddQ->Location = System::Drawing::Point(215, 302);
			this->btnAddQ->Name = L"btnAddQ";
			this->btnAddQ->Size = System::Drawing::Size(108, 23);
			this->btnAddQ->TabIndex = 20;
			this->btnAddQ->Text = L"Add Questions";
			this->btnAddQ->UseVisualStyleBackColor = true;
			// 
			// lstUnsel
			// 
			this->lstUnsel->FormattingEnabled = true;
			this->lstUnsel->Location = System::Drawing::Point(385, 83);
			this->lstUnsel->Name = L"lstUnsel";
			this->lstUnsel->Size = System::Drawing::Size(90, 121);
			this->lstUnsel->TabIndex = 24;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(481, 110);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(57, 23);
			this->btnAdd->TabIndex = 25;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CreateExam::btnAdd_Click);
			// 
			// btnRem
			// 
			this->btnRem->Location = System::Drawing::Point(481, 155);
			this->btnRem->Name = L"btnRem";
			this->btnRem->Size = System::Drawing::Size(57, 23);
			this->btnRem->TabIndex = 26;
			this->btnRem->Text = L"Remove";
			this->btnRem->UseVisualStyleBackColor = true;
			this->btnRem->Click += gcnew System::EventHandler(this, &CreateExam::btnRem_Click);
			// 
			// lstSel
			// 
			this->lstSel->FormattingEnabled = true;
			this->lstSel->Location = System::Drawing::Point(547, 83);
			this->lstSel->Name = L"lstSel";
			this->lstSel->Size = System::Drawing::Size(90, 121);
			this->lstSel->TabIndex = 27;
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(367, 302);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(108, 23);
			this->btnCreate->TabIndex = 28;
			this->btnCreate->Text = L"Create Exam";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &CreateExam::btnCreate_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(85, 227);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 13);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Exam Length (minutes):";
			// 
			// txtExamLen
			// 
			this->txtExamLen->Location = System::Drawing::Point(241, 220);
			this->txtExamLen->Name = L"txtExamLen";
			this->txtExamLen->Size = System::Drawing::Size(100, 20);
			this->txtExamLen->TabIndex = 30;
			// 
			// btnSlot
			// 
			this->btnSlot->Location = System::Drawing::Point(481, 250);
			this->btnSlot->Name = L"btnSlot";
			this->btnSlot->Size = System::Drawing::Size(65, 23);
			this->btnSlot->TabIndex = 31;
			this->btnSlot->Text = L"Add Slot";
			this->btnSlot->UseVisualStyleBackColor = true;
			this->btnSlot->Click += gcnew System::EventHandler(this, &CreateExam::btnSlot_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(382, 65);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(101, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Unselected Groups:";
			// 
			// CreateExam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnSlot);
			this->Controls->Add(this->txtExamLen);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->lstSel);
			this->Controls->Add(this->btnRem);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->lstUnsel);
			this->Controls->Add(this->btnAddQ);
			this->Controls->Add(this->calStr);
			this->Controls->Add(this->cmbStr);
			this->Controls->Add(this->txtSectNo);
			this->Controls->Add(this->txtSectWgt);
			this->Controls->Add(this->txtSesNo);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblP);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CreateExam";
			this->Size = System::Drawing::Size(677, 344);
			this->Load += gcnew System::EventHandler(this, &CreateExam::CreateExam_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void txtSesNo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (txtSesNo->Text == "")
				 return;
			 try{
					int num = Convert::ToInt32(txtSesNo->Text);
					 
					 if (num >= 1 && num <= 5){
						 cmbStr->Items->Clear();
						 for (int i = 1; i <= num; i++){
							 cmbStr->Items->Add(i);
						 }
					 }
					 else{
						 MessageBox::Show("Enter number of sessions from 1 to 5!");
						 txtSesNo->Text = "";
					 }
				 
			 }
			 catch (Exception ^ex){
				 MessageBox::Show("Enter number of sessions from 1 to 5!");
				 txtSesNo->Text = "";
			 }
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CreateExam_Load(System::Object^  sender, System::EventArgs^  e) {
			 txtName->Text = "";
			 txtPass->Text = "";
			 txtSectNo->Text = "";
			 txtSectWgt->Text = "";
			 txtSesNo->Text = "";
			 cmbStr->Items->Clear();
			 lstSel->Items->Clear();
			 lstUnsel->Items->Clear();
			 OES^ Access = gcnew OES();
			 Access->ExecQuery("SELECT GroupID, GroupName from Groups");
			 for (int i = 0; i<5; i++){
				 start[i] = "";
			 }
			 
			 if (Access->RecordCount > 0){
				 for (int i = 0; i < Access->RecordCount; i++){
					 gID.Add(Convert::ToString(Access->DBDT->Rows[i]["GroupName"]), Convert::ToInt32(Access->DBDT->Rows[i]["GroupID"]));
					 //gSel.Add(Convert::ToString(Access->DBDT->Rows[i]["GroupName"]), 0);
					 lstUnsel->Items->Add(Convert::ToString(Access->DBDT->Rows[i]["GroupName"]));
				 }
			 }
}

private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ selItemText = Convert::ToString(lstUnsel->SelectedItem);
			 int selItemIndex = lstUnsel->SelectedIndex;
			 lstSel->Items->Add(selItemText);
			 if (lstUnsel->Items->Count!=0){
				 lstUnsel->Items->RemoveAt(selItemIndex);
			 }
			 gSel[selItemText] = 1;
}
private: System::Void btnRem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ selItemText = Convert::ToString(lstSel->SelectedItem);
			 int selItemIndex = lstSel->SelectedIndex;
			 lstUnsel->Items->Add(selItemText);
			 if (lstSel->Items->Count != 0){
				 lstSel->Items->RemoveAt(selItemIndex);
			 }
			 gSel[selItemText] = 0;
}
private: System::Void txtName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e) {

			/* if (txtExamLen->Text == "" || txtName->Text == "" || txtPass->Text == "" || txtSectNo->Text == "" || txtSectWgt->Text == "" || txtSesNo->Text == ""){
				 MessageBox::Show("Please enter all fields.");
				 return;
			 }
			 if (lstSel->Items->Count == 0){
				 MessageBox::Show("Please select atleast one group.");
				 return;
			 }
			 int no = Convert::ToInt32(cmbStr->SelectedItem);
			 for (int i = 0; i < no; i++){
				 if (start[i] == ""){
					 MessageBox::Show("Please add all starting session time slots.");
					 return;
				 }
			 }*/
			 int SectNo, ExamLen, Pass;
			 try{
				 SectNo = Convert::ToInt32(txtSectNo->Text);
				 ExamLen = Convert::ToInt32(txtExamLen->Text);
				 Pass = Convert::ToInt32(txtPass->Text);
			 }
			 catch (Exception ^ ex){
				 MessageBox::Show("Please enter integer values in required fields.");
				 return;
			 }


			 //Add condition to check Excel sheet is filled in
			 String ^ SelGrp = "0";
			 for (int i = 0; i < lstSel->Items->Count; i++){
				 SelGrp += "-" + Convert::ToString(gID[Convert::ToString(lstSel->Items[i])]);
			 }
			 MessageBox::Show("INSERT Into Exam (ExamName, GroupID, NumSections, WgtSections) Values ('" + txtName->Text + "','" + SelGrp + "'," + SectNo + ",'" + txtSectWgt->Text + "')");

			 //OES^ Access = gcnew OES();
			 //Access->ExecQuery("INSERT Into Exam (ExamName, GroupID, NumSections, WgtSections) Values ('" + txtName->Text + "','" + SelGrp + "'," + SectNo + ",'" + txtSectWgt->Text + "')");

			 
}
	private: System::Void btnSlot_Click(System::Object^  sender, System::EventArgs^  e) {
				 int no = Convert::ToInt32(cmbStr->SelectedItem);
				 start[no - 1] = Convert::ToString(calStr->Text);
	}
};
}
