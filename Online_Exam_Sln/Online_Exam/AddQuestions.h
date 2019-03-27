#pragma once
#include"Questions.h"
#include"json.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Questions;
using namespace Newtonsoft::Json;

namespace Online_Exam {

	/// <summary>
	/// Summary for AddQuestions
	/// </summary>

	

	public ref class AddQuestions : public System::Windows::Forms::UserControl
	{
	public:
		array<array<Ques^>^>^data;
		AddQuestions()
		{
			InitializeComponent();
		}
		AddQuestions(Int32 SC, array<Int32> ^SQ, array<Int32> ^SW, array<Int32>^SGQ)
		{
			InitializeComponent();
			CurrentSection = 0;
			CurrentQuestion = 0;
			SectionCount = SC;
			SectionQues = gcnew array<int>(SC);
			SectionWeight = gcnew array<int>(SC);
			SectionTotalQuesGiven = gcnew array<int>(SC);
			int i = 0;
			for each(Int32 I in SGQ)
			{
				SectionTotalQuesGiven[i] = I;
				i++;
			}
			i = 0;
			for each(Int32 I in SW)
			{
				SectionWeight[i] = I;
				i++;
			}
			i = 0;
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
	private: System::Windows::Forms::RichTextBox^  textQuestion;
	protected:
	public: Int32 SectionCount;
			array<Int32> ^SectionQues;
			int CurrentSection;
			int CurrentQuestion;
			array<Int32> ^SectionWeight;
			array<Int32> ^SectionTotalQuesGiven;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cbSection;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnDone;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnPrev;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textAnswer;
	private: System::Windows::Forms::RadioButton^  radioTrue;
	private: System::Windows::Forms::RadioButton^  radioFalse;
	private: System::Windows::Forms::TabControl^  tcAnswerType;
	private: System::Windows::Forms::TabPage^  tpMCQ;
	private: System::Windows::Forms::TabPage^  tpTF;
	private: System::Windows::Forms::TabPage^  tpOW;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RichTextBox^  textIncorrectOpt;
	private: System::Windows::Forms::RichTextBox^  textCorrectOpt;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  btnSave;
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
			this->textQuestion = (gcnew System::Windows::Forms::RichTextBox());
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
			this->tcAnswerType = (gcnew System::Windows::Forms::TabControl());
			this->tpMCQ = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textIncorrectOpt = (gcnew System::Windows::Forms::RichTextBox());
			this->textCorrectOpt = (gcnew System::Windows::Forms::RichTextBox());
			this->tpTF = (gcnew System::Windows::Forms::TabPage());
			this->tpOW = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->tcAnswerType->SuspendLayout();
			this->tpMCQ->SuspendLayout();
			this->tpTF->SuspendLayout();
			this->tpOW->SuspendLayout();
			this->SuspendLayout();
			// 
			// textQuestion
			// 
			this->textQuestion->BackColor = System::Drawing::Color::Gainsboro;
			this->textQuestion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textQuestion->Location = System::Drawing::Point(7, 67);
			this->textQuestion->Name = L"textQuestion";
			this->textQuestion->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->textQuestion->Size = System::Drawing::Size(663, 65);
			this->textQuestion->TabIndex = 1;
			this->textQuestion->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Question No -";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Answers";
			// 
			// cbSection
			// 
			this->cbSection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSection->FormattingEnabled = true;
			this->cbSection->Location = System::Drawing::Point(61, 18);
			this->cbSection->Name = L"cbSection";
			this->cbSection->Size = System::Drawing::Size(121, 21);
			this->cbSection->Sorted = true;
			this->cbSection->TabIndex = 4;
			this->cbSection->SelectedIndexChanged += gcnew System::EventHandler(this, &AddQuestions::cbSection_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Section";
			// 
			// btnDone
			// 
			this->btnDone->Location = System::Drawing::Point(550, 292);
			this->btnDone->Name = L"btnDone";
			this->btnDone->Size = System::Drawing::Size(95, 35);
			this->btnDone->TabIndex = 5;
			this->btnDone->Text = L"Done";
			this->btnDone->UseVisualStyleBackColor = true;
			this->btnDone->Click += gcnew System::EventHandler(this, &AddQuestions::btnDone_Click);
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
			this->btnPrev->Location = System::Drawing::Point(150, 292);
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
			this->label4->Location = System::Drawing::Point(486, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Total Question in this section -";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(641, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(81, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"1";
			// 
			// textAnswer
			// 
			this->textAnswer->BackColor = System::Drawing::Color::Gainsboro;
			this->textAnswer->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAnswer->Location = System::Drawing::Point(317, 30);
			this->textAnswer->Name = L"textAnswer";
			this->textAnswer->Size = System::Drawing::Size(300, 26);
			this->textAnswer->TabIndex = 12;
			// 
			// radioTrue
			// 
			this->radioTrue->AutoSize = true;
			this->radioTrue->Checked = true;
			this->radioTrue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioTrue->Location = System::Drawing::Point(224, 39);
			this->radioTrue->Name = L"radioTrue";
			this->radioTrue->Size = System::Drawing::Size(77, 30);
			this->radioTrue->TabIndex = 13;
			this->radioTrue->TabStop = true;
			this->radioTrue->Text = L"True";
			this->radioTrue->UseVisualStyleBackColor = true;
			// 
			// radioFalse
			// 
			this->radioFalse->AutoSize = true;
			this->radioFalse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioFalse->Location = System::Drawing::Point(355, 39);
			this->radioFalse->Name = L"radioFalse";
			this->radioFalse->Size = System::Drawing::Size(88, 30);
			this->radioFalse->TabIndex = 14;
			this->radioFalse->Text = L"False";
			this->radioFalse->UseVisualStyleBackColor = true;
			// 
			// tcAnswerType
			// 
			this->tcAnswerType->Controls->Add(this->tpMCQ);
			this->tcAnswerType->Controls->Add(this->tpTF);
			this->tcAnswerType->Controls->Add(this->tpOW);
			this->tcAnswerType->HotTrack = true;
			this->tcAnswerType->Location = System::Drawing::Point(3, 151);
			this->tcAnswerType->Name = L"tcAnswerType";
			this->tcAnswerType->SelectedIndex = 0;
			this->tcAnswerType->ShowToolTips = true;
			this->tcAnswerType->Size = System::Drawing::Size(671, 135);
			this->tcAnswerType->TabIndex = 15;
			// 
			// tpMCQ
			// 
			this->tpMCQ->Controls->Add(this->label8);
			this->tpMCQ->Controls->Add(this->label7);
			this->tpMCQ->Controls->Add(this->textIncorrectOpt);
			this->tpMCQ->Controls->Add(this->textCorrectOpt);
			this->tpMCQ->Location = System::Drawing::Point(4, 22);
			this->tpMCQ->Name = L"tpMCQ";
			this->tpMCQ->Padding = System::Windows::Forms::Padding(3);
			this->tpMCQ->Size = System::Drawing::Size(663, 109);
			this->tpMCQ->TabIndex = 0;
			this->tpMCQ->Text = L"MCQ";
			this->tpMCQ->ToolTipText = L"Single/Multiple Correct Type Answer";
			this->tpMCQ->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(331, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(164, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Incorrect Options(Line separated)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(0, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(156, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Correct Options(Line separated)";
			// 
			// textIncorrectOpt
			// 
			this->textIncorrectOpt->BackColor = System::Drawing::Color::Gainsboro;
			this->textIncorrectOpt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textIncorrectOpt->DetectUrls = false;
			this->textIncorrectOpt->Location = System::Drawing::Point(334, 19);
			this->textIncorrectOpt->Name = L"textIncorrectOpt";
			this->textIncorrectOpt->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->textIncorrectOpt->Size = System::Drawing::Size(325, 84);
			this->textIncorrectOpt->TabIndex = 0;
			this->textIncorrectOpt->Text = L"";
			// 
			// textCorrectOpt
			// 
			this->textCorrectOpt->BackColor = System::Drawing::Color::Gainsboro;
			this->textCorrectOpt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textCorrectOpt->DetectUrls = false;
			this->textCorrectOpt->Location = System::Drawing::Point(3, 19);
			this->textCorrectOpt->Name = L"textCorrectOpt";
			this->textCorrectOpt->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->textCorrectOpt->Size = System::Drawing::Size(325, 84);
			this->textCorrectOpt->TabIndex = 0;
			this->textCorrectOpt->Text = L"";
			// 
			// tpTF
			// 
			this->tpTF->Controls->Add(this->radioFalse);
			this->tpTF->Controls->Add(this->radioTrue);
			this->tpTF->Location = System::Drawing::Point(4, 22);
			this->tpTF->Name = L"tpTF";
			this->tpTF->Padding = System::Windows::Forms::Padding(3);
			this->tpTF->Size = System::Drawing::Size(663, 109);
			this->tpTF->TabIndex = 1;
			this->tpTF->Text = L"True/False";
			this->tpTF->ToolTipText = L"True/False type Answer";
			this->tpTF->UseVisualStyleBackColor = true;
			// 
			// tpOW
			// 
			this->tpOW->Controls->Add(this->label10);
			this->tpOW->Controls->Add(this->label9);
			this->tpOW->Controls->Add(this->textAnswer);
			this->tpOW->Location = System::Drawing::Point(4, 22);
			this->tpOW->Name = L"tpOW";
			this->tpOW->Size = System::Drawing::Size(663, 109);
			this->tpOW->TabIndex = 2;
			this->tpOW->Text = L"One Word";
			this->tpOW->ToolTipText = L"One Word/ Integer Type Answer";
			this->tpOW->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(300, 69);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(335, 26);
			this->label10->TabIndex = 14;
			this->label10->Text = L"( max 25 words, keep it short )";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(45, 33);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(191, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Enter Your Answer Here -";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(235, 292);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(93, 35);
			this->btnSave->TabIndex = 7;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &AddQuestions::btnSave_Click);
			// 
			// AddQuestions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tcAnswerType);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnSave);
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
			this->tcAnswerType->ResumeLayout(false);
			this->tpMCQ->ResumeLayout(false);
			this->tpMCQ->PerformLayout();
			this->tpTF->ResumeLayout(false);
			this->tpTF->PerformLayout();
			this->tpOW->ResumeLayout(false);
			this->tpOW->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void AddQuestions_Load(System::Object^  sender, System::EventArgs^  e) {
	cbSection->Items->Clear();
	for (int i = 0; i < SectionQues->Length;i++)
		cbSection->Items->Add(i+1);
	cbSection->SelectedIndex = 0;
	btnPrev->Visible = false;
	if (SectionQues[0] == 1)
		btnNext->Visible = false;
	label5->Text = Convert::ToString(SectionQues[0]);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	btnNext->Visible = true;
	if (CurrentQuestion >=2)
		btnPrev->Visible = true;
	else btnPrev->Visible = false;

	SaveData(CurrentSection, CurrentQuestion);
	CurrentQuestion--;
	LoadData(CurrentSection, CurrentQuestion);
}
private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
	if (CurrentQuestion < SectionQues[CurrentSection] - 2)
		btnNext->Visible = true;
	else btnNext->Visible = false;
	btnPrev->Visible = true;

	SaveData(CurrentSection, CurrentQuestion);
	CurrentQuestion++;
	LoadData(CurrentSection, CurrentQuestion);
}

private: System::Void cbSection_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	SaveData(CurrentSection, CurrentQuestion);
	CurrentSection= cbSection->SelectedIndex;
	CurrentQuestion = 0;
	LoadData(CurrentSection, CurrentQuestion);

	btnPrev->Visible = false;
	if (SectionQues[CurrentSection] == 1)
		btnNext->Visible = false;
	else btnNext->Visible = true;
}
public: System::Void SaveData(int sect, int ques)
{
	// save question statement
	data[sect][ques]->q = textQuestion->Text;
	// save options
	data[sect][ques]->lc->Clear();
	data[sect][ques]->li->Clear();
	data[sect][ques]->type = tcAnswerType->SelectedIndex;
	if (tcAnswerType->SelectedIndex == 0)
	{
		array<String ^> ^delim = { "\r", "\n", "\r\n", "\n\r" };
		for each(String^ s in textCorrectOpt->Text->Split(delim, StringSplitOptions::RemoveEmptyEntries))
		if (!String::IsNullOrEmpty(s->Trim()))
			data[sect][ques]->lc->Add(s);
		for each(String^ s in textIncorrectOpt->Text->Split(delim, StringSplitOptions::RemoveEmptyEntries))
		if (!String::IsNullOrEmpty(s->Trim()))
			data[sect][ques]->li->Add(s);
	}
	else if (tcAnswerType->SelectedIndex == 1)
	{
		if (radioTrue->Checked)
			data[sect][ques]->tf = 1;
		else data[sect][ques]->tf = 0;
	}
	else if (tcAnswerType->SelectedIndex == 2)
		data[sect][ques]->ow = textAnswer->Text;
}
public: System::Void LoadData(int sect, int ques)
{
	// display ques
	textQuestion->Text = data[sect][ques]->q;
	textCorrectOpt->Text = "";
	textIncorrectOpt->Text = "";
	// display options
	label6->Text = Convert::ToString(ques+1);
	label5->Text = Convert::ToString(SectionQues[CurrentSection]);
	if (data[sect][ques]->type == -1) tcAnswerType->SelectedIndex = 0;
	else tcAnswerType->SelectedIndex = data[sect][ques]->type;
	tcAnswerType->Refresh();
	if (data[sect][ques]->type == 0)
	{
		for each(String ^s in data[sect][ques]->lc)
			textCorrectOpt->AppendText(s + Environment::NewLine);
		for each(String ^s in data[sect][ques]->li)
			textIncorrectOpt->AppendText(s + Environment::NewLine);
	}
	else if (data[sect][ques]->type == 1)
	{
		if (data[sect][ques]->tf)
		{
			radioFalse->Checked = false;
			radioTrue->Checked = true;
		}
		else
		{
			radioTrue->Checked = false;
			radioFalse->Checked = true;
		}
	}
	else if (data[sect][ques]->type == 2)
		textAnswer->Text = data[sect][ques]->ow;
}
private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveData(CurrentSection, CurrentQuestion);
	textAnswer->Text = "";
	textQuestion->Text = "";
	textCorrectOpt->Text = "";
	textIncorrectOpt->Text = "";
	radioTrue->Checked = false;
	radioFalse->Checked = false;
	LoadData(CurrentSection, CurrentQuestion);
}
private: System::Void btnDone_Click(System::Object^  sender, System::EventArgs^  e) {
	// TODO: Check if all fields are done for.
			 SaveData(CurrentSection, CurrentQuestion);
	JExam ^js = gcnew JExam();
	for (int i = 0; i < SectionCount; i++)
	{
		JSection ^jsd = gcnew JSection();
		jsd->TotalQuestions = SectionQues[i];
		jsd->Section = i+1;
		jsd->Weight = SectionWeight[i];
		jsd->NumberOfQuestionsGiven = SectionTotalQuesGiven[i];
		for (int j = 0; j < SectionQues[i]; j++)
		{
			JQuestions ^jsq = gcnew JQuestions();
			jsq->Statement = data[i][j]->q;
			jsq->AnswerType = data[i][j]->type;

			if(data[i][j]->type == 0)
			{
				for (int k = 1; k <= data[i][j]->lc->Count; k++)
					jsq->Answer->Add(k);
				for (int k = 0; k < data[i][j]->lc->Count; k++)
					jsq->Options->Add(data[i][j]->lc[k]);
				for (int k = 0; k < data[i][j]->li->Count; k++)
					jsq->Options->Add(data[i][j]->li[k]);
			}
			else if (data[i][j]->type == 1)
			{
				jsq->Answer->Add(data[i][j]->tf);
				jsq->Options->Add("False");
				jsq->Options->Add("True");
			}
			else if (data[i][j]->type == 1)
			{
				jsq->Answer->Add(0);
				jsq->Options->Add(data[i][j]->ow);
			}
			jsd->Questions->Add(jsq);
		}
		js->Data->Add(jsd);
	}
	String ^output = JsonConvert::SerializeObject(js, Formatting::Indented);
	Console::WriteLine(output);
}
};
}
