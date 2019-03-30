#pragma once
#include"json.h"
#include"Database.h"
#include  "QuestionStructure.h"
#define review_color Color::Cyan
#define visited_color Color::Yellow
#define attempted_color Color::LawnGreen;
namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Newtonsoft::Json;
	using namespace Database;

	/// <summary>
	/// Summary for ExamPaper
	/// </summary>
	public ref class ExamPaper : public System::Windows::Forms::Form
	{
	public:
		Int32 ExamCode;
		Int32 sessionNumber;
		Int32 MinRem;	//In minutes
		JsonSerializerSettings ^s;
		JExam^ QSet;
		List<List<int>^>^ PaperQuestions;
		List<List<int>^>^ visited;
		List<List<int>^>^ review;
		List<List<int>^>^ attempted;
		List<List<Button ^>^>^ btnPaper;
		List<CheckBox^>^ checkList;

		RadioButton ^rd1;
		RadioButton ^rd2;
		TextBox ^ answerText;
		int obtainedMarks;
		Int32 fullMarks;
		String^ sectionMark;
		List<List<QuestionStruc ^>^>^ QuestionAns;
		String^ questionStr;
		String^ attemptStr;
		String^ correctStr;
		int TotalAttempted;
		int TotalQuestions;
	private: System::Windows::Forms::TabControl^  tc1;
	public:

	public:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  btnSaveResponse;
	private: System::Windows::Forms::FlowLayoutPanel^  markingFlowPanel;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::FlowLayoutPanel^  answerFlowPanel;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::PictureBox^  visitedPB;
	private: System::Windows::Forms::Label^  lblLegend;
	private: System::Windows::Forms::PictureBox^  reviewPB;
	private: System::Windows::Forms::PictureBox^  attemptedPB;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  loda;


	public:




	public:

	public:


			 Int32 SecRem;
		ExamPaper(Int32 ExCode,Int32 sesNumber)
		{
			InitializeComponent();
			ExamCode = ExCode;
			sessionNumber = sesNumber;
			TotalAttempted = 0;
			fullMarks = 0;
			
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ExamPaper()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  buttonFlowPanel;
	protected:

	protected:
	private: System::Windows::Forms::Panel^  commandButtonPanel;
	private: System::Windows::Forms::Panel^  questionPanel;

	private: System::Windows::Forms::Button^  btnPrev;



	private: System::Windows::Forms::Button^  btnEndTest;
	private: System::Windows::Forms::Timer^  examTimer;
	private: System::Windows::Forms::Label^  lblTimer;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnReview;


	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Label^  lblTestName;
	private: System::Windows::Forms::Label^  lblAttempted;
	private: System::Windows::Forms::Label^  lblTimeRemaining;
	private: System::Windows::Forms::PictureBox^  picLogo;

	private: System::Windows::Forms::Label^  lblQuesNum;

	private: System::Windows::Forms::Label^  label;
	private: System::Windows::Forms::TextBox^  txtQuesText;
	private: System::Windows::Forms::Label^  label2;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ExamPaper::typeid));
			this->buttonFlowPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->commandButtonPanel = (gcnew System::Windows::Forms::Panel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnSaveResponse = (gcnew System::Windows::Forms::Button());
			this->btnEndTest = (gcnew System::Windows::Forms::Button());
			this->btnReview = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnPrev = (gcnew System::Windows::Forms::Button());
			this->questionPanel = (gcnew System::Windows::Forms::Panel());
			this->answerFlowPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tc1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtQuesText = (gcnew System::Windows::Forms::TextBox());
			this->lblQuesNum = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->examTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblTimer = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblTestName = (gcnew System::Windows::Forms::Label());
			this->lblAttempted = (gcnew System::Windows::Forms::Label());
			this->lblTimeRemaining = (gcnew System::Windows::Forms::Label());
			this->picLogo = (gcnew System::Windows::Forms::PictureBox());
			this->markingFlowPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->visitedPB = (gcnew System::Windows::Forms::PictureBox());
			this->lblLegend = (gcnew System::Windows::Forms::Label());
			this->reviewPB = (gcnew System::Windows::Forms::PictureBox());
			this->attemptedPB = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->loda = (gcnew System::Windows::Forms::Label());
			this->commandButtonPanel->SuspendLayout();
			this->questionPanel->SuspendLayout();
			this->tc1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->visitedPB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reviewPB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->attemptedPB))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonFlowPanel
			// 
			this->buttonFlowPanel->AutoScroll = true;
			this->buttonFlowPanel->BackColor = System::Drawing::Color::White;
			this->buttonFlowPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->buttonFlowPanel->Location = System::Drawing::Point(3, 298);
			this->buttonFlowPanel->Name = L"buttonFlowPanel";
			this->buttonFlowPanel->Size = System::Drawing::Size(200, 431);
			this->buttonFlowPanel->TabIndex = 0;
			// 
			// commandButtonPanel
			// 
			this->commandButtonPanel->BackColor = System::Drawing::SystemColors::Control;
			this->commandButtonPanel->Controls->Add(this->btnClear);
			this->commandButtonPanel->Controls->Add(this->btnSaveResponse);
			this->commandButtonPanel->Controls->Add(this->btnEndTest);
			this->commandButtonPanel->Controls->Add(this->btnReview);
			this->commandButtonPanel->Controls->Add(this->btnNext);
			this->commandButtonPanel->Controls->Add(this->btnPrev);
			this->commandButtonPanel->Location = System::Drawing::Point(206, 673);
			this->commandButtonPanel->Name = L"commandButtonPanel";
			this->commandButtonPanel->Size = System::Drawing::Size(799, 58);
			this->commandButtonPanel->TabIndex = 1;
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(440, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(104, 53);
			this->btnClear->TabIndex = 10;
			this->btnClear->Text = L"Clear Answer";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &ExamPaper::btnClear_Click);
			// 
			// btnSaveResponse
			// 
			this->btnSaveResponse->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnSaveResponse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSaveResponse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveResponse->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveResponse->Location = System::Drawing::Point(333, 3);
			this->btnSaveResponse->Name = L"btnSaveResponse";
			this->btnSaveResponse->Size = System::Drawing::Size(104, 53);
			this->btnSaveResponse->TabIndex = 9;
			this->btnSaveResponse->Text = L"Save Response";
			this->btnSaveResponse->UseVisualStyleBackColor = false;
			this->btnSaveResponse->Click += gcnew System::EventHandler(this, &ExamPaper::btnSaveResponse_Click);
			// 
			// btnEndTest
			// 
			this->btnEndTest->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnEndTest->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEndTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEndTest->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEndTest->Location = System::Drawing::Point(626, 2);
			this->btnEndTest->Name = L"btnEndTest";
			this->btnEndTest->Size = System::Drawing::Size(170, 53);
			this->btnEndTest->TabIndex = 7;
			this->btnEndTest->Text = L"End Test";
			this->btnEndTest->UseVisualStyleBackColor = false;
			this->btnEndTest->Click += gcnew System::EventHandler(this, &ExamPaper::btnEndTest_Click);
			// 
			// btnReview
			// 
			this->btnReview->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnReview->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnReview->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReview->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReview->Location = System::Drawing::Point(223, 3);
			this->btnReview->Name = L"btnReview";
			this->btnReview->Size = System::Drawing::Size(104, 53);
			this->btnReview->TabIndex = 8;
			this->btnReview->Text = L"Mark For Review";
			this->btnReview->UseVisualStyleBackColor = false;
			this->btnReview->Click += gcnew System::EventHandler(this, &ExamPaper::btnReview_Click);
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNext->Location = System::Drawing::Point(113, 3);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(104, 53);
			this->btnNext->TabIndex = 7;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &ExamPaper::btnNext_Click);
			// 
			// btnPrev
			// 
			this->btnPrev->BackColor = System::Drawing::SystemColors::Highlight;
			this->btnPrev->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPrev->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrev->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrev->Location = System::Drawing::Point(3, 3);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->Size = System::Drawing::Size(104, 53);
			this->btnPrev->TabIndex = 4;
			this->btnPrev->Text = L"Previous";
			this->btnPrev->UseVisualStyleBackColor = false;
			this->btnPrev->Click += gcnew System::EventHandler(this, &ExamPaper::btnPrev_Click);
			// 
			// questionPanel
			// 
			this->questionPanel->BackColor = System::Drawing::Color::White;
			this->questionPanel->Controls->Add(this->loda);
			this->questionPanel->Controls->Add(this->answerFlowPanel);
			this->questionPanel->Controls->Add(this->tc1);
			this->questionPanel->Controls->Add(this->label2);
			this->questionPanel->Controls->Add(this->txtQuesText);
			this->questionPanel->Controls->Add(this->lblQuesNum);
			this->questionPanel->Controls->Add(this->label);
			this->questionPanel->Location = System::Drawing::Point(206, 223);
			this->questionPanel->Name = L"questionPanel";
			this->questionPanel->Size = System::Drawing::Size(799, 447);
			this->questionPanel->TabIndex = 2;
			// 
			// answerFlowPanel
			// 
			this->answerFlowPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->answerFlowPanel->Location = System::Drawing::Point(16, 295);
			this->answerFlowPanel->Name = L"answerFlowPanel";
			this->answerFlowPanel->Size = System::Drawing::Size(774, 139);
			this->answerFlowPanel->TabIndex = 14;
			// 
			// tc1
			// 
			this->tc1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tc1->Controls->Add(this->tabPage1);
			this->tc1->Controls->Add(this->tabPage2);
			this->tc1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tc1->HotTrack = true;
			this->tc1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tc1->Location = System::Drawing::Point(16, 3);
			this->tc1->Name = L"tc1";
			this->tc1->SelectedIndex = 0;
			this->tc1->Size = System::Drawing::Size(780, 33);
			this->tc1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->tc1->TabIndex = 10;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 32);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(772, 0);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 32);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(772, 0);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 274);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 18);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Answer";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtQuesText
			// 
			this->txtQuesText->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtQuesText->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtQuesText->Location = System::Drawing::Point(16, 75);
			this->txtQuesText->Multiline = true;
			this->txtQuesText->Name = L"txtQuesText";
			this->txtQuesText->ReadOnly = true;
			this->txtQuesText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtQuesText->Size = System::Drawing::Size(774, 186);
			this->txtQuesText->TabIndex = 11;
			// 
			// lblQuesNum
			// 
			this->lblQuesNum->AutoSize = true;
			this->lblQuesNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuesNum->Location = System::Drawing::Point(163, 48);
			this->lblQuesNum->Name = L"lblQuesNum";
			this->lblQuesNum->Size = System::Drawing::Size(17, 18);
			this->lblQuesNum->TabIndex = 10;
			this->lblQuesNum->Text = L"1";
			this->lblQuesNum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblQuesNum->Click += gcnew System::EventHandler(this, &ExamPaper::lblQuesNum_Click);
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(17, 48);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(140, 18);
			this->label->TabIndex = 10;
			this->label->Text = L"Question Number";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label->Click += gcnew System::EventHandler(this, &ExamPaper::label_Click);
			// 
			// examTimer
			// 
			this->examTimer->Interval = 1000;
			this->examTimer->Tick += gcnew System::EventHandler(this, &ExamPaper::examTimer_Tick);
			// 
			// lblTimer
			// 
			this->lblTimer->BackColor = System::Drawing::Color::White;
			this->lblTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTimer->Location = System::Drawing::Point(486, 117);
			this->lblTimer->Name = L"lblTimer";
			this->lblTimer->Size = System::Drawing::Size(213, 48);
			this->lblTimer->TabIndex = 4;
			this->lblTimer->Text = L"120:00";
			this->lblTimer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblTimer->Click += gcnew System::EventHandler(this, &ExamPaper::lblTimer_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(219, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 34);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Questions Attempted:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &ExamPaper::label1_Click);
			// 
			// lblTestName
			// 
			this->lblTestName->BackColor = System::Drawing::Color::White;
			this->lblTestName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTestName->Location = System::Drawing::Point(249, 1);
			this->lblTestName->Name = L"lblTestName";
			this->lblTestName->Size = System::Drawing::Size(501, 55);
			this->lblTestName->TabIndex = 6;
			this->lblTestName->Text = L"TEST NAME";
			this->lblTestName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblAttempted
			// 
			this->lblAttempted->BackColor = System::Drawing::Color::White;
			this->lblAttempted->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAttempted->Location = System::Drawing::Point(398, 186);
			this->lblAttempted->Name = L"lblAttempted";
			this->lblAttempted->Size = System::Drawing::Size(55, 34);
			this->lblAttempted->TabIndex = 7;
			this->lblAttempted->Text = L"0/100";
			this->lblAttempted->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblAttempted->Click += gcnew System::EventHandler(this, &ExamPaper::lblAttempted_Click);
			// 
			// lblTimeRemaining
			// 
			this->lblTimeRemaining->BackColor = System::Drawing::Color::White;
			this->lblTimeRemaining->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTimeRemaining->Location = System::Drawing::Point(388, 117);
			this->lblTimeRemaining->Name = L"lblTimeRemaining";
			this->lblTimeRemaining->Size = System::Drawing::Size(111, 51);
			this->lblTimeRemaining->TabIndex = 8;
			this->lblTimeRemaining->Text = L"Time Remaining";
			this->lblTimeRemaining->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// picLogo
			// 
			this->picLogo->BackColor = System::Drawing::Color::White;
			this->picLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picLogo.Image")));
			this->picLogo->Location = System::Drawing::Point(3, 12);
			this->picLogo->Name = L"picLogo";
			this->picLogo->Size = System::Drawing::Size(200, 200);
			this->picLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picLogo->TabIndex = 9;
			this->picLogo->TabStop = false;
			// 
			// markingFlowPanel
			// 
			this->markingFlowPanel->AutoScroll = true;
			this->markingFlowPanel->BackColor = System::Drawing::Color::White;
			this->markingFlowPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->markingFlowPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->markingFlowPanel->Location = System::Drawing::Point(790, 35);
			this->markingFlowPanel->Name = L"markingFlowPanel";
			this->markingFlowPanel->Size = System::Drawing::Size(215, 177);
			this->markingFlowPanel->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(802, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 31);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Marking Scheme";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// visitedPB
			// 
			this->visitedPB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->visitedPB->Location = System::Drawing::Point(3, 241);
			this->visitedPB->Margin = System::Windows::Forms::Padding(1);
			this->visitedPB->Name = L"visitedPB";
			this->visitedPB->Size = System::Drawing::Size(13, 15);
			this->visitedPB->TabIndex = 11;
			this->visitedPB->TabStop = false;
			// 
			// lblLegend
			// 
			this->lblLegend->BackColor = System::Drawing::Color::White;
			this->lblLegend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblLegend->Location = System::Drawing::Point(3, 215);
			this->lblLegend->Name = L"lblLegend";
			this->lblLegend->Size = System::Drawing::Size(197, 23);
			this->lblLegend->TabIndex = 12;
			this->lblLegend->Text = L"Legend";
			this->lblLegend->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// reviewPB
			// 
			this->reviewPB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->reviewPB->Location = System::Drawing::Point(3, 275);
			this->reviewPB->Margin = System::Windows::Forms::Padding(1);
			this->reviewPB->Name = L"reviewPB";
			this->reviewPB->Size = System::Drawing::Size(13, 15);
			this->reviewPB->TabIndex = 13;
			this->reviewPB->TabStop = false;
			// 
			// attemptedPB
			// 
			this->attemptedPB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->attemptedPB->Location = System::Drawing::Point(3, 258);
			this->attemptedPB->Margin = System::Windows::Forms::Padding(1);
			this->attemptedPB->Name = L"attemptedPB";
			this->attemptedPB->Size = System::Drawing::Size(13, 15);
			this->attemptedPB->TabIndex = 14;
			this->attemptedPB->TabStop = false;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 241);
			this->label4->Margin = System::Windows::Forms::Padding(1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(180, 15);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Visited question";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(22, 258);
			this->label5->Margin = System::Windows::Forms::Padding(1);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 15);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Attempted question";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(23, 275);
			this->label6->Margin = System::Windows::Forms::Padding(1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(180, 15);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Marked for Review";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// loda
			// 
			this->loda->AutoSize = true;
			this->loda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loda->Location = System::Drawing::Point(86, 276);
			this->loda->Name = L"loda";
			this->loda->Size = System::Drawing::Size(173, 15);
			this->loda->TabIndex = 15;
			this->loda->Text = L"( One or More may be correct )";
			// 
			// ExamPaper
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->ControlBox = false;
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->attemptedPB);
			this->Controls->Add(this->reviewPB);
			this->Controls->Add(this->lblLegend);
			this->Controls->Add(this->visitedPB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->markingFlowPanel);
			this->Controls->Add(this->picLogo);
			this->Controls->Add(this->lblTimeRemaining);
			this->Controls->Add(this->lblAttempted);
			this->Controls->Add(this->lblTestName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblTimer);
			this->Controls->Add(this->questionPanel);
			this->Controls->Add(this->commandButtonPanel);
			this->Controls->Add(this->buttonFlowPanel);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ExamPaper";
			this->Load += gcnew System::EventHandler(this, &ExamPaper::ExamPaper_Load);
			this->commandButtonPanel->ResumeLayout(false);
			this->questionPanel->ResumeLayout(false);
			this->questionPanel->PerformLayout();
			this->tc1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->visitedPB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reviewPB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->attemptedPB))->EndInit();
			this->ResumeLayout(false);

		}

	private: System::Void ExamPaper_Load(System::Object^  sender, System::EventArgs^  e) {
			//MessageBox::Show(ExamCode.ToString() + " " + sessionNumber.ToString());
			reviewPB->BackColor = review_color;
			visitedPB->BackColor = visited_color;
			attemptedPB->BackColor = attempted_color;
			TotalQuestions = 0;
			QuestionAns = gcnew List<List<QuestionStruc ^>^>();
			srand(time(0));
			OES ^Access = gcnew OES();
			Access->ExecQuery("select * from Exam where ExamCode = " + ExamCode.ToString());
			
			if (Access->RecordCount != 1){
				MessageBox::Show("Error", "Exam cannot be loaded");
				this->Close();
				return;
			}

			//JsonSerializerSettings ^s = gcnew JsonSerializerSettings();
			s = gcnew JsonSerializerSettings();
			//JExam^ QSet = JsonConvert::DeserializeObject<JExam^>(Convert::ToString(Access->DBDT->Rows[0]->default["QuestionSet"]), s);
			QSet = JsonConvert::DeserializeObject<JExam^>(Convert::ToString(Access->DBDT->Rows[0]->default["QuestionSet"]), s);
			Console::WriteLine(QSet->Data[0]->Questions[0]->Statement);
			MinRem = Convert::ToInt32(Access->DBDT->Rows[0]->default["ExamLength"]);
			SecRem = 0;
			lblTimer->Text = MinRem.ToString() + ":0" + SecRem.ToString();
			examTimer->Start();
			Int32 SectNo = QSet->Data->Count;
			Console::WriteLine(SectNo);
			lblTestName->Text = Convert::ToString(Access->DBDT->Rows[0]->default["ExamName"]);
			tc1->Controls->Clear();
			for (int i = 0; i < SectNo; i++){
				TabPage^ Section = gcnew TabPage();
				Section->Text = "Section" + (i + 1).ToString();
				tc1->Controls->Add(Section);
			}
			tc1->SelectedIndexChanged += gcnew EventHandler(this, &ExamPaper::TabSelect);
			tc1->SelectedIndex = 0;
			//tc1->BackColor = Color::Yellow;
			btnPaper = gcnew List<List<Button ^>^>();
			PaperQuestions = gcnew List<List<int>^>();
			visited = gcnew List<List<int>^>();
			review = gcnew List<List<int>^>();
			attempted = gcnew List<List<int>^>();
			for (int i = 0; i < SectNo; i++)
			{
				
				int req = QSet->Data[i]->NumberOfQuestionsGiven;
				int tot = QSet->Data[i]->TotalQuestions;
				TotalQuestions += req;
				List<int>^ lst = gcnew List<int>();
				//PaperQuestions->Add(gcnew List<int>());
				List<int> ^PaperQuestionsobj = gcnew List<int>();
				List<int> ^vsObj = gcnew List<int>();
				List<int> ^revObj = gcnew List<int>();
				List<int> ^atObj = gcnew List<int>();
				//List<int>^ tempArr;
				for (int j = 0; j < tot; j++)
				{
					lst->Add(j);
				}
				while (req>0)
				{
					int ran = rand() % tot;
					PaperQuestionsobj->Add(lst[ran]);
					vsObj->Add(0);
					revObj->Add(0);
					atObj->Add(0);
					lst->Remove(lst[ran]);
					tot--;
					req--;
				}
				PaperQuestions->Add(PaperQuestionsobj);
				visited->Add(vsObj);
				review->Add(revObj);
				attempted->Add(atObj);
			}
			/*for (int i = 0; i < SectNo; i++){
				std::cout << "Section " << i << ": ";
				for (int j = 0; j < QSet->Data[i]->NumberOfQuestionsGiven; j++){
					std::cout << PaperQuestions[i][j] << "-->"<<visited[i][j]<<" ";
					
				}
				std:: cout << "\n";
			}*/

			for (int i = 0; i < SectNo; i++)
			{
				List<QuestionStruc^>^ lst = gcnew List<QuestionStruc^>();
				int req = QSet->Data[i]->NumberOfQuestionsGiven;
				for (int j = 0; j < req; j++)
				{
					QuestionStruc ^ temp = gcnew QuestionStruc();
					temp->QuestionNum = PaperQuestions[i]->default[j];
					
					if (QSet->Data[i]->Questions[PaperQuestions[i]->default[j]]->AnswerType == 0)
					{
						String^ cur = "";
						for (int k = 0; k < QSet->Data[i]->Questions[PaperQuestions[i]->default[j]]->Answer->Count; ++k)
						{
							cur += ",";
							cur += Convert::ToString(QSet->Data[i]->Questions[PaperQuestions[i]->default[j]]->Answer[k]);
							//cur += ",";
						}
						temp->correctAns = cur;
					}

					else if (QSet->Data[i]->Questions[PaperQuestions[i]->default[j]]->AnswerType == 1)
					{
						String^ cur = "";
						cur += Convert::ToString(QSet->Data[i]->Questions[PaperQuestions[i]->default[j]]->Answer[0]);
						temp->correctAns = cur;
					}

					else if (QSet->Data[i]->Questions[PaperQuestions[i]->default[j]]->AnswerType == 2)
					{
						String^ cur = "";
						cur += Convert::ToString(QSet->Data[i]->Questions[PaperQuestions[i]->default[j]]->Options[0]);
						temp->correctAns = cur;
					}
					lst->Add(temp);
				}
				QuestionAns->Add(lst);
			}
			for (int i = 0; i < SectNo; i++)
			{
				List<Button^> ^btnobj = gcnew List<Button ^>();
				for (int j = 0; j < QSet->Data[i]->NumberOfQuestionsGiven; j++)
				{
					Button^ btn = gcnew Button();
					btn->Width = 60;
					btn->Height = 30;
					btn->Text = Convert::ToString(j + 1);
					btn->FlatStyle = FlatStyle::Flat;
					btn->FlatAppearance->BorderSize = 2;
					//btn->Cursor = Cursor->Handl
					
					btn->Font = (gcnew System::Drawing::Font(L"Arial", 13));
					//btn->Font = gcnew Font("Arial", 10, FontStyle::Bold);
					//buttonFlowPanel->Controls->Add(btn);
					btn->Tag = PaperQuestions[i]->default[j];
					btn->Click += gcnew System::EventHandler(this, &ExamPaper::btnClick);
					btnobj->Add(btn);
				}
				btnPaper->Add(btnobj);
			}
			for (Int32 i = 0; i < QSet->Data[0]->NumberOfQuestionsGiven; i++){
				buttonFlowPanel->Controls->Add(btnPaper[0]->default[i]);
			}
			int z = PaperQuestions[0]->default[0];
			txtQuesText->Text = Convert::ToString(QSet->Data[0]->Questions[z]->Statement);
			 
			for (int i = 0; i < QSet->Data->Count; ++i)
			{
				Label ^lbl = gcnew Label();
				String ^str = "Section ";
				str += (i + 1).ToString();
				str += ": ";
				str += Convert::ToString(QSet->Data[i]->Weight);
				str += " Marks per question";
				lbl->AutoSize = false;
				lbl->Width = markingFlowPanel->Width;
				lbl->Height = 40;
				lbl->Text = str;
				lbl->Font = gcnew System::Drawing::Font(lbl->Font->FontFamily, 11,FontStyle::Bold);
				markingFlowPanel->Controls->Add(lbl);
			}




			//*****************loading initial questions on formload******************************
			int selInd = 0;
			int selQues = static_cast<int>(PaperQuestions[0]->default[0]);
			Utility(selInd, selQues);

			//******************end code**********************
	}

	private: System::Void TabSelect(System::Object^ sender, EventArgs^ e) {
		lblQuesNum->Text = Convert::ToString(1);
		int selInd = static_cast<int>(static_cast<TabControl^>(sender)->SelectedIndex);
		Int32 SectNumQ = QSet->Data[selInd]->NumberOfQuestionsGiven;
		buttonFlowPanel->Controls->Clear();
		for (Int32 i = 0; i < SectNumQ; i++){
			/*Button^ btn = gcnew Button();
			btn->Width = 50;
			btn->Height = 30;
			btn->Text = Convert::ToString(i + 1);
			buttonFlowPanel->Controls->Add(btn);
			btn->Tag = PaperQuestions[SelInd][i];
			btn->Click += gcnew System::EventHandler(this, &ExamPaper::btnClick);*/
			buttonFlowPanel->Controls->Add(btnPaper[selInd]->default[i]);
			//loading question on tabselect
			
		}
		int selQues = static_cast<int>(PaperQuestions[selInd]->default[0]);
		Utility(selInd, selQues);

	}
