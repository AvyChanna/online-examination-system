#pragma once
#include "Database.h"
#include "GlobalVar.h"
#include <iostream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;
using namespace Global_Var;


namespace Online_Exam {

	/// <summary>
	/// Summary for Unenroll
	/// </summary>
	public ref class Unenroll : public System::Windows::Forms::UserControl
	{
	public:
		Unenroll(void)
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
		~Unenroll()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutBtn;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutGroups;

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
			this->flowLayoutBtn = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutGroups = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// flowLayoutBtn
			// 
			this->flowLayoutBtn->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutBtn->Location = System::Drawing::Point(357, 37);
			this->flowLayoutBtn->Name = L"flowLayoutBtn";
			this->flowLayoutBtn->Size = System::Drawing::Size(188, 290);
			this->flowLayoutBtn->TabIndex = 0;
			// 
			// flowLayoutGroups
			// 
			this->flowLayoutGroups->Location = System::Drawing::Point(163, 37);
			this->flowLayoutGroups->Name = L"flowLayoutGroups";
			this->flowLayoutGroups->Size = System::Drawing::Size(188, 290);
			this->flowLayoutGroups->TabIndex = 1;
			// 
			// Unenroll
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->flowLayoutGroups);
			this->Controls->Add(this->flowLayoutBtn);
			this->Name = L"Unenroll";
			this->Size = System::Drawing::Size(677, 344);
			this->Load += gcnew System::EventHandler(this, &Unenroll::Unenroll_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Unenroll_Load(System::Object^  sender, System::EventArgs^  e) {
				 OES ^Access = gcnew OES();
				 Access->ExecQuery("Select * from Users where Username = '" + gVar::Username + "'");
				 if (Access->RecordCount > 0)
				 {
					 String ^grp = Convert::ToString(Access->DBDT->Rows[0]["Groups"]);
					 int len = grp->Length;
					 for (int i = 0; i < len; )
					 {
						 if (grp[i] != '-')
						 {
							 String ^ temp = "";
							 while (grp[i] != '-')
							 {
								 temp += grp[i];
								 i++;
							 }
							 Label ^lbl = gcnew Label();
							 lbl->Text = temp->ToString();
							 Button ^ btn = gcnew Button();
							 btn->Text = "Unenroll from this group";
							 flowLayoutGroups->Controls->Add(lbl);
							 flowLayoutBtn->Controls->Add(btn);
						 }
						 else i++;
					 }
				 }
				 
	}
	};
}
