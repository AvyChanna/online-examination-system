#pragma once
#include "Database.h"
#include "ApproveProf.h"
#include "StudentEditAdmin.h"

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
			this->SuspendLayout();
			// 
			// BtnApproveProf
			// 
			this->BtnApproveProf->Location = System::Drawing::Point(63, 55);
			this->BtnApproveProf->Name = L"BtnApproveProf";
			this->BtnApproveProf->Size = System::Drawing::Size(121, 54);
			this->BtnApproveProf->TabIndex = 0;
			this->BtnApproveProf->Text = L"Approve Prof";
			this->BtnApproveProf->UseVisualStyleBackColor = true;
			this->BtnApproveProf->Click += gcnew System::EventHandler(this, &AdminForm::BtnApproveProf_Click);
			// 
			// adminPanel
			// 
			this->adminPanel->Location = System::Drawing::Point(215, 55);
			this->adminPanel->Name = L"adminPanel";
			this->adminPanel->Size = System::Drawing::Size(658, 499);
			this->adminPanel->TabIndex = 1;
			// 
			// Students
			// 
			this->Students->Location = System::Drawing::Point(63, 150);
			this->Students->Name = L"Students";
			this->Students->Size = System::Drawing::Size(121, 61);
			this->Students->TabIndex = 2;
			this->Students->Text = L"Students";
			this->Students->UseVisualStyleBackColor = true;
			this->Students->Click += gcnew System::EventHandler(this, &AdminForm::Students_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 593);
			this->Controls->Add(this->Students);
			this->Controls->Add(this->adminPanel);
			this->Controls->Add(this->BtnApproveProf);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BtnApproveProf_Click(System::Object^  sender, System::EventArgs^  e) {
				 adminPanel->Controls->Clear();
				 ApproveProf ^ usr = gcnew ApproveProf();
				 adminPanel->Controls->Add(usr);
	}
	private: System::Void Students_Click(System::Object^  sender, System::EventArgs^  e) {
				 adminPanel->Controls->Clear();
				 StudentEditAdmin ^ usr = gcnew StudentEditAdmin();
				 adminPanel->Controls->Add(usr);
	}
	};
}
