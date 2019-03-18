#pragma once

namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProfForm
	/// </summary>
	public ref class ProfForm : public System::Windows::Forms::Form
	{
	public:
		ProfForm(void)
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
		~ProfForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnMyProfileProf;
	private: System::Windows::Forms::Button^  btnEditProfileProf;
	private: System::Windows::Forms::Button^  btnLogOut;
	private: System::Windows::Forms::Button^  btnHelp;
	private: System::Windows::Forms::Button^  btnPastTestsSet;
	private: System::Windows::Forms::Button^  btnCreateTest;
	private: System::Windows::Forms::Button^  btnAddGroup;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnMyProfileProf = (gcnew System::Windows::Forms::Button());
			this->btnEditProfileProf = (gcnew System::Windows::Forms::Button());
			this->btnAddGroup = (gcnew System::Windows::Forms::Button());
			this->btnCreateTest = (gcnew System::Windows::Forms::Button());
			this->btnPastTestsSet = (gcnew System::Windows::Forms::Button());
			this->btnHelp = (gcnew System::Windows::Forms::Button());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(893, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WELCOME";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnLogOut);
			this->panel1->Controls->Add(this->btnHelp);
			this->panel1->Controls->Add(this->btnPastTestsSet);
			this->panel1->Controls->Add(this->btnCreateTest);
			this->panel1->Controls->Add(this->btnAddGroup);
			this->panel1->Controls->Add(this->btnEditProfileProf);
			this->panel1->Controls->Add(this->btnMyProfileProf);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 533);
			this->panel1->TabIndex = 2;
			// 
			// btnMyProfileProf
			// 
			this->btnMyProfileProf->Location = System::Drawing::Point(0, 0);
			this->btnMyProfileProf->Name = L"btnMyProfileProf";
			this->btnMyProfileProf->Size = System::Drawing::Size(200, 46);
			this->btnMyProfileProf->TabIndex = 3;
			this->btnMyProfileProf->Text = L"My Profile";
			this->btnMyProfileProf->UseVisualStyleBackColor = true;
			// 
			// btnEditProfileProf
			// 
			this->btnEditProfileProf->Location = System::Drawing::Point(0, 50);
			this->btnEditProfileProf->Name = L"btnEditProfileProf";
			this->btnEditProfileProf->Size = System::Drawing::Size(200, 46);
			this->btnEditProfileProf->TabIndex = 4;
			this->btnEditProfileProf->Text = L"Edit Profile";
			this->btnEditProfileProf->UseVisualStyleBackColor = true;
			// 
			// btnAddGroup
			// 
			this->btnAddGroup->Location = System::Drawing::Point(0, 100);
			this->btnAddGroup->Name = L"btnAddGroup";
			this->btnAddGroup->Size = System::Drawing::Size(200, 46);
			this->btnAddGroup->TabIndex = 5;
			this->btnAddGroup->Text = L"Create a Group";
			this->btnAddGroup->UseVisualStyleBackColor = true;
			// 
			// btnCreateTest
			// 
			this->btnCreateTest->Location = System::Drawing::Point(0, 150);
			this->btnCreateTest->Name = L"btnCreateTest";
			this->btnCreateTest->Size = System::Drawing::Size(200, 46);
			this->btnCreateTest->TabIndex = 6;
			this->btnCreateTest->Text = L"Create a Test";
			this->btnCreateTest->UseVisualStyleBackColor = true;
			// 
			// btnPastTestsSet
			// 
			this->btnPastTestsSet->Location = System::Drawing::Point(0, 200);
			this->btnPastTestsSet->Name = L"btnPastTestsSet";
			this->btnPastTestsSet->Size = System::Drawing::Size(200, 46);
			this->btnPastTestsSet->TabIndex = 7;
			this->btnPastTestsSet->Text = L"Past Tests Set";
			this->btnPastTestsSet->UseVisualStyleBackColor = true;
			// 
			// btnHelp
			// 
			this->btnHelp->Location = System::Drawing::Point(0, 250);
			this->btnHelp->Name = L"btnHelp";
			this->btnHelp->Size = System::Drawing::Size(200, 46);
			this->btnHelp->TabIndex = 8;
			this->btnHelp->Text = L"Help";
			this->btnHelp->UseVisualStyleBackColor = true;
			// 
			// btnLogOut
			// 
			this->btnLogOut->Location = System::Drawing::Point(0, 300);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(200, 46);
			this->btnLogOut->TabIndex = 9;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->UseVisualStyleBackColor = true;
			// 
			// ProfForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 532);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"ProfForm";
			this->Text = L"ProfForm";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
