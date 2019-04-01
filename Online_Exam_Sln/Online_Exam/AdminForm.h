#pragma once
#include "Database.h"
#include "ApproveProf.h"
#include "StudentEditAdmin.h"
#include "ExamList.h"
#include "ChangePassword.h"

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
	private: System::Windows::Forms::Button^  buttonlogout;
	private: System::Windows::Forms::Button^  btnChangePasswd;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->BtnApproveProf = (gcnew System::Windows::Forms::Button());
			this->adminPanel = (gcnew System::Windows::Forms::Panel());
			this->Students = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonlogout = (gcnew System::Windows::Forms::Button());
			this->examDetails = (gcnew System::Windows::Forms::Button());
			this->btnChangePasswd = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// BtnApproveProf
			// 
			this->BtnApproveProf->FlatAppearance->BorderSize = 0;
			this->BtnApproveProf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnApproveProf->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnApproveProf->ForeColor = System::Drawing::Color::White;
			this->BtnApproveProf->Location = System::Drawing::Point(19, 119);
			this->BtnApproveProf->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BtnApproveProf->Name = L"BtnApproveProf";
			this->BtnApproveProf->Size = System::Drawing::Size(162, 50);
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
			this->adminPanel->Location = System::Drawing::Point(205, 0);
			this->adminPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->adminPanel->Name = L"adminPanel";
			this->adminPanel->Size = System::Drawing::Size(978, 532);
			this->adminPanel->TabIndex = 1;
			// 
			// Students
			// 
			this->Students->FlatAppearance->BorderSize = 0;
			this->Students->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Students->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Students->ForeColor = System::Drawing::Color::White;
			this->Students->Location = System::Drawing::Point(19, 188);
			this->Students->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Students->Name = L"Students";
			this->Students->Size = System::Drawing::Size(162, 50);
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
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->Students);
			this->panel1->Controls->Add(this->buttonlogout);
			this->panel1->Controls->Add(this->examDetails);
			this->panel1->Controls->Add(this->btnChangePasswd);
			this->panel1->Controls->Add(this->BtnApproveProf);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 532);
			this->panel1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(70, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(60, 57);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// buttonlogout
			// 
			this->buttonlogout->FlatAppearance->BorderSize = 0;
			this->buttonlogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonlogout->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonlogout->ForeColor = System::Drawing::Color::White;
			this->buttonlogout->Location = System::Drawing::Point(19, 434);
			this->buttonlogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonlogout->Name = L"buttonlogout";
			this->buttonlogout->Size = System::Drawing::Size(162, 50);
			this->buttonlogout->TabIndex = 2;
			this->buttonlogout->Text = L"Logout";
			this->buttonlogout->UseVisualStyleBackColor = true;
			this->buttonlogout->Click += gcnew System::EventHandler(this, &AdminForm::button_logout_Click);
			this->buttonlogout->MouseLeave += gcnew System::EventHandler(this, &AdminForm::buttonlogout_MouseLeave);
			this->buttonlogout->MouseHover += gcnew System::EventHandler(this, &AdminForm::buttonlogout_MouseHover);
			// 
			// examDetails
			// 
			this->examDetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->examDetails->FlatAppearance->BorderSize = 0;
			this->examDetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->examDetails->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->examDetails->ForeColor = System::Drawing::Color::White;
			this->examDetails->Location = System::Drawing::Point(19, 271);
			this->examDetails->Margin = System::Windows::Forms::Padding(4);
			this->examDetails->Name = L"examDetails";
			this->examDetails->Size = System::Drawing::Size(162, 50);
			this->examDetails->TabIndex = 3;
			this->examDetails->Text = L"Exam Details";
			this->examDetails->UseVisualStyleBackColor = false;
			this->examDetails->Click += gcnew System::EventHandler(this, &AdminForm::examDetails_Click);
			this->examDetails->MouseLeave += gcnew System::EventHandler(this, &AdminForm::examDetails_MouseLeave);
			this->examDetails->MouseHover += gcnew System::EventHandler(this, &AdminForm::examDetails_MouseHover);
			// 
			// btnChangePasswd
			// 
			this->btnChangePasswd->FlatAppearance->BorderSize = 0;
			this->btnChangePasswd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnChangePasswd->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChangePasswd->ForeColor = System::Drawing::Color::White;
			this->btnChangePasswd->Location = System::Drawing::Point(19, 354);
			this->btnChangePasswd->Margin = System::Windows::Forms::Padding(4);
			this->btnChangePasswd->Name = L"btnChangePasswd";
			this->btnChangePasswd->Size = System::Drawing::Size(162, 50);
			this->btnChangePasswd->TabIndex = 1;
			this->btnChangePasswd->Text = L"Change Password";
			this->btnChangePasswd->UseVisualStyleBackColor = true;
			this->btnChangePasswd->Click += gcnew System::EventHandler(this, &AdminForm::btnChangePasswd_Click);
			this->btnChangePasswd->MouseLeave += gcnew System::EventHandler(this, &AdminForm::btnChangePasswd_MouseLeave);
			this->btnChangePasswd->MouseHover += gcnew System::EventHandler(this, &AdminForm::btnChangePasswd_MouseHover);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 532);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->adminPanel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BtnApproveProf_Click(System::Object^  sender, System::EventArgs^  e) {
				 adminPanel->Controls->Clear();
				 ApproveProf ^ usr = gcnew ApproveProf();
				 adminPanel->Controls->Add(usr);
				 BtnApproveProf->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				 Students->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 examDetails->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnChangePasswd->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 buttonlogout->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
	}
	private: System::Void Students_Click(System::Object^  sender, System::EventArgs^  e) {
				 adminPanel->Controls->Clear();
				 StudentEditAdmin ^ usr = gcnew StudentEditAdmin();
				 adminPanel->Controls->Add(usr);
				 Students->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				 BtnApproveProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 examDetails->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnChangePasswd->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 buttonlogout->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 
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
				 examDetails->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				 Students->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 BtnApproveProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnChangePasswd->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 buttonlogout->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);

	}

	private: System::Void Students_MouseHover(System::Object^  sender, System::EventArgs^  e) {
					  Students->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
		 }
private: System::Void Students_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 Students->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
	private: System::Void button_logout_Click(System::Object^  sender, System::EventArgs^  e) {
				 gVar::ClearGvars();
				 if (this->Owner != nullptr)
				 {
					 this->Owner->Show();
					 this->Close();
				 }
				 
				 buttonlogout->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				 Students->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 BtnApproveProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnChangePasswd->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 examDetails->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);

}

private: System::Void btnChangePasswd_Click(System::Object^  sender, System::EventArgs^  e) {
			 adminPanel->Controls->Clear();
			 ChangePassword ^ usr = gcnew ChangePassword();
			 adminPanel->Controls->Add(usr);
			 btnChangePasswd->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 examDetails->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 Students->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 BtnApproveProf->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 buttonlogout->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
}
private: System::Void examDetails_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 examDetails->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void examDetails_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 examDetails->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
private: System::Void btnChangePasswd_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnChangePasswd->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnChangePasswd_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnChangePasswd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
private: System::Void buttonlogout_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 buttonlogout->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void buttonlogout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonlogout->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}
private: System::Void AdminForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 adminPanel->Controls->Clear();
			 ApproveProf ^ usr = gcnew ApproveProf();
			 adminPanel->Controls->Add(usr);
			 BtnApproveProf->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
			 Students->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 examDetails->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnChangePasswd->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 buttonlogout->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);

}
};
}
