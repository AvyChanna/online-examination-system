#pragma once
#include "Database.h"
#include "Standings.h"
#include <iostream>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;


namespace Online_Exam {

	/// <summary>
	/// Summary for ExamList
	/// </summary>
	public ref class ExamList : public System::Windows::Forms::UserControl
	{
	private:
		OES ^ Access;
		DataSet ^dsa;
	public:
		ExamList(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private:
		Int32 I=0;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ExamList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  exams;
	protected:

	protected:
	private: System::Windows::Forms::Button^  next;
	private: System::Windows::Forms::Button^  previous;


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
			this->exams = (gcnew System::Windows::Forms::DataGridView());
			this->next = (gcnew System::Windows::Forms::Button());
			this->previous = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exams))->BeginInit();
			this->SuspendLayout();
			// 
			// exams
			// 
			this->exams->AllowUserToAddRows = false;
			this->exams->AllowUserToDeleteRows = false;
			this->exams->AllowUserToOrderColumns = true;
			this->exams->AllowUserToResizeColumns = false;
			this->exams->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			this->exams->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->exams->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->exams->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->exams->BackgroundColor = System::Drawing::Color::White;
			this->exams->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(11)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->exams->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->exams->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->exams->DefaultCellStyle = dataGridViewCellStyle3;
			this->exams->Location = System::Drawing::Point(35, 53);
			this->exams->Name = L"exams";
			this->exams->RowTemplate->Height = 24;
			this->exams->Size = System::Drawing::Size(908, 347);
			this->exams->TabIndex = 0;
			this->exams->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ExamList::exams_CellClick);
			// 
			// next
			// 
			this->next->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->next->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->next->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->next->ForeColor = System::Drawing::Color::White;
			this->next->Location = System::Drawing::Point(499, 423);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(171, 47);
			this->next->TabIndex = 1;
			this->next->Text = L"Next";
			this->next->UseVisualStyleBackColor = false;
			this->next->Click += gcnew System::EventHandler(this, &ExamList::next_Click);
			// 
			// previous
			// 
			this->previous->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->previous->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previous->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->previous->ForeColor = System::Drawing::Color::White;
			this->previous->Location = System::Drawing::Point(309, 423);
			this->previous->Name = L"previous";
			this->previous->Size = System::Drawing::Size(170, 47);
			this->previous->TabIndex = 2;
			this->previous->Text = L"Previous";
			this->previous->UseVisualStyleBackColor = false;
			this->previous->Click += gcnew System::EventHandler(this, &ExamList::previous_Click);
			// 
			// ExamList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->previous);
			this->Controls->Add(this->next);
			this->Controls->Add(this->exams);
			this->Name = L"ExamList";
			this->Size = System::Drawing::Size(978, 532);
			this->Load += gcnew System::EventHandler(this, &ExamList::ExamList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exams))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void previous_Click(System::Object^  sender, System::EventArgs^  e) {
				 I = I - 10;
				 if (I < 0){
					 I = 0;
				 }
				 dsa->Clear();
				 Access->DBDA->Fill(dsa, I, 10, "Exam");
	}
	private: System::Void ExamList_Load(System::Object^  sender, System::EventArgs^  e) {
				 Access = gcnew OES();
				 Access->ExecQuery("SELECT Exam.ExamCode, Exam.ExamName, Exam.Professor FROM Exam WHERE(StudAppeared > 0);");
				 dsa = gcnew DataSet();
				 Access->DBDA->Fill(dsa,I,10, "Exam");

				 DataGridViewButtonColumn ^ dgbvt = gcnew DataGridViewButtonColumn();
				 dgbvt->HeaderText = "Standings";
				 dgbvt->Text = "View Leaderboard";
				 dgbvt->UseColumnTextForButtonValue = true;

				 exams->DataSource = dsa->Tables[0];
				 exams->Columns->Add(dgbvt);
				 this->exams->Columns[1]->ReadOnly = true;
				 this->exams->Columns[2]->ReadOnly = true;
				 this->exams->Columns[3]->ReadOnly = true;

	}
	private: System::Void next_Click(System::Object^  sender, System::EventArgs^  e) {
				 I = I + 10;
				 if (I > Access->RecordCount){
					 I -= 10;
				 }
				 dsa->Clear();
				 Access->DBDA->Fill(dsa, I, 10, "Exam");
			
	}
	private: System::Void exams_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 
				 if (e->ColumnIndex==0)
				 {
					 String^ examCode = exams->Rows[e->RowIndex]->Cells[1]->Value->ToString();
					 Standings^ af = gcnew Standings(examCode);
					 af->Show();
				 }
	}
	};
}
