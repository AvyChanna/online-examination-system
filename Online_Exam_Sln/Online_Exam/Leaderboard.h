#pragma once
#include "Database.h"
#include <iostream>

namespace Online_Exam {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Database;

	/// <summary>
	/// Summary for Leaderboard
	/// </summary>
	public ref class Leaderboard : public System::Windows::Forms::UserControl
	{
	private:
		OES ^ Access;
		OES ^ Session_Num;
		OES ^ Access1;
		OES ^ Access2;
		OES ^ Access3;
		OES ^ Access4;
		OES ^ Access5;
		OES ^ Access6;
		DataSet ^dsa;
		DataSet ^dsa1;
		DataSet ^dsa2;
		DataSet ^dsa3;
		DataSet ^dsa4;
		DataSet ^dsa5;
	private: System::Windows::Forms::Label^  label1;
			 String^ examCode;
	private: System::Windows::Forms::Button^  btnOverall;
	private: System::Windows::Forms::Button^  btnSession1;
	private: System::Windows::Forms::Button^  btnSession2;
	private: System::Windows::Forms::Button^  btnSession3;
	private: System::Windows::Forms::Button^  btnSession4;
	private: System::Windows::Forms::Button^  btnSession5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;






			 DataTable^ dt;
	public:
		Leaderboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Leaderboard(String^ examCode){
			InitializeComponent();
			this->examCode = examCode;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Leaderboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  standings;
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
			this->standings = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnOverall = (gcnew System::Windows::Forms::Button());
			this->btnSession1 = (gcnew System::Windows::Forms::Button());
			this->btnSession2 = (gcnew System::Windows::Forms::Button());
			this->btnSession3 = (gcnew System::Windows::Forms::Button());
			this->btnSession4 = (gcnew System::Windows::Forms::Button());
			this->btnSession5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->standings))->BeginInit();
			this->SuspendLayout();
			// 
			// standings
			// 
			this->standings->AllowUserToAddRows = false;
			this->standings->AllowUserToDeleteRows = false;
			this->standings->AllowUserToResizeColumns = false;
			this->standings->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			this->standings->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->standings->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->standings->BackgroundColor = System::Drawing::Color::White;
			this->standings->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->standings->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->standings->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->standings->DefaultCellStyle = dataGridViewCellStyle3;
			this->standings->GridColor = System::Drawing::SystemColors::Control;
			this->standings->Location = System::Drawing::Point(23, 100);
			this->standings->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->standings->Name = L"standings";
			this->standings->ReadOnly = true;
			this->standings->RowTemplate->Height = 24;
			this->standings->Size = System::Drawing::Size(530, 310);
			this->standings->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Leaderboard";
			this->label1->Click += gcnew System::EventHandler(this, &Leaderboard::label1_Click);
			// 
			// btnOverall
			// 
			this->btnOverall->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnOverall->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnOverall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOverall->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOverall->ForeColor = System::Drawing::Color::White;
			this->btnOverall->Location = System::Drawing::Point(565, 100);
			this->btnOverall->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnOverall->Name = L"btnOverall";
			this->btnOverall->Size = System::Drawing::Size(129, 36);
			this->btnOverall->TabIndex = 2;
			this->btnOverall->Text = L"Overall Standings";
			this->btnOverall->UseVisualStyleBackColor = false;
			this->btnOverall->Click += gcnew System::EventHandler(this, &Leaderboard::btnOverall_Click);
			// 
			// btnSession1
			// 
			this->btnSession1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnSession1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSession1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSession1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSession1->ForeColor = System::Drawing::Color::White;
			this->btnSession1->Location = System::Drawing::Point(565, 149);
			this->btnSession1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSession1->Name = L"btnSession1";
			this->btnSession1->Size = System::Drawing::Size(129, 36);
			this->btnSession1->TabIndex = 3;
			this->btnSession1->Text = L"Session1";
			this->btnSession1->UseVisualStyleBackColor = false;
			this->btnSession1->Click += gcnew System::EventHandler(this, &Leaderboard::btnSession1_Click);
			// 
			// btnSession2
			// 
			this->btnSession2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnSession2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSession2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSession2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSession2->ForeColor = System::Drawing::Color::White;
			this->btnSession2->Location = System::Drawing::Point(565, 197);
			this->btnSession2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSession2->Name = L"btnSession2";
			this->btnSession2->Size = System::Drawing::Size(129, 36);
			this->btnSession2->TabIndex = 4;
			this->btnSession2->Text = L"Session2";
			this->btnSession2->UseVisualStyleBackColor = false;
			this->btnSession2->Click += gcnew System::EventHandler(this, &Leaderboard::btnSession2_Click);
			// 
			// btnSession3
			// 
			this->btnSession3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnSession3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSession3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSession3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSession3->ForeColor = System::Drawing::Color::White;
			this->btnSession3->Location = System::Drawing::Point(565, 245);
			this->btnSession3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSession3->Name = L"btnSession3";
			this->btnSession3->Size = System::Drawing::Size(129, 36);
			this->btnSession3->TabIndex = 5;
			this->btnSession3->Text = L"Session3";
			this->btnSession3->UseVisualStyleBackColor = false;
			this->btnSession3->Click += gcnew System::EventHandler(this, &Leaderboard::btnSession3_Click);
			// 
			// btnSession4
			// 
			this->btnSession4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnSession4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSession4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSession4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSession4->ForeColor = System::Drawing::Color::White;
			this->btnSession4->Location = System::Drawing::Point(565, 297);
			this->btnSession4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSession4->Name = L"btnSession4";
			this->btnSession4->Size = System::Drawing::Size(129, 36);
			this->btnSession4->TabIndex = 6;
			this->btnSession4->Text = L"Session4";
			this->btnSession4->UseVisualStyleBackColor = false;
			this->btnSession4->Click += gcnew System::EventHandler(this, &Leaderboard::btnSession4_Click);
			// 
			// btnSession5
			// 
			this->btnSession5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnSession5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSession5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSession5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSession5->ForeColor = System::Drawing::Color::White;
			this->btnSession5->Location = System::Drawing::Point(565, 353);
			this->btnSession5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSession5->Name = L"btnSession5";
			this->btnSession5->Size = System::Drawing::Size(129, 36);
			this->btnSession5->TabIndex = 7;
			this->btnSession5->Text = L"Session5";
			this->btnSession5->UseVisualStyleBackColor = false;
			this->btnSession5->Click += gcnew System::EventHandler(this, &Leaderboard::btnSession5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(105, 58);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(402, 24);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Leaderboard::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 64);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 19);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Search";
			// 
			// Leaderboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnSession5);
			this->Controls->Add(this->btnSession4);
			this->Controls->Add(this->btnSession3);
			this->Controls->Add(this->btnSession2);
			this->Controls->Add(this->btnSession1);
			this->Controls->Add(this->btnOverall);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->standings);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Leaderboard";
			this->Size = System::Drawing::Size(727, 432);
			this->Load += gcnew System::EventHandler(this, &Leaderboard::Leaderboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->standings))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Leaderboard_Load(System::Object^  sender, System::EventArgs^  e) {
				 dt = gcnew DataTable();
				 Session_Num = gcnew OES();
				 Session_Num->ExecQuery("SELECT NumSessions FROM  Exam WHERE(ExamCode = "+this->examCode+" )");
				 Int32 num_ses = Convert::ToInt32(Session_Num->DBDT->Rows[0]->default["NumSessions"]);
				 if (num_ses < 1){
					 btnSession1->Hide();
				 }
				 if (num_ses < 2){
					 btnSession2->Hide();
				 }
				 if (num_ses < 3){
					 btnSession3->Hide();
				 }
				 if (num_ses < 4){
					 btnSession4->Hide();
				 }
				 if (num_ses < 5){
					 btnSession5->Hide();
				 }
	
				 Access = gcnew OES();
				 Access->ExecQuery("SELECT ExamCode, Username, NormalizedScore\
					 FROM     Performance\
					 WHERE(ExamCode = "+ this->examCode +" )\
					 ORDER BY NormalizedScore DESC");
				 dsa = gcnew DataSet();
				 Access->DBDA->Fill(dsa, "Performance");
				 standings->DataSource = dsa->Tables[0];
				 
				 standings->Columns[0]->HeaderText = "Rank";
				 standings->Columns[2]->HeaderText = "Normalized Score";
				 if (Access->RecordCount >= 1){
					 standings->Rows[0]->Cells[0]->Value = 1;
				 }
				 for (int i = 1; i < Access->RecordCount; i++){
					 
					 if (standings->Rows[i]->Cells[2]->Value->ToString() == standings->Rows[i - 1]->Cells[2]->Value->ToString())
					 {
						 standings->Rows[i]->Cells[0]->Value = standings->Rows[i - 1]->Cells[0]->Value;
					 }
					 else
					 {
						 standings->Rows[i]->Cells[0]->Value = i + 1;
					 }
				 }	
				 dt = dsa->Tables[0];
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnSession1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Access1 = gcnew OES();
				 Access1->ExecQuery("SELECT ExamCode, Username, ObtainedMarks\
								   	FROM     Performance\
									WHERE(ExamCode = " + this->examCode + " AND SessionNumber = 1 )\
									ORDER BY ObtainedMarks DESC");

				 dsa1 = gcnew DataSet();
				 Access1->DBDA->Fill(dsa1, "Performance");
				 standings->DataSource = dsa1->Tables[0];
				 
				 standings->Columns[0]->HeaderText = "Session Rank";
				 standings->Columns[2]->HeaderText = "Session Score";

				 if (Access1->RecordCount >= 1){
					 standings->Rows[0]->Cells[0]->Value = 1;
				 }
				 for (int i = 1; i < Access1->RecordCount; i++){

					 if (standings->Rows[i]->Cells[2]->Value->ToString() == standings->Rows[i - 1]->Cells[2]->Value->ToString())
					 {
						 standings->Rows[i]->Cells[0]->Value = standings->Rows[i - 1]->Cells[0]->Value;
					 }
					 else
					 {
						 standings->Rows[i]->Cells[0]->Value = i + 1;
					 }
				 }
				 dt = dsa1->Tables[0];

	}
	private: System::Void btnSession2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Access2 = gcnew OES();
				 Access2->ExecQuery("SELECT ExamCode, Username, ObtainedMarks\
								   	FROM  Performance\
									WHERE(ExamCode = " + this->examCode + ") AND (SessionNumber = 2)\
									ORDER BY ObtainedMarks DESC");

				 dsa2 = gcnew DataSet();
				 Access2->DBDA->Fill(dsa2, "Performance");
				 dt = dsa2->Tables[0];
				 standings->DataSource = dsa2->Tables[0];
				 standings->Columns[0]->HeaderText = "Session Rank";
				 standings->Columns[2]->HeaderText = "Session Score";

				 if (Access2->RecordCount >= 1){
					 standings->Rows[0]->Cells[0]->Value = 1;
				 }
				 for (int i = 1; i < Access2->RecordCount; i++){

					 if (standings->Rows[i]->Cells[2]->Value->ToString() == standings->Rows[i - 1]->Cells[2]->Value->ToString())
					 {
						 standings->Rows[i]->Cells[0]->Value = standings->Rows[i - 1]->Cells[0]->Value;
					 }
					 else
					 {
						 standings->Rows[i]->Cells[0]->Value = i + 1;
					 }
				 }
				 dt = dsa2->Tables[0];
	}
	private: System::Void btnSession3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Access3 = gcnew OES();
				 Access3->ExecQuery("SELECT ExamCode, Username, ObtainedMarks\
								   	FROM  Performance\
									WHERE(ExamCode = " + this->examCode + " AND SessionNumber = 3 )\
									ORDER BY ObtainedMarks DESC");

				 dsa3 = gcnew DataSet();
				 Access3->DBDA->Fill(dsa3, "Performance");
				 standings->DataSource = dsa3->Tables[0];
				 
				 standings->Columns[0]->HeaderText = "Session Rank";
				 standings->Columns[2]->HeaderText = "Session Score";

				 if (Access3->RecordCount >= 1){
					 standings->Rows[0]->Cells[0]->Value = 1;
				 }
				 for (int i = 1; i < Access3->RecordCount; i++){

					 if (standings->Rows[i]->Cells[2]->Value->ToString() == standings->Rows[i - 1]->Cells[2]->Value->ToString())
					 {
						 standings->Rows[i]->Cells[0]->Value = standings->Rows[i - 1]->Cells[0]->Value;
					 }
					 else
					 {
						 standings->Rows[i]->Cells[0]->Value = i + 1;
					 }
				 }
				 dt = dsa3->Tables[0];
	}
	private: System::Void btnSession4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Access4 = gcnew OES();
				 Access4->ExecQuery("SELECT ExamCode, Username, ObtainedMarks\
								   	FROM  Performance\
									WHERE(ExamCode = " + this->examCode + " AND SessionNumber = 4 )\
									ORDER BY ObtainedMarks DESC");

				 dsa4 = gcnew DataSet();
				 Access4->DBDA->Fill(dsa4, "Performance");
				 standings->DataSource = dsa4->Tables[0];
				 
				 standings->Columns[0]->HeaderText = "Session Rank";
				 standings->Columns[2]->HeaderText = "Session Score";

				 if (Access4->RecordCount >= 1){
					 standings->Rows[0]->Cells[0]->Value = 1;
				 }
				 for (int i = 1; i < Access4->RecordCount; i++){

					 if (standings->Rows[i]->Cells[2]->Value->ToString() == standings->Rows[i - 1]->Cells[2]->Value->ToString())
					 {
						 standings->Rows[i]->Cells[0]->Value = standings->Rows[i - 1]->Cells[0]->Value;
					 }
					 else
					 {
						 standings->Rows[i]->Cells[0]->Value = i + 1;
					 }
				 }
				 dt = dsa4->Tables[0];
	}
	private: System::Void btnSession5_Click(System::Object^  sender, System::EventArgs^  e) {
				 Access5 = gcnew OES();
				 Access5->ExecQuery("SELECT ExamCode, Username, ObtainedMarks\
								   FROM  Performance\
								   WHERE(ExamCode = " + this->examCode + " AND SessionNumber = 5 )\
								   ORDER BY ObtainedMarks DESC");

				 dsa5 = gcnew DataSet();
				 Access5->DBDA->Fill(dsa5, "Performance");
				 standings->DataSource = dsa5->Tables[0];
				 
				 standings->Columns[0]->HeaderText = "Session Rank";
				 standings->Columns[2]->HeaderText = "Session Score";

				 if (Access5->RecordCount >= 1){
					 standings->Rows[0]->Cells[0]->Value = 1;
				 }
				 for (int i = 1; i < Access5->RecordCount; i++){

					 if (standings->Rows[i]->Cells[2]->Value->ToString() == standings->Rows[i - 1]->Cells[2]->Value->ToString())
					 {
						 standings->Rows[i]->Cells[0]->Value = standings->Rows[i - 1]->Cells[0]->Value;
					 }
					 else
					 {
						 standings->Rows[i]->Cells[0]->Value = i + 1;
					 }
				 }
				 dt = dsa5->Tables[0];
	}
	private: System::Void btnOverall_Click(System::Object^  sender, System::EventArgs^  e) {
				 standings->DataSource = dsa->Tables[0];
				 standings->Columns[0]->HeaderText = "Rank";

				 if (Access->RecordCount >= 1){
					 standings->Rows[0]->Cells[0]->Value = 1;
				 }
				 for (int i = 1; i < Access->RecordCount; i++){

					 if (standings->Rows[i]->Cells[2]->Value->ToString() == standings->Rows[i - 1]->Cells[2]->Value->ToString())
					 {
						 standings->Rows[i]->Cells[0]->Value = standings->Rows[i - 1]->Cells[0]->Value;
					 }
					 else
					 {
						 standings->Rows[i]->Cells[0]->Value = i + 1;
					 }
				 }
				 dt = dsa->Tables[0];
	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text == ""){
					 dt->DefaultView->RowFilter = "Username like '%" + textBox1->Text + "%'";
				 }
				 else{
					 dt->DefaultView->RowFilter = "Username like '%" + textBox1->Text + "%'";
				 }
	}
};
}
