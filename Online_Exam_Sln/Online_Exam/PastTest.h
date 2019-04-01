#pragma once
#include "charts.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Globalization;


namespace Online_Exam {

	/// <summary>
	/// Summary for PastTest
	/// </summary>
	public ref class PastTest : public System::Windows::Forms::UserControl
	{
	public:
		PastTest(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PastTest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  contentPanel;
	protected:

	protected:

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
			this->contentPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// contentPanel
			// 
			this->contentPanel->AutoScroll = true;
			this->contentPanel->Location = System::Drawing::Point(37, 30);
			this->contentPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(875, 472);
			this->contentPanel->TabIndex = 0;
			this->contentPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PastTest::contentPanel_Paint);
			// 
			// PastTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->contentPanel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"PastTest";
			this->Size = System::Drawing::Size(915, 532);
			this->Load += gcnew System::EventHandler(this, &PastTest::PastTest_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PastTest_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 contentPanel->Controls->Clear();
					 int x = 0;
					 int y = 0;

					 OES ^ Access = gcnew OES();
					 Access->ExecQuery("SELECT ExamCode FROM Performance WHERE Username = '" + gVar::Username + "'");



					 for (int i = 0; i < Access->RecordCount; i++){
						 OES ^ past = gcnew OES();
						 String ^ cur = Convert::ToString(Access->DBDT->Rows[i]->default["ExamCode"]);
						 past->ExecQuery("SELECT * FROM Exam WHERE ExamCode = " + cur );

						 

						 PictureBox^ border = gcnew PictureBox();
						 Label^ lblExamName = gcnew Label();
						 Label^ lblProfName = gcnew Label();
						 Label ^ lblExam = gcnew Label();
						 Label ^lblProf = gcnew Label();
						 //creating session buttons

						 border->Width = 500;
						 border->Height = 100;
						 lblExamName->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
						 lblProfName->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
						 lblExam->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
						 lblProf->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
						 border->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
						 lblExamName->ForeColor = System::Drawing::Color::FromArgb(43, 50, 82);
						 lblProfName->ForeColor = System::Drawing::Color::FromArgb(43, 50, 82);
						 lblExam->ForeColor = System::Drawing::Color::FromArgb(43, 50, 82);
						 lblProf->ForeColor = System::Drawing::Color::FromArgb(43, 50, 82);
					
						 //border->ForeColor = Color::Red;
						 lblProf->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							 static_cast<System::Byte>(0)));
						 lblProfName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							 static_cast<System::Byte>(0)));
						 lblExam->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							 static_cast<System::Byte>(0)));
						 lblExamName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							 static_cast<System::Byte>(0)));
						 lblProfName->Width = 150;
						 lblProfName->Height = 20;
						 lblProf->Width = 150;
						 lblProf->Height = 20;
						 lblExamName->Width = 100;
						 lblExamName->Height = 20;
						 lblExam->Width = 150;
						 lblExam->Height = 20;
						 lblExam->Text = "Exam Name: ";
						 lblProf->Text = "Set By: ";
						 lblExamName->Text = Convert::ToString(past->DBDT->Rows[0]->default["ExamName"]);
						 lblProfName->Text = Convert::ToString(past->DBDT->Rows[0]->default["Professor"]);
						 /*border->BackColor = Color::White;
						 lblProfName->BackColor = Color::Black;
						 lblExamName->BackColor = Color::Black;
						 lblExamName->ForeColor = Color::White;
						 lblProfName->ForeColor = Color::White;*/
						 //MessageBox::Show(lblExamName->Text);
						 //Point ^ pt = gcnew Point(x + 50, y + 5);
						 border->Location =Point(x , y + 5);
						 lblExamName->Location = Point(x + 175, y + 30);
						 lblProfName->Location = Point(x + 175, y + 60);
						 lblExam->Location = Point(x + 20, y + 30);
						 lblProf->Location = Point(x + 20, y + 60);
						 lblExamName->AutoEllipsis = true;
						 lblProfName->AutoEllipsis = true;

						 int button_x = x + 350;
						 int button_y = y + 30;

						 /*border->SendToBack();*/
						 contentPanel->Controls->Add(lblExamName);
						 contentPanel->Controls->Add(lblProfName);
						 //contentPanel->Controls->Add(border);
						 contentPanel->Controls->Add(lblExam);
						 contentPanel->Controls->Add(lblProf);
						
						 y += 120;

						 Button^ btnViewResult = gcnew Button();
						 btnViewResult->Location = Point(button_x+10, button_y+5); 
						 btnViewResult->Width = 100;
						 btnViewResult->Height = 30;
						 button_y += 21;
						 btnViewResult->Text = "View Result";
						 btnViewResult->FlatAppearance->BorderSize = 0;
						 btnViewResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
						 btnViewResult->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							 static_cast<System::Byte>(0)));
						 btnViewResult->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
						 btnViewResult->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
						 btnViewResult->TabIndex = 4;
						 btnViewResult->BackColor = System::Drawing::Color::FromArgb(43, 50, 82);
						 btnViewResult->ForeColor = System::Drawing::Color::FromArgb(255,255,255);
						 btnViewResult->Click += gcnew System::EventHandler(this, &PastTest::btnClick);
						 btnViewResult->Tag = cur;
						 btnViewResult->UseVisualStyleBackColor = true;
						 contentPanel->Controls->Add(btnViewResult);
						 contentPanel->Controls->Add(border);

					 }
					 //String ^ grp = Convert::ToString(Access->DBDT->Rows[0]["Groups"]);
					 //String ^ query = "";
					 //String ^ temp = "";
					 //for (int i = 0; i < grp->Length - 1; i++)
					 //{
					 // if (grp[i] == '-' && grp[i + 1] == '-')
					 // {
					 //	 temp += grp[i];
					 //	 String ^ cur = "GroupID Like '%" + temp + "%' OR ";
					 //	 query += cur;
					 //	 temp = "";
					 // }
					 // else temp += grp[i];
					 //}
					 //temp = temp + "-";
					 //String ^ cur = "GroupID Like '%" + temp + "%'";
					 //query += cur;
					 //if (grp->Length > 0)
					 //{
					 // Access->ExecQuery("SELECT * FROM Exam WHERE " + query);
					 // //MessageBox::Show("SELECT * FROM Exam WHERE " + query);
					 // DateTime date = DateTime::Now;

					 //}
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show("error occured");
				 }
	}
	private: System::Void contentPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void btnClick(System::Object^  sender, System::EventArgs^  e)
	{
				 Button ^ btn = gcnew Button();
				 btn = static_cast<Button^>(sender);
				 String ^ExamCode = Convert::ToString(btn->Tag);
				 
				 charts^ examCharts = gcnew charts(ExamCode,gVar::Username);
				 //this->Hide();
				 examCharts->ShowDialog();
	}

	};
}