#pragma endregion
	private: System::Void Color_Utility(int sectionNo, int curQuesNo)
	{
				 /*if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo][curQuesNo - 1]]->AnswerType == 0)
				 {
					 int flag = 0;
					 for (int i = 0; i < checkList->Count; i++)
					 {
						 if (checkList[i]->Checked)
						 {
							 flag = 1;
							 break;
						 }
					 }
					 if (flag == 1)
					 {
						 Button ^ btn = gcnew Button();
						 btn = btnPaper[sectionNo][curQuesNo - 1];
						 btn->BackColor = attempted_color;
						 btnPaper[sectionNo][curQuesNo - 1] = btn;
					 }
					 else
					 {
						 Button ^ btn = gcnew Button();
						 btn = btnPaper[sectionNo][curQuesNo - 1];
						 btn->BackColor = visited_color;
						 btnPaper[sectionNo][curQuesNo - 1] = btn;
					 }
				 }*/
				 if (attempted[sectionNo]->default[curQuesNo - 1] == 1)
				 {
					 Button ^ btn = gcnew Button();
					 btn = btnPaper[sectionNo]->default[curQuesNo - 1];
					 btn->BackColor = attempted_color;
					 btnPaper[sectionNo]->default[curQuesNo - 1] = btn;
				 }
				 else
				 {
					 Button ^ btn = gcnew Button();
					 btn = btnPaper[sectionNo]->default[curQuesNo - 1];
					 btn->BackColor = visited_color;
					 btnPaper[sectionNo]->default[curQuesNo - 1] = btn;
				 }

				 /*if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo][curQuesNo - 1]]->AnswerType == 1)
				 {
					 if (rd1->Checked || rd2->Checked)
					 {
						 Button ^ btn = gcnew Button();
						 btn = btnPaper[sectionNo][curQuesNo - 1];
						 btn->BackColor = attempted_color;
						 btnPaper[sectionNo][curQuesNo - 1] = btn;
					 }
					 else
					 {
						 Button ^ btn = gcnew Button();
						 btn = btnPaper[sectionNo][curQuesNo - 1];
						 btn->BackColor = visited_color;
						 btnPaper[sectionNo][curQuesNo - 1] = btn;
					 }
				 }

				 if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo][curQuesNo - 1]]->AnswerType == 2)
				 {
					 if (answerText->Text->Length != 0)
					 {
						 Button ^ btn = gcnew Button();
						 btn = btnPaper[sectionNo][curQuesNo - 1];
						 btn->BackColor = attempted_color;
						 btnPaper[sectionNo][curQuesNo - 1] = btn;
					 }
					 else
					 {
						 Button ^ btn = gcnew Button();
						 btn = btnPaper[sectionNo][curQuesNo - 1];
						 btn->BackColor = visited_color;
						 btnPaper[sectionNo][curQuesNo - 1] = btn;
					 }
				 }*/
	}
	private: System::Void Utility(int selInd, int selQues){
				 answerFlowPanel->Controls->Clear();
				 //loading question to textbox
				
				 txtQuesText->Text = Convert::ToString(QSet->Data[selInd]->Questions[selQues]->Statement);
				 int numQues = static_cast<int>(Convert::ToInt32(lblQuesNum->Text));
				 //Code for options ********************************************
				 //std::cout << QSet->Data[selInd]->Questions[selQues]->AnswerType;
				 //std::cout << std::endl;
				 if (review[selInd]->default[numQues - 1] == 0)
				 {
					 btnPaper[selInd]->default[numQues - 1]->BackColor = visited_color;
					 Color_Utility(selInd, numQues);
				 }
				 if (review[selInd]->default[numQues - 1] == 0) btnReview->Text = "Mark for Review";
				 else btnReview->Text = "Unmark";
				 visited[selInd]->default[numQues - 1] = 1;
				 //Code for MCQ's
				 loda->Visible = false;
				 if (QSet->Data[selInd]->Questions[selQues]->AnswerType == 0)
				 {
					 loda->Visible = true;
					 int tot = QSet->Data[selInd]->Questions[selQues]->Options->Count;
					 int numOptions = QSet->Data[selInd]->Questions[selQues]->Options->Count;
					  checkList = gcnew  List<CheckBox^>();
					 for (int i = 0; i < numOptions; i++)
					 {
						 CheckBox^ chk = gcnew CheckBox();
						 chk->MaximumSize = System::Drawing::Size(answerFlowPanel->Width, 100);
						 chk->Text = Convert::ToString(QSet->Data[selInd]->Questions[selQues]->Options[i]);
						 chk->AutoSize = true;
						 chk->Font = (gcnew System::Drawing::Font(L"Arial", 11,FontStyle::Regular));
						 checkList->Add(chk);
					 }
					 String ^attemptedAns = Convert::ToString(QuestionAns[selInd]->default[numQues - 1]->attemptAns);
					 Console::WriteLine(attemptedAns);
					 Dictionary<int, int>^ dict = gcnew Dictionary<int, int>();
					 for (int i = 0; i < tot; ++i) dict->Add(i, 1);
					 if (attemptedAns->Length != 0 )
					 {
						 String^ curStr="";
						 for (int i = 1; i < attemptedAns->Length; ++i)
						 {
							 if (attemptedAns[i] == ',')
							 {
								 int num = static_cast<int>(Convert::ToInt32(curStr));
								 dict[num]=2;
								 Console::WriteLine(curStr);
								 curStr = "";
								 
							 }
							 else if (attemptedAns[i] != ',')
							 {
								 curStr += attemptedAns[i];
							 }
							 
								  
						 }
						 int num = static_cast<int>(Convert::ToInt32(curStr));
						 dict[num]=2;
						 Console::WriteLine(curStr);
						 for (int i = 0; i < tot; ++i)
						 {
							 if (dict[i] == 2) checkList[i]->Checked = true;
							 else checkList[i]->Checked = false;
						 }
					 }
					 for (int i = 0; i < numOptions; i++) answerFlowPanel->Controls->Add(checkList[i]);
				
				 }


				 //COde for MCQ ends here *************************************

				 //code for true and false type of questions
				 if (QSet->Data[selInd]->Questions[selQues]->AnswerType == 1)
				 {
					 rd1 = gcnew RadioButton();
					 rd2 = gcnew RadioButton();
					 rd1->Font = gcnew System::Drawing::Font(L"Arial", 11, FontStyle::Regular);
					 rd2->Font = gcnew System::Drawing::Font(L"Arial", 11, FontStyle::Regular);
					
					 rd1->Text = "TRUE";
					 rd2->Text = "FALSE";
					 String ^attemptedAns = Convert::ToString(QuestionAns[selInd]->default[numQues - 1]->attemptAns);
					 if (attemptedAns->Length != 0)
					 {
						 int num = static_cast<int>(Convert::ToInt32(attemptedAns));
						 if (num == 0)
						 {
							 rd1->Checked = false;
							 rd2->Checked = true;
						 }
						 else if (num==1)
						 {
							 rd2->Checked = false;
							 rd1->Checked = true;
						 }
						 //Console::WriteLine(num);
					 }
					 answerFlowPanel->Controls->Add(rd1);
					 answerFlowPanel->Controls->Add(rd2);
				 }

				 //Code for fill in the blanks 
				 if (QSet->Data[selInd]->Questions[selQues]->AnswerType == 2)
				 {
					 answerText = gcnew TextBox();
					 answerText->Font = gcnew System::Drawing::Font(L"Arial", 11, FontStyle::Regular);
					 String ^attemptedAns = Convert::ToString(QuestionAns[selInd]->default[numQues - 1]->attemptAns);
					 if (attemptedAns->Length != 0)
					 {
						 answerText->Text = attemptedAns;
					 }
					 answerText->Multiline = true;
					 answerText->Width = answerFlowPanel->Width;
					 answerText->Width /= 2;
					 answerText->Height = 50;
					 answerFlowPanel->Controls->Add(answerText);
				 }
				 if (review[selInd]->default[numQues - 1] == 0)
				 {
					 Color_Utility(selInd, numQues);
				 }
				 //code for fill in the blanks ends here
	}

	private: System::Void lblTimer_Click(System::Object^  sender, System::EventArgs^  e) {
						
	}
	private: System::Void btnClick(System::Object^  sender, System::EventArgs^  e)
	{
				 answerFlowPanel->Controls->Clear();
				 txtQuesText->Clear();
				 Button ^ btn = gcnew Button();
				 btn = static_cast<Button^>(sender);
				 int selInd = tc1->SelectedIndex;
				 int selQues = static_cast<int>(btn->Tag);
				 lblQuesNum->Text = btn->Text;
				 //std::cout << selInd << " " << selQues << std::endl;
				 Utility(selInd, selQues);

	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblAttempted_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void examTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 SecRem--;
			 if (SecRem < 0){
				 SecRem = 59;
				 MinRem--;
			 }
			 if (MinRem < 0){
				 examTimer->Stop();
				 MessageBox::Show("Time Up!");
				 //***************time is up*******************

				          //calling the endtest utility function to perform calculations

				 endTest_Utility();
				 //*********** marks and stuff need to be calculated
				 //Code for submit button
				 //this->Close();
			 }
			 lblTimer->Text = MinRem.ToString() + ":";
			 if (SecRem <= 9)
				 lblTimer->Text += "0" + SecRem.ToString();
			 else
				 lblTimer->Text += SecRem.ToString();
}
private: System::Void label_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lblQuesNum_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
			 int curNum;
			 int::TryParse(lblQuesNum->Text, curNum);
			 int sectNo = static_cast<int>(tc1->SelectedIndex);
			 int nextQuesNo;
			 if (curNum != QSet->Data[sectNo]->NumberOfQuestionsGiven)
			 {
				 lblQuesNum->Text = Convert::ToString(curNum+1);
				 nextQuesNo = static_cast<int>(btnPaper[sectNo]->default[curNum]->Tag);
				 //loading question into textbox
				 Utility(sectNo, nextQuesNo);
				 //txtQuesText->Text = Convert::ToString(QSet->Data[sectNo]->Questions[nextQuesNo]->Statement);
				 
			 }
}
private: System::Void btnPrev_Click(System::Object^  sender, System::EventArgs^  e) {
			 int curNum;
			 int::TryParse(lblQuesNum->Text, curNum);
			 int sectNo = static_cast<int>(tc1->SelectedIndex);
			 int nextQuesNo;
			 if (curNum != 1)
			 {
				 lblQuesNum->Text = Convert::ToString(curNum - 1);
				 nextQuesNo = static_cast<int>(btnPaper[sectNo]->default[curNum - 2]->Tag);
				 //loading question into textbox
				 Utility(sectNo, nextQuesNo);
			 }
}
private: System::Void btnEndTest_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Are you sure you want to end the exam?", "Ending The Exam", MessageBoxButtons::YesNo) == ::DialogResult::Yes)
			 {
				 endTest_Utility();
				 examTimer->Stop();
			 }
			 //this->Close();
            
}

