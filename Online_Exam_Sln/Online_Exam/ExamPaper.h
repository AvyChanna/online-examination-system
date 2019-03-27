#pragma once
#include"json.h"
#include"Database.h"


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
		Int32 MinRem;	//In minutes
		Int32 SecRem;
		ExamPaper(int ExCode)
		{
			InitializeComponent();
			ExamCode = ExCode;
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
	private: System::Windows::Forms::Panel^  markingPanel;
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
			this->btnEndTest = (gcnew System::Windows::Forms::Button());
			this->btnReview = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnPrev = (gcnew System::Windows::Forms::Button());
			this->questionPanel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtQuesText = (gcnew System::Windows::Forms::TextBox());
			this->lblQuesNum = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->markingPanel = (gcnew System::Windows::Forms::Panel());
			this->examTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblTimer = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblTestName = (gcnew System::Windows::Forms::Label());
			this->lblAttempted = (gcnew System::Windows::Forms::Label());
			this->lblTimeRemaining = (gcnew System::Windows::Forms::Label());
			this->picLogo = (gcnew System::Windows::Forms::PictureBox());
			this->commandButtonPanel->SuspendLayout();
			this->questionPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonFlowPanel
			// 
			this->buttonFlowPanel->BackColor = System::Drawing::SystemColors::Control;
			this->buttonFlowPanel->Location = System::Drawing::Point(3, 223);
			this->buttonFlowPanel->Name = L"buttonFlowPanel";
			this->buttonFlowPanel->Size = System::Drawing::Size(200, 506);
			this->buttonFlowPanel->TabIndex = 0;
			// 
			// commandButtonPanel
			// 
			this->commandButtonPanel->BackColor = System::Drawing::SystemColors::Control;
			this->commandButtonPanel->Controls->Add(this->btnEndTest);
			this->commandButtonPanel->Controls->Add(this->btnReview);
			this->commandButtonPanel->Controls->Add(this->btnNext);
			this->commandButtonPanel->Controls->Add(this->btnPrev);
			this->commandButtonPanel->Location = System::Drawing::Point(206, 673);
			this->commandButtonPanel->Name = L"commandButtonPanel";
			this->commandButtonPanel->Size = System::Drawing::Size(799, 58);
			this->commandButtonPanel->TabIndex = 1;
			// 
			// btnEndTest
			// 
			this->btnEndTest->Location = System::Drawing::Point(626, 2);
			this->btnEndTest->Name = L"btnEndTest";
			this->btnEndTest->Size = System::Drawing::Size(170, 53);
			this->btnEndTest->TabIndex = 7;
			this->btnEndTest->Text = L"End Test";
			this->btnEndTest->UseVisualStyleBackColor = true;
			// 
			// btnReview
			// 
			this->btnReview->Location = System::Drawing::Point(269, 3);
			this->btnReview->Name = L"btnReview";
			this->btnReview->Size = System::Drawing::Size(127, 53);
			this->btnReview->TabIndex = 8;
			this->btnReview->Text = L"Mark For Review";
			this->btnReview->UseVisualStyleBackColor = true;
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(136, 3);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(127, 53);
			this->btnNext->TabIndex = 7;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			// 
			// btnPrev
			// 
			this->btnPrev->Location = System::Drawing::Point(3, 3);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->Size = System::Drawing::Size(127, 53);
			this->btnPrev->TabIndex = 4;
			this->btnPrev->Text = L"Previous";
			this->btnPrev->UseVisualStyleBackColor = true;
			// 
			// questionPanel
			// 
			this->questionPanel->BackColor = System::Drawing::SystemColors::Control;
			this->questionPanel->Controls->Add(this->label2);
			this->questionPanel->Controls->Add(this->txtQuesText);
			this->questionPanel->Controls->Add(this->lblQuesNum);
			this->questionPanel->Controls->Add(this->label);
			this->questionPanel->Location = System::Drawing::Point(206, 223);
			this->questionPanel->Name = L"questionPanel";
			this->questionPanel->Size = System::Drawing::Size(799, 447);
			this->questionPanel->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 275);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 18);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Answer";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtQuesText
			// 
			this->txtQuesText->Location = System::Drawing::Point(16, 54);
			this->txtQuesText->Multiline = true;
			this->txtQuesText->Name = L"txtQuesText";
			this->txtQuesText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtQuesText->Size = System::Drawing::Size(774, 207);
			this->txtQuesText->TabIndex = 11;
			// 
			// lblQuesNum
			// 
			this->lblQuesNum->AutoSize = true;
			this->lblQuesNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuesNum->Location = System::Drawing::Point(169, 16);
			this->lblQuesNum->Name = L"lblQuesNum";
			this->lblQuesNum->Size = System::Drawing::Size(17, 18);
			this->lblQuesNum->TabIndex = 10;
			this->lblQuesNum->Text = L"1";
			this->lblQuesNum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(13, 16);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(140, 18);
			this->label->TabIndex = 10;
			this->label->Text = L"Question Number";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// markingPanel
			// 
			this->markingPanel->Location = System::Drawing::Point(791, 1);
			this->markingPanel->Name = L"markingPanel";
			this->markingPanel->Size = System::Drawing::Size(214, 216);
			this->markingPanel->TabIndex = 3;
			// 
			// examTimer
			// 
			this->examTimer->Interval = 1000;
			this->examTimer->Tick += gcnew System::EventHandler(this, &ExamPaper::examTimer_Tick);
			// 
			// lblTimer
			// 
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
			this->picLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picLogo.Image")));
			this->picLogo->Location = System::Drawing::Point(3, 12);
			this->picLogo->Name = L"picLogo";
			this->picLogo->Size = System::Drawing::Size(200, 200);
			this->picLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picLogo->TabIndex = 9;
			this->picLogo->TabStop = false;
			// 
			// ExamPaper
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->ControlBox = false;
			this->Controls->Add(this->picLogo);
			this->Controls->Add(this->lblTimeRemaining);
			this->Controls->Add(this->lblAttempted);
			this->Controls->Add(this->lblTestName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblTimer);
			this->Controls->Add(this->markingPanel);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picLogo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExamPaper_Load(System::Object^  sender, System::EventArgs^  e) {
			ExamCode = 25;
			OES ^Access = gcnew OES();
			Access->ExecQuery("select * from Exam where ExamCode = " + ExamCode.ToString());
			if (Access->RecordCount == 1){
				JsonSerializerSettings ^s = gcnew JsonSerializerSettings();
				JExam^ QSet = JsonConvert::DeserializeObject<JExam^>(Convert::ToString(Access->DBDT->Rows[0]->default["QuestionSet"]), s);
				Console::WriteLine(QSet->Data[0]->Questions[0]->Statement);
				MinRem = Convert::ToInt32(Access->DBDT->Rows[0]->default["ExamLength"]);
				SecRem = 0;
				lblTimer->Text = MinRem.ToString() + ":0" + SecRem.ToString();
				examTimer->Start();
			}
			
			
	}
	private: System::Void lblTimer_Click(System::Object^  sender, System::EventArgs^  e) {
						
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
				 //Code for submit button
				 this->Close();
			 }
			 lblTimer->Text = MinRem.ToString() + ":";
			 if (SecRem <= 9)
				 lblTimer->Text += "0" + SecRem.ToString();
			 else
				 lblTimer->Text += SecRem.ToString();
}
};
}
