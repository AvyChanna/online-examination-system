#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Online_Exam {

	/// <summary>
	/// Summary for StudentProfile
	/// </summary>
	public ref class StudentProfile : public System::Windows::Forms::UserControl
	{
	public:
		StudentProfile(void)
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
		~StudentProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblUsername;
	private: System::Windows::Forms::Label^  lblEmail;
	protected:

	protected:

	private: System::Windows::Forms::Label^  lblRoll;
	private: System::Windows::Forms::Label^  lblPhone;


	private: System::Windows::Forms::Label^  lblFullName;
	private: System::Windows::Forms::Label^  lblIITG;
	private: System::Windows::Forms::Label^  lblIITGDetail;
	private: System::Windows::Forms::Label^  lblPhoneDetail;
	private: System::Windows::Forms::Label^  lblEmailDetail;
	private: System::Windows::Forms::Label^  lblRollDetail;
	private: System::Windows::Forms::Label^  lblFullNameDetail;
	private: System::Windows::Forms::Label^  lblUsernameDetail;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;




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
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblRoll = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblFullName = (gcnew System::Windows::Forms::Label());
			this->lblIITG = (gcnew System::Windows::Forms::Label());
			this->lblIITGDetail = (gcnew System::Windows::Forms::Label());
			this->lblPhoneDetail = (gcnew System::Windows::Forms::Label());
			this->lblEmailDetail = (gcnew System::Windows::Forms::Label());
			this->lblRollDetail = (gcnew System::Windows::Forms::Label());
			this->lblFullNameDetail = (gcnew System::Windows::Forms::Label());
			this->lblUsernameDetail = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(100, 50);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(102, 25);
			this->lblUsername->TabIndex = 0;
			this->lblUsername->Text = L"Username";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(100, 200);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(60, 25);
			this->lblEmail->TabIndex = 1;
			this->lblEmail->Text = L"Email";
			// 
			// lblRoll
			// 
			this->lblRoll->AutoSize = true;
			this->lblRoll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRoll->Location = System::Drawing::Point(100, 150);
			this->lblRoll->Name = L"lblRoll";
			this->lblRoll->Size = System::Drawing::Size(79, 25);
			this->lblRoll->TabIndex = 2;
			this->lblRoll->Text = L"Roll No.";
			this->lblRoll->Click += gcnew System::EventHandler(this, &StudentProfile::label3_Click);
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->Location = System::Drawing::Point(100, 250);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(143, 25);
			this->lblPhone->TabIndex = 3;
			this->lblPhone->Text = L"Phone Number";
			// 
			// lblFullName
			// 
			this->lblFullName->AutoSize = true;
			this->lblFullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullName->Location = System::Drawing::Point(100, 100);
			this->lblFullName->Name = L"lblFullName";
			this->lblFullName->Size = System::Drawing::Size(100, 25);
			this->lblFullName->TabIndex = 4;
			this->lblFullName->Text = L"Full Name";
			// 
			// lblIITG
			// 
			this->lblIITG->AutoSize = true;
			this->lblIITG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIITG->Location = System::Drawing::Point(100, 300);
			this->lblIITG->Name = L"lblIITG";
			this->lblIITG->Size = System::Drawing::Size(123, 25);
			this->lblIITG->TabIndex = 5;
			this->lblIITG->Text = L"IITG Student";
			// 
			// lblIITGDetail
			// 
			this->lblIITGDetail->AutoSize = true;
			this->lblIITGDetail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIITGDetail->Location = System::Drawing::Point(275, 300);
			this->lblIITGDetail->Name = L"lblIITGDetail";
			this->lblIITGDetail->Size = System::Drawing::Size(102, 25);
			this->lblIITGDetail->TabIndex = 6;
			this->lblIITGDetail->Text = L"Username";
			// 
			// lblPhoneDetail
			// 
			this->lblPhoneDetail->AutoSize = true;
			this->lblPhoneDetail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhoneDetail->Location = System::Drawing::Point(275, 250);
			this->lblPhoneDetail->Name = L"lblPhoneDetail";
			this->lblPhoneDetail->Size = System::Drawing::Size(102, 25);
			this->lblPhoneDetail->TabIndex = 7;
			this->lblPhoneDetail->Text = L"Username";
			// 
			// lblEmailDetail
			// 
			this->lblEmailDetail->AutoSize = true;
			this->lblEmailDetail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmailDetail->Location = System::Drawing::Point(275, 200);
			this->lblEmailDetail->Name = L"lblEmailDetail";
			this->lblEmailDetail->Size = System::Drawing::Size(102, 25);
			this->lblEmailDetail->TabIndex = 8;
			this->lblEmailDetail->Text = L"Username";
			// 
			// lblRollDetail
			// 
			this->lblRollDetail->AutoSize = true;
			this->lblRollDetail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRollDetail->Location = System::Drawing::Point(275, 150);
			this->lblRollDetail->Name = L"lblRollDetail";
			this->lblRollDetail->Size = System::Drawing::Size(102, 25);
			this->lblRollDetail->TabIndex = 9;
			this->lblRollDetail->Text = L"Username";
			// 
			// lblFullNameDetail
			// 
			this->lblFullNameDetail->AutoSize = true;
			this->lblFullNameDetail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullNameDetail->Location = System::Drawing::Point(275, 100);
			this->lblFullNameDetail->Name = L"lblFullNameDetail";
			this->lblFullNameDetail->Size = System::Drawing::Size(102, 25);
			this->lblFullNameDetail->TabIndex = 10;
			this->lblFullNameDetail->Text = L"Username";
			// 
			// lblUsernameDetail
			// 
			this->lblUsernameDetail->AutoSize = true;
			this->lblUsernameDetail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsernameDetail->Location = System::Drawing::Point(275, 50);
			this->lblUsernameDetail->Name = L"lblUsernameDetail";
			this->lblUsernameDetail->Size = System::Drawing::Size(102, 25);
			this->lblUsernameDetail->TabIndex = 11;
			this->lblUsernameDetail->Text = L"Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(100, 350);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 25);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Branch";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(275, 350);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 25);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Username";
			// 
			// StudentProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblUsernameDetail);
			this->Controls->Add(this->lblFullNameDetail);
			this->Controls->Add(this->lblRollDetail);
			this->Controls->Add(this->lblEmailDetail);
			this->Controls->Add(this->lblPhoneDetail);
			this->Controls->Add(this->lblIITGDetail);
			this->Controls->Add(this->lblIITG);
			this->Controls->Add(this->lblFullName);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblRoll);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblUsername);
			this->Name = L"StudentProfile";
			this->Size = System::Drawing::Size(903, 424);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