private: System::Void btnSaveResponse_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 int curQuesNo;
			 int::TryParse(lblQuesNum->Text, curQuesNo) ;
			 //std::cout << "curQuesNo is " << curQuesNo << std::endl;
			 int sectionNo = tc1->SelectedIndex;
			 //code for options
			 
			 if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo]->default[curQuesNo - 1]]->AnswerType == 0)
			 {
				 //std::cout << "curQuesNo is " << curQuesNo << std::endl;
				 String^ temp = "";
				 int flag = 0;
				 for (int i = 0; i < checkList->Count; ++i)
				 {
					 if (checkList[i]->Checked)
					 {
						 flag = 1;
						 temp += ",";
						 temp += i.ToString();
						 //temp += ",";
					 }

					 //code for checking attempts
					 if (flag == 1)
					 {
						 if (attempted[sectionNo]->default[curQuesNo - 1] == 0)
						 {
							 TotalAttempted++;
							 attempted[sectionNo]->default[curQuesNo - 1] = 1;
						 }
				
					 }

				 }
				 
				 QuestionAns[sectionNo]->default[curQuesNo - 1]->attemptAns = temp;
				 
 			 }

			 //code for options has ended

			 //Code for True/False

			 if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo]->default[curQuesNo - 1]]->AnswerType == 1)
			 {
				 //std::cout << "curQuesNo is " << curQuesNo << std::endl;
				 String^ temp = "";
				 int flag = 0;
				 if (rd1->Checked || rd2->Checked) flag = 1;
				
					 if (rd1->Checked) temp = "1";
					 else temp = "0";
					 QuestionAns[sectionNo]->default[curQuesNo - 1]->attemptAns = temp;

					 if (flag == 1)
					 {
						 if (attempted[sectionNo]->default[curQuesNo - 1] == 0)
						 {
							 TotalAttempted++;
							 attempted[sectionNo]->default[curQuesNo - 1] = 1;
						 }

					 }
					 
			 }

			 //Code ended for true false

			 //code for FITB
				
			 if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo]->default[curQuesNo - 1]]->AnswerType == 2)
			 {
				 answerText->Text = answerText->Text->Trim();
				 QuestionAns[sectionNo]->default[curQuesNo - 1]->attemptAns = answerText->Text;

				 if (answerText->Text->Length != 0)
				 {
					 if (attempted[sectionNo]->default[curQuesNo - 1] == 0)
					 {
						 TotalAttempted++;
						 attempted[sectionNo]->default[curQuesNo - 1] = 1;
					 }

				 }
			 }
				
			 //Code ends for FITB
			 if (review[sectionNo]->default[curQuesNo - 1] == 0)
			 {
				 Color_Utility(sectionNo, curQuesNo);
			 }
			 lblAttempted->Text = TotalAttempted.ToString();
			 lblAttempted->Text += "/";
			 lblAttempted->Text += Convert::ToString(TotalQuestions);
}

