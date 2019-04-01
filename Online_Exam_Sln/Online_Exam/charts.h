#pragma once
#include "sectionAnalysis.h"
#include "PieChartAnalysis.h"
#include "displayAnswer.h"
#include "Leaderboard.h"


namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for charts
	/// </summary>
	public ref class charts : public System::Windows::Forms::Form
	{
	public:
		charts(String ^ examCode, String ^ userName)
		{
			this->ExamCode = examCode;
			this->username = userName;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~charts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  analysisPanel;
	protected:

	private: System::Windows::Forms::Button^  btnSectionAnalysis;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		String ^ ExamCode;
	private: System::Windows::Forms::Button^  btnPieChart;
	private: System::Windows::Forms::Button^  btnQbyQ;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
			 String ^ username;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(charts::typeid));
			this->analysisPanel = (gcnew System::Windows::Forms::Panel());
			this->btnSectionAnalysis = (gcnew System::Windows::Forms::Button());
			this->btnPieChart = (gcnew System::Windows::Forms::Button());
			this->btnQbyQ = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// analysisPanel
			// 
			this->analysisPanel->BackColor = System::Drawing::Color::White;
			this->analysisPanel->Location = System::Drawing::Point(206, 0);
			this->analysisPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->analysisPanel->Name = L"analysisPanel";
			this->analysisPanel->Size = System::Drawing::Size(916, 532);
			this->analysisPanel->TabIndex = 0;
			// 
			// btnSectionAnalysis
			// 
			this->btnSectionAnalysis->FlatAppearance->BorderSize = 0;
			this->btnSectionAnalysis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSectionAnalysis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSectionAnalysis->ForeColor = System::Drawing::Color::White;
			this->btnSectionAnalysis->Location = System::Drawing::Point(11, 139);
			this->btnSectionAnalysis->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSectionAnalysis->Name = L"btnSectionAnalysis";
			this->btnSectionAnalysis->Size = System::Drawing::Size(179, 46);
			this->btnSectionAnalysis->TabIndex = 1;
			this->btnSectionAnalysis->Text = L"Section Wise Analysis";
			this->btnSectionAnalysis->UseVisualStyleBackColor = true;
			this->btnSectionAnalysis->Click += gcnew System::EventHandler(this, &charts::btnSectionAnalysis_Click);
			this->btnSectionAnalysis->MouseLeave += gcnew System::EventHandler(this, &charts::btnSectionAnalysis_MouseLeave);
			this->btnSectionAnalysis->MouseHover += gcnew System::EventHandler(this, &charts::btnSectionAnalysis_MouseHover);
			// 
			// btnPieChart
			// 
			this->btnPieChart->FlatAppearance->BorderSize = 0;
			this->btnPieChart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPieChart->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPieChart->ForeColor = System::Drawing::Color::White;
			this->btnPieChart->Location = System::Drawing::Point(11, 216);
			this->btnPieChart->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPieChart->Name = L"btnPieChart";
			this->btnPieChart->Size = System::Drawing::Size(179, 46);
			this->btnPieChart->TabIndex = 2;
			this->btnPieChart->Text = L"Pie Chart";
			this->btnPieChart->UseVisualStyleBackColor = true;
			this->btnPieChart->Click += gcnew System::EventHandler(this, &charts::btnPieChart_Click);
			this->btnPieChart->MouseLeave += gcnew System::EventHandler(this, &charts::btnPieChart_MouseLeave);
			this->btnPieChart->MouseHover += gcnew System::EventHandler(this, &charts::btnPieChart_MouseHover);
			// 
			// btnQbyQ
			// 
			this->btnQbyQ->FlatAppearance->BorderSize = 0;
			this->btnQbyQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQbyQ->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnQbyQ->ForeColor = System::Drawing::Color::White;
			this->btnQbyQ->Location = System::Drawing::Point(11, 295);
			this->btnQbyQ->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnQbyQ->Name = L"btnQbyQ";
			this->btnQbyQ->Size = System::Drawing::Size(177, 46);
			this->btnQbyQ->TabIndex = 3;
			this->btnQbyQ->Text = L"Question by Question Analysis";
			this->btnQbyQ->UseVisualStyleBackColor = true;
			this->btnQbyQ->Click += gcnew System::EventHandler(this, &charts::btnQbyQ_Click);
			this->btnQbyQ->MouseLeave += gcnew System::EventHandler(this, &charts::btnQbyQ_MouseLeave);
			this->btnQbyQ->MouseHover += gcnew System::EventHandler(this, &charts::btnQbyQ_MouseHover);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(11, 371);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 46);
			this->button1->TabIndex = 4;
			this->button1->Tag = L"";
			this->button1->Text = L"Standings";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &charts::button1_Click);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &charts::button1_MouseLeave);
			this->button1->MouseHover += gcnew System::EventHandler(this, &charts::button1_MouseHover);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(67, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(60, 57);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->btnSectionAnalysis);
			this->panel1->Controls->Add(this->btnPieChart);
			this->panel1->Controls->Add(this->btnQbyQ);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 532);
			this->panel1->TabIndex = 14;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(67, 32);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 57);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel2->Location = System::Drawing::Point(197, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(10, 534);
			this->panel2->TabIndex = 15;
			// 
			// charts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1121, 532);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->analysisPanel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"charts";
			this->Text = L"charts";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnSectionAnalysis_Click(System::Object^  sender, System::EventArgs^  e) {
				 analysisPanel->Controls->Clear();
				 sectionAnalysis ^ usr = gcnew sectionAnalysis(this->ExamCode, this->username);
				 analysisPanel->Controls->Add(usr);
				 btnSectionAnalysis->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				 btnPieChart->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnQbyQ->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 button1->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 
	}
	private: System::Void btnPieChart_Click(System::Object^  sender, System::EventArgs^  e) {
				 analysisPanel->Controls->Clear();
				 PieChartAnalysis ^ usr = gcnew PieChartAnalysis(this->ExamCode, this->username);
				 analysisPanel->Controls->Add(usr);
				 btnSectionAnalysis->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnPieChart->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				 btnQbyQ->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 button1->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
	}
	private: System::Void btnQbyQ_Click(System::Object^  sender, System::EventArgs^  e) {
				 analysisPanel->Controls->Clear();
				 displayAnswer ^ usr = gcnew displayAnswer(static_cast<int>(Convert::ToInt32(this->ExamCode)));
				 analysisPanel->Controls->Add(usr);
				 btnSectionAnalysis->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnPieChart->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
				 btnQbyQ->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
				 button1->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 analysisPanel->Controls->Clear();
			 Leaderboard ^ usr = gcnew Leaderboard(this->ExamCode);
			 analysisPanel->Controls->Add(usr);
			 btnSectionAnalysis->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnPieChart->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 btnQbyQ->BackColor = System::Drawing::Color::FromArgb(56, 60, 72);
			 button1->BackColor = System::Drawing::Color::FromArgb(229, 178, 11);
}

private: System::Void btnSectionAnalysis_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnSectionAnalysis->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnSectionAnalysis_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnSectionAnalysis->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}

private: System::Void button1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 button1->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void button1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}

private: System::Void btnQbyQ_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			  btnQbyQ->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnQbyQ_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnQbyQ->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}

private: System::Void btnPieChart_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btnPieChart->ForeColor = System::Drawing::Color::FromArgb(229, 178, 11);
}
private: System::Void btnPieChart_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btnPieChart->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
}

};
}
