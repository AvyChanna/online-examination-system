#pragma once
#include "sectionAnalysis.h"
#include "PieChartAnalysis.h"

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
			this->SuspendLayout();
			// 
			// analysisPanel
			// 
			this->analysisPanel->Location = System::Drawing::Point(186, 47);
			this->analysisPanel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->analysisPanel->Name = L"analysisPanel";
			this->analysisPanel->Size = System::Drawing::Size(916, 464);
			this->analysisPanel->TabIndex = 0;
			// 
			// btnSectionAnalysis
			// 
			this->btnSectionAnalysis->Location = System::Drawing::Point(11, 47);
			this->btnSectionAnalysis->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSectionAnalysis->Name = L"btnSectionAnalysis";
			this->btnSectionAnalysis->Size = System::Drawing::Size(171, 45);
			this->btnSectionAnalysis->TabIndex = 1;
			this->btnSectionAnalysis->Text = L"Section Analysis";
			this->btnSectionAnalysis->UseVisualStyleBackColor = true;
			this->btnSectionAnalysis->Click += gcnew System::EventHandler(this, &charts::btnSectionAnalysis_Click);
			// 
			// btnPieChart
			// 
			this->btnPieChart->Location = System::Drawing::Point(22, 139);
			this->btnPieChart->Name = L"btnPieChart";
			this->btnPieChart->Size = System::Drawing::Size(159, 56);
			this->btnPieChart->TabIndex = 2;
			this->btnPieChart->Text = L"button1";
			this->btnPieChart->UseVisualStyleBackColor = true;
			this->btnPieChart->Click += gcnew System::EventHandler(this, &charts::btnPieChart_Click);
			// 
			// charts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 532);
			this->Controls->Add(this->btnPieChart);
			this->Controls->Add(this->btnSectionAnalysis);
			this->Controls->Add(this->analysisPanel);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
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
	};
}
