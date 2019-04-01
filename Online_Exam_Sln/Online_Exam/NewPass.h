#pragma once
#include"Database.h"
#include"Encryption.h"
namespace Online_Exam {

using namespace System;
using namespace System::ComponentModel;
using namespace Database;
using namespace Encryption;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Summary for NewPass
/// </summary>
public ref class NewPass : public System::Windows::Forms::Form
{
	public:
		String ^Username;
		NewPass(String ^ u)
		{
			InitializeComponent();
			Username = "";
			Username = u;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewPass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			//
			// textBox1
			//
			this->textBox1->Location = System::Drawing::Point(131, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 0;
			//
			// textBox2
			//
			this->textBox2->Location = System::Drawing::Point(131, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 20);
			this->textBox2->TabIndex = 0;
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Since you have used a token, you need to reset your password.";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"New Password";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Confirm Password";
			//
			// button1
			//
			this->button1->Location = System::Drawing::Point(131, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewPass::button1_Click);
			//
			// NewPass
			//
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(332, 171);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"NewPass";
			this->Text = L"NewPass";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e){
			if (textBox1->Text != textBox2->Text)
				MessageBox::Show("Passwords do not match");
			String ^PassSalt = MakeSalt(10);
			String ^PassHash = EncryptPassword(textBox1->Text, PassSalt);
			OES ^Access = gcnew OES();
			Access->AddParam("@PassHash", PassHash);
			Access->AddParam("@PassSalt", PassSalt);
			Access->AddParam("@Username", Username);
			Access->ExecQuery("Update Users set PasswordHash = @PassHash , PasswordSalt = @PassSalt where Username = @Username");
			Close();
		}
};
}
