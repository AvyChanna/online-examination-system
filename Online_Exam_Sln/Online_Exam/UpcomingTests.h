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
							 Int32 zver = Convert::ToInt32(Access->DBDT->Rows[i]["ExamCode"]);
							 
							 OES ^ verify = gcnew OES();
							 //Console::WriteLine("SELECT * FROM Performance WHERE Username = '" + gVar::Username + "' AND ExamCode = " + zver);
							 verify->ExecQuery("SELECT * FROM Performance WHERE Username = '" + gVar::Username + "' AND ExamCode = " + zver);
							 //Console::WriteLine(verify->RecordCount);
							 if (verify->RecordCount > 0) continue;
							 PictureBox^ border = gcnew PictureBox();
							 Label^ lblExamName = gcnew Label();
							 Label^ lblProfName = gcnew Label();
							 Label ^ lblExam = gcnew Label();
							 Label ^lblProf = gcnew Label();
							 Label ^ lblGroup = gcnew Label();
							 Label ^ lblGroupsList = gcnew Label();
							 Label ^ lblExamLength = gcnew Label();
							 Label ^ lblExamLengthVal = gcnew Label();
							 //creating session buttons
							
							 //Default Text of components

							 lblExam->Text = "Exam Name: ";
							 lblProf->Text = "Set By: ";
							 lblExamLength->Text = "Exam Duration: ";
							 lblGroup->Text = "Your applicable Groups: ";

							 //Properties of labels
 

							 //Width and height of components
							 lblProf->Width = 150;
							 lblExam->Width = 150;
							 lblGroup->Width = 150;
							 lblExamLength->Width = 150;
							 lblProf->Height = 20;
							 lblExam->Height = 20;
							 lblGroup->Height = 20;
							 lblExamLength->Height = 20;
							 
							 /*lblExamName->Text = Convert::ToString(Access->DBDT->Rows[i]["ExamName"]);
							 lblProfName->Text = Convert::ToString(Access->DBDT->Rows[i]["Professor"]);*/
							 /*border->BackColor = Color::White;
							 lblProfName->BackColor = Color::Black;
							 lblExamName->BackColor = Color::Black;
							 lblExamName->ForeColor = Color::White;
							 lblProfName->ForeColor = Color::White;*/
							 //MessageBox::Show(lblExamName->Text);
							 //Point ^ pt = gcnew Point(x + 50, y + 5);
							 //border->Location =Point(x + 50, y + 5);
							 
							 //Locations of Components

							 lblExam->Location = Point(x + 5, y + 10);
							 lblProf->Location = Point(x + 5, y + 35);
							 lblExamLength->Location = Point(x + 5, y + 60);
							 lblGroup->Location = Point(x + 5, y + 85);

							 int button_x = x + 400;
							 int button_y = y + 30;
							 int z; 
							 int flag1 = 0;
							 if (CompareDates(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes1"])) >= 0)
							 {
								 Button^ btnSession = gcnew Button();
								 btnSession->Location = Point(button_x, button_y);
								 button_y += 21;
								 btnSession->Text = "Session1";
								 contentPanel->Controls->Add(btnSession);
								 flag1 = 1;
							 }
							 if (CompareDates(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes2"])) >= 0)
							 {
								 Button^ btnSession = gcnew Button();
								 btnSession->Location = Point(button_x, button_y);
								 button_y += 21;
								 btnSession->Text = "Session2";
								 contentPanel->Controls->Add(btnSession);
								 flag1 = 1;
							 }
							 if (CompareDates(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes3"])) >= 0)
							 {
								 Button^ btnSession = gcnew Button();
								 btnSession->Location = Point(button_x, button_y);
								 button_y += 21;
								 btnSession->Text = "Session3";
								 contentPanel->Controls->Add(btnSession);
								 flag1 = 1;
							 }
							 if (CompareDates(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes4"])) >= 0)
							 {
								 Button^ btnSession = gcnew Button();
								 btnSession->Location = Point(button_x, button_y);
								 button_y += 21;
								 btnSession->Text = "Session4";
								 contentPanel->Controls->Add(btnSession);
								 flag1 = 1;
							 }
							 if (CompareDates(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes5"])) >= 0)
							 {
								 Button^ btnSession = gcnew Button();
								 btnSession->Location = Point(button_x, button_y);
								 button_y += 21;
								 btnSession->Text = "Session5";
								 contentPanel->Controls->Add(btnSession);
								 flag1 = 1;
							 }

							 if (flag1 > 0)
							 {
								 contentPanel->Controls->Add(lblExam);
								 contentPanel->Controls->Add(lblProf);
								 contentPanel->Controls->Add(lblExamLength);
								 contentPanel->Controls->Add(lblGroup);
								 y += 160;
							 }
							 
						 }
					 }
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show("Error Occured","Error Message");
				 }
				
	}
	private: System::Int32 CompareDates(String ^sesDate)
	{
				 DateTime sessionDate;
				 int justforfun = 0;
				 //= Convert::ToDateTime(Access->DBDT->Rows[i]["StartTimeSes1"], ));
				 if (DateTime::TryParseExact(Convert::ToString(sesDate), "yyyy-MM-dd HH:mm:ss", nullptr, DateTimeStyles::None, sessionDate))
					 justforfun = 1;
				 else
				 justforfun = 1;

				 DateTime curDate = DateTime::Now;
				 //Console::WriteLine(DateTime::Compare(sessionDate, curDate));
				 int z = DateTime::Compare(sessionDate, curDate);
				 return z;
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
