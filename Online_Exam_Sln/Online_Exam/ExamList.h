#pragma once
#include "Database.h"
#include "Leaderboard.h"
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
			this->exams->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->exams->Location = System::Drawing::Point(35, 53);
			this->exams->Name = L"exams";
			this->exams->RowTemplate->Height = 24;
			this->exams->Size = System::Drawing::Size(592, 347);
			this->exams->TabIndex = 0;
			this->exams->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ExamList::exams_CellClick);
			// 
			// next
			// 
			this->next->Location = System::Drawing::Point(494, 428);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(117, 37);
			this->next->TabIndex = 1;
			this->next->Text = L"Next";
			this->next->UseVisualStyleBackColor = true;
			this->next->Click += gcnew System::EventHandler(this, &ExamList::next_Click);
			// 
			// previous
			// 
			this->previous->Location = System::Drawing::Point(46, 428);
			this->previous->Name = L"previous";
			this->previous->Size = System::Drawing::Size(116, 37);
			this->previous->TabIndex = 2;
			this->previous->Text = L"Previous";
			this->previous->UseVisualStyleBackColor = true;
			this->previous->Click += gcnew System::EventHandler(this, &ExamList::previous_Click);
			// 
			// ExamList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->previous);
			this->Controls->Add(this->next);
			this->Controls->Add(this->exams);
			this->Name = L"ExamList";
			this->Size = System::Drawing::Size(658, 499);
			this->Load += gcnew System::EventHandler(this, &ExamList::ExamList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exams))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void previous_Click(System::Object^  sender, System::EventArgs^  e) {
				 I = I - 5;
				 if (I < 0){
					 I = 0;
				 }
				 dsa->Clear();
				 Access->DBDA->Fill(dsa, I, 5, "Exam");
	}
	private: System::Void ExamList_Load(System::Object^  sender, System::EventArgs^  e) {
				 Access = gcnew OES();
				 Access->ExecQuery("SELECT Exam.ExamCode, Exam.ExamName, Exam.Professor FROM Exam;");
				 dsa = gcnew DataSet();
				 Access->DBDA->Fill(dsa,I,5, "Exam");

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
				 I = I + 5;
				 if (I > Access->RecordCount){
					 I -= 5;
				 }
				 dsa->Clear();
				 Access->DBDA->Fill(dsa, I, 5, "Exam");
			
	}
	private: System::Void exams_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 
				 if (e->ColumnIndex==0)
				 {
					 String^ examCode = exams->Rows[e->RowIndex]->Cells[1]->Value->ToString();
					 Leaderboard^ af = gcnew Leaderboard(examCode);
					 af->Show();
				 }
	}
	};
}
