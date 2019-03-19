#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Online_Exam {

	/// <summary>
	/// Summary for CreateExam
	/// </summary>
	public ref class CreateExam : public System::Windows::Forms::UserControl
	{
	public:
		CreateExam(void)
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
		~CreateExam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lblP;


	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::TextBox^  txtPass;



	private: System::Windows::Forms::TextBox^  txtSesNo;

	private: System::Windows::Forms::TextBox^  txtSectWgt;

	private: System::Windows::Forms::TextBox^  txtSectNo;



	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblP = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->txtSesNo = (gcnew System::Windows::Forms::TextBox());
			this->txtSectWgt = (gcnew System::Windows::Forms::TextBox());
			this->txtSectNo = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(237, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Exam Details";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Test Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(400, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Group Names:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(86, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Number of Sections";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(86, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 26);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Section Weightage (Comma Separated):";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(86, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 29);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Number of Sessions (Max 5):";
			this->label6->Click += gcnew System::EventHandler(this, &CreateExam::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(86, 240);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Start Time of Sessions:";
			this->label7->Click += gcnew System::EventHandler(this, &CreateExam::label7_Click);
			// 
			// lblP
			// 
			this->lblP->AutoSize = true;
			this->lblP->Location = System::Drawing::Point(85, 178);
			this->lblP->Name = L"lblP";
			this->lblP->Size = System::Drawing::Size(91, 13);
			this->lblP->TabIndex = 8;
			this->lblP->Text = L"Pass Percentage:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(241, 78);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 20);
			this->txtName->TabIndex = 9;
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(241, 175);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(100, 20);
			this->txtPass->TabIndex = 11;
			// 
			// txtSesNo
			// 
			this->txtSesNo->Location = System::Drawing::Point(241, 204);
			this->txtSesNo->Name = L"txtSesNo";
			this->txtSesNo->Size = System::Drawing::Size(100, 20);
			this->txtSesNo->TabIndex = 14;
			this->txtSesNo->TextChanged += gcnew System::EventHandler(this, &CreateExam::txtSesNo_TextChanged);
			// 
			// txtSectWgt
			// 
			this->txtSectWgt->Location = System::Drawing::Point(241, 143);
			this->txtSectWgt->Name = L"txtSectWgt";
			this->txtSectWgt->Size = System::Drawing::Size(100, 20);
			this->txtSectWgt->TabIndex = 15;
			// 
			// txtSectNo
			// 
			this->txtSectNo->Location = System::Drawing::Point(241, 110);
			this->txtSectNo->Name = L"txtSectNo";
			this->txtSectNo->Size = System::Drawing::Size(100, 20);
			this->txtSectNo->TabIndex = 16;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(241, 236);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(61, 21);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateExam::comboBox1_SelectedIndexChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(325, 237);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 19;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &CreateExam::dateTimePicker1_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(215, 302);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Add Questions";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(357, 302);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Create Test";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(495, 78);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(120, 124);
			this->checkedListBox1->TabIndex = 23;
			// 
			// CreateExam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->txtSectNo);
			this->Controls->Add(this->txtSectWgt);
			this->Controls->Add(this->txtSesNo);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblP);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CreateExam";
			this->Size = System::Drawing::Size(677, 344);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void txtSesNo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
