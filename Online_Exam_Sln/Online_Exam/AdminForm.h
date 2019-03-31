#pragma once
#include "Database.h"
#include "ApproveProf.h"
#include "StudentEditAdmin.h"
#include "ExamList.h"

namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Database;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BtnApproveProf;
	private: System::Windows::Forms::Panel^  adminPanel;
	private: System::Windows::Forms::Button^  Students;
	private: System::Windows::Forms::Button^  examDetails;
	private: System::Windows::Forms::Panel^  panel1;
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
			this->BtnApproveProf = (gcnew System::Windows::Forms::Button());
			this->adminPanel = (gcnew System::Windows::Forms::Panel());
			this->Students = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->examDetails = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// BtnApproveProf
			// 
			this->BtnApproveProf->FlatAppearance->BorderSize = 0;
			this->BtnApproveProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnApproveProf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnApproveProf->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BtnApproveProf->Location = System::Drawing::Point(31, 116);
			this->BtnApproveProf->Name = L"BtnApproveProf";
			this->BtnApproveProf->Size = System::Drawing::Size(121, 39);
			this->BtnApproveProf->TabIndex = 0;
			this->BtnApproveProf->Text = L"Approve Prof";
			this->BtnApproveProf->UseVisualStyleBackColor = true;
			this->BtnApproveProf->Click += gcnew System::EventHandler(this, &AdminForm::BtnApproveProf_Click);
			this->BtnApproveProf->MouseLeave += gcnew System::EventHandler(this, &AdminForm::BtnApproveProf_MouseLeave);
			this->BtnApproveProf->MouseHover += gcnew System::EventHandler(this, &AdminForm::BtnApproveProf_MouseHover);
			// 
			// adminPanel
			// 
			this->adminPanel->BackColor = System::Drawing::Color::White;
			this->adminPanel->Location = System::Drawing::Point(206, 0);
			this->adminPanel->Name = L"adminPanel";
			this->adminPanel->Size = System::Drawing::Size(1122, 593);
			this->adminPanel->TabIndex = 1;
			// 
			// Students
			// 
			this->Students->FlatAppearance->BorderSize = 0;
			this->Students->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Students->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Students->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Students->Location = System::Drawing::Point(31, 178);
			this->Students->Name = L"Students";
			this->Students->Size = System::Drawing::Size(121, 39);
			this->Students->TabIndex = 2;
			this->Students->Text = L"Users";
			this->Students->UseVisualStyleBackColor = true;
			this->Students->Click += gcnew System::EventHandler(this, &AdminForm::Students_Click);
			this->Students->MouseLeave += gcnew System::EventHandler(this, &AdminForm::Students_MouseLeave);
			this->Students->MouseHover += gcnew System::EventHandler(this, &AdminForm::Students_MouseHover);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->panel1->Controls->Add(this->BtnApproveProf);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 593);
			this->panel1->TabIndex = 3;
			// 
			// examDetails
			// 
			this->examDetails->Location = System::Drawing::Point(63, 266);
			this->examDetails->Name = L"examDetails";
			this->examDetails->Size = System::Drawing::Size(121, 62);
			this->examDetails->TabIndex = 3;
			this->examDetails->Text = L"Exam Details";
			this->examDetails->UseVisualStyleBackColor = true;
			this->examDetails->Click += gcnew System::EventHandler(this, &AdminForm::examDetails_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1327, 593);
			this->Controls->Add(this->examDetails);
			this->Controls->Add(this->Students);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->adminPanel);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BtnApproveProf_Click(System::Object^  sender, System::EventArgs^  e) {
				 adminPanel->Controls->Clear();
				 ApproveProf ^ usr = gcnew ApproveProf();
				 adminPanel->Controls->Add(usr);
				 BtnApproveProf->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				 Students->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
	}
	private: System::Void Students_Click(System::Object^  sender, System::EventArgs^  e) {
				 adminPanel->Controls->Clear();
				 StudentEditAdmin ^ usr = gcnew StudentEditAdmin();
				 adminPanel->Controls->Add(usr);
				 Students->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				 BtnApproveProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 
	}
	private: System::Void BtnApproveProf_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 BtnApproveProf->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11); // MIGHT BE BRACKET PROBLEM HERE ! 
	}
private: System::Void BtnApproveProf_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 BtnApproveProf->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
    }
	private: System::Void examDetails_Click(System::Object^  sender, System::EventArgs^  e) {
				 adminPanel->Controls->Clear();
				 ExamList ^ usr = gcnew ExamList();
				 adminPanel->Controls->Add(usr);
	}

	private: System::Void Students_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					  Students->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
		 }
private: System::Void Students_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 Students->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
};
}
