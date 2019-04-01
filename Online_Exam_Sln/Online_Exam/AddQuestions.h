#pragma once
#include"Questions.h"
#include"json.h"
#include"Database.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Questions;
using namespace Newtonsoft::Json;
using namespace Database;
namespace Online_Exam {

	/// <summary>
	/// Summary for AddQuestions
	/// </summary>

	

	public ref class AddQuestions : public System::Windows::Forms::Form
	{
	public:
		array<array<Ques^>^>^data;
		AddQuestions()
		{
			InitializeComponent();
		}
		String ^aa9 = "";
		String ^aa10 = "";
		String ^aa11 = "";
		String ^aa12 = "";
			OES^ Accessqwert = gcnew OES();
		AddQuestions(Int32 SC, array<Int32> ^SQ, array<Int32> ^SW, array<Int32>^SGQ, String ^a1, String ^a2, String ^a3, String ^a4, String ^a5, String ^a6, String ^a7, String ^a8, String ^a9, String ^a10, String ^a11, String ^a12)
		{

			InitializeComponent();
			Accessqwert->AddParam("@ExamName", a1);
			Accessqwert->AddParam("@GroupID", a2);
			Accessqwert->AddParam("@WgtSections", a3);
			//Add link to QuestionSet
			Accessqwert->AddParam("@Ses1", a4);
			Accessqwert->AddParam("@Ses2", a5);
			Accessqwert->AddParam("@Ses3", a6);
			Accessqwert->AddParam("@Ses4", a7);
			Accessqwert->AddParam("@Ses5", a8);
			aa9 = a9;
			aa10 = a10;
			aa11 = a11;
			aa12 = a12;
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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel7;


















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
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->textQuestion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textQuestion->Location = System::Drawing::Point(39, 86);
			this->textQuestion->Name = L"textQuestion";
			this->textQuestion->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->textQuestion->Size = System::Drawing::Size(603, 78);
			this->textQuestion->TabIndex = 1;
			this->textQuestion->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Question No -";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Answers";
			// 
			// cbSection
			// 
			this->cbSection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSection->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbSection->FormattingEnabled = true;
			this->cbSection->Location = System::Drawing::Point(123, 19);
			this->cbSection->Name = L"cbSection";
			this->cbSection->Size = System::Drawing::Size(121, 23);
			this->cbSection->Sorted = true;
			this->cbSection->TabIndex = 4;
			this->cbSection->SelectedIndexChanged += gcnew System::EventHandler(this, &AddQuestions::cbSection_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Section";
			// 
			// btnDone
			// 
			this->btnDone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnDone->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDone->ForeColor = System::Drawing::Color::White;
			this->btnDone->Location = System::Drawing::Point(467, 383);
			this->btnDone->Name = L"btnDone";
			this->btnDone->Size = System::Drawing::Size(95, 35);
			this->btnDone->TabIndex = 5;
			this->btnDone->Text = L"Done";
			this->btnDone->UseVisualStyleBackColor = false;
			this->btnDone->Click += gcnew System::EventHandler(this, &AddQuestions::btnDone_Click);
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNext->ForeColor = System::Drawing::Color::White;
			this->btnNext->Location = System::Drawing::Point(336, 383);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(93, 35);
			this->btnNext->TabIndex = 7;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &AddQuestions::btnNext_Click);
			// 
			// btnPrev
			// 
			this->btnPrev->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnPrev->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrev->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrev->ForeColor = System::Drawing::Color::White;
			this->btnPrev->Location = System::Drawing::Point(66, 383);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->Size = System::Drawing::Size(79, 35);
			this->btnPrev->TabIndex = 6;
			this->btnPrev->Text = L"Prev";
			this->btnPrev->UseVisualStyleBackColor = false;
			this->btnPrev->Click += gcnew System::EventHandler(this, &AddQuestions::button2_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(626, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 21);
			this->label5->TabIndex = 9;
			this->label5->Text = L"0";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(134, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 19);
			this->label6->TabIndex = 10;
			this->label6->Text = L"1";
			this->label6->Click += gcnew System::EventHandler(this, &AddQuestions::label6_Click);
			// 
			// textAnswer
			// 
			this->textAnswer->BackColor = System::Drawing::Color::Gainsboro;
			this->textAnswer->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textAnswer->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textAnswer->Location = System::Drawing::Point(74, 56);
			this->textAnswer->Name = L"textAnswer";
			this->textAnswer->Size = System::Drawing::Size(450, 20);
			this->textAnswer->TabIndex = 12;
			// 
			// radioTrue
			// 
			this->radioTrue->AutoSize = true;
			this->radioTrue->Checked = true;
			this->radioTrue->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioTrue->Location = System::Drawing::Point(155, 39);
			this->radioTrue->Name = L"radioTrue";
			this->radioTrue->Size = System::Drawing::Size(73, 30);
			this->radioTrue->TabIndex = 13;
			this->radioTrue->TabStop = true;
			this->radioTrue->Text = L"True";
			this->radioTrue->UseVisualStyleBackColor = true;
			// 
			// radioFalse
			// 
			this->radioFalse->AutoSize = true;
			this->radioFalse->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioFalse->Location = System::Drawing::Point(272, 39);
			this->radioFalse->Name = L"radioFalse";
			this->radioFalse->Size = System::Drawing::Size(85, 30);
			this->radioFalse->TabIndex = 14;
			this->radioFalse->Text = L"False";
			this->radioFalse->UseVisualStyleBackColor = true;
			// 
			// tcAnswerType
			// 
			this->tcAnswerType->Controls->Add(this->tpMCQ);
			this->tcAnswerType->Controls->Add(this->tpTF);
			this->tcAnswerType->Controls->Add(this->tpOW);
			this->tcAnswerType->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tcAnswerType->HotTrack = true;
			this->tcAnswerType->Location = System::Drawing::Point(39, 206);
			this->tcAnswerType->Name = L"tcAnswerType";
			this->tcAnswerType->SelectedIndex = 0;
			this->tcAnswerType->ShowToolTips = true;
			this->tcAnswerType->Size = System::Drawing::Size(602, 162);
			this->tcAnswerType->TabIndex = 15;
			// 
			// tpMCQ
			// 
			this->tpMCQ->Controls->Add(this->label8);
			this->tpMCQ->Controls->Add(this->label7);
			this->tpMCQ->Controls->Add(this->textIncorrectOpt);
			this->tpMCQ->Controls->Add(this->textCorrectOpt);
			this->tpMCQ->Location = System::Drawing::Point(4, 28);
			this->tpMCQ->Name = L"tpMCQ";
			this->tpMCQ->Padding = System::Windows::Forms::Padding(3);
			this->tpMCQ->Size = System::Drawing::Size(594, 130);
			this->tpMCQ->TabIndex = 0;
			this->tpMCQ->Text = L"MCQ";
			this->tpMCQ->ToolTipText = L"Single/Multiple Correct Type Answer";
			this->tpMCQ->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(300, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(240, 19);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Incorrect Options(Line separated)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(0, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(230, 19);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Correct Options(Line separated)";
			// 
			// textIncorrectOpt
			// 
			this->textIncorrectOpt->BackColor = System::Drawing::Color::Gainsboro;
			this->textIncorrectOpt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textIncorrectOpt->DetectUrls = false;
			this->textIncorrectOpt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textIncorrectOpt->Location = System::Drawing::Point(299, 25);
			this->textIncorrectOpt->Name = L"textIncorrectOpt";
			this->textIncorrectOpt->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->textIncorrectOpt->Size = System::Drawing::Size(295, 102);
			this->textIncorrectOpt->TabIndex = 0;
			this->textIncorrectOpt->Text = L"";
			// 
			// textCorrectOpt
			// 
			this->textCorrectOpt->BackColor = System::Drawing::Color::Gainsboro;
			this->textCorrectOpt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textCorrectOpt->DetectUrls = false;
			this->textCorrectOpt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textCorrectOpt->Location = System::Drawing::Point(0, 25);
			this->textCorrectOpt->Name = L"textCorrectOpt";
			this->textCorrectOpt->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->textCorrectOpt->Size = System::Drawing::Size(294, 102);
			this->textCorrectOpt->TabIndex = 0;
			this->textCorrectOpt->Text = L"";
			// 
			// tpTF
			// 
			this->tpTF->BackColor = System::Drawing::Color::Gainsboro;
			this->tpTF->Controls->Add(this->radioFalse);
			this->tpTF->Controls->Add(this->radioTrue);
			this->tpTF->Location = System::Drawing::Point(4, 28);
			this->tpTF->Name = L"tpTF";
			this->tpTF->Padding = System::Windows::Forms::Padding(3);
			this->tpTF->Size = System::Drawing::Size(594, 130);
			this->tpTF->TabIndex = 1;
			this->tpTF->Text = L"True/False";
			this->tpTF->ToolTipText = L"True/False type Answer";
			// 
			// tpOW
			// 
			this->tpOW->BackColor = System::Drawing::Color::Gainsboro;
			this->tpOW->Controls->Add(this->panel7);
			this->tpOW->Controls->Add(this->label10);
			this->tpOW->Controls->Add(this->label9);
			this->tpOW->Controls->Add(this->textAnswer);
			this->tpOW->Location = System::Drawing::Point(4, 28);
			this->tpOW->Name = L"tpOW";
			this->tpOW->Size = System::Drawing::Size(594, 130);
			this->tpOW->TabIndex = 2;
			this->tpOW->Text = L"One Word";
			this->tpOW->ToolTipText = L"One Word/ Integer Type Answer";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel7->Location = System::Drawing::Point(74, 80);
			this->panel7->Margin = System::Windows::Forms::Padding(2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(450, 1);
			this->panel7->TabIndex = 51;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(331, 84);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(212, 19);
			this->label10->TabIndex = 14;
			this->label10->Text = L"( max 25 words, keep it short )";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(70, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(202, 21);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Enter Your Answer Here -";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &AddQuestions::label9_Click);
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->ForeColor = System::Drawing::Color::White;
			this->btnSave->Location = System::Drawing::Point(169, 383);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(133, 35);
			this->btnSave->TabIndex = 7;
			this->btnSave->Text = L"Force Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &AddQuestions::btnSave_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(395, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(231, 19);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Total Question in this section -";
			// 
			// AddQuestions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(674, 432);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AddQuestions";
			this->Text = L"AddQues";
			this->TopMost = true;
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
	label5->Text = Convert::ToString(SectionQues[sect]);
	tcAnswerType->SelectedIndex = data[sect][ques]->type;
	tcAnswerType->Refresh();
	textAnswer->Text = "";
	radioFalse->Checked = false;
	radioTrue->Checked = true;

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
	SaveData(CurrentSection, CurrentQuestion);
	for (int i = 0; i < SectionCount; i++)
	for (int j = 0; j < SectionQues[i]; j++)
	{
		if (String::IsNullOrEmpty(data[i][j]->q->Trim()))
		{
			MessageBox::Show("Question - " + Convert::ToString(j + 1) + " at Section - " + Convert::ToString(i + 1) + " has an empty question statement.");
			cbSection->SelectedIndex = i;
			CurrentSection = i;
			CurrentQuestion = j;
			return;
		}
		if (data[i][j]->type == -1)
		{
			MessageBox::Show("Question - " + Convert::ToString(j + 1) + " at Section - " + Convert::ToString(i + 1) + " has an incorrect answer type.");
			cbSection->SelectedIndex = i;
			CurrentSection = i;
			CurrentQuestion = j;
			return;
		}
		if (data[i][j]->type == 0 && (!((data[i][j]->lc->Count + data[i][j]->li->Count) >= 2 && (data[i][j]->lc->Count))))
		{
			MessageBox::Show("Question - " + Convert::ToString(j + 1) + " at Section - " + Convert::ToString(i + 1) + " has incorrect/insufficient MCQ type options.");
			cbSection->SelectedIndex = i;
			CurrentSection = i;
			CurrentQuestion = j;
			return;
		}
		if (data[i][j]->type == 2 && String::IsNullOrEmpty(data[i][j]->ow->Trim()))
		{
			MessageBox::Show("Question - " + Convert::ToString(j + 1) + " at Section - " + Convert::ToString(i + 1) + " has incorrect One-Word/Integer Answer.");
			cbSection->SelectedIndex = i;
			CurrentSection = i;
			CurrentQuestion = j;
			return;
		}
	}
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
				int m = data[i][j]->lc->Count + data[i][j]->li->Count;
				array<int> ^arr = gcnew array<int>(m);
				for (int k = 0; k < data[i][j]->lc->Count; k++)
					arr[k] = 1;
				int l = data[i][j]->lc->Count;
				for (int k = 0; k < data[i][j]->li->Count; k++)
					arr[l + k] = -1;
				for (int k = 0; k < data[i][j]->lc->Count; k++)
					jsq->Options->Add(data[i][j]->lc[k]);
				for (int k = 0; k < data[i][j]->li->Count; k++)
					jsq->Options->Add(data[i][j]->li[k]);
				int temp1;
				int a;
				for (int k = 0; k < m; k++)
				{
					srand(time(0));
					a = rand() % m;
					temp1 = arr[k];
					arr[k] = arr[a];
					arr[a] = temp1;
					String ^ temp2 = jsq->Options[i];
					jsq->Options[i] = jsq->Options[k];
					jsq->Options[k] = temp2;
				}
				for (int k = 0; k < m;k++)
				if (arr[k] == 1)
					jsq->Answer->Add(k);
			}
			else if (data[i][j]->type == 1)
			{
				jsq->Answer->Add(data[i][j]->tf);
				jsq->Options->Add("False");
				jsq->Options->Add("True");
			}
			else if (data[i][j]->type == 2)
			{
				jsq->Answer->Add(1);
				jsq->Options->Add(data[i][j]->ow);
			}
			jsd->Questions->Add(jsq);
		}
		js->Data->Add(jsd);
	}
	String ^output = JsonConvert::SerializeObject(js, Formatting::None);
	Accessqwert->AddParam("@QuestionSet", output);
	Accessqwert->ExecQuery("INSERT Into Exam (ExamName, Professor, GroupID, NumSections, WgtSections, ExamLength, MaxScore, PassPercentage, NumSessions, StartTimeSes1, StartTimeSes2, StartTimeSes3, StartTimeSes4, StartTimeSes5, QuestionSet ) Values (@ExamName,'" + gVar::Username + "',@GroupID, " + SectionCount.ToString() + ", @WgtSections, " + aa9 + "," + aa10 + "," + aa11 + "," + aa12 + ",@Ses1, @Ses2, @Ses3, @Ses4, @Ses5, @QuestionSet )");
	MessageBox::Show("Questions Saved. Test Created Successfully");
	this->Close();
}


private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}