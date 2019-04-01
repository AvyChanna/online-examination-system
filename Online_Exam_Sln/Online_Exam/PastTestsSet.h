#pragma once
#include "Leaderboard.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Online_Exam {

	/// <summary>
	/// Summary for PastTestsSet
	/// </summary>
	public ref class PastTestsSet : public System::Windows::Forms::UserControl
	{
	public:
		PastTestsSet(void)
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
		~PastTestsSet()
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
			this->contentPanel->Location = System::Drawing::Point(37, 35);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(874, 462);
			this->contentPanel->TabIndex = 0;
			this->contentPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PastTestsSet::contentPanel_Paint);
			// 
			// PastTestsSet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->contentPanel);
			this->Name = L"PastTestsSet";
			this->Size = System::Drawing::Size(914, 532);
			this->Load += gcnew System::EventHandler(this, &PastTestsSet::PastTestsSet_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PastTestsSet_Load(System::Object^  sender, System::EventArgs^  e) {
				 contentPanel->Controls->Clear();
				 int x = 0;
				 int y = 0;

				 OES ^ Access = gcnew OES();
				 Access->ExecQuery("SELECT * FROM Exam WHERE Professor = '" + gVar::Username + "'");

				 if (Access->RecordCount == 0)
				 {
					 Label ^lblErrorMessage = gcnew Label();
					 lblErrorMessage->Height = 40;
					 lblErrorMessage->Width = 400;
					 lblErrorMessage->Text = "No previous tests have been set by you";
					 lblErrorMessage->Location = Point(150, 150);
					 lblErrorMessage->Font = (gcnew System::Drawing::Font(L"Arial", 13));
					 contentPanel->Controls->Add(lblErrorMessage);
				 }
				 else
				 {
					 for (int j = 0; j < Access->RecordCount; j++)
					 {
						 int height_pic = 0;
						 PictureBox^ border = gcnew PictureBox();
						 border->Width = 500;
						 border->Height = 100;
						 border->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
		
						 Label ^ lblExam = gcnew Label();
						 lblExam->Text = "Exam Name: ";
                         Label ^ lblExamName = gcnew Label();
						 Button^ btnStandings = gcnew Button();
 						 lblExamName->Width = 100;
						 lblExamName->Text = Convert::ToString(Access->DBDT->Rows[j]->default["ExamName"]);
						 lblExamName->Height = 20;
						 btnStandings->Width = 180;
						 btnStandings->Height = 30;
						 int temp = y+10;
						 lblExam->Location = Point(x + 20, temp);
						 border->Location = Point(x, temp - 10);
						 
						 lblExamName->Location = Point(x + 220, temp);
						 btnStandings->Location = Point(x + 350, temp + 20);
						 btnStandings->Text = "Click for standings";
						 Label ^ lblGroups = gcnew Label();
						 lblGroups->Text = "Eligible Groups: ";
						 lblGroups->Height = 20;
						 lblGroups->Width = 180;
					
						 temp += 30;

						 lblExamName->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
						 lblGroups->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
						 lblExam->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
						 //lblProf->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
						 
						 lblExamName->ForeColor = System::Drawing::Color::FromArgb(43, 50, 82);
						 lblGroups->ForeColor = System::Drawing::Color::FromArgb(43, 50, 82);
						 lblExam->ForeColor = System::Drawing::Color::FromArgb(43, 50, 82);
						 //lblProf->ForeColor = System::Drawing::Color::FromArgb(43, 50, 82);

						 lblGroups->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							 static_cast<System::Byte>(0)));
						 lblExam->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							 static_cast<System::Byte>(0)));
						 lblExamName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							 static_cast<System::Byte>(0)));

						 lblGroups->Location = Point(x + 20, temp);
						 contentPanel->Controls->Add(lblExamName);
						 contentPanel->Controls->Add(lblGroups);
						 contentPanel->Controls->Add(lblExam);
						 contentPanel->Controls->Add(btnStandings);
						 btnStandings->FlatAppearance->BorderSize = 0;
						 btnStandings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
						 btnStandings->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							 static_cast<System::Byte>(0)));
						 btnStandings->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
						 btnStandings->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
						 btnStandings->TabIndex = 4;
						 btnStandings->BackColor = System::Drawing::Color::FromArgb(43, 50, 82);
						 btnStandings->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
						 btnStandings->Click += gcnew System::EventHandler(this, &PastTestsSet::btnClick);
						 btnStandings->Tag = Convert::ToString(Access->DBDT->Rows[j]["ExamCode"]);
						 {

						 }
						 //PictureBox ^ border = gcnew PictureBox();
						 String ^ grp = Convert::ToString(Access->DBDT->Rows[j]->default["GroupID"]);
						 String ^ query = "";
						 String ^ tempstr = "";
						 for (int i = 0; i < grp->Length - 1; i++)
						 {
							 if (grp[i] == '-' && grp[i + 1] == '-')
							 {
								 //temp += grp[i];
								 String ^ cur = "GroupID = " + tempstr + " OR ";
								 query += cur;
								 tempstr = "";
							 }
							 else if(grp[i]!='-') tempstr += grp[i];
						 }
						 //temp = temp + "-";
						 String ^ cur = "GroupID = " + tempstr + "";
						 query += cur;
						 if (grp->Length > 0)
						 {
							 //contentPanel->SendToBack();
							 //label1->BringToFront();
							 //dataGridView1->BringToFront();
							 OES ^ Access1 = gcnew OES();
							 Access1->ExecQuery("SELECT * FROM Groups WHERE " + query);
							 //MessageBox::Show("SELECT * FROM Groups WHERE " + query);
							 //dataGridView1->DataSource = Access1->DBDT;
							 for (int k = 0; k < Access1->RecordCount; k++)
							 {
								 Label ^ lblGroupName = gcnew Label();
								 lblGroupName->Text = Convert::ToString(Access1->DBDT->Rows[k]->default["GroupName"]);
								 lblGroupName->Width = 100;
								 lblGroupName->Height = 20;
								 lblGroupName->Location = Point(x + 220, temp);
								 temp += 30;
								 height_pic += 30;
								 lblGroupName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									 static_cast<System::Byte>(0)));

								 contentPanel->Controls->Add(lblGroupName);
								 lblGroupName->BackColor = System::Drawing::Color::FromArgb(239, 84, 84);
								 lblGroupName->ForeColor = System::Drawing::Color::FromArgb(43, 50, 82);
							 }

							 border->Height = height_pic + 45;
							 border->Width = 550;
							 contentPanel->Controls->Add(border);
							 //if (Access1->RecordCount > 0) MessageBox::Show(Convert::ToString(Access1->RecordCount));
						 }
						 temp += 10;
						 y = temp;
					 }
				 }
	}
	private: System::Void contentPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void btnClick(System::Object^  sender, System::EventArgs^  e)
	{
				 Button ^ btn = gcnew Button();
				 btn = static_cast<Button^>(sender);
				 String ^ExamCode = Convert::ToString(btn->Tag);

				 Leaderboard^ ldrBoard = gcnew Leaderboard(ExamCode);
				 contentPanel->Controls->Clear();
				 contentPanel->Controls->Add(ldrBoard);
	}
};
}
