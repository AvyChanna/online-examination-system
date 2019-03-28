#pragma once

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
			this->contentPanel->Location = System::Drawing::Point(15, 16);
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(874, 395);
			this->contentPanel->TabIndex = 0;
			// 
			// PastTestsSet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->contentPanel);
			this->Name = L"PastTestsSet";
			this->Size = System::Drawing::Size(903, 423);
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
						 Label ^ lblExam = gcnew Label();
						 lblExam->Text = "Exam Name: ";
                         Label ^ lblExamName = gcnew Label();
						 Button^ btnStandings = gcnew Button();
 						 lblExamName->Width = 100;
						 lblExamName->Text = Convert::ToString(Access->DBDT->Rows[j]["ExamName"]);
						 lblExamName->Height = 20;
						 btnStandings->Width = 200;
						 btnStandings->Height = 30;
						 int temp = y+10;
						 lblExam->Location = Point(x + 5, temp);
						 lblExamName->Location = Point(x + 100, temp);
						 btnStandings->Location = Point(x + 300, temp + 20);
						 btnStandings->Text = "Click for standings";
						 Label ^ lblGroups = gcnew Label();
						 lblGroups->Text = "Eligible Groups: ";
						 lblGroups->Height = 20;
						 temp += 30;
						 lblGroups->Location = Point(x + 5, temp);
						 contentPanel->Controls->Add(lblExamName);
						 contentPanel->Controls->Add(lblGroups);
						 contentPanel->Controls->Add(lblExam);
						 contentPanel->Controls->Add(btnStandings);
						 //PictureBox ^ border = gcnew PictureBox();
						 String ^ grp = Convert::ToString(Access->DBDT->Rows[j]["GroupID"]);
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
								 lblGroupName->Text = Convert::ToString(Access1->DBDT->Rows[k]["GroupName"]);
								 lblGroupName->Width = 100;
								 lblGroupName->Height = 20;
								 lblGroupName->Location = Point(x + 100, temp);
								 temp += 30;
								 contentPanel->Controls->Add(lblGroupName);
							 }
							 //if (Access1->RecordCount > 0) MessageBox::Show(Convert::ToString(Access1->RecordCount));
						 }
						 temp += 10;
						 y = temp;
					 }
				 }
	}
	};
}
