#pragma once
#include "Database.h"
#include "GlobalVar.h"
#include <iostream>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;
using namespace Global_Var;

namespace Online_Exam {

	/// <summary>
	/// Summary for GroupEnroll
	/// </summary>
	public ref class GroupEnroll : public System::Windows::Forms::UserControl
	{
	public:
		GroupEnroll(void)
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
		~GroupEnroll()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblGroupName;
	protected:
	private: System::Windows::Forms::Label^  lblEnroll;
	private: System::Windows::Forms::Button^  btnEnroll;

	private: System::Windows::Forms::TextBox^  txtEnroll;
	private: System::Windows::Forms::ComboBox^  comboGroupName;

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
			this->lblGroupName = (gcnew System::Windows::Forms::Label());
			this->lblEnroll = (gcnew System::Windows::Forms::Label());
			this->btnEnroll = (gcnew System::Windows::Forms::Button());
			this->txtEnroll = (gcnew System::Windows::Forms::TextBox());
			this->comboGroupName = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// lblGroupName
			// 
			this->lblGroupName->AutoSize = true;
			this->lblGroupName->Location = System::Drawing::Point(176, 94);
			this->lblGroupName->Name = L"lblGroupName";
			this->lblGroupName->Size = System::Drawing::Size(95, 13);
			this->lblGroupName->TabIndex = 0;
			this->lblGroupName->Text = L"Enter Group Name";
			// 
			// lblEnroll
			// 
			this->lblEnroll->AutoSize = true;
			this->lblEnroll->Location = System::Drawing::Point(176, 138);
			this->lblEnroll->Name = L"lblEnroll";
			this->lblEnroll->Size = System::Drawing::Size(108, 13);
			this->lblEnroll->TabIndex = 1;
			this->lblEnroll->Text = L"Enter Enrollment Key ";
			// 
			// btnEnroll
			// 
			this->btnEnroll->Location = System::Drawing::Point(294, 194);
			this->btnEnroll->Name = L"btnEnroll";
			this->btnEnroll->Size = System::Drawing::Size(90, 38);
			this->btnEnroll->TabIndex = 2;
			this->btnEnroll->Text = L"ENROLL ME";
			this->btnEnroll->UseVisualStyleBackColor = true;
			this->btnEnroll->Click += gcnew System::EventHandler(this, &GroupEnroll::btnEnroll_Click);
			// 
			// txtEnroll
			// 
			this->txtEnroll->Location = System::Drawing::Point(397, 135);
			this->txtEnroll->Name = L"txtEnroll";
			this->txtEnroll->Size = System::Drawing::Size(100, 20);
			this->txtEnroll->TabIndex = 4;
			// 
			// comboGroupName
			// 
			this->comboGroupName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboGroupName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboGroupName->FormattingEnabled = true;
			this->comboGroupName->Location = System::Drawing::Point(397, 91);
			this->comboGroupName->Name = L"comboGroupName";
			this->comboGroupName->Size = System::Drawing::Size(100, 21);
			this->comboGroupName->TabIndex = 5;
			// 
			// GroupEnroll
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->comboGroupName);
			this->Controls->Add(this->txtEnroll);
			this->Controls->Add(this->btnEnroll);
			this->Controls->Add(this->lblEnroll);
			this->Controls->Add(this->lblGroupName);
			this->Name = L"GroupEnroll";
			this->Size = System::Drawing::Size(677, 344);
			this->Load += gcnew System::EventHandler(this, &GroupEnroll::GroupEnroll_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GroupEnroll_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				 OES ^Access = gcnew OES();

				 Access->ExecQuery("Select * from Groups ");
			

				 int numRecords = Access->RecordCount;

				 for (int i = 0; i < numRecords; ++i)
				 {
					 comboGroupName->Items->Add(Convert::ToString(Access->DBDT->Rows[i]["GroupName"]));
				 }
				 
	}
	private: System::Void btnEnroll_Click(System::Object^  sender, System::EventArgs^  e) {
				 OES ^Access = gcnew OES();
				 OES ^Access1 = gcnew OES();
				 Access->ExecQuery("Select * from Groups where GroupName = '" + comboGroupName->Text + "'");
				 String ^studGroup ;
				 String ^cur_group;
				 if (Access->RecordCount > 0)
				 {
					  studGroup = Convert::ToString(Access->DBDT->Rows[0]["GroupID"]);
					  Access1->ExecQuery("Select * from Users where Username = '" + gVar::b + "' and Groups Like '%-" + studGroup + "-%'");
					//  MessageBox::Show("Select * from Users where Username = '" + gVar::b + "' and Groups Like '%-" + studGroup + "-%'");
					  if (Access1->RecordCount > 0)
					  {
						  MessageBox::Show("You are already enrolled to the group");
					  }
					  else{
						  if (txtEnroll->Text == Convert::ToString(Access->DBDT->Rows[0]["EnrollmentKey"]))
						  {
							  Access->ExecQuery("Select * from Users where Username= '" + gVar::b + "'");
							  cur_group = Convert::ToString(Access->DBDT->Rows[0]["Groups"]);
							  cur_group = cur_group + "-" + studGroup + "-";
							  Access->ExecQuery("UPDATE Users SET Groups='" + cur_group + "' WHERE Username = '" + gVar::b + "'");
							  MessageBox::Show("successfully enrolled!");
							  txtEnroll->Clear();
							  comboGroupName->Text = "";
						  }
						  else
						  {
							  MessageBox::Show("Wrong enrollment key");
						  }
					  }
					
                       
				 }
				 else{
					 MessageBox::Show("The following group doesn't exist");
				 }
				

	}

};
}
