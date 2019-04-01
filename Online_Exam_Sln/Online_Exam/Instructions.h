#pragma once
#include "ExamPaper.h"
namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Instructions
	/// </summary>
	public ref class Instructions : public System::Windows::Forms::Form
	{
	public:
		Instructions(void)
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
		~Instructions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RichTextBox^  txtInstruction;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Instructions::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtInstruction = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(595, 743);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(263, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Proceed to the Exam";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Instructions::button1_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(480, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(411, 65);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Instructions For the Exam";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(232, 84);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(902, 417);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// txtInstruction
			// 
			this->txtInstruction->CausesValidation = false;
			this->txtInstruction->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txtInstruction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInstruction->Location = System::Drawing::Point(109, 529);
			this->txtInstruction->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtInstruction->Name = L"txtInstruction";
			this->txtInstruction->ReadOnly = true;
			this->txtInstruction->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->txtInstruction->Size = System::Drawing::Size(1153, 206);
			this->txtInstruction->TabIndex = 4;
			this->txtInstruction->Text = L"";
			// 
			// Instructions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(1344, 848);
			this->Controls->Add(this->txtInstruction);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Instructions";
			this->Text = L"Instructions";
			this->Load += gcnew System::EventHandler(this, &Instructions::Instructions_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Instructions_Load(System::Object^  sender, System::EventArgs^  e) {
				 //button1->ForeColor = Color::Red;
				 String ^ str = "";
				 str += "1. LEGEND is mentioned in the exam paper indicating the status of the question, if it has been Visited, Answered or Marked for review";
				 str += Environment::NewLine;
				 str += Environment::NewLine;
				 str += "2. The Area below the LEGEND would indicate the list of questions in the current section. Click on any question to view the question";
				 str += Environment::NewLine;
				 str += Environment::NewLine;
				 str += "3. The Panel on the top right corner indicate the marking scheme for the paper on ht elines of which your score would be calculated";
				 str += Environment::NewLine;
				 str += Environment::NewLine;
				 str += "4. The area below Question Attempted shows all the sections of the paper. Click on any of them to switch ot the setion. ";
				 str += Environment::NewLine;
				 str += Environment::NewLine;
				 str += "5. Always click on the SAVE RESPONSE button to save your answer. Failing to do so would lead to the response not being saved and you will not be awarded marks for the question";
				 str += Environment::NewLine;
				 str += Environment::NewLine;
				 str += "6. You can use PREVIOUS and NEXT buttons to navigate between the questions of the section. Also use CLEAR ANSWER button to clear out your selected choices";
				 str += Environment::NewLine;
				 str += Environment::NewLine;
				 str += "7. You can see the time remaining in the exam in the area below exam name and the number of questions attempted in the area below it.";
				 str += Environment::NewLine;
				 str += Environment::NewLine;
				 str += "8. Use MARK REVIEW feature to mark a question if you want to review it later.";
				 str += Environment::NewLine;
				 str += Environment::NewLine;
				 str += "9. You can end the test by clicking on END TEST button. This would lead to end of the exam for you and your result would be generated.";

				 txtInstruction->Text = str;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
				 /*Application::Run(gcnew ExamPaper(11));*/
	}
};
}