private: System::Void endTest_Utility()
{
			 questionStr = "";
			 attemptStr = "";
			 correctStr = "";
			 for (int i = 0; i < QSet->Data->Count; ++i)
			 {
				 String^ sectionStr = "";
				 String^ sectionAttempt = "";
				 String^ sectionCorrect = "";
				 for (int j = 0; j < QSet->Data[i]->NumberOfQuestionsGiven; ++j)
				 {
					 sectionStr += (Environment::NewLine);
					 sectionStr += i.ToString();
					 sectionStr += ".";
					 sectionStr += PaperQuestions[i]->default[j].ToString();

					 sectionAttempt += (Environment::NewLine);
					 sectionAttempt += QuestionAns[i]->default[j]->attemptAns;

					 sectionCorrect += (Environment::NewLine);
					 sectionCorrect += QuestionAns[i]->default[j]->correctAns;


				 }
				 questionStr += sectionStr;
				 attemptStr += sectionAttempt;
				 correctStr += sectionCorrect;

			 }
			 Console::WriteLine(questionStr);
			 Console::WriteLine("answer string\n");

			 Console::WriteLine(attemptStr);

			 Console::WriteLine("correctAns String\n");
			 Console::WriteLine(correctStr);


			 OES ^Access1 = gcnew OES();
			 Access1->ExecQuery("Select * from Exam where ExamCode = " + ExamCode.ToString());
			 
			 Int32 totSess = Convert::ToInt32(Access1->DBDT->Rows[0]->default["NumSessions"]);
			 String^ MaxSess = "";
			 array<String ^> ^MaxSessStr = gcnew array<String^>(totSess);
			 List<int>^ MaxSessList = gcnew List<int>();
			 
			 String^ MaxSect = "";
			 array<String ^> ^MaxSectStr = gcnew array<String^>(QSet->Data->Count);
			 List<int>^ MaxSectList = gcnew List<int>();

			 String^ MinSect = "";
			 array<String ^> ^MinSectStr = gcnew array<String^>(QSet->Data->Count);
			 List<int>^ MinSectList = gcnew List<int>();
			 array<String^>^delimiters = { "," };

			 String^ AvgSect = "";
			 array<String ^> ^AvgSectStr = gcnew array<String^>(QSet->Data->Count);
			 List<double>^ AvgSectList = gcnew List<double>();

			 int StudAppeared=0;

			 if (Access1->RecordCount)
			 {
				 fullMarks = Convert::ToInt32(Access1->DBDT->Rows[0]->default["MaxScore"]);
				 StudAppeared = (static_cast<int>(Convert::ToInt32(Access1->DBDT->Rows[0]->default["StudAppeared"])));
				 MaxSess = Convert::ToString(Access1->DBDT->Rows[0]->default["MaxSess"]);
				 MaxSect = Convert::ToString(Access1->DBDT->Rows[0]->default["MaxSect"]);
				 MinSect = Convert::ToString(Access1->DBDT->Rows[0]->default["MinSect"]);
				 AvgSect = Convert::ToString(Access1->DBDT->Rows[0]->default["AvgSect"]);
				 if (MaxSect->Length != 0 && MinSect->Length != 0){
					 MaxSessStr = MaxSess->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);
					 MaxSectStr = MaxSect->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);
					 MinSectStr = MinSect->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);
					 AvgSectStr = AvgSect->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);
					 for (int i = 0; i < MaxSessStr->Length; i++){
						 MaxSessList->Add(static_cast<int>(Convert::ToInt32(MaxSessStr[i])));
					 }
					 
					 for (int i = 0; i < MaxSectStr->Length; ++i)
					 {
						 try{
							 MaxSectList->Add(static_cast<int>(Convert::ToInt32(MaxSectStr[i])));
							 MinSectList->Add(static_cast<int>(Convert::ToInt32(MinSectStr[i])));
							 AvgSectList->Add(static_cast<double>(Convert::ToDouble(AvgSectStr[i])));
						 }
						 catch (Exception^ ex){
							 MessageBox::Show("Error in parsing max/min/avg sect string", "Error");
						 }
						 //Console::WriteLine(MaxSect);
						 //std::cout << MaxSectList[i] << "\n";
					 }
				 }
				 else{
					 Console::WriteLine("Success");
					 for (int i = 0; i < totSess; i++){
						 MaxSessStr[i] = "0";
						 MaxSessList->Add(0);
					 }
				 }
				
			 }

			 //calculating total marks of the student
			 array<int> ^CorrectSect = gcnew array<int>(QSet->Data->Count);
			 array<int> ^IncorrectSect = gcnew array<int>(QSet->Data->Count);
			 array<int> ^UnattemptSect = gcnew array<int>(QSet->Data->Count);
			 for (int i = 0; i < QSet->Data->Count; i++){
				 CorrectSect[i] = 0;
				 IncorrectSect[i] = 0;
				 UnattemptSect[i] = 0;
			 }

			 Console::WriteLine("*****************Calculations********************\n");
			 obtainedMarks = 0;
			 sectionMark = "";
			 for (int i = 0; i < QSet->Data->Count; ++i)
			 {
				 Console::WriteLine("Section:" + i.ToString() + "---------------------\n");
				 int sectionScore = 0;
				 int questionFullMark = QSet->Data[i]->Weight;
				 for (int j = 0; j < QSet->Data[i]->NumberOfQuestionsGiven; ++j)
				 {
					 String^ t1 = Convert::ToString(QuestionAns[i]->default[j]->attemptAns);
					 String^ t2 = Convert::ToString(QuestionAns[i]->default[j]->correctAns);
					 Console::WriteLine("Question "+j.ToString()+ " Attempted:" + t1->ToUpper() + " Correct:" + t2->ToUpper() + " -->Score:");
					 if (t1->Length == 0){
						 UnattemptSect[i]++;
						 Console::WriteLine("0\n");
						 continue;
					 }
					 else if (t1->ToUpper() == t2->ToUpper())
					 {
						 sectionScore += questionFullMark;
						 Console::WriteLine(questionFullMark.ToString() + "\n");
						 CorrectSect[i]++;
					 }
					 else
					 {
						 IncorrectSect[i]++;
						 Console::WriteLine("0\n");
					 }
				 }
				 sectionMark += (Environment::NewLine);
				 sectionMark += sectionScore.ToString();
				 obtainedMarks += sectionScore;
				 if (MaxSect->Length != 0 && MinSect->Length != 0){
					 if (sectionScore > MaxSectList[i])
						 MaxSectStr[i] = sectionScore.ToString();
					 if (sectionScore < MinSectList[i])
						 MinSectStr[i] = sectionScore.ToString();
					 AvgSectStr[i] = ((StudAppeared*AvgSectList[i] + sectionScore) / (StudAppeared + 1)).ToString();
				 }
				 else{
					 MaxSectStr[i] = sectionScore.ToString();
					 MinSectStr[i] = sectionScore.ToString();
					 AvgSectStr[i] = sectionScore.ToString();
				 }

				 
			 }
			 //Max per session Recalculation
			 if (obtainedMarks > MaxSessList[sessionNumber - 1]){
				 MaxSessList[sessionNumber - 1] = obtainedMarks;
				 MaxSessStr[sessionNumber - 1] = obtainedMarks.ToString();
			 }
			 double Percentage = (static_cast<double>(obtainedMarks) / static_cast<double>(fullMarks)) * 100;
			 int Passed = 0;
			 if (Percentage > static_cast<double>(Convert::ToInt32(Access1->DBDT->Rows[0]->default["PassPercentage"])))
				 Passed = 1;

			 StudAppeared++;
			 MaxSess = String::Join(",", MaxSessStr);
			 MaxSect = String::Join(",", MaxSectStr);
			 MinSect = String::Join(",", MinSectStr);
			 AvgSect = String::Join(",", AvgSectStr);
			 MaxSess = "," + MaxSess;
			 MaxSect = "," + MaxSect;
			 MinSect = "," + MinSect;
			 AvgSect = "," + AvgSect;
			 Access1->ExecQuery("Update Exam set MaxSect = '" + MaxSect + "', MinSect = '" + MinSect + "', AvgSect = '" + AvgSect + "', StudAppeared = " + StudAppeared.ToString() + ", MaxSess = '" + MaxSess + "' Where ExamCode = " + ExamCode.ToString());

			


			 Console::WriteLine(MaxSect);
			 Console::WriteLine("printing the score\n");
			 Console::WriteLine(obtainedMarks.ToString());
			 Console::WriteLine("*************calculation done**********");
			 Console::WriteLine(sectionMark);


