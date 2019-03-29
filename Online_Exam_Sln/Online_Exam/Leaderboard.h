#pragma once
#include "Database.h"

namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Database;

	/// <summary>
	/// Summary for Leaderboard
	/// </summary>
	public ref class Leaderboard : public System::Windows::Forms::Form
	{
	public:
		OES ^ Access;
		DataSet ^dsa;
		String^ examCode;
		Leaderboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Leaderboard(String^ examCode){
			InitializeComponent();
			this->examCode = examCode;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Leaderboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  standings;
	protected:

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
			this->standings = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->standings))->BeginInit();
			this->SuspendLayout();
			// 
			// standings
			// 
			this->standings->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->standings->Location = System::Drawing::Point(28, 96);
			this->standings->Name = L"standings";
			this->standings->ReadOnly = true;
			this->standings->RowTemplate->Height = 24;
			this->standings->Size = System::Drawing::Size(853, 565);
			this->standings->TabIndex = 0;
			// 
			// Leaderboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(928, 736);
			this->Controls->Add(this->standings);
			this->Name = L"Leaderboard";
			this->Text = L"Leaderboard";
			this->Load += gcnew System::EventHandler(this, &Leaderboard::Leaderboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->standings))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Leaderboard_Load(System::Object^  sender, System::EventArgs^  e) {
				 Access = gcnew OES();
				 Access->ExecQuery("SELECT Performance.Username, Performance.TotalScore\
					 FROM Performance\
					 WHERE(((Performance.ExamCode) = '"+this->examCode+"'))\
					 ORDER BY Performance.TotalScore DESC; ");
				 dsa = gcnew DataSet();
				 Access->DBDA->Fill(dsa, "Users");
				 standings->DataSource = dsa->Tables[0];
	}
	};
}
