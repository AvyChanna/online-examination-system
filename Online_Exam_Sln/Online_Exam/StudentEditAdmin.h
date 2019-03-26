#pragma once
#include "Database.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;


namespace Online_Exam {

	/// <summary>
	/// Summary for StudentEditAdmin
	/// </summary>
	public ref class StudentEditAdmin : public System::Windows::Forms::UserControl
	{
	private:
		OES ^ Access;
		DataSet ^dsa;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
			 OleDbCommandBuilder^ cmdb;
	public:
		StudentEditAdmin(void)
		{
			InitializeComponent();
			//
			this->radioButton1->Checked = true;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentEditAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  profList;
	private: System::Windows::Forms::Button^  btnUpdate;
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
			this->profList = (gcnew System::Windows::Forms::DataGridView());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profList))->BeginInit();
			this->SuspendLayout();
			// 
			// profList
			// 
			this->profList->AllowUserToAddRows = false;
			this->profList->AllowUserToDeleteRows = false;
			this->profList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->profList->Location = System::Drawing::Point(58, 109);
			this->profList->Name = L"profList";
			this->profList->RowTemplate->Height = 24;
			this->profList->Size = System::Drawing::Size(542, 281);
			this->profList->TabIndex = 1;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(58, 442);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(94, 26);
			this->btnUpdate->TabIndex = 2;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StudentEditAdmin::btnUpdate_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(100, 63);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(78, 21);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Student";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &StudentEditAdmin::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(431, 63);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(97, 21);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Professors";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &StudentEditAdmin::radioButton2_CheckedChanged);
			// 
			// StudentEditAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->profList);
			this->Name = L"StudentEditAdmin";
			this->Size = System::Drawing::Size(658, 499);
			this->Load += gcnew System::EventHandler(this, &StudentEditAdmin::StudentEditAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentEditAdmin_Load(System::Object^  sender, System::EventArgs^  e) {
				 Access = gcnew OES();
				 Access->ExecQuery("SELECT Username, FullName, Email, PhoneNo, IITG, Branch, isApproved FROM Users WHERE(AccessLevel = 'Student')");
				 dsa = gcnew DataSet();
				 Access->DBDA->Fill(dsa, "Users");
				 profList->DataSource = dsa->Tables[0];
	}
	private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
				 cmdb = gcnew OleDbCommandBuilder(Access->DBDA);
				 Access->DBDA->Update(dsa, "Users");
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 Access = gcnew OES();
				 Access->ExecQuery("SELECT Username, FullName, Email, PhoneNo, IITG, Branch, isApproved FROM Users WHERE(AccessLevel = 'Student')");
				 dsa = gcnew DataSet();
				 Access->DBDA->Fill(dsa, "Users");
				 profList->DataSource = dsa->Tables[0];
	}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Access = gcnew OES();
			 Access->ExecQuery("SELECT Username, FullName, Email, PhoneNo, IITG, Branch, isApproved FROM Users WHERE(AccessLevel = 'Prof')");
			 dsa = gcnew DataSet();
			 Access->DBDA->Fill(dsa, "Users");
			 profList->DataSource = dsa->Tables[0];
}
};
}
