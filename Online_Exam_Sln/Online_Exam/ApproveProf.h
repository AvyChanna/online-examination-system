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
	/// Summary for ApproveProf
	/// </summary>
	public ref class ApproveProf : public System::Windows::Forms::UserControl
	{
	private:
		OES ^ Access; 
		DataSet ^dsa;
		DataTable ^dt;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	public:
		OleDbCommandBuilder^ cmdb;
		ApproveProf(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ApproveProf()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  profList;
	private: System::Windows::Forms::Button^  btnUpdate;
	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->profList = (gcnew System::Windows::Forms::DataGridView());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profList))->BeginInit();
			this->SuspendLayout();
			// 
			// profList
			// 
			this->profList->AllowUserToAddRows = false;
			this->profList->AllowUserToResizeColumns = false;
			this->profList->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			this->profList->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->profList->BackgroundColor = System::Drawing::Color::White;
			this->profList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)), static_cast<System::Int32>(static_cast<System::Byte>(11)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->profList->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->profList->ColumnHeadersHeight = 25;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->profList->DefaultCellStyle = dataGridViewCellStyle3;
			this->profList->Location = System::Drawing::Point(37, 72);
			this->profList->Name = L"profList";
			this->profList->RowTemplate->Height = 24;
			this->profList->Size = System::Drawing::Size(1056, 415);
			this->profList->TabIndex = 0;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnUpdate->Location = System::Drawing::Point(471, 503);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(181, 47);
			this->btnUpdate->TabIndex = 1;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ApproveProf::btnUpdate_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(468, 228);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"No Professor to Approve";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(401, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ApproveProf::textBox1_TextChanged);
			// 
			// ApproveProf
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->profList);
			this->Name = L"ApproveProf";
			this->Size = System::Drawing::Size(1122, 593);
			this->Load += gcnew System::EventHandler(this, &ApproveProf::ApproveProf_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
				 cmdb = gcnew OleDbCommandBuilder(Access->DBDA);
				 Access->DBDA->Update(dsa, "Users");
				 dsa->Clear();
				 OES ^ Access1 = gcnew OES();			 
				 Access->RecordCount = Access->DBDA->Fill(dsa, "Users");
				 dt = dsa->Tables[0];

				 if (Access->RecordCount == 0){
					 this->profList->Hide();
					 this->textBox1->Hide();
					 label1->Show();
				 }
				 else{
					 this->profList->Show();
					 this->textBox1->Show();
					 label1->Hide();
				 }
				 //this->profList->Columns["isApproved"]->ReadOnly = false;
				 
	}
	private: System::Void ApproveProf_Load(System::Object^  sender, System::EventArgs^  e) {
				 dt = gcnew DataTable();
				 Access = gcnew OES(); 
				 Access->ExecQuery("SELECT Username, FullName, Email, PhoneNo, IITG, Branch, isApproved FROM Users WHERE(Designation = 'Professor') AND(isApproved = False)");
				 dsa = gcnew DataSet();
				 Access->DBDA->Fill(dsa, "Users");
				 profList->DataSource = dsa->Tables[0];
				 
				 this->profList->Columns["Username"]->ReadOnly = true;
				 this->profList->Columns["FullName"]->ReadOnly = true; 
				 this->profList->Columns["Email"]->ReadOnly = true;
				 this->profList->Columns["PhoneNo"]->ReadOnly = true;
				 this->profList->Columns["IITG"]->ReadOnly = true;
				 this->profList->Columns["Branch"]->ReadOnly = true;

				 dt = dsa->Tables[0];
				 if (Access->RecordCount == 0){
					 this->profList->Hide();
					 this->textBox1->Hide();
					 label1->Show();
				 }
				 else{
					 this->profList->Show();
					 this->textBox1->Show();
					 label1->Hide();
				 }
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 dt->DefaultView->RowFilter = "FullName like '%" + textBox1->Text + "%' OR Username like '%" + textBox1->Text + "%'";
	}
};
}
