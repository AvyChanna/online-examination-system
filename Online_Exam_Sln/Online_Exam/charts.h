#pragma once
#include "sectionAnalysis.h"

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
			this->SuspendLayout();
			// 
			// analysisPanel
			// 
			this->analysisPanel->Location = System::Drawing::Point(331, 74);
			this->analysisPanel->Name = L"analysisPanel";
			this->analysisPanel->Size = System::Drawing::Size(1322, 725);
			this->analysisPanel->TabIndex = 0;
			// 
			// btnSectionAnalysis
			// 
			this->btnSectionAnalysis->Location = System::Drawing::Point(44, 74);
			this->btnSectionAnalysis->Name = L"btnSectionAnalysis";
			this->btnSectionAnalysis->Size = System::Drawing::Size(256, 71);
			this->btnSectionAnalysis->TabIndex = 1;
			this->btnSectionAnalysis->Text = L"Section Analysis";
			this->btnSectionAnalysis->UseVisualStyleBackColor = true;
			this->btnSectionAnalysis->Click += gcnew System::EventHandler(this, &charts::btnSectionAnalysis_Click);
			// 
			// charts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1682, 831);
			this->Controls->Add(this->btnSectionAnalysis);
			this->Controls->Add(this->analysisPanel);
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
	};
}
