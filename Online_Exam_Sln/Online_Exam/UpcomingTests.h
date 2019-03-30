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
			this->contentPanel->Location = System::Drawing::Point(15, 16);
			this->contentPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(875, 395);
			this->contentPanel->TabIndex = 0;
			this->contentPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UpcomingTests::contentPanel_Paint);
			// 
			// UpcomingTests
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->contentPanel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UpcomingTests";
			this->Size = System::Drawing::Size(903, 423);
			this->Load += gcnew System::EventHandler(this, &UpcomingTests::UpcomingTests_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Utitlity(int i,int x,int button_y,String ^ tim)
	{
				 Label ^ lbl = gcnew Label();
				 String ^ tempstr = "Session ";
				 tempstr += i.ToString();
				 lbl->Text = tempstr;
				 lbl->Width = 60;
				 lbl->Height = 20;
				 lbl->Location = Point(x + 250, button_y);
				 Label ^ lbl1 = gcnew Label();
				 lbl1->Text = tim;
				 lbl1->Width = 150;
				 lbl1->Height = 20;
				 lbl1->Location = Point(x + 310, button_y);
				 Button^ btnSession = gcnew Button();
				 btnSession->Location = Point(x + 460, button_y);
				 btnSession->Width = 150;
				 btnSession->Height = 20;
				 btnSession->TextAlign = ContentAlignment::MiddleLeft;
				 //btnSession->Padding =Padding(0, 0, 0, 0);
				 //button_y += 25;
				 btnSession->Text = "Appear For this session now";
				 lbl->BackColor = Color::White;
				 lbl1->BackColor = Color::White;
				 btnSession->BackColor = Color::White;
				 contentPanel->Controls->Add(lbl);
				 contentPanel->Controls->Add(lbl1);
				 contentPanel->Controls->Add(btnSession);
				 //flag1 = 1;
	}
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
						 //Console::WriteLine(Access->RecordCount.ToString());
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
							
							 //Text of components

							 lblExam->Text = "Exam Name: ";
							 lblProf->Text = "Set By: ";
							 lblExamLength->Text = "Exam Duration: ";
							 lblGroup->Text = "Eligible Groups: ";
							 lblExamName->Text = Convert::ToString(Access->DBDT->Rows[i]["ExamName"]);
							 lblProfName->Text = Convert::ToString(Access->DBDT->Rows[i]["Professor"]);
							 String^ str1 = Convert::ToString(Access->DBDT->Rows[i]["ExamLength"]);
							 str1 += " Minutes";
							 lblExamLengthVal->Text = str1;
							 String ^ str2 = Convert::ToString(Access->DBDT->Rows[i]["GroupID"]);
							 //Console::WriteLine(str2);
							 String ^ ans1 = "";
							 String ^ curtemp = "";
							 for (int j = 0; j < str2->Length - 1; j++)
							 {
								 if (str2[j] == '-' && str2[j + 1] == '-')
								 {
									 //Console::WriteLine(curtemp);
									 OES ^ tempquer = gcnew OES();
									 tempquer->ExecQuery("Select * From Groups WHERE GroupID = " + Convert::ToInt32(curtemp));
									 ans1 += Convert::ToString(tempquer->DBDT->Rows[0]["GroupName"]);
									 ans1 += ", ";
									 curtemp = "";
								 }
								 else if (str2[j] != '-')
								 {
									 curtemp += str2[j];
								 }
							 }
							 //Console::WriteLine(curtemp);
							 OES ^ tempquer = gcnew OES();
							 tempquer->ExecQuery("Select * From Groups WHERE GroupID = " + Convert::ToInt32(curtemp));
							 ans1 += Convert::ToString(tempquer->DBDT->Rows[0]["GroupName"]);
							 lblGroupsList->Text = ans1;
							 //Console::WriteLine(ans1);
							 //Properties of labels

							 //Width and height of components
							 lblProf->Width = 100;
							 lblExam->Width = 100;
							 lblGroup->Width = 100;
							 lblExamLength->Width = 100;
							 lblProf->Height = 20;
							 lblExam->Height = 20;
							 lblGroup->Height = 20;
							 lblExamLength->Height = 20;
							 lblProfName->Width = 150;
							 lblGroupsList->Width = 150;
							 lblExamLengthVal->Width = 150;
							 lblExamName->Width = 150;
							 lblProfName->AutoSize = true;
							 lblExamName->AutoSize = true;
							 lblGroupsList->AutoSize = true;
							 lblExamLengthVal->AutoSize = true;
							 lblGroupsList->MaximumSize = System::Drawing::Size(150, 1000);
							 lblExamName->MaximumSize = System::Drawing::Size(150, 1000);
							 lblProfName->MaximumSize = System::Drawing::Size(150, 1000);
							 border->Width = 700;

							 /*lblExamName->Text = Convert::ToString(Access->DBDT->Rows[i]["ExamName"]);
							 lblProfName->Text = Convert::ToString(Access->DBDT->Rows[i]["Professor"]);*/
							 border->BackColor = Color::White;
							 lblProf->BackColor = Color::White;
							 //lblProf->ForeColor = Color::White;
							 lblProfName->BackColor = Color::White;
							 //lblProfName->ForeColor = Color::White;
							 lblExamName->BackColor = Color::White;
							 //lblExamName->ForeColor = Color::White;
							 lblExam->BackColor = Color::White;
							 //lblExam->ForeColor = Color::White;
							 lblGroup->BackColor = Color::White;
							 //lblGroup->ForeColor = Color::White;
							 lblGroupsList->BackColor = Color::White;
							 //lblGroupsList->ForeColor = Color::White;
							 lblExamLength->BackColor = Color::White;
							 //lblExamLength->ForeColor = Color::White;
							 lblExamLengthVal->BackColor = Color::White;
							 //lblExamLengthVal->ForeColor = Color::White;
							 //MessageBox::Show(lblExamName->Text);
							 //Point ^ pt = gcnew Point(x + 50, y + 5);
							 //border->Location =Point(x + 50, y + 5);
							 Console::WriteLine(lblGroupsList->Height.ToString());
							 //Locations of Components
							 int tempy = y+10;
							 lblExam->Location = Point(x + 5, tempy);
							 lblExamName->Location = Point(x + 110, tempy);
							 tempy += lblExamName->Height+10;
							 lblProf->Location = Point(x + 5, tempy);
							 lblProfName->Location = Point(x + 110, tempy);
							 tempy += lblProfName->Height+10;
							 lblExamLength->Location = Point(x + 5, tempy );
							 lblExamLengthVal->Location = Point(x + 110, tempy);
							 tempy += lblExamLengthVal->Height+10;
							 lblGroup->Location = Point(x + 5, tempy );
							 lblGroupsList->Location = Point(x + 110, tempy);
							 //Console::WriteLine("Done till here");
							 int button_x = x + 400;
							 int button_y = y+10;
							 int flag1 = 0;
							 int temp_len = 10;
							 if (CompareDates(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes1"])) >= 0)
							 {
								 String ^ tim = Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes1"]);
								 Utitlity(1, x, button_y,tim);
								 button_y += 25;
								 flag1 = 1;
								 temp_len += 25;
							 }
							 if (CompareDates(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes2"])) >= 0)
							 {
								 String ^ tim = Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes2"]);
								 Utitlity(2, x, button_y, tim);
								 button_y += 25;
								 flag1 = 1;
								 temp_len += 25;
							 }
							 if (CompareDates(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes3"])) >= 0)
							 {
								 String ^ tim = Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes3"]);
								 Utitlity(3, x, button_y, tim);
								 button_y += 25;
								 flag1= 1;
								 temp_len += 25;
							 }
							 if (CompareDates(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes4"])) >= 0)
							 {
								 String ^ tim = Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes4"]);
								 Utitlity(4, x, button_y, tim);
								 button_y += 25;
								 flag1 = 1;
								 temp_len += 25;
							 }
							 if (CompareDates(Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes5"])) >= 0)
							 {
								 String ^ tim = Convert::ToString(Access->DBDT->Rows[i]["StartTimeSes5"]);
								 Utitlity(5, x, button_y, tim);
								 button_y += 25;
								 flag1 = 1;
								 temp_len += 25;
							 }
							 int final_len = 0;
							 int temp_len1 = 40 + lblExamLengthVal->Height + lblExamName->Height + lblGroupsList->Height + lblProfName->Height;
							 if (temp_len > temp_len1) final_len = temp_len;
							 else final_len = temp_len1;
							 if (flag1 > 0)
							 {
								 border->Width = 650;
								 border->Height = final_len + 10;
								 border->Location = Point(0, y);
								 border->SendToBack();
								 //Console::WriteLine("Entered");
								 contentPanel->Controls->Add(lblExam);
								 contentPanel->Controls->Add(lblProf);
								 contentPanel->Controls->Add(lblExamLength);
								 contentPanel->Controls->Add(lblGroup);
								 contentPanel->Controls->Add(lblExamLengthVal);
								 contentPanel->Controls->Add(lblGroupsList);
								 contentPanel->Controls->Add(lblProfName);
								 contentPanel->Controls->Add(lblExamName);
								 contentPanel->Controls->Add(border);
								 y += final_len+20;
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
				 //= Convert::ToDateTime(Access->DBDT->Rows[i]["StartTimeSes1"], ));
				 if (DateTime::TryParseExact(Convert::ToString(sesDate), "yyyy-MM-dd HH:mm:ss", nullptr, DateTimeStyles::None, sessionDate))
					 Console::WriteLine("Converted '{0}' to {1:O}.", sesDate, sessionDate);
				 else
					 Console::WriteLine("Unable to convert '{0}' to a date and time.", sesDate);

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
private: System::Void contentPanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
