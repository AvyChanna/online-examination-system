#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


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
			this->contentPanel->Name = L"contentPanel";
			this->contentPanel->Size = System::Drawing::Size(874, 395);
			this->contentPanel->TabIndex = 0;
			// 
			// UpcomingTests
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->contentPanel);
			this->Name = L"UpcomingTests";
			this->Size = System::Drawing::Size(903, 423);
			this->Load += gcnew System::EventHandler(this, &UpcomingTests::UpcomingTests_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UpcomingTests_Load(System::Object^  sender, System::EventArgs^  e) {
				 contentPanel->Controls->Clear();
				 int x = 0;
				 int y = 0;

				 OES ^ Access = gcnew OES();
				 Access->ExecQuery("SELECT Groups FROM Users WHERE Username = '" + gVar::Username + "'");
				 String ^ grp = Convert::ToString(Access->DBDT->Rows[0]["Groups"]);
				 String ^ query = "";
				 String ^ temp = "";
				 for (int i = 0; i < grp->Length-1; i++)
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
					 for (int i = 0; i < Access->RecordCount; i++)
					 {
						 PictureBox^ border = gcnew PictureBox();
						 Label^ lblExamName = gcnew Label();
						 Label^ lblProfName = gcnew Label();
						 border->Width = 400;
						 border->Height = 100;
						 lblProfName->Width = 100;
						 lblProfName->Height = 20;
						 lblExamName->Width = 100;
						 lblExamName->Height = 20;
						 lblExamName->Text = Convert::ToString(Access->DBDT->Rows[i]["ExamName"]);
						 lblProfName->Text = Convert::ToString(Access->DBDT->Rows[i]["Professor"]);
						 border->BackColor = Color::White;
						 lblProfName->BackColor = Color::Black;
						 lblExamName->BackColor = Color::Black;
						 lblExamName->ForeColor = Color::White;
						 lblProfName->ForeColor = Color::White;
						 //MessageBox::Show(lblExamName->Text);
						 //Point ^ pt = gcnew Point(x + 50, y + 5);
						 border->Location =Point(x + 50, y + 5);
						 lblExamName->Location = Point(x + 55, y + 10);
						 lblProfName->Location = Point(x + 55, y + 40);
						 lblExamName->AutoEllipsis = true;
						 lblProfName->AutoEllipsis = true;
						 border->SendToBack();
						 contentPanel->Controls->Add(lblExamName);
						 contentPanel->Controls->Add(lblProfName);
						 contentPanel->Controls->Add(border);
						 y += 105;
					 }
					 //MessageBox::Show(query);
					 //dg1->DataSource = Access->DBDT;
				 }
	}
	};
}
