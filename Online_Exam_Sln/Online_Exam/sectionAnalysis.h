#pragma once
#include "Database.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;


namespace Online_Exam {

	/// <summary>
	/// Summary for sectionAnalysis
	/// </summary>
	public ref class sectionAnalysis : public System::Windows::Forms::UserControl
	{
	public:
		sectionAnalysis(String ^ examCode, String ^ userName)
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
		~sectionAnalysis()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		OES ^ examInfo;
		OES ^ studentPerf;
		String ^ ExamCode;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  barGraph;
		String ^ username;
		array<Int32> ^ maxMarks;
		array<Int32> ^ minMarks;
	private: System::Windows::Forms::Button^  button1;
			 array<Double> ^ avgMarks;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->barGraph = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barGraph))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(25, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1260, 693);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1244, 646);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1244, 646);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// barGraph
			// 
			chartArea1->Name = L"ChartArea1";
			this->barGraph->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->barGraph->Legends->Add(legend1);
			this->barGraph->Location = System::Drawing::Point(159, 92);
			this->barGraph->Name = L"barGraph";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->barGraph->Series->Add(series1);
			this->barGraph->Size = System::Drawing::Size(820, 423);
			this->barGraph->TabIndex = 0;
			this->barGraph->Text = L"chart1";
			this->barGraph->UseWaitCursor = true;
			this->barGraph->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(698, 338);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// sectionAnalysis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tabControl1);
			this->Name = L"sectionAnalysis";
			this->Size = System::Drawing::Size(1322, 725);
			this->Load += gcnew System::EventHandler(this, &sectionAnalysis::sectionAnalysis_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barGraph))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void sectionAnalysis_Load(System::Object^  sender, System::EventArgs^  e) {
				 examInfo = gcnew OES();
				 examInfo->ExecQuery("SELECT NumSections, MaxSect, MinSect, AvgSect\
					 FROM  Exam\
					 WHERE(ExamCode = "+this->ExamCode+" )");

				 studentPerf = gcnew OES();
				 studentPerf->ExecQuery("SELECT SectionMarks, CorrectSect, IncorrectSect, UnattemptSect, ExamCode, Username\
					 FROM  Performance\
					 WHERE(ExamCode = "+this->ExamCode+" ) AND(Username = "+this->username+" )");

				 /* Read the Data */

				 tabControl1->Controls->Clear();
				 int numSect = Convert::ToInt32(examInfo->DBDT->Rows[0]->default["NumSections"]); 
				 for (int i = 0; i < numSect  ; i++)
				 {
					 TabPage^ Section = gcnew TabPage();
					 Section->Text = "Section" + (i + 1).ToString();
					 tabControl1->Controls->Add(Section);
				 }
				 tabControl1->SelectedIndexChanged += gcnew EventHandler(this, &sectionAnalysis::TabSelect);
				 tabControl1->SelectedIndex = 0;
				 maxMarks = gcnew array<Int32>(numSect); 
				 minMarks = gcnew array<Int32>(numSect);
				 avgMarks = gcnew array<Double>(numSect);

				 String ^ x = examInfo->DBDT->Rows[0]->default["MaxSect"]->ToString();
				 array<String^>^delimiters = { "," };

				 array<String^> ^ temp = x->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);

				 for (int i = 0; i < temp->Length; i++)
				 {
					 maxMarks[i] = Convert::ToInt32(temp[i]);
				 }

				 x = examInfo->DBDT->Rows[0]->default["MinSect"]->ToString();
				 temp = x->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);

				 for (int i = 0; i < temp->Length; i++)
				 {
					 minMarks[i] = Convert::ToInt32(temp[i]);
				 }

				 x = examInfo->DBDT->Rows[0]->default["AvgSect"]->ToString();
				 temp = x->Split(delimiters, StringSplitOptions::RemoveEmptyEntries);

				 for (int i = 0; i < temp->Length; i++)
				 {
					 avgMarks[i] = Convert::ToDouble(temp[i]);
				 }

	}

	private: System::Void TabSelect(System::Object^ sender, EventArgs^ e) {
				 int selInd = static_cast<int>(static_cast<TabControl^>(sender)->SelectedIndex);
				 this->barGraph->Series->Clear();
				 this->barGraph->Series->Add("Max Marks");
				 this->barGraph->Series->Add("Avg Marks");
				 this->barGraph->Series->Add("Min Marks");
				 this->barGraph->Series["Max Marks"]->Points->AddXY("Max Marks", maxMarks[selInd]);
				 this->barGraph->Series["Avg Marks"]->Points->AddXY("Avg Marks", avgMarks[selInd]);
				 this->barGraph->Series["Min Marks"]->Points->AddXY("Min Marks", minMarks[selInd]);
				 tabControl1->TabPages[selInd]->Controls->Add(this->barGraph);
				 this->barGraph->Show();

	}
				 
};
}
