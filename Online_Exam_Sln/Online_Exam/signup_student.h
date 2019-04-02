#pragma once
#include "Captcha.h"
#include "Database.h"
#include "Encryption.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;
using namespace Encryption;
using namespace Captcha;
namespace Online_Exam {

	/// <summary>
	/// Summary for signup_student
	/// </summary>
	public ref class signup_student : public System::Windows::Forms::UserControl
	{
	public:
		String ^captchaConf;
		signup_student(void)
		{
			InitializeComponent();
			captchaConf = "";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~signup_student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::CheckBox^  memChkBox;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  userTxt;
	private: System::Windows::Forms::TextBox^  confirmPassTxt;
	private: System::Windows::Forms::TextBox^  mailTxt;
	private: System::Windows::Forms::TextBox^  pNumTxt;
	private: System::Windows::Forms::TextBox^  rNumTxt;
	private: System::Windows::Forms::Button^  studBtn;
	private: System::Windows::Forms::TextBox^  passTxt;
	private: System::Windows::Forms::TextBox^  nameTxt;
	private: System::Windows::Forms::ComboBox^  branchCb;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::PictureBox^  captcha;
	private: System::Windows::Forms::PictureBox^  reset;
	private: System::Windows::Forms::TextBox^  textcaptcha;



	private: System::Windows::Forms::Panel^  panel8;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(signup_student::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->memChkBox = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->userTxt = (gcnew System::Windows::Forms::TextBox());
			this->confirmPassTxt = (gcnew System::Windows::Forms::TextBox());
			this->mailTxt = (gcnew System::Windows::Forms::TextBox());
			this->pNumTxt = (gcnew System::Windows::Forms::TextBox());
			this->rNumTxt = (gcnew System::Windows::Forms::TextBox());
			this->studBtn = (gcnew System::Windows::Forms::Button());
			this->passTxt = (gcnew System::Windows::Forms::TextBox());
			this->nameTxt = (gcnew System::Windows::Forms::TextBox());
			this->branchCb = (gcnew System::Windows::Forms::ComboBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->captcha = (gcnew System::Windows::Forms::PictureBox());
			this->reset = (gcnew System::Windows::Forms::PictureBox());
			this->textcaptcha = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->captcha))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reset))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label1->Location = System::Drawing::Point(81, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Username";
			this->label1->Click += gcnew System::EventHandler(this, &signup_student::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label2->Location = System::Drawing::Point(81, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 17);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Full Name";
			this->label2->Click += gcnew System::EventHandler(this, &signup_student::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label3->Location = System::Drawing::Point(326, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 17);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &signup_student::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label4->Location = System::Drawing::Point(81, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 17);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Roll number";
			this->label4->Click += gcnew System::EventHandler(this, &signup_student::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label5->Location = System::Drawing::Point(81, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 17);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Phone Number";
			this->label5->Click += gcnew System::EventHandler(this, &signup_student::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label6->Location = System::Drawing::Point(81, 222);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Email";
			this->label6->Click += gcnew System::EventHandler(this, &signup_student::label6_Click);
			// 
			// memChkBox
			// 
			this->memChkBox->AutoSize = true;
			this->memChkBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->memChkBox->Location = System::Drawing::Point(329, 132);
			this->memChkBox->Name = L"memChkBox";
			this->memChkBox->Size = System::Drawing::Size(88, 17);
			this->memChkBox->TabIndex = 47;
			this->memChkBox->Text = L"IITG Member";
			this->memChkBox->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label8->Location = System::Drawing::Point(326, 78);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 17);
			this->label8->TabIndex = 48;
			this->label8->Text = L"Password Confirm";
			this->label8->Click += gcnew System::EventHandler(this, &signup_student::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->label9->Location = System::Drawing::Point(326, 148);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 17);
			this->label9->TabIndex = 49;
			this->label9->Text = L"Branch";
			this->label9->Click += gcnew System::EventHandler(this, &signup_student::label9_Click);
			// 
			// userTxt
			// 
			this->userTxt->BackColor = System::Drawing::Color::White;
			this->userTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->userTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userTxt->Location = System::Drawing::Point(84, 48);
			this->userTxt->Name = L"userTxt";
			this->userTxt->Size = System::Drawing::Size(174, 18);
			this->userTxt->TabIndex = 50;
			// 
			// confirmPassTxt
			// 
			this->confirmPassTxt->BackColor = System::Drawing::Color::White;
			this->confirmPassTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->confirmPassTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmPassTxt->Location = System::Drawing::Point(329, 102);
			this->confirmPassTxt->Name = L"confirmPassTxt";
			this->confirmPassTxt->Size = System::Drawing::Size(174, 18);
			this->confirmPassTxt->TabIndex = 51;
			this->confirmPassTxt->UseSystemPasswordChar = true;
			// 
			// mailTxt
			// 
			this->mailTxt->BackColor = System::Drawing::Color::White;
			this->mailTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mailTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mailTxt->Location = System::Drawing::Point(84, 241);
			this->mailTxt->Name = L"mailTxt";
			this->mailTxt->Size = System::Drawing::Size(174, 18);
			this->mailTxt->TabIndex = 52;
			// 
			// pNumTxt
			// 
			this->pNumTxt->BackColor = System::Drawing::Color::White;
			this->pNumTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pNumTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pNumTxt->Location = System::Drawing::Point(84, 305);
			this->pNumTxt->Name = L"pNumTxt";
			this->pNumTxt->Size = System::Drawing::Size(174, 18);
			this->pNumTxt->TabIndex = 53;
			this->pNumTxt->TextChanged += gcnew System::EventHandler(this, &signup_student::pNumTxt_TextChanged);
			// 
			// rNumTxt
			// 
			this->rNumTxt->BackColor = System::Drawing::Color::White;
			this->rNumTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rNumTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rNumTxt->Location = System::Drawing::Point(84, 181);
			this->rNumTxt->Name = L"rNumTxt";
			this->rNumTxt->Size = System::Drawing::Size(174, 18);
			this->rNumTxt->TabIndex = 54;
			this->rNumTxt->TextChanged += gcnew System::EventHandler(this, &signup_student::rNumTxt_TextChanged);
			// 
			// studBtn
			// 
			this->studBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->studBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studBtn->ForeColor = System::Drawing::Color::White;
			this->studBtn->Location = System::Drawing::Point(329, 286);
			this->studBtn->Name = L"studBtn";
			this->studBtn->Size = System::Drawing::Size(174, 41);
			this->studBtn->TabIndex = 60;
			this->studBtn->Text = L"Submit";
			this->studBtn->UseVisualStyleBackColor = false;
			this->studBtn->Click += gcnew System::EventHandler(this, &signup_student::studBtn_Click);
			// 
			// passTxt
			// 
			this->passTxt->BackColor = System::Drawing::Color::White;
			this->passTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTxt->Location = System::Drawing::Point(329, 48);
			this->passTxt->Name = L"passTxt";
			this->passTxt->Size = System::Drawing::Size(174, 18);
			this->passTxt->TabIndex = 57;
			this->passTxt->UseSystemPasswordChar = true;
			// 
			// nameTxt
			// 
			this->nameTxt->BackColor = System::Drawing::Color::White;
			this->nameTxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTxt->Location = System::Drawing::Point(84, 118);
			this->nameTxt->Name = L"nameTxt";
			this->nameTxt->Size = System::Drawing::Size(174, 18);
			this->nameTxt->TabIndex = 58;
			// 
			// branchCb
			// 
			this->branchCb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->branchCb->FormattingEnabled = true;
			this->branchCb->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"CSE", L"MNC", L"ECE", L"BT", L"EEE", L"ME", L"CE",
					L"CS"
			});
			this->branchCb->Location = System::Drawing::Point(329, 167);
			this->branchCb->Name = L"branchCb";
			this->branchCb->Size = System::Drawing::Size(121, 21);
			this->branchCb->TabIndex = 80;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Location = System::Drawing::Point(84, 66);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(174, 1);
			this->panel4->TabIndex = 84;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(84, 137);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 1);
			this->panel1->TabIndex = 85;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(84, 200);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(174, 1);
			this->panel2->TabIndex = 86;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Location = System::Drawing::Point(84, 260);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(174, 1);
			this->panel3->TabIndex = 87;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(84, 324);
			this->panel5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(174, 1);
			this->panel5->TabIndex = 88;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Black;
			this->panel6->Location = System::Drawing::Point(329, 121);
			this->panel6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(174, 1);
			this->panel6->TabIndex = 89;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->Location = System::Drawing::Point(329, 66);
			this->panel7->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(174, 1);
			this->panel7->TabIndex = 90;
			// 
			// captcha
			// 
			this->captcha->Location = System::Drawing::Point(329, 198);
			this->captcha->Name = L"captcha";
			this->captcha->Size = System::Drawing::Size(148, 50);
			this->captcha->TabIndex = 91;
			this->captcha->TabStop = false;
			// 
			// reset
			// 
			this->reset->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reset.Image")));
			this->reset->Location = System::Drawing::Point(483, 213);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(20, 20);
			this->reset->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->reset->TabIndex = 92;
			this->reset->TabStop = false;
			this->reset->Click += gcnew System::EventHandler(this, &signup_student::reset_Click);
			// 
			// textcaptcha
			// 
			this->textcaptcha->BackColor = System::Drawing::Color::White;
			this->textcaptcha->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textcaptcha->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textcaptcha->Location = System::Drawing::Point(329, 255);
			this->textcaptcha->Name = L"textcaptcha";
			this->textcaptcha->Size = System::Drawing::Size(174, 18);
			this->textcaptcha->TabIndex = 54;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Black;
			this->panel8->Location = System::Drawing::Point(329, 274);
			this->panel8->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(174, 1);
			this->panel8->TabIndex = 86;
			// 
			// signup_student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->reset);
			this->Controls->Add(this->captcha);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->branchCb);
			this->Controls->Add(this->studBtn);
			this->Controls->Add(this->nameTxt);
			this->Controls->Add(this->passTxt);
			this->Controls->Add(this->textcaptcha);
			this->Controls->Add(this->rNumTxt);
			this->Controls->Add(this->pNumTxt);
			this->Controls->Add(this->mailTxt);
			this->Controls->Add(this->confirmPassTxt);
			this->Controls->Add(this->userTxt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->memChkBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"signup_student";
			this->Size = System::Drawing::Size(624, 371);
			this->Load += gcnew System::EventHandler(this, &signup_student::signup_student_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->captcha))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reset))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		
		private :bool validate(){
					 OES^Access = gcnew OES();
					 String ^str = userTxt->Text;
					 Access->AddParam("@userName", str);
					 Access->ExecQuery("SELECT * FROM Users WHERE Username =@userName");
					 if (Access->DBDT->Rows->Count != 0 || Access->Exception->Length){
						 MessageBox::Show("Username already exists", "Error");
						 return false;
					 }


					 if (passTxt->Text != confirmPassTxt->Text){
						 MessageBox::Show("Password do not match", "Error");
						 passTxt->Clear();
						 confirmPassTxt->Clear();
						 return false;
					 }
					 /*if (pNumTxt->TextLength != 10){
						 MessageBox::Show("Phone Number Length should be 10");
						 return false;
					 }
					 if (rNumTxt->TextLength != 9){
						 MessageBox::Show("Roll Number Length should be 9");
							 return false;
					 }*/
					 for (int i = 0; i < pNumTxt->TextLength; i++)
					 {
						 if (pNumTxt->Text[i]>'9' || pNumTxt->Text[i] < '0')
						 {
							 MessageBox::Show("Phone Number should consist only digits 0-9","Wrong Details");
							 return false;
						 }
					 }
					 for (int i = 0; i < rNumTxt->TextLength; i++)
					 {
						 if (rNumTxt->Text[i]>'9' || rNumTxt->Text[i] < '0')
						 {
							 MessageBox::Show("Roll Number should consist only digits 0-9", "Wrong Details");
							 return false;
						 }
					 }
					 if (userTxt->Text->Trim() == ""){
						 MessageBox::Show("UserName can not be Empty", "Wrong Details");
						 return false;
					 }
					 if (nameTxt->Text->Trim() == ""){
						 MessageBox::Show("Name can not be Empty", "Wrong Details");
						 return false;
					 }
					 if (mailTxt->Text->Trim() == ""){
						 MessageBox::Show("Email Field can not be Empty", "Wrong Details");
						 return false;
					 }
					 if (branchCb->Text == ""){
						 MessageBox::Show("Please select a branch", "Wrong Details");
						 return false;
					 }
					 if (pNumTxt->Text->Trim() == "")
					 {
						 MessageBox::Show("Please enter Phone Number", "Wrong Details");
						 return false;
					 }
					 if (rNumTxt->Text->Trim() == "")
					 {
						 MessageBox::Show("Please enter Roll Number", "Wrong Details");
						 return false;
					 }
					 if ((textcaptcha->Text->Trim()) != captchaConf)
					 {
						 MessageBox::Show("Please enter Correct Captcha (Case Sensitive)", "Wrong Details");
						 resetcap();
						 return false;
					 }
					 str = nameTxt->Text;
					 String ^str1 = "";
					 for (int i = 0; i < str->Length; i++)
					 {
						 if (str[i] != ' ')
						 {
							 if (i>0 && str[i - 1] == ' ') str1 += " ";
							 str1 += str[i];
						 }
					 }
					 nameTxt->Text = str1;
					 
					 userTxt->Text = userTxt->Text->Trim();
					 nameTxt->Text = nameTxt->Text->Trim();
					 mailTxt->Text = mailTxt->Text->Trim();
					 pNumTxt->Text = pNumTxt->Text->Trim();
					 rNumTxt->Text = rNumTxt->Text->Trim();
					 return true;
		}

		private: System::Void studBtn_Click(System::Object^  sender, System::EventArgs^  e) {
					 OES^ Access = gcnew OES();
					 String^ des = "Student";
					 int check = 0;
					 if (memChkBox->Checked)
						 check = 1;
					 if (validate()){
							// MessageBox::Show(Convert::ToString(memChkBox->Checked));
							 String ^ PassSalt = MakeSalt(10);
							 String ^ PassHash = EncryptPassword(passTxt->Text, PassSalt);

							 Access->AddParam("@Username", userTxt->Text);
							 Access->AddParam("@Fullname", nameTxt->Text);
							 Access->AddParam("@PasswordHash", PassHash);
							 Access->AddParam("@PasswordSalt", PassSalt);
							 Access->AddParam("@Email", mailTxt->Text);
							 Access->AddParam("@Phoneno", pNumTxt->Text);
							 Access->AddParam("@Rollno", rNumTxt->Text);
							 Access->AddParam("@Branch", branchCb->Text);
							 Access->AddParam("@Designation", des);

							 //Access->ExecQuery("insert into [Users] ( [Username],[FullName],[PasswordHash],[PasswordSalt],[Email],[PhoneNo],[RollNo],[Branch],[Designation] ) Values ( @Username,@Fullname,@PasswordHash,@PasswordSalt,@Email,@PhoneNo,@RollNo,@Branch,@Designation)");// , "+check+" )");
							 Access->ExecQuery("insert into [Users] ( [Username],[FullName],[PasswordHash],[PasswordSalt],[Email],[PhoneNo],[RollNo],[Branch],[Designation],[IITG]) Values ( @Username,@Fullname,@PasswordHash,@PasswordSalt,@Email,@PhoneNo,@RollNo,@Branch,@Designation, "+check+" )");
							 		
						MessageBox::Show("Signup Successful", "Success");
						resetcap();
					 }
		}

private: System::Void pNumTxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 /*try{
				 if (pNumTxt->Text != "")
					int  SectNo = Convert::ToUInt64(pNumTxt->Text);
				
			 }
			 catch (Exception ^ ex){
				
				 MessageBox::Show("Please enter integer values in required fields.", "Error");
				 pNumTxt->Clear();
				 return;
			 }*/


}
private: System::Void rNumTxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 try{
				 if (rNumTxt->Text != "")
					 int  SectNo = Convert::ToInt32(rNumTxt->Text);

			 }
			 catch (Exception ^ ex){

				 MessageBox::Show("Please enter integer values in required fields.", "Error");
				 rNumTxt->Clear();
				 return;
			 }


}
private: System::Void signup_student_Load(System::Object^  sender, System::EventArgs^  e) {
			 resetcap();


}
		 Void resetcap()
		 {
			 CaptchaClass ^c = gcnew CaptchaClass(148, 50);
			 captchaConf = c->Text;
			 captcha->Image = c->Image;
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void reset_Click(System::Object^  sender, System::EventArgs^  e) {
			 resetcap();
}
};
}
