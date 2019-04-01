#pragma once

#include "Database.h"
#include <map>
#include <iostream>
#include <string>
#include <ctime>
#include "GlobalVar.h"
#include "ProfForm.h"
#include "AddQuestions.h"
#include"ProfForm.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;
using namespace Global_Var;

typedef System::Collections::Generic::Dictionary<System::String^, int> Map;

//typedef std::map<char, int> Map;
namespace Online_Exam {

	/// <summary>
	/// Summary for CreateExam
	/// </summary>
	public ref class CreateExam : public System::Windows::Forms::UserControl
	{
	public:
		Map gID;
		CreateExam()
		{

			start = gcnew array<System::String ^>{"2000-01-01 00:00:00", "2000-01-01 00:00:00", "2000-01-01 00:00:00", "2000-01-01 00:00:00", "2000-01-01 00:00:00", "2000-01-01 00:00:00"};
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public: Map gSel;
	public: array<System::String ^>^ start;
	private: System::Windows::Forms::Button^  btnCreate;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtExamLen;
	private: System::Windows::Forms::Button^  btnSlot;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txtNoQDB;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txtNoQAsk;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lblP;
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtPass;
	private: System::Windows::Forms::TextBox^  txtSesNo;
	private: System::Windows::Forms::TextBox^  txtSectWgt;
	private: System::Windows::Forms::TextBox^  txtSectNo;
	private: System::Windows::Forms::ComboBox^  cmbStr;
	private: System::Windows::Forms::DateTimePicker^  calStr;
	private: System::Windows::Forms::ListBox^  lstUnsel;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnRem;
	private: System::Windows::Forms::ListBox^  lstSel;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateExam()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblP = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->txtSesNo = (gcnew System::Windows::Forms::TextBox());
			this->txtSectWgt = (gcnew System::Windows::Forms::TextBox());
			this->txtSectNo = (gcnew System::Windows::Forms::TextBox());
			this->cmbStr = (gcnew System::Windows::Forms::ComboBox());
			this->calStr = (gcnew System::Windows::Forms::DateTimePicker());
			this->lstUnsel = (gcnew System::Windows::Forms::ListBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRem = (gcnew System::Windows::Forms::Button());
			this->lstSel = (gcnew System::Windows::Forms::ListBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtExamLen = (gcnew System::Windows::Forms::TextBox());
			this->btnSlot = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtNoQDB = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtNoQAsk = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(243, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Exam Details";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Test Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(543, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Selected Groups:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(186, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Number of Sections:";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(23, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 35);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Section Weightage (Hyphen Separated):";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(379, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Number of Sessions (Max 5):";
			this->label6->Click += gcnew System::EventHandler(this, &CreateExam::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(22, 334);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(151, 19);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Start Time of Sessions:";
			this->label7->Click += gcnew System::EventHandler(this, &CreateExam::label7_Click);
			// 
			// lblP
			// 
			this->lblP->AutoSize = true;
			this->lblP->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblP->Location = System::Drawing::Point(186, 127);
			this->lblP->Name = L"lblP";
			this->lblP->Size = System::Drawing::Size(126, 19);
			this->lblP->TabIndex = 8;
			this->lblP->Text = L"Pass Percentage:";
			// 
			// txtName
			// 
			this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(26, 85);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(135, 15);
			this->txtName->TabIndex = 9;
			this->txtName->TextChanged += gcnew System::EventHandler(this, &CreateExam::txtName_TextChanged);
			// 
			// txtPass
			// 
			this->txtPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPass->Location = System::Drawing::Point(189, 145);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(136, 15);
			this->txtPass->TabIndex = 11;
			// 
			// txtSesNo
			// 
			this->txtSesNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtSesNo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSesNo->Location = System::Drawing::Point(560, 219);
			this->txtSesNo->Name = L"txtSesNo";
			this->txtSesNo->Size = System::Drawing::Size(99, 15);
			this->txtSesNo->TabIndex = 14;
			this->txtSesNo->TextChanged += gcnew System::EventHandler(this, &CreateExam::txtSesNo_TextChanged);
			// 
			// txtSectWgt
			// 
			this->txtSectWgt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtSectWgt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSectWgt->Location = System::Drawing::Point(26, 145);
			this->txtSectWgt->Name = L"txtSectWgt";
			this->txtSectWgt->Size = System::Drawing::Size(135, 15);
			this->txtSectWgt->TabIndex = 15;
			// 
			// txtSectNo
			// 
			this->txtSectNo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtSectNo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSectNo->Location = System::Drawing::Point(189, 85);
			this->txtSectNo->Name = L"txtSectNo";
			this->txtSectNo->Size = System::Drawing::Size(135, 15);
			this->txtSectNo->TabIndex = 16;
			// 
			// cmbStr
			// 
			this->cmbStr->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbStr->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbStr->FormattingEnabled = true;
			this->cmbStr->Location = System::Drawing::Point(360, 329);
			this->cmbStr->Name = L"cmbStr";
			this->cmbStr->Size = System::Drawing::Size(136, 24);
			this->cmbStr->TabIndex = 18;
			this->cmbStr->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateExam::comboBox1_SelectedIndexChanged);
			// 
			// calStr
			// 
			this->calStr->CustomFormat = L"yyyy-MM-dd HH:mm:ss";
			this->calStr->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calStr->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->calStr->Location = System::Drawing::Point(193, 331);
			this->calStr->Name = L"calStr";
			this->calStr->Size = System::Drawing::Size(138, 22);
			this->calStr->TabIndex = 19;
			this->calStr->ValueChanged += gcnew System::EventHandler(this, &CreateExam::dateTimePicker1_ValueChanged);
			// 
			// lstUnsel
			// 
			this->lstUnsel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstUnsel->FormattingEnabled = true;
			this->lstUnsel->ItemHeight = 17;
			this->lstUnsel->Location = System::Drawing::Point(380, 93);
			this->lstUnsel->Name = L"lstUnsel";
			this->lstUnsel->Size = System::Drawing::Size(116, 106);
			this->lstUnsel->TabIndex = 24;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::White;
			this->btnAdd->Location = System::Drawing::Point(505, 106);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(30, 32);
			this->btnAdd->TabIndex = 25;
			this->btnAdd->Text = L"->";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CreateExam::btnAdd_Click);
			// 
			// btnRem
			// 
			this->btnRem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnRem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRem->ForeColor = System::Drawing::Color::White;
			this->btnRem->Location = System::Drawing::Point(505, 145);
			this->btnRem->Name = L"btnRem";
			this->btnRem->Size = System::Drawing::Size(30, 32);
			this->btnRem->TabIndex = 26;
			this->btnRem->Text = L"<-";
			this->btnRem->UseVisualStyleBackColor = false;
			this->btnRem->Click += gcnew System::EventHandler(this, &CreateExam::btnRem_Click);
			// 
			// lstSel
			// 
			this->lstSel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstSel->FormattingEnabled = true;
			this->lstSel->ItemHeight = 17;
			this->lstSel->Location = System::Drawing::Point(546, 93);
			this->lstSel->Name = L"lstSel";
			this->lstSel->Size = System::Drawing::Size(105, 106);
			this->lstSel->TabIndex = 27;
			// 
			// btnCreate
			// 
			this->btnCreate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnCreate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreate->ForeColor = System::Drawing::Color::White;
			this->btnCreate->Location = System::Drawing::Point(283, 384);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(120, 29);
			this->btnCreate->TabIndex = 28;
			this->btnCreate->Text = L"Add Questions";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &CreateExam::btnCreate_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(377, 257);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(169, 19);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Exam Length (minutes):";
			// 
			// txtExamLen
			// 
			this->txtExamLen->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtExamLen->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtExamLen->Location = System::Drawing::Point(560, 252);
			this->txtExamLen->Name = L"txtExamLen";
			this->txtExamLen->Size = System::Drawing::Size(99, 15);
			this->txtExamLen->TabIndex = 30;
			// 
			// btnSlot
			// 
			this->btnSlot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btnSlot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSlot->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSlot->ForeColor = System::Drawing::Color::White;
			this->btnSlot->Location = System::Drawing::Point(547, 331);
			this->btnSlot->Name = L"btnSlot";
			this->btnSlot->Size = System::Drawing::Size(73, 26);
			this->btnSlot->TabIndex = 31;
			this->btnSlot->Text = L"Add Slot";
			this->btnSlot->UseVisualStyleBackColor = false;
			this->btnSlot->Click += gcnew System::EventHandler(this, &CreateExam::btnSlot_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(377, 67);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(143, 19);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Unselected Groups:";
			// 
			// txtNoQDB
			// 
			this->txtNoQDB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtNoQDB->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNoQDB->Location = System::Drawing::Point(25, 211);
			this->txtNoQDB->Name = L"txtNoQDB";
			this->txtNoQDB->Size = System::Drawing::Size(299, 15);
			this->txtNoQDB->TabIndex = 34;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(23, 189);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(302, 25);
			this->label10->TabIndex = 33;
			this->label10->Text = L"No. of Questions per Section (Hyphen Separated):";
			// 
			// txtNoQAsk
			// 
			this->txtNoQAsk->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtNoQAsk->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNoQAsk->Location = System::Drawing::Point(26, 284);
			this->txtNoQAsk->Name = L"txtNoQAsk";
			this->txtNoQAsk->Size = System::Drawing::Size(299, 15);
			this->txtNoQAsk->TabIndex = 35;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(23, 256);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(348, 25);
			this->label11->TabIndex = 36;
			this->label11->Text = L"No. of Questions Asked per Section (Hyphen Separated):";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(26, 107);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(135, 1);
			this->panel2->TabIndex = 45;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(189, 107);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(135, 1);
			this->panel1->TabIndex = 46;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(190, 167);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(135, 1);
			this->panel3->TabIndex = 47;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(26, 167);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(135, 1);
			this->panel4->TabIndex = 47;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel5->Location = System::Drawing::Point(26, 232);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(299, 1);
			this->panel5->TabIndex = 48;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel6->Location = System::Drawing::Point(26, 306);
			this->panel6->Margin = System::Windows::Forms::Padding(2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(299, 1);
			this->panel6->TabIndex = 49;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel7->Location = System::Drawing::Point(561, 240);
			this->panel7->Margin = System::Windows::Forms::Padding(2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(99, 1);
			this->panel7->TabIndex = 50;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel8->Location = System::Drawing::Point(561, 273);
			this->panel8->Margin = System::Windows::Forms::Padding(2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(99, 1);
			this->panel8->TabIndex = 51;
			// 
			// CreateExam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtNoQAsk);
			this->Controls->Add(this->txtNoQDB);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnSlot);
			this->Controls->Add(this->txtExamLen);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->lstSel);
			this->Controls->Add(this->btnRem);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->lstUnsel);
			this->Controls->Add(this->calStr);
			this->Controls->Add(this->cmbStr);
			this->Controls->Add(this->txtSectNo);
			this->Controls->Add(this->txtSectWgt);
			this->Controls->Add(this->txtSesNo);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblP);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Name = L"CreateExam";
			this->Size = System::Drawing::Size(686, 432);
			this->Load += gcnew System::EventHandler(this, &CreateExam::CreateExam_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void txtSesNo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (txtSesNo->Text == ""){
					 btnSlot->Enabled = false;
					 cmbStr->Items->Clear();
					 return;
				 }
					 
				 try{
					 int num = Convert::ToInt32(txtSesNo->Text);

					 if (num >= 1 && num <= 5){
						 cmbStr->Items->Clear();
						 for (int i = 1; i <= num; i++){
							 cmbStr->Items->Add(i);
						 }
					 }
					 else{
						 MessageBox::Show("Enter number of sessions from 1 to 5!", "Error");
						 txtSesNo->Text = "";
						 btnSlot->Enabled = false;
						 cmbStr->Items->Clear();
						 return;
					 }

				 }
				 catch (Exception ^ex){
					 MessageBox::Show("Enter number of sessions from 1 to 5!", "Error");
					 txtSesNo->Text = "";
					 btnSlot->Enabled = false;
					 cmbStr->Items->Clear();
					 return;
				 }
				 Console::WriteLine("done");
				 btnSlot->Enabled = true;
				 cmbStr->SelectedIndex = 0;

	}
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void CreateExam_Load(System::Object^  sender, System::EventArgs^  e) {
				 btnSlot->Enabled = false;
				 txtName->Text = "";
				 txtPass->Text = "";
				 txtSectNo->Text = "";
				 txtSectWgt->Text = "";
				 txtSesNo->Text = "";
				 cmbStr->Items->Clear();
				 lstSel->Items->Clear();
				 lstUnsel->Items->Clear();
				 OES^ Access = gcnew OES();
				 Access->ExecQuery("SELECT GroupID, GroupName from Groups");
				 for (int i = 0; i<5; i++){
					 start[i] = "2000-01-01 00:00:00";
				 }

				 if (Access->RecordCount > 0){
					 for (int i = 0; i < Access->RecordCount; i++){
						 gID.Add(Convert::ToString(Access->DBDT->Rows[i]->default["GroupName"]), Convert::ToInt32(Access->DBDT->Rows[i]->default["GroupID"]));
						 //gSel.Add(Convert::ToString(Access->DBDT->Rows[i]["GroupName"]), 0);
						 lstUnsel->Items->Add(Convert::ToString(Access->DBDT->Rows[i]->default["GroupName"]));
					 }
				 }
	}

	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (lstUnsel->SelectedIndex == -1)
					 return;
				 String ^ selItemText = Convert::ToString(lstUnsel->SelectedItem);
				 int selItemIndex = lstUnsel->SelectedIndex;
				 lstSel->Items->Add(selItemText);
				 if (lstUnsel->Items->Count != 0){
					 lstUnsel->Items->RemoveAt(selItemIndex);
				 }
				 gSel[selItemText] = 1;
	}
	private: System::Void btnRem_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (lstSel->SelectedIndex == -1)
					 return;
				 String ^ selItemText = Convert::ToString(lstSel->SelectedItem);
				 int selItemIndex = lstSel->SelectedIndex;
				 lstUnsel->Items->Add(selItemText);
				 if (lstSel->Items->Count != 0){
					 lstSel->Items->RemoveAt(selItemIndex);
				 }
				 gSel[selItemText] = 0;
	}
	private: System::Void txtName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e) {
				 

				 if (txtExamLen->Text->Trim() == "" || txtName->Text->Trim() == "" || txtPass->Text->Trim() == "" || txtSectNo->Text->Trim() == "" || txtSectWgt->Text->Trim() == "" || txtSesNo->Text->Trim() == "" || txtNoQAsk->Text->Trim() == "" || txtNoQDB->Text->Trim() == ""){
					 MessageBox::Show("Please enter all fields.", "Error");
					return;
				 }
				 if (lstSel->Items->Count == 0){
					MessageBox::Show("Please select atleast one group.", "Error");
					return;
				 }
				 int no = Convert::ToInt32(cmbStr->SelectedItem);
				 for (int i = 0; i < no; i++){
					if (start[i] == "2000-01-01 00:00:00"){
						MessageBox::Show("Please add all starting session time slots.", "Error");
						return;
					}
				 }
				 int SectNo, ExamLen, Pass;
				 try{
					 SectNo = Convert::ToInt32(txtSectNo->Text);
					 ExamLen = Convert::ToUInt32(txtExamLen->Text);
					 Pass = Convert::ToUInt32(txtPass->Text);
					 if (Pass > 100){
						 MessageBox::Show("Please enter pass percentage less than 100.", "Error");
						 return;
					 }
				 }
				 catch (Exception ^ ex){
					 MessageBox::Show("Please enter integer values in required fields.", "Error");
					 return;
				 }

				 String ^ SectWgt = txtSectWgt->Text;
				 String ^ NoQDB = txtNoQDB->Text;
				 String ^ NoQAsk = txtNoQAsk->Text;
				 array<System::String ^>^ wgt = SectWgt->Split('-');
				 array<System::String ^>^ qDB = NoQDB->Split('-');
				 array<System::String ^>^ qAsk = NoQAsk->Split('-');
				 UInt32 MaxScore;
				 MaxScore = 0;
				 UInt32 SesNo = Convert::ToInt32(txtSesNo->Text);
				 if (wgt->Length == SectNo){
					 for (int i = 0; i<SectNo; i++){
						 try{
							 wgt[i] = wgt[i]->Trim();
							 qDB[i] = qDB[i]->Trim();
							 qAsk[i] = qAsk[i]->Trim();
							 Convert::ToUInt32(wgt[i]);
							 Convert::ToUInt32(qAsk[i]);
							 Convert::ToUInt32(qDB[i]);
							 if (Convert::ToUInt32(qAsk[i]) > Convert::ToUInt32(qDB[i]) / SesNo){
								 MessageBox::Show("Not enough questions to split between sessions", "Error");
								 return;
							 }
							 MaxScore += Convert::ToUInt32(qAsk[i])*Convert::ToUInt32(wgt[i]);
						 }
						 catch (Exception ^ex){
							 MessageBox::Show("Enter integer weights and number of questions:", "Error");
							 return;
						 }
					 }
				 }
				 else{
					 MessageBox::Show("Enter correct number of weights, questions", "Error");
					 return;
				 }
				 //Add condition to check Excel sheet is filled in
				 String ^ SelGrp = "";
				 for (int i = 0; i < lstSel->Items->Count; i++){
					 SelGrp = SelGrp + "-" + Convert::ToString(gID[Convert::ToString(lstSel->Items[i])]) + "-";
				 }
				 Int32 Isno = SectNo;
				 array<Int32>^ Iwgt = gcnew  array<Int32>(wgt->Length);
				 array<Int32>^ IqDB = gcnew array<Int32>(qDB->Length);
				 array<Int32>^ IqAsk = gcnew array<Int32>(qAsk->Length);
				 for (int i = 0; i < wgt->Length; i++)
					 Iwgt[i] = Convert::ToInt32(wgt[i]);
				 for (int i = 0; i < qDB->Length; i++)
					 IqDB[i] = Convert::ToInt32(qDB[i]);
				 for (int i = 0; i < qAsk->Length; i ++)
					 IqAsk[i] = Convert::ToInt32(qAsk[i]);
				 // TODO: clear contents
				 
				 AddQuestions ^aq = gcnew AddQuestions(Isno, IqDB, Iwgt, IqAsk, txtName->Text->Trim(), SelGrp, txtSectWgt->Text->Trim(), start[0], start[1], start[2], start[3], start[4], ExamLen.ToString(), MaxScore.ToString(), Pass.ToString(), SesNo.ToString());
				 aq->ShowDialog();
				 
				 
	}
	private: System::Void btnSlot_Click(System::Object^  sender, System::EventArgs^  e) {
				 DateTime dt = calStr->Value;
				 Console::WriteLine(dt.ToString());
				 Console::WriteLine(DateTime::Now);
				 if (dt < DateTime::Now){
					 MessageBox::Show("Exam cannot be set in the past", "Error");
					 return;
				 }
				 int no = Convert::ToInt32(cmbStr->SelectedItem);
				 //MessageBox::Show(calStr->Text);
				 if (start[no - 1] = "2000-01-01 00:00:00")
					 MessageBox::Show("Exam Slot for Session" + no.ToString() + " added at Time " + calStr->Text);
				 else
					 MessageBox::Show("Exam Slot for Session" + no.ToString() + " modified to Time " + calStr->Text);
				 start[no - 1] = Convert::ToString(calStr->Text);
				 //Console::WriteLine(start[no - 1]->ToString());		
	}
	};
}
