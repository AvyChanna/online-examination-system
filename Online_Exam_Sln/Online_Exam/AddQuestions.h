#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Online_Exam {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  SectionNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Question;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NoOfOptions;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Option1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Option2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Option3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Option4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Option5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Option6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Option7;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->SectionNo = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Question = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NoOfOptions = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->SectionNo,
					this->Question, this->NoOfOptions, this->Option1, this->Option2, this->Option3, this->Option4, this->Option5, this->Option6,
					this->Option7
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(907, 404);
			this->dataGridView1->TabIndex = 0;
			// 
			// SectionNo
			// 
			this->SectionNo->HeaderText = L"Section Number";
			this->SectionNo->Name = L"SectionNo";
			// 
			// Question
			// 
			this->Question->HeaderText = L"Question Statement";
			this->Question->Name = L"Question";
			this->Question->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Question->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// NoOfOptions
			// 
			this->NoOfOptions->HeaderText = L"Number of options";
			this->NoOfOptions->Name = L"NoOfOptions";
			// 
			// Option1
			// 
			this->Option1->HeaderText = L"Option1";
			this->Option1->Name = L"Option1";
			// 
			// Option2
			// 
			this->Option2->HeaderText = L"Option2";
			this->Option2->Name = L"Option2";
			// 
			// Option3
			// 
			this->Option3->HeaderText = L"Option3";
			this->Option3->Name = L"Option3";
			// 
			// Option4
			// 
			this->Option4->HeaderText = L"Option4";
			this->Option4->Name = L"Option4";
			// 
			// Option5
			// 
			this->Option5->HeaderText = L"Option5";
			this->Option5->Name = L"Option5";
			// 
			// Option6
			// 
			this->Option6->HeaderText = L"Option6";
			this->Option6->Name = L"Option6";
			// 
			// Option7
			// 
			this->Option7->HeaderText = L"Option7";
			this->Option7->Name = L"Option7";
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(907, 404);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

};
}
