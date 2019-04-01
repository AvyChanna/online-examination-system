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
		array<Double> ^ avgMarks;
		array<Int32> ^ yourMarks;
		System::Windows::Forms::DataVisualization::Charting::Series^  Smax = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		System::Windows::Forms::DataVisualization::Charting::Series^  Smin = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		System::Windows::Forms::DataVisualization::Charting::Series^  Savg = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
	private: System::Windows::Forms::Label^  label1;


			 System::Windows::Forms::DataVisualization::Charting::Series^  Syour = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			 


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->barGraph = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barGraph))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(38, 71);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(840, 444);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(832, 415);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(832, 415);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// barGraph
			// 
			chartArea3->AxisX->MajorGrid->LineWidth = 0;
			chartArea3->AxisY->Title = L"Marks";
			chartArea3->Name = L"ChartArea1";
			this->barGraph->ChartAreas->Add(chartArea3);
			this->barGraph->Dock = System::Windows::Forms::DockStyle::Fill;
			legend3->Name = L"Legend1";
			this->barGraph->Legends->Add(legend3);
			this->barGraph->Location = System::Drawing::Point(15, 15);
			this->barGraph->Name = L"barGraph";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->barGraph->Series->Add(series3);
			this->barGraph->Size = System::Drawing::Size(600, 300);
			this->barGraph->TabIndex = 0;
			this->barGraph->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Section-wise Class Performance";
			// 
			// sectionAnalysis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"sectionAnalysis";
			this->Size = System::Drawing::Size(916, 532);
			this->Load += gcnew System::EventHandler(this, &sectionAnalysis::sectionAnalysis_Load);
			this->tabControl1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barGraph))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sectionAnalysis_Load(System::Object^  sender, System::EventArgs^  e) {
				 examInfo = gcnew OES();
				 examInfo->ExecQuery("SELECT NumSections, MaxSect, MinSect, AvgSect\
					 FROM  Exam\
					 WHERE(ExamCode = "+this->ExamCode+" )");

				 studentPerf = gcnew OES();
				 studentPerf->ExecQuery("SELECT SectionMarks, CorrectSect, IncorrectSect, UnattemptSect, ExamCode, Username "\
									"FROM  Performance "\
									"WHERE(ExamCode = " + this->ExamCode + " ) AND(Username = '" + this->username + "' );");

				 /* Read the Data */

				 tabControl1->Controls->Clear();
				 int numSect = static_cast<int>(Convert::ToInt32(examInfo->DBDT->Rows[0]->default["NumSections"])); 
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
				 yourMarks = gcnew array<Int32>(numSect);

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
				 //MessageBox::Show(studentPerf->RecordCount + " " + this->ExamCode + );
				 String ^y = studentPerf->DBDT->Rows[0]->default["SectionMarks"]->ToString()->Trim();
				 array<String^>^delimiters2 = { Environment::NewLine };
				 temp = y->Split(delimiters2, StringSplitOptions::RemoveEmptyEntries);
				 for (int i = 0; i < temp->Length; i++)
				 {
					 yourMarks[i] = Convert::ToInt32(temp[i]);
				 }

				 int selInd = 0;
				 this->barGraph->Series->Clear();

				 Smax->IsValueShownAsLabel = true;
				 Smax->LabelFormat = L"{N1}";
				 Smax->Name = L"Max Marks";
				 Smax->LabelBackColor = System::Drawing::Color::White;
				 Smax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 Smax["PixelPointWidth"] = "300";

				 Smin->IsValueShownAsLabel = true;
				 Smin->LabelFormat = L"{N1}";
				 Smin->Name = L"Min Marks";
				 Smin->LabelBackColor = System::Drawing::Color::White;
				 Smin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 Smin["PixelPointWidth"] = "300";

				 Savg->IsValueShownAsLabel = true;
				 Savg->LabelFormat = L"{N2}";
				 Savg->Name = L"Avg Marks";
				 Savg->LabelBackColor = System::Drawing::Color::White;
				 Savg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 Savg["PixelPointWidth"] = "300";

				 Syour->IsValueShownAsLabel = true;
				 Syour->LabelFormat = L"{N1}";
				 Syour->Name = L"Your Marks";
				 Syour->LabelBackColor = System::Drawing::Color::White;
				 Syour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 Syour["PixelPointWidth"] = "300";

				 this->barGraph->Series->Add(Smax);
				 this->barGraph->Series->Add(Smin);
				 this->barGraph->Series->Add(Savg);
				 this->barGraph->Series->Add(Syour);

				 Smax->Points->Clear();
				 Smin->Points->Clear();
				 Savg->Points->Clear();
				 Syour->Points->Clear();

				 Smax->Points->AddXY("", maxMarks[selInd]);
				 Smin->Points->AddXY("", minMarks[selInd]);
				 Savg->Points->AddXY("", avgMarks[selInd]);
				 Syour->Points->AddXY("", yourMarks[selInd]);

				 tabControl1->TabPages[selInd]->Controls->Add(this->barGraph);
				 

	}

	private: System::Void TabSelect(System::Object^ sender, EventArgs^ e) {
				 int selInd = static_cast<int>(static_cast<TabControl^>(sender)->SelectedIndex);
				 
				 this->barGraph->Series->Clear();
				 this->barGraph->Series->Add(Smax);
				 this->barGraph->Series->Add(Smin);
				 this->barGraph->Series->Add(Savg);
				 this->barGraph->Series->Add(Syour);
				 Smax->Points->Clear();
				 Smin->Points->Clear();
				 Savg->Points->Clear();
				 Syour->Points->Clear();
				 Smax->Points->AddXY("", maxMarks[selInd]);
				 Smin->Points->AddXY("", minMarks[selInd]);
				 Savg->Points->AddXY("", avgMarks[selInd]);
				 Syour->Points->AddXY("", yourMarks[selInd]);

				 tabControl1->TabPages[selInd]->Controls->Add(this->barGraph);


	}
				 
};
}
