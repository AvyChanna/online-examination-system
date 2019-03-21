#pragma once
#include"Questions.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Questions;


namespace Online_Exam {

	/// <summary>
	/// Summary for AddQuestions
	/// </summary>

	

	public ref class AddQuestions : public System::Windows::Forms::UserControl
	{
	public:
		array<array<Ques^>^>^data;
		AddQuestions(Int32 SC, array<Int32> ^SQ)
		{
			InitializeComponent();
			CurrentSection = 0;
			CurrentQuestion = 0;
			SectionCount = SC;
			SectionQues = gcnew array<int>(SC);
			int i = 0;
			for each(Int32 I in SQ)
			{
				SectionQues[i] = I;
				i++;
			}
			data = gcnew array<array<Ques^>^>(SC);
			for (i = 0; i < SC; i++)
			{
				data[i] = gcnew array<Ques^>(SectionQues[i]);
				for (int j = 0; j < SectionQues[i]; j++)
				{
					data[i][j] = gcnew Ques;
				}
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddQuestions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textQuestion;
	protected:

	private: System::Windows::Forms::DataGridView^  dgvOptions;
	public: Int32 SectionCount;
			array<Int32> ^SectionQues;
			int CurrentSection;
			int CurrentQuestion;
	protected:



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cbSection;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OptionText;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  CorrectOption;
	private: System::Windows::Forms::Button^  btnDone;

	private: System::Windows::Forms::Button^  btnNext;

	private: System::Windows::Forms::Button^  btnPrev;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::TextBox^  textAnswer;

	private: System::Windows::Forms::RadioButton^  radioTrue;
	private: System::Windows::Forms::RadioButton^  radioFalse;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataGridView^  dgvtemp;






	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textQuestion = (gcnew System::Windows::Forms::TextBox());
			this->dgvOptions = (gcnew System::Windows::Forms::DataGridView());
			this->OptionText = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CorrectOption = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbSection = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnDone = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnPrev = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textAnswer = (gcnew System::Windows::Forms::TextBox());
			this->radioTrue = (gcnew System::Windows::Forms::RadioButton());
			this->radioFalse = (gcnew System::Windows::Forms::RadioButton());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dgvtemp = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOptions))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvtemp))->BeginInit();
			this->SuspendLayout();
			// 
			// textQuestion
			// 
			this->textQuestion->Location = System::Drawing::Point(91, 67);
			this->textQuestion->Multiline = true;
			this->textQuestion->Name = L"textQuestion";
			this->textQuestion->Size = System::Drawing::Size(469, 65);
			this->textQuestion->TabIndex = 1;
			// 
			// dgvOptions
			// 
			this->dgvOptions->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvOptions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->OptionText,
					this->CorrectOption
			});
			this->dgvOptions->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvOptions->Location = System::Drawing::Point(3, 3);
			this->dgvOptions->Name = L"dgvOptions";
			this->dgvOptions->Size = System::Drawing::Size(455, 70);
			this->dgvOptions->TabIndex = 2;
			// 
			// OptionText
			// 
			this->OptionText->HeaderText = L"Option Text";
			this->OptionText->Name = L"OptionText";
			// 
			// CorrectOption
			// 
			this->CorrectOption->HeaderText = L"Correct Option";
			this->CorrectOption->Name = L"CorrectOption";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Question No -";
			this->label1->Click += gcnew System::EventHandler(this, &AddQuestions::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(97, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Answers";
			this->label2->Click += gcnew System::EventHandler(this, &AddQuestions::label1_Click);
			// 
			// cbSection
			// 
			this->cbSection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSection->FormattingEnabled = true;
			this->cbSection->Location = System::Drawing::Point(173, 21);
			this->cbSection->Name = L"cbSection";
			this->cbSection->Size = System::Drawing::Size(121, 21);
			this->cbSection->Sorted = true;
			this->cbSection->TabIndex = 4;
			this->cbSection->SelectedIndexChanged += gcnew System::EventHandler(this, &AddQuestions::cbSection_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(88, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Section";
			this->label3->Click += gcnew System::EventHandler(this, &AddQuestions::label1_Click);
			// 
			// btnDone
			// 
			this->btnDone->Location = System::Drawing::Point(550, 292);
			this->btnDone->Name = L"btnDone";
			this->btnDone->Size = System::Drawing::Size(95, 35);
			this->btnDone->TabIndex = 5;
			this->btnDone->Text = L"Done";
			this->btnDone->UseVisualStyleBackColor = true;
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(334, 292);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(93, 35);
			this->btnNext->TabIndex = 7;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &AddQuestions::btnNext_Click);
			// 
			// btnPrev
			// 
			this->btnPrev->Location = System::Drawing::Point(249, 292);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->Size = System::Drawing::Size(79, 35);
			this->btnPrev->TabIndex = 6;
			this->btnPrev->Text = L"Prev";
			this->btnPrev->UseVisualStyleBackColor = true;
			this->btnPrev->Click += gcnew System::EventHandler(this, &AddQuestions::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(344, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Total Question in this section";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(493, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"0";
			this->label5->Click += gcnew System::EventHandler(this, &AddQuestions::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(166, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"0";
			// 
			// textAnswer
			// 
			this->textAnswer->Location = System::Drawing::Point(25, 26);
			this->textAnswer->Name = L"textAnswer";
			this->textAnswer->Size = System::Drawing::Size(416, 20);
			this->textAnswer->TabIndex = 12;
			this->textAnswer->Visible = false;
			// 
			// radioTrue
			// 
			this->radioTrue->AutoSize = true;
			this->radioTrue->Location = System::Drawing::Point(166, 28);
			this->radioTrue->Name = L"radioTrue";
			this->radioTrue->Size = System::Drawing::Size(47, 17);
			this->radioTrue->TabIndex = 13;
			this->radioTrue->Text = L"True";
			this->radioTrue->UseVisualStyleBackColor = true;
			this->radioTrue->Visible = false;
			// 
			// radioFalse
			// 
			this->radioFalse->AutoSize = true;
			this->radioFalse->Location = System::Drawing::Point(239, 28);
			this->radioFalse->Name = L"radioFalse";
			this->radioFalse->Size = System::Drawing::Size(50, 17);
			this->radioFalse->TabIndex = 14;
			this->radioFalse->Text = L"False";
			this->radioFalse->UseVisualStyleBackColor = true;
			this->radioFalse->Visible = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(91, 169);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(224, 102);
			this->tabControl1->TabIndex = 15;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dgvOptions);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(461, 76);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"MCQ";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->radioFalse);
			this->tabPage2->Controls->Add(this->radioTrue);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(216, 76);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"True/False";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textAnswer);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(461, 76);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"One Word";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dgvtemp
			// 
			this->dgvtemp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvtemp->Location = System::Drawing::Point(317, 191);
			this->dgvtemp->Name = L"dgvtemp";
			this->dgvtemp->Size = System::Drawing::Size(328, 77);
			this->dgvtemp->TabIndex = 16;
			// 
			// AddQuestions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dgvtemp);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnPrev);
			this->Controls->Add(this->btnDone);
			this->Controls->Add(this->cbSection);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textQuestion);
			this->Name = L"AddQuestions";
			this->Size = System::Drawing::Size(677, 344);
			this->Load += gcnew System::EventHandler(this, &AddQuestions::AddQuestions_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOptions))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvtemp))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void AddQuestions_Load(System::Object^  sender, System::EventArgs^  e) {
			if (CurrentQuestion == 0)
				btnPrev->Enabled = true;
			if (CurrentQuestion == SectionQues[CurrentSection])
				btnNext->Enabled = true;
			cbSection->Items->Clear();
			for (int i = 0; i < SectionQues->Length;i++)
				cbSection->Items->Add(i);
			cbSection->SelectedIndex = 0;
			btnPrev->Visible = false;
			if (SectionQues[0] == 1)
				btnNext->Visible = false;
			label5->Text = Convert::ToString(SectionQues[0]);
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void markAsCorrectOptionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			btnNext->Visible = true;
			if (CurrentQuestion >=2)
				btnPrev->Visible = true;
			else btnPrev->Visible = false;
			/*if (CurrentQuestion == 0)
				return;*/
			data[CurrentSection][CurrentQuestion]->q = textQuestion->Text;
			//data[CurrentSection][CurrentQuestion]->dt
			data[CurrentSection][CurrentQuestion]->dt->Columns->Clear();
			for each(DataGridViewColumn ^col in dgvOptions->Columns)
				{
					data[CurrentSection][CurrentQuestion]->dt->Columns->Add(col->Name);
				}
			
					data[CurrentSection][CurrentQuestion]->dt->Rows->Clear();
				for each(DataGridViewRow ^row in dgvOptions->Rows)
				{

					DataRow ^dr = data[CurrentSection][CurrentQuestion]->dt->NewRow();
					for each(DataGridViewCell ^cell in row->Cells)
					{
						dr[cell->ColumnIndex] = cell->Value;
					}
					data[CurrentSection][CurrentQuestion]->dt->Rows->Add(dr);
				}
			CurrentQuestion--;
			label6->Text = Convert::ToString(CurrentQuestion);
			textQuestion->Text = data[CurrentSection][CurrentQuestion]->q;
			dgvOptions->Rows->Clear();
			dgvOptions->DataSource = data[CurrentSection][CurrentQuestion]->dt;
			for each(DataGridViewRow ^drow in data[CurrentSection][CurrentQuestion]->dt->Rows)
			{
				dgvOptions->Rows->Add(drow);
			}

}
private: System::Void cbSection_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (CurrentQuestion < SectionQues[CurrentSection] - 2)
				btnNext->Visible = true;
			else btnNext->Visible = false;
			btnPrev->Visible = true;
			 /*if (CurrentQuestion == SectionQues[CurrentSection] - 1)
				 return;*/
			 data[CurrentSection][CurrentQuestion]->q = textQuestion->Text;
			 //data[CurrentSection][CurrentQuestion]->dt
			 data[CurrentSection][CurrentQuestion]->dt->Columns->Clear();
				 for each(DataGridViewColumn ^col in dgvOptions->Columns)
				 {
					 data[CurrentSection][CurrentQuestion]->dt->Columns->Add(col->Name);
				 }
			 
					 data[CurrentSection][CurrentQuestion]->dt->Rows->Clear();
				 for each(DataGridViewRow ^row in dgvOptions->Rows)
				 {
					 DataRow ^dr = data[CurrentSection][CurrentQuestion]->dt->NewRow();
					for each(DataGridViewCell ^cell in row->Cells)
					{
						dr[cell->ColumnIndex] = cell->Value;
					}
					data[CurrentSection][CurrentQuestion]->dt->Rows->Add(dr);
				 }
			 CurrentQuestion++;
			 label6->Text = Convert::ToString(CurrentQuestion);

			 textQuestion->Text = data[CurrentSection][CurrentQuestion]->q;
			 dgvOptions->Rows->Clear();
			 dgvOptions->DataSource = data[CurrentSection][CurrentQuestion]->dt;

			 for each(DataGridView ^drow in data[CurrentSection][CurrentQuestion]->dt->Rows)
			 {
				 dgvOptions->Rows->Add(drow);
			 }
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
};

}
