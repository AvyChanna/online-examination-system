#pragma once
#include "Leaderboard.h"

namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Standings
	/// </summary>
	public ref class Standings : public System::Windows::Forms::Form
	{
	private: String^ examCode;
	public:
		Standings(String ^examCode)
		{
			this->examCode = examCode;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Standings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(7, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(915, 532);
			this->panel1->TabIndex = 0;
			// 
			// Standings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(928, 553);
			this->Controls->Add(this->panel1);
			this->Name = L"Standings";
			this->Text = L"Standings";
			this->Load += gcnew System::EventHandler(this, &Standings::Standings_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Standings_Load(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Controls->Clear();
				 Leaderboard ^ usr = gcnew Leaderboard(this->examCode);
				 panel1->Controls->Add(usr);
	}
	};
}
