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
			 String ^ username;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->analysisPanel = (gcnew System::Windows::Forms::Panel());
			this->btnSectionAnalysis = (gcnew System::Windows::Forms::Button());
			this->btnPieChart = (gcnew System::Windows::Forms::Button());
			this->btnQbyQ = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// analysisPanel
			// 
			this->analysisPanel->Location = System::Drawing::Point(155, 0);
			this->analysisPanel->Margin = System::Windows::Forms::Padding(2);
			this->analysisPanel->Name = L"analysisPanel";
			this->analysisPanel->Size = System::Drawing::Size(686, 432);
			this->analysisPanel->TabIndex = 0;
			// 
			// btnSectionAnalysis
			// 
			this->btnSectionAnalysis->Location = System::Drawing::Point(0, 24);
			this->btnSectionAnalysis->Margin = System::Windows::Forms::Padding(2);
			this->btnSectionAnalysis->Name = L"btnSectionAnalysis";
			this->btnSectionAnalysis->Size = System::Drawing::Size(152, 37);
			this->btnSectionAnalysis->TabIndex = 1;
			this->btnSectionAnalysis->Text = L"Section Wise Analysis";
			this->btnSectionAnalysis->UseVisualStyleBackColor = true;
			this->btnSectionAnalysis->Click += gcnew System::EventHandler(this, &charts::btnSectionAnalysis_Click);
			// 
			// btnPieChart
			// 
			this->btnPieChart->Location = System::Drawing::Point(0, 87);
			this->btnPieChart->Margin = System::Windows::Forms::Padding(2);
			this->btnPieChart->Name = L"btnPieChart";
			this->btnPieChart->Size = System::Drawing::Size(152, 37);
			this->btnPieChart->TabIndex = 2;
			this->btnPieChart->Text = L"Bar Chart";
			this->btnPieChart->UseVisualStyleBackColor = true;
			this->btnPieChart->Click += gcnew System::EventHandler(this, &charts::btnPieChart_Click);
			// 
			// btnQbyQ
			// 
			this->btnQbyQ->Location = System::Drawing::Point(0, 151);
			this->btnQbyQ->Margin = System::Windows::Forms::Padding(2);
			this->btnQbyQ->Name = L"btnQbyQ";
			this->btnQbyQ->Size = System::Drawing::Size(151, 37);
			this->btnQbyQ->TabIndex = 3;
			this->btnQbyQ->Text = L"Question by Question Analysis";
			this->btnQbyQ->UseVisualStyleBackColor = true;
			this->btnQbyQ->Click += gcnew System::EventHandler(this, &charts::btnQbyQ_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 213);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 37);
			this->button1->TabIndex = 4;
			this->button1->Tag = L"";
			this->button1->Text = L"Standings";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &charts::button1_Click);
			// 
			// charts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 432);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnQbyQ);
			this->Controls->Add(this->btnPieChart);
			this->Controls->Add(this->btnSectionAnalysis);
			this->Controls->Add(this->analysisPanel);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"charts";
			this->Text = L"charts";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnSectionAnalysis_Click(System::Object^  sender, System::EventArgs^  e) {
				 analysisPanel->Controls->Clear();
				 sectionAnalysis ^ usr = gcnew sectionAnalysis(this->ExamCode, this->username);
				 analysisPanel->Controls->Add(usr);
	}
	private: System::Void btnPieChart_Click(System::Object^  sender, System::EventArgs^  e) {
				 analysisPanel->Controls->Clear();
				 PieChartAnalysis ^ usr = gcnew PieChartAnalysis(this->ExamCode, this->username);
				 analysisPanel->Controls->Add(usr);
	}
	private: System::Void btnQbyQ_Click(System::Object^  sender, System::EventArgs^  e) {
				 analysisPanel->Controls->Clear();
				 displayAnswer ^ usr = gcnew displayAnswer(static_cast<int>(Convert::ToInt32(this->ExamCode)));
				 analysisPanel->Controls->Add(usr);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 analysisPanel->Controls->Clear();
			 Leaderboard ^ usr = gcnew Leaderboard(this->ExamCode);
			 analysisPanel->Controls->Add(usr);
}
};
}
