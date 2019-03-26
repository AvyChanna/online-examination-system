#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Globalization;


namespace Online_Exam {

	/// <summary>
	/// Summary for UpcomingTests
	/// </summary>
	public ref class UpcomingTests : public System::Windows::Forms::UserControl
	{
	public:
		UpcomingTests(void)
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
		~UpcomingTests()
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
			this->contentPanel->Location = System::Drawing::Point(11, 13);
			this->contentPanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(656, 321);
			this->contentPanel->TabIndex = 0;
			
			// 
			// UpcomingTests
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->contentPanel);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"UpcomingTests";
			this->Size = System::Drawing::Size(677, 344);
			this->Load += gcnew System::EventHandler(this, &UpcomingTests::UpcomingTests_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UpcomingTests_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {

					 contentPanel->Controls->Clear();
					 int x = 0;
					 int y = 0;

					 OES ^ Access = gcnew OES();
					 Access->ExecQuery("SELECT Groups FROM Users WHERE Username = '" + gVar::Username + "'");
					 String ^ grp = Convert::ToString(Access->DBDT->Rows[0]["Groups"]);
					 String ^ query = "";
					 String ^ temp = "";
					 for (int i = 0; i < grp->Length - 1; i++)
					 {
						 if (grp[i] == '-' && grp[i + 1] == '-')
						 {
							 temp += grp[i];
							 String ^ cur = "GroupID Like '%" + temp + "%' OR ";
							 query += cur;
							 temp = "";
						 }
						 else temp += grp[i];
					 }
					 temp = temp + "-";
					 String ^ cur = "GroupID Like '%" + temp + "%'";
					 query += cur;
					 if (grp->Length > 0)
					 {
						 Access->ExecQuery("SELECT * FROM Exam WHERE " + query);
						 //MessageBox::Show("SELECT * FROM Exam WHERE " + query);
						 DateTime date = DateTime::Now;
						 for (int i = 0; i < Access->RecordCount; i++)
						 {

							 PictureBox^ border = gcnew PictureBox();
							 Label^ lblExamName = gcnew Label();
							 Label^ lblProfName = gcnew Label();
							 Label ^ lblExam = gcnew Label();
							 Label ^lblProf = gcnew Label();
							 //creating session buttons
							 Button ^bsession1 = gcnew Button();
							 Button ^bsession2 = gcnew Button();
							 Button ^bsession3 = gcnew Button();
							 Button ^bsession4 = gcnew Button();
							 Button ^bsession5 = gcnew Button();
							 border->Width = 400;
							 border->Height = 100;
							 lblProfName->Width = 100;
							 lblProfName->Height = 20;
							 lblProf->Width = 150;
							 lblProf->Height = 20;
							 lblExamName->Width = 100;
							 lblExamName->Height = 20;
							 lblExam->Width = 150;
							 lblExam->Height = 20;
							 lblExam->Text = "Exam Name: ";
							 lblProf->Text = "Set By: ";
							 lblExamName->Text = Convert::ToString(Access->DBDT->Rows[i]["ExamName"]);
							 lblProfName->Text = Convert::ToString(Access->DBDT->Rows[i]["Professor"]);
							 /*border->BackColor = Color::White;
							 lblProfName->BackColor = Color::Black;
							 lblExamName->BackColor = Color::Black;
							 lblExamName->ForeColor = Color::White;
							 lblProfName->ForeColor = Color::White;*/
							 //MessageBox::Show(lblExamName->Text);
							 //Point ^ pt = gcnew Point(x + 50, y + 5);
							 //border->Location =Point(x + 50, y + 5);
							 lblExamName->Location = Point(x + 175, y + 30);
							 lblProfName->Location = Point(x + 175, y + 60);
							 lblExam->Location = Point(x + 20, y + 30);
							 lblProf->Location = Point(x + 20, y + 60);
							 lblExamName->AutoEllipsis = true;
							 lblProfName->AutoEllipsis = true;
							 bsession1->AutoEllipsis = true;
							 bsession1->Text = "Session1";
							 bsession2->Text = "Session2";
							 bsession3->Text = "Session3";
							 bsession4->Text = "Session4";
							 bsession5->Text = "Session5";

							 bsession1->Location = Point(x + 400, y + 10);
							 bsession2->Location = Point(x + 400, y + 31);
							 bsession3->Location = Point(x + 400, y + 52);
							 bsession4->Location = Point(x + 400, y + 73);
							 bsession5->Location = Point(x + 400, y + 94);

							 /*border->SendToBack();*/
							 contentPanel->Controls->Add(lblExamName);
							 contentPanel->Controls->Add(lblProfName);
							 //contentPanel->Controls->Add(border);
							 contentPanel->Controls->Add(lblExam);
							 contentPanel->Controls->Add(lblProf);
							 contentPanel->Controls->Add(bsession1);
							 contentPanel->Controls->Add(bsession2);
							 contentPanel->Controls->Add(bsession3);
							 contentPanel->Controls->Add(bsession4);
							 contentPanel->Controls->Add(bsession5);
							 y += 120;

							 //getting the dates of all sessions
							
							 //DateTime.TryParseExact(dateValue, pattern, null,DateTimeStyles.None, out parsedDate)

							 DateTime ses1Date;
							 //= Convert::ToDateTime(Access->DBDT->Rows[i]["StartTimeSes1"], ));
							 if (DateTime::TryParseExact(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes1"]),"yyyyMMddHHmmss", nullptr, DateTimeStyles::None, ses1Date))
								 Console::WriteLine("Converted '{0}' to {1:O}.", Access->DBDT->Rows[i]["StartTimeSes1"], ses1Date);
							 else
								 Console::WriteLine("Unable to convert '{0}' to a date and time.", Access->DBDT->Rows[i]["StartTimeSes1"]);

							 DateTime curDate = DateTime::Now;
							 Console::WriteLine(DateTime::Compare(ses1Date, curDate));
							// DateTime ses2Date = Convert::ToDateTime(Access->DBDT->Rows[i]["StartTimeSes2"]);
							// DateTime ses3Date = Convert::ToDateTime(Access->DBDT->Rows[i]["StartTimeSes3"]);
							// DateTime ses4Date = Convert::ToDateTime(Access->DBDT->Rows[i]["StartTimeSes4"]);
							// DateTime ses5Date = Convert::ToDateTime(Access->DBDT->Rows[i]["StartTimeSes5"]);
//
							// bsession1->Tag = ses1Date;
							// bsession2->Tag = ses2Date;
							// bsession3->Tag = ses3Date;
							// bsession4->Tag = ses4Date;
							// bsession5->Tag = ses5Date;
							 //bsession1->Click += gcnew System::EventHandler(this, &UpcomingTests::btnClick);
							// bsession2->Click += gcnew System::EventHandler(this, &UpcomingTests::btnClick);
							// bsession3->Click += gcnew System::EventHandler(this, &UpcomingTests::btnClick);
							// bsession4->Click += gcnew System::EventHandler(this, &UpcomingTests::btnClick);
							// bsession5->Click += gcnew System::EventHandler(this, &UpcomingTests::btnClick);

						 }
						 //MessageBox::Show(query);
						 //dg1->DataSource = Access->DBDT;
					 }
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show("error occured");
				 }
				
	}
	private: System::Void btnClick(System::Object^  sender, System::EventArgs^  e)
	{
				 Button ^ btn = gcnew Button();
				 btn = static_cast<Button^>(sender);
				 DateTime associatedDate = static_cast<DateTime>(btn->Tag);
				 String ^format = "yy-MM-dd HH-mm-ss";
				 String ^newDate = associatedDate.ToString(format);
				 MessageBox::Show(newDate);
	}
};
}
