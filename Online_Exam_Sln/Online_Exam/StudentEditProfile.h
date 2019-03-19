#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Online_Exam {

	/// <summary>
	/// Summary for StudentEditProfile
	/// </summary>
	public ref class StudentEditProfile : public System::Windows::Forms::UserControl
	{
	public:
		StudentEditProfile(void)
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
		~StudentEditProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  lblIITG;
	private: System::Windows::Forms::Label^  lblFullName;
	private: System::Windows::Forms::Label^  lblPhone;
	private: System::Windows::Forms::Label^  lblRoll;
	private: System::Windows::Forms::Label^  lblEmail;
	private: System::Windows::Forms::Label^  lblUsername;

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
			this->lblIITG = (gcnew System::Windows::Forms::Label());
			this->lblFullName = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblRoll = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(75, 284);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 20);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Branch";
			// 
			// lblIITG
			// 
			this->lblIITG->AutoSize = true;
			this->lblIITG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIITG->Location = System::Drawing::Point(75, 244);
			this->lblIITG->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblIITG->Name = L"lblIITG";
			this->lblIITG->Size = System::Drawing::Size(102, 20);
			this->lblIITG->TabIndex = 18;
			this->lblIITG->Text = L"IITG Student";
			// 
			// lblFullName
			// 
			this->lblFullName->AutoSize = true;
			this->lblFullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullName->Location = System::Drawing::Point(75, 81);
			this->lblFullName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblFullName->Name = L"lblFullName";
			this->lblFullName->Size = System::Drawing::Size(80, 20);
			this->lblFullName->TabIndex = 17;
			this->lblFullName->Text = L"Full Name";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->Location = System::Drawing::Point(75, 203);
			this->lblPhone->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(115, 20);
			this->lblPhone->TabIndex = 16;
			this->lblPhone->Text = L"Phone Number";
			// 
			// lblRoll
			// 
			this->lblRoll->AutoSize = true;
			this->lblRoll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRoll->Location = System::Drawing::Point(75, 122);
			this->lblRoll->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblRoll->Name = L"lblRoll";
			this->lblRoll->Size = System::Drawing::Size(64, 20);
			this->lblRoll->TabIndex = 15;
			this->lblRoll->Text = L"Roll No.";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(75, 162);
			this->lblEmail->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(48, 20);
			this->lblEmail->TabIndex = 14;
			this->lblEmail->Text = L"Email";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(75, 41);
			this->lblUsername->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(83, 20);
			this->lblUsername->TabIndex = 13;
			this->lblUsername->Text = L"Username";
			// 
			// StudentEditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblIITG);
			this->Controls->Add(this->lblFullName);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblRoll);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblUsername);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"StudentEditProfile";
			this->Size = System::Drawing::Size(677, 344);
			this->Load += gcnew System::EventHandler(this, &StudentEditProfile::StudentEditProfile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentEditProfile_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