//              performance calculations .............
			 
			 /*for (int i = 0; i < QSet->Data->Count; i++){
				 Console::WriteLine( CorrectSect[i].ToString() + "\t" + IncorrectSect[i].ToString() + "\t" + UnattemptSect[i].ToString() + "\n");
			 }*/
			 
			 String ^CorrectSectStr = "";
			 String ^IncorrectSectStr = "";
			 String ^UnattemptSectStr = "";
			 for (int i = 0; i < QSet->Data->Count; i++){
				 CorrectSectStr = CorrectSectStr + "," + CorrectSect[i].ToString();
				 IncorrectSectStr = IncorrectSectStr + "," + IncorrectSect[i].ToString();
				 UnattemptSectStr = UnattemptSectStr + "," + UnattemptSect[i].ToString();
			 }
//   .............performance calculation ends



			 OES^ Access = gcnew OES();

			 Access->AddParam("@ExamCode", ExamCode);
			 Access->AddParam("@Username", gVar::Username);
			 Access->AddParam("@FullMarks", fullMarks);
			 Access->AddParam("@QuesGiven", questionStr);
			 Access->AddParam("@AttemptedAns", attemptStr);
			 Access->AddParam("@CorrectAns", correctStr);
			 Access->AddParam("@ObtainedMarks", obtainedMarks);
			 Access->AddParam("@SectionMarks", sectionMark);
			 Access->AddParam("@CorrectSect", CorrectSectStr);
			 Access->AddParam("@IncorrectSect", IncorrectSectStr);
			 Access->AddParam("@UnattemptSect", UnattemptSectStr);
			 Access->AddParam("@sessionNumber", sessionNumber);
			 Access->AddParam("@Passed", Passed);
			 
			 Access->ExecQuery("INSERT Into Performance (ExamCode, Username, FullMarks, QuesGiven, AttemptedAns, CorrectAns, ObtainedMarks, SectionMarks, CorrectSect, IncorrectSect, UnattemptSect,SessionNumber, Passed) Values (@ExamCode,@UserName ,@FullMarks ,@QuesGiven,@AttemptedAns,@CorrectAns,@ObtainedMarks,@SectionMarks, @CorrectSect, @IncorrectSect, @UnattemptSect, @sessionNumber, @Passed)");
			 //	 MessageBox::Show("Test " + txtName->Text + " successfully created!");

			 Access1->ExecQuery("Select * from Performance where SessionNumber =" + sessionNumber);
			 if (Access1->RecordCount){
				 for (int i = 0; i < Access1->RecordCount; i++){
					 OES^ Access2 = gcnew OES();
					 double norm = static_cast<double>(Convert::ToInt32(Access1->DBDT->Rows[i]->default["ObtainedMarks"]));
					 norm = norm / static_cast<double>(MaxSessList[sessionNumber - 1]);
					 norm = norm*static_cast<double>(fullMarks);
					 String^ uname = Convert::ToString(Access1->DBDT->Rows[i]->default["Username"]);
					 Access2->ExecQuery("Update Performance set NormalizedScore = " + norm.ToString() + " where Username = '" + uname + "'");
				 }
			 }
			  this->Close(); //currently commented for debugging console
}
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
			 

			 int curQuesNo;
			 int::TryParse(lblQuesNum->Text, curQuesNo);
			 //std::cout << "curQuesNo is " << curQuesNo << std::endl;
			 int sectionNo = tc1->SelectedIndex;
			 //code for options
			 
			 if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo]->default[curQuesNo - 1]]->AnswerType == 0)
			 {
				 for (int i = 0; i < checkList->Count; i++) checkList[i]->Checked = false;
				 QuestionAns[sectionNo]->default[curQuesNo - 1]->attemptAns = "";
			 }

			 if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo]->default[curQuesNo - 1]]->AnswerType == 1)
			 {
				 rd1->Checked = false;
				 rd2->Checked = false;
				 QuestionAns[sectionNo]->default[curQuesNo - 1]->attemptAns = "";
			 }

			 if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo]->default[curQuesNo - 1]]->AnswerType == 2)
			 {
				 answerText->Clear();
				 QuestionAns[sectionNo]->default[curQuesNo - 1]->attemptAns = "";
			 }

			 //Code ends for FITB


			 //updating attempted list

			 if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo]->default[curQuesNo - 1]]->AnswerType == 0)
			 {				
				 
				 if (attempted[sectionNo]->default[curQuesNo - 1] == 1)
					{
						TotalAttempted--;
						attempted[sectionNo]->default[curQuesNo - 1] = 0;
					}

			 }

			 //code for options has ended

			 //Code for True/False

			 if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo]->default[curQuesNo - 1]]->AnswerType == 1)
			 {
				 
				 if (attempted[sectionNo]->default[curQuesNo - 1] == 1)
				 {
					 TotalAttempted--;
					 attempted[sectionNo]->default[curQuesNo - 1] = 0;
				 }

			 }
			 //code for FITB

			 if (QSet->Data[sectionNo]->Questions[PaperQuestions[sectionNo]->default[curQuesNo - 1]]->AnswerType == 2)
			 {
				 
				 
				 if (attempted[sectionNo]->default[curQuesNo - 1] == 1)
					 {
						 TotalAttempted--;
						 attempted[sectionNo]->default[curQuesNo - 1] = 0;
					 }
			 }

			 //Code ends for FITB
			 //update for attempted list over
			 
			 lblAttempted->Text = TotalAttempted.ToString();
			 lblAttempted->Text += "/";
			 lblAttempted->Text += Convert::ToString(TotalQuestions);

			 if (review[sectionNo]->default[curQuesNo - 1] == 0)
			 {
				 Color_Utility(sectionNo, curQuesNo);
			 }

}
private: System::Void btnReview_Click(System::Object^  sender, System::EventArgs^  e) {
			 int curQuesNo;
			 int::TryParse(lblQuesNum->Text, curQuesNo);
			 int sectionNo = tc1->SelectedIndex;

			 if (review[sectionNo]->default[curQuesNo - 1] == 0)
			 {
				 review[sectionNo]->default[curQuesNo - 1] = 1;
				 Button ^ btn = gcnew Button();
				 btn = btnPaper[sectionNo]->default[curQuesNo - 1];
				 btn->BackColor = review_color;
				 btnReview->Text = "Unmark";
				 //btn->FlatAppearance->BorderColor = Color::DarkCyan;
				 btnPaper[sectionNo]->default[curQuesNo - 1] = btn;
			 }
			 else
			 {
				 review[sectionNo]->default[curQuesNo - 1] = 0;
				 btnReview->Text = "Mark For review";
				 Color_Utility(sectionNo, curQuesNo);
			 }

}


	
};
}

