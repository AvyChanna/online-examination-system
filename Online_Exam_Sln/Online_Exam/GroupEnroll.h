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
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel3;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblGroupName
			// 
			this->lblGroupName->AutoSize = true;
			this->lblGroupName->BackColor = System::Drawing::Color::White;
			this->lblGroupName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGroupName->ForeColor = System::Drawing::Color::Black;
			this->lblGroupName->Location = System::Drawing::Point(89, 97);
			this->lblGroupName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblGroupName->Name = L"lblGroupName";
			this->lblGroupName->Size = System::Drawing::Size(166, 21);
			this->lblGroupName->TabIndex = 0;
			this->lblGroupName->Text = L"Enter Group Name";
			// 
			// lblEnroll
			// 
			this->lblEnroll->AutoSize = true;
			this->lblEnroll->BackColor = System::Drawing::Color::White;
			this->lblEnroll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEnroll->ForeColor = System::Drawing::Color::Black;
			this->lblEnroll->Location = System::Drawing::Point(89, 204);
			this->lblEnroll->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEnroll->Name = L"lblEnroll";
			this->lblEnroll->Size = System::Drawing::Size(180, 21);
			this->lblEnroll->TabIndex = 1;
			this->lblEnroll->Text = L"Enter Enrollment Key ";
			// 
			// btnEnroll
			// 
			this->btnEnroll->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btnEnroll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnroll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnroll->ForeColor = System::Drawing::Color::Black;
			this->btnEnroll->Location = System::Drawing::Point(439, 468);
			this->btnEnroll->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnEnroll->Name = L"btnEnroll";
			this->btnEnroll->Size = System::Drawing::Size(128, 42);
			this->btnEnroll->TabIndex = 2;
			this->btnEnroll->Text = L"ENROLL ME";
			this->btnEnroll->UseVisualStyleBackColor = false;
			this->btnEnroll->Click += gcnew System::EventHandler(this, &GroupEnroll::btnEnroll_Click);
			// 
			// txtEnroll
			// 
			this->txtEnroll->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEnroll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEnroll->Location = System::Drawing::Point(93, 227);
			this->txtEnroll->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtEnroll->Name = L"txtEnroll";
			this->txtEnroll->Size = System::Drawing::Size(244, 25);
			this->txtEnroll->TabIndex = 4;
			// 
			// comboGroupName
			// 
			this->comboGroupName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboGroupName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboGroupName->BackColor = System::Drawing::Color::White;
			this->comboGroupName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboGroupName->ForeColor = System::Drawing::Color::Black;
			this->comboGroupName->FormattingEnabled = true;
			this->comboGroupName->Location = System::Drawing::Point(93, 120);
			this->comboGroupName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboGroupName->Name = L"comboGroupName";
			this->comboGroupName->Size = System::Drawing::Size(180, 27);
			this->comboGroupName->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->comboGroupName);
			this->panel1->Controls->Add(this->txtEnroll);
			this->panel1->Controls->Add(this->lblEnroll);
			this->panel1->Controls->Add(this->lblGroupName);
			this->panel1->Location = System::Drawing::Point(168, 102);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(615, 345);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->btnEnroll);
			this->panel2->Location = System::Drawing::Point(3, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(630, 532);
			this->panel2->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Group Enroll";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Location = System::Drawing::Point(93, 260);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(244, 1);
			this->panel3->TabIndex = 6;
			// 
			// GroupEnroll
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->ForeColor = System::Drawing::Color::Black;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"GroupEnroll";
			this->Size = System::Drawing::Size(915, 532);
			this->Load += gcnew System::EventHandler(this, &GroupEnroll::GroupEnroll_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

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
					  Access1->ExecQuery("Select * from Users where Username = '" + gVar::Username + "' and Groups Like '%-" + studGroup + "-%'");
					//  MessageBox::Show("Select * from Users where Username = '" + gVar::b + "' and Groups Like '%-" + studGroup + "-%'");
					  if (Access1->RecordCount > 0)
					  {
						  MessageBox::Show("You are already enrolled to the group");
					  }
					  else{
						  if (txtEnroll->Text == Convert::ToString(Access->DBDT->Rows[0]["EnrollmentKey"]))
						  {
							  Access->ExecQuery("Select * from Users where Username= '" + gVar::Username + "'");
							  cur_group = Convert::ToString(Access->DBDT->Rows[0]["Groups"]);
							  cur_group = cur_group + "-" + studGroup + "-";
							  Access->ExecQuery("UPDATE Users SET Groups='" + cur_group + "' WHERE Username = '" + gVar::Username + "'");
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
