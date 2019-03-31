#pragma once
#include"Database.h"
#include"json.h"
#define incorrect_color Color::Pink
#define unattempted_color Color::Yellow
#define correct_color Color::LawnGreen
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace Database;
using namespace Newtonsoft::Json;


namespace Online_Exam {

	/// <summary>
	/// Summary for displayAnswer
	/// </summary>
	public ref class displayAnswer : public System::Windows::Forms::UserControl
	{
	public:

		//ref class MyLabel :public Label
		//{
		//public:
		//virtual void OnPaint(PaintEventArgs ^e) override{
		//	Bitmap^ bitmap = gcnew Bitmap(Width,Height);
		//	Graphics ^graphics = Graphics::FromImage(bitmap);
		//	StringFormat ^sf = gcnew StringFormat();
		//	sf->Alignment = StringAlignment::Near;
		//	sf->LineAlignment = StringAlignment::Near;
		//	graphics->DrawString(Text, Font, Brushes::Black, 0,0, sf);
		//	//->OnPaint(e);
		//	//graphics->Dispose();
		//	bitmap->RotateFlip(RotateFlipType::Rotate90FlipNone);
		//	e->Graphics->DrawImageUnscaled(bitmap, 0,0);
		//	//bitmap->Dispose();
		//	}
		/*private:

		};*/
		int ExamCode;
		int SessNo;
		JsonSerializerSettings ^s;
		JExam^ QSet;
		String^ MaxSect;
		String^ MinSect;
		String^ AvgSect;
		array<String ^> ^MaxSectStr;
		array<String ^> ^MinSectStr;
		array<String ^> ^AvgSectStr;
		array <String^>^ AttemptAnsStr;
		array <String^>^ QuesGivenStr;
		int ObtainedMarks;
		List <List<int>^> ^ QuesGiven;
		List <List<String^ >^> ^ AttemptAns;
	private: System::Windows::Forms::Label^  label6;
public:
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pbInc;
	private: System::Windows::Forms::PictureBox^  pbUnat;




private: System::Windows::Forms::Label^  lblLegend;
	private: System::Windows::Forms::PictureBox^  pbCor;


	public:
		 displayAnswer(int ExCode)
		{
			InitializeComponent();
			ExamCode = ExCode;
			//SessNo = SesNo;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~displayAnswer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblTestName;
	protected:

	protected:

	protected:








	private: System::Windows::Forms::TabControl^  tc1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;


	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::FlowLayoutPanel^  markingFlowPanel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  lblSesNo;
	private: System::Windows::Forms::Label^  lblExLen;
	private: System::Windows::Forms::Label^  lblNormScore;
	private: System::Windows::Forms::Label^  lblTotScore;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  lblAvgSect;
	private: System::Windows::Forms::Label^  lblMinSect;
	private: System::Windows::Forms::Label^  lblMaxSect;



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
			this->lblTestName = (gcnew System::Windows::Forms::Label());
			this->tc1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->markingFlowPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblSesNo = (gcnew System::Windows::Forms::Label());
			this->lblExLen = (gcnew System::Windows::Forms::Label());
			this->lblNormScore = (gcnew System::Windows::Forms::Label());
			this->lblTotScore = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lblAvgSect = (gcnew System::Windows::Forms::Label());
			this->lblMinSect = (gcnew System::Windows::Forms::Label());
			this->lblMaxSect = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pbInc = (gcnew System::Windows::Forms::PictureBox());
			this->pbUnat = (gcnew System::Windows::Forms::PictureBox());
			this->lblLegend = (gcnew System::Windows::Forms::Label());
			this->pbCor = (gcnew System::Windows::Forms::PictureBox());
			this->tc1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbInc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUnat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCor))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTestName
			// 
			this->lblTestName->AutoEllipsis = true;
			this->lblTestName->AutoSize = true;
			this->lblTestName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTestName->Location = System::Drawing::Point(243, 13);
			this->lblTestName->Name = L"lblTestName";
			this->lblTestName->Size = System::Drawing::Size(129, 23);
			this->lblTestName->TabIndex = 0;
			this->lblTestName->Text = L"Exam Name";
			// 
			// tc1
			// 
			this->tc1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tc1->Controls->Add(this->tabPage1);
			this->tc1->Controls->Add(this->tabPage2);
			this->tc1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tc1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tc1->HotTrack = true;
			this->tc1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tc1->Location = System::Drawing::Point(0, 136);
			this->tc1->Name = L"tc1";
			this->tc1->SelectedIndex = 0;
			this->tc1->Size = System::Drawing::Size(913, 37);
			this->tc1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->tc1->TabIndex = 25;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 30);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(905, 3);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 30);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(905, 3);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Gainsboro;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 179);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(916, 353);
			this->flowLayoutPanel1->TabIndex = 27;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &displayAnswer::flowLayoutPanel1_Paint);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(654, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 22);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Marking Scheme";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// markingFlowPanel
			// 
			this->markingFlowPanel->AutoScroll = true;
			this->markingFlowPanel->BackColor = System::Drawing::Color::White;
			this->markingFlowPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->markingFlowPanel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->markingFlowPanel->Location = System::Drawing::Point(651, 49);
			this->markingFlowPanel->Name = L"markingFlowPanel";
			this->markingFlowPanel->Size = System::Drawing::Size(158, 80);
			this->markingFlowPanel->TabIndex = 29;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(193, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 17);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Session Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(193, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 17);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Exam Length (min)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(193, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 17);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Normalized Score";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(421, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 19);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Average Score";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(421, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 19);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Min Score";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(421, 67);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 19);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Max Score";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(411, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(142, 17);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Section-wise Details";
			// 
			// lblSesNo
			// 
			this->lblSesNo->AutoSize = true;
			this->lblSesNo->Location = System::Drawing::Point(337, 53);
			this->lblSesNo->Name = L"lblSesNo";
			this->lblSesNo->Size = System::Drawing::Size(16, 17);
			this->lblSesNo->TabIndex = 38;
			this->lblSesNo->Text = L"0";
			// 
			// lblExLen
			// 
			this->lblExLen->AutoSize = true;
			this->lblExLen->Location = System::Drawing::Point(337, 69);
			this->lblExLen->Name = L"lblExLen";
			this->lblExLen->Size = System::Drawing::Size(16, 17);
			this->lblExLen->TabIndex = 39;
			this->lblExLen->Text = L"0";
			// 
			// lblNormScore
			// 
			this->lblNormScore->AutoSize = true;
			this->lblNormScore->Location = System::Drawing::Point(337, 104);
			this->lblNormScore->Name = L"lblNormScore";
			this->lblNormScore->Size = System::Drawing::Size(16, 17);
			this->lblNormScore->TabIndex = 40;
			this->lblNormScore->Text = L"0";
			// 
			// lblTotScore
			// 
			this->lblTotScore->AutoSize = true;
			this->lblTotScore->Location = System::Drawing::Point(337, 87);
			this->lblTotScore->Name = L"lblTotScore";
			this->lblTotScore->Size = System::Drawing::Size(16, 17);
			this->lblTotScore->TabIndex = 42;
			this->lblTotScore->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(193, 85);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(84, 17);
			this->label13->TabIndex = 41;
			this->label13->Text = L"Total Score";
			// 
			// lblAvgSect
			// 
			this->lblAvgSect->AutoSize = true;
			this->lblAvgSect->Location = System::Drawing::Point(537, 108);
			this->lblAvgSect->Name = L"lblAvgSect";
			this->lblAvgSect->Size = System::Drawing::Size(16, 17);
			this->lblAvgSect->TabIndex = 45;
			this->lblAvgSect->Text = L"0";
			// 
			// lblMinSect
			// 
			this->lblMinSect->AutoSize = true;
			this->lblMinSect->Location = System::Drawing::Point(537, 90);
			this->lblMinSect->Name = L"lblMinSect";
			this->lblMinSect->Size = System::Drawing::Size(16, 17);
			this->lblMinSect->TabIndex = 44;
			this->lblMinSect->Text = L"0";
			// 
			// lblMaxSect
			// 
			this->lblMaxSect->AutoSize = true;
			this->lblMaxSect->Location = System::Drawing::Point(537, 72);
			this->lblMaxSect->Name = L"lblMaxSect";
			this->lblMaxSect->Size = System::Drawing::Size(16, 17);
			this->lblMaxSect->TabIndex = 43;
			this->lblMaxSect->Text = L"0";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(39, 99);
			this->label6->Margin = System::Windows::Forms::Padding(1);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 21);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Unattempted Question";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(36, 76);
			this->label5->Margin = System::Windows::Forms::Padding(1);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 17);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Incorrect Answer";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 52);
			this->label4->Margin = System::Windows::Forms::Padding(1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 22);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Correct Answer";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pbInc
			// 
			this->pbInc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbInc->Location = System::Drawing::Point(17, 77);
			this->pbInc->Margin = System::Windows::Forms::Padding(1);
			this->pbInc->Name = L"pbInc";
			this->pbInc->Size = System::Drawing::Size(13, 15);
			this->pbInc->TabIndex = 49;
			this->pbInc->TabStop = false;
			// 
			// pbUnat
			// 
			this->pbUnat->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbUnat->Location = System::Drawing::Point(17, 100);
			this->pbUnat->Margin = System::Windows::Forms::Padding(1);
			this->pbUnat->Name = L"pbUnat";
			this->pbUnat->Size = System::Drawing::Size(13, 15);
			this->pbUnat->TabIndex = 48;
			this->pbUnat->TabStop = false;
			// 
			// lblLegend
			// 
			this->lblLegend->BackColor = System::Drawing::Color::White;
			this->lblLegend->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLegend->Location = System::Drawing::Point(3, 14);
			this->lblLegend->Name = L"lblLegend";
			this->lblLegend->Size = System::Drawing::Size(139, 23);
			this->lblLegend->TabIndex = 47;
			this->lblLegend->Text = L"Legend";
			this->lblLegend->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pbCor
			// 
			this->pbCor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbCor->Location = System::Drawing::Point(17, 53);
			this->pbCor->Margin = System::Windows::Forms::Padding(1);
			this->pbCor->Name = L"pbCor";
			this->pbCor->Size = System::Drawing::Size(13, 15);
			this->pbCor->TabIndex = 46;
			this->pbCor->TabStop = false;
			// 
			// displayAnswer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pbInc);
			this->Controls->Add(this->pbUnat);
			this->Controls->Add(this->lblLegend);
			this->Controls->Add(this->pbCor);
			this->Controls->Add(this->tc1);
			this->Controls->Add(this->lblAvgSect);
			this->Controls->Add(this->lblMinSect);
			this->Controls->Add(this->lblMaxSect);
			this->Controls->Add(this->lblTotScore);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->lblNormScore);
			this->Controls->Add(this->lblExLen);
			this->Controls->Add(this->lblSesNo);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->markingFlowPanel);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->lblTestName);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"displayAnswer";
			this->Size = System::Drawing::Size(916, 532);
			this->Load += gcnew System::EventHandler(this, &displayAnswer::displayAnswer_Load);
			this->tc1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbInc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUnat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCor))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void displayAnswer_Load(System::Object^  sender, System::EventArgs^  e) {
			 pbCor->BackColor = correct_color;
			 pbInc->BackColor = incorrect_color;
			 pbUnat->BackColor = unattempted_color;


			 OES^ Access = gcnew OES();
			 Access->ExecQuery("Select * From Exam where ExamCode = " + ExamCode.ToString());
			 if (Access->RecordCount != 1){
				 MessageBox::Show("Error in obtaining exam", "Error");
				 return;
			 }
			 s = gcnew JsonSerializerSettings();
			 QSet = JsonConvert::DeserializeObject<JExam^>(Convert::ToString(Access->DBDT->Rows[0]->default["QuestionSet"]), s);
			 tc1->TabPages->Clear();
			 for (int i = 0; i < QSet->Data->Count; i++){
				 TabPage^ Section = gcnew TabPage();
				 Section->Text = "Section" + (i + 1).ToString();
				 tc1->Controls->Add(Section);
			 }
			 tc1->SelectedIndexChanged += gcnew EventHandler(this, &displayAnswer::TabSelect);
			 tc1->SelectedIndex = 0;
			 lblTestName->Text = Convert::ToString(Access->DBDT->Rows[0]->default["ExamName"]);
			 lblExLen->Text = Convert::ToString(Access->DBDT->Rows[0]->default["ExamLength"]);
			 MaxSect = "";
			 MaxSectStr = gcnew array<String^>(QSet->Data->Count);

			 MinSect = "";
			 MinSectStr = gcnew array<String^>(QSet->Data->Count);

			 AvgSect = "";
			 AvgSectStr = gcnew array<String^>(QSet->Data->Count);

			 array<String^>^delimiters1 = { "," };

			 MaxSect = Convert::ToString(Access->DBDT->Rows[0]["MaxSect"]);
			 MinSect = Convert::ToString(Access->DBDT->Rows[0]["MinSect"]);
			 AvgSect = Convert::ToString(Access->DBDT->Rows[0]["AvgSect"]);
			 if (MaxSect->Length != 0 && MinSect->Length != 0){
				 MaxSectStr = MaxSect->Split(delimiters1, StringSplitOptions::RemoveEmptyEntries);
				 MinSectStr = MinSect->Split(delimiters1, StringSplitOptions::RemoveEmptyEntries);
				 AvgSectStr = AvgSect->Split(delimiters1, StringSplitOptions::RemoveEmptyEntries);
			 }

			 //--------------------------------Performance DB Access-------------------------------
			 OES^ Access1 = gcnew OES();
			 Access1->ExecQuery("Select * from Performance where Username = '" + gVar::Username + "' AND ExamCode = " + ExamCode.ToString());
			 if (Access1->RecordCount != 1){
				 MessageBox::Show("Error in obtaining performance", "Error");
				 return;
			 }
			 String ^s = Environment::NewLine;
			 array<String^>^delimiters = { s };

			 SessNo = static_cast<int>(Convert::ToInt32(Access1->DBDT->Rows[0]->default["SessionNumber"]));
			 lblSesNo->Text = SessNo.ToString();

			 QuesGiven = gcnew List<List<int>^>();
			 AttemptAns = gcnew List<List<String ^>^>();
			 AttemptAnsStr = Convert::ToString(Access1->DBDT->Rows[0]->default["AttemptedAns"])->Split(delimiters, StringSplitOptions::None);
			 QuesGivenStr = Convert::ToString(Access1->DBDT->Rows[0]->default["QuesGiven"])->Split(delimiters, StringSplitOptions::None);
			 ObtainedMarks = static_cast<int>(Convert::ToInt32(Access1->DBDT->Rows[0]->default["ObtainedMarks"]));
			 int sectProc = -1;
			 for (int i = 1; i < AttemptAnsStr->Length; i++){
				 String^ a="", ^b ="";
				 int done = 0;
				 for (int j = 0; j < QuesGivenStr[i]->Length; j++){
					 if (QuesGivenStr[i][j] != '.'){
						 if (done == 0)
							 a += QuesGivenStr[i][j];
						 else
							 b += QuesGivenStr[i][j];
					 }
					 else
						 done = 1;
				 }
				 if (Convert::ToInt32(a) > sectProc){
						List<int>^ l = gcnew List<int>();
						List<String^ >^ at = gcnew List<String^>();
						QuesGiven->Add(l);
						AttemptAns->Add(at);
						sectProc++;
				 }
				 QuesGiven[sectProc]->Add(Convert::ToInt32(b));
				 AttemptAns[sectProc]->Add(AttemptAnsStr[i]);
				 //Console::WriteLine(QuesGiven[i-1].ToString());
			 }
			 /*Console::WriteLine("vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv");
			 for (int i = 0; i < QSet->Data->Count; i++){
				 for (int j = 0; j < QSet->Data[i]->NumberOfQuestionsGiven; j++){
					 Console::Write(i.ToString() + j.ToString() + AttemptAns[i]->default[j]->Length + "t\t");
				 }
				 Console::Write("\n");
			 }*/

			 lblTotScore->Text = Convert::ToString(Access1->DBDT->Rows[0]->default["ObtainedMarks"]);
			 lblNormScore->Text = Convert::ToString(Access1->DBDT->Rows[0]->default["NormalizedScore"]);

			 for (int i = 0; i < QSet->Data->Count; ++i)
			 {
				 Label ^lbl = gcnew Label();
				 String ^str = "Section ";
				 str += (i + 1).ToString();
				 str += ": ";
				 str += Convert::ToString(QSet->Data[i]->Weight);
				 str += " Marks per question";
				 lbl->AutoSize = true;
				 lbl->Width = markingFlowPanel->Width;
				 //lbl->Height = 40;
				 lbl->Text = str;
				 lbl->Font = gcnew System::Drawing::Font(lbl->Font->FontFamily, 7, FontStyle::Bold);
				 markingFlowPanel->Controls->Add(lbl);
			 }
			 tc1->SelectedIndex = 1;
			 tc1->Refresh();
			 tc1->SelectedIndex = 0;
			 tc1->Refresh();
}


	private: System::Void TabSelect(System::Object^ sender, EventArgs^ e) {
			 int selInd = static_cast<int>(static_cast<TabControl^>(sender)->SelectedIndex);
			 Int32 SectNumQ = QSet->Data[selInd]->NumberOfQuestionsGiven;
			 lblMaxSect->Text = MaxSectStr[selInd];
			 lblMinSect->Text = MinSectStr[selInd];
			 lblAvgSect->Text = AvgSectStr[selInd]->Substring(0, Math::Min(6, AvgSectStr[selInd]->Length));
			 flowLayoutPanel1->Controls->Clear();
			 array<String^>^delimiters = { "," };

			 for (int i = 0; i <SectNumQ; i++){
				 FlowLayoutPanel ^ p = gcnew FlowLayoutPanel();
				 p->FlowDirection = FlowDirection::TopDown;
				 p->Width = flowLayoutPanel1->Width-40;
				// p->AutoScroll = true;
				 p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 p->Height = 0;

				 Label^ ques = gcnew Label();
				 ques->AutoSize = true;
				 //ques->MaximumSize = System::Drawing::Size(p->Width - 40, 10000);
				 ques->Text = "Question " + (i+1).ToString();
				 p->Controls->Add(ques);
				 p->Height += ques->Height;
				 
				 TextBox ^ qStatement = gcnew TextBox();
				 qStatement->ReadOnly = true;
				 qStatement->Multiline = true;
				 qStatement->Width = p->Width - 10;
				 int qNum = QuesGiven[selInd]->default[i];
				 qStatement->Text = QSet->Data[selInd]->Questions[qNum]->Statement;
				 p->Controls->Add(qStatement);
				 p->Height += qStatement->Height;
				 int col_flag = 0;
				 if (AttemptAns[selInd]->default[i]->Length == 0){
					 //Console::WriteLine(selInd.ToString() + "" + i.ToString() + "marked");
					 p->BackColor = unattempted_color;
					 col_flag = 1;
				 }
				 if (QSet->Data[selInd]->Questions[qNum]->AnswerType == 0){
					//mcq type
					 for (int i = 0; i < QSet->Data[selInd]->Questions[qNum]->Options->Count; i++){
						 Label^ qOption = gcnew Label();
						 qOption->AutoSize = true;
						 qOption->MaximumSize = System::Drawing::Size(p->Width - 40, 10000);
						 qOption->Text = (i+1).ToString() + ")    " + QSet->Data[selInd]->Questions[qNum]->Options[i];
						 p->Controls->Add(qOption);
						 p->Height += qOption->Height;
					 }
					 
					 Label^ lblAttempt = gcnew Label();
					 lblAttempt->AutoSize = true;
					 lblAttempt->Text = "Your answer: ";
					 String ^attemptedAnswer = ""; //storing the attempted answer that goes in the label
					 if (AttemptAns[selInd]->default[i]->Length == 0)
						 lblAttempt->Text += "Unattempted";
					 else{
						 array<String^>^ attempt = AttemptAns[selInd]->default[i]->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);
						 for (int i = 0; i < attempt->Length; i++){
							 if (i != 0)
							 {
								 lblAttempt->Text += ",";
								attemptedAnswer += ",";
							 }
								
							 lblAttempt->Text += (Convert::ToInt32(attempt[i]) + 1).ToString();
							 attemptedAnswer += (Convert::ToInt32(attempt[i]) + 1).ToString();
						 }
						 //lblAttempt->Text += (" Options " + AttemptAns[selInd]->default[i]->Substring(1));

					 }
					 //Console::WriteLine(lblAttempt->Text);
					 p->Controls->Add(lblAttempt);
					 p->Height += lblAttempt->Height; 
					 
					 Label^ lblAns = gcnew Label();
					 lblAns->AutoSize = true;
					 lblAns->Text = "Correct answer: Options ";
					 String^ correctAns = "";  //storing the correct answer given by the user
					 for (int i = 0; i < QSet->Data[selInd]->Questions[qNum]->Answer->Count; i++){
						 if (i != 0)
						 {
							 lblAns->Text += ",";
							 correctAns += ",";
						 }
							
						 lblAns->Text += (QSet->Data[selInd]->Questions[qNum]->Answer[i]+1).ToString();
						 correctAns += (QSet->Data[selInd]->Questions[qNum]->Answer[i] + 1).ToString();
					 }
					 p->Controls->Add(lblAns);
					 p->Height += lblAns->Height;

					 //checking for correctness
					 if (col_flag != 1)
					 {
						 
						 if (correctAns == attemptedAnswer)
							 p->BackColor = correct_color;
						 else p->BackColor = incorrect_color;
					 }

				 }
				 else if (QSet->Data[selInd]->Questions[qNum]->AnswerType == 1){
					  //true false type
					 Label^ lblAttempt = gcnew Label();
					 lblAttempt->AutoSize = true;
					 lblAttempt->Text = "Your answer: ";
					 if (AttemptAns[selInd]->default[i] == "0")
						 lblAttempt->Text += "False";
					 else if (AttemptAns[selInd]->default[i] == "1")
						 lblAttempt->Text += "True";
					 else
						 lblAttempt->Text += "Unattempted";
					 p->Controls->Add(lblAttempt);
					 p->Height += lblAttempt->Height;

					 Label^ lblAns = gcnew Label();
					 lblAns->AutoSize = true;
					 lblAns->Text = "Correct answer: ";
					 if (QSet->Data[selInd]->Questions[qNum]->Answer[0] == 0)
						 lblAns->Text += "False";
					 else if (QSet->Data[selInd]->Questions[qNum]->Answer[0] == 1)
						 lblAns->Text += "True";
					 else
						 lblAns->Text += "Unattempted";
					 p->Controls->Add(lblAns);
					 p->Height += lblAns->Height;

					 //checking for correct /incorrect
					 if (col_flag != 1)
					 {
						 if (QSet->Data[selInd]->Questions[qNum]->Answer[0].ToString() == AttemptAns[selInd]->default[i]->Trim())
							 p->BackColor = correct_color;
						 else p->BackColor = incorrect_color;
					 }
					
				 }
				 else{
					 //fill in the blank type
					 Label^ lblAttempt = gcnew Label();
					 lblAttempt->AutoSize = true;
					 lblAttempt->Text = "Your answer: " + AttemptAns[selInd]->default[i];

					 if (AttemptAns[selInd]->default[i]->Length == 0)
					 {
						 lblAttempt->Text += "Unattempted";
					 }
					 p->Controls->Add(lblAttempt);
					 p->Height += lblAttempt->Height;

					 Label^ lblAns = gcnew Label();
					 lblAns->AutoSize = true;
					 lblAns->Text = "Correct answer: " + QSet->Data[selInd]->Questions[qNum]->Options[0];
					 p->Controls->Add(lblAns);
					 p->Height += lblAns->Height;
					 if (col_flag != 1)
					 {
						 if (AttemptAns[selInd]->default[i] == QSet->Data[selInd]->Questions[qNum]->Options[0])
						 {
							 p->BackColor = correct_color;
						 }
						 else p->BackColor = incorrect_color;
					 }
					
				 }
				 
				 p->Height += 10;
				 flowLayoutPanel1->Controls->Add(p);

			 }
			 
			 


			 


}
private: System::Void flowLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
