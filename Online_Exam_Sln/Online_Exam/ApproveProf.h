#pragma once
#include "Database.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;


namespace Online_Exam {

	/// <summary>
	/// Summary for ApproveProf
	/// </summary>
	public ref class ApproveProf : public System::Windows::Forms::UserControl
	{
	public:
		OES ^Access;
		DataSet ^ds;
		ApproveProf(void)
		{
			Access = gcnew OES();
			ds = gcnew DataSet();
			InitializeComponent();
			Access->ExecQuery("SELECT Username, FullName, Email, PhoneNo, IITG, Branch, isApproved \
				FROM     Users \
				WHERE(AccessLevel = 'Prof') AND(isApproved = False)");
			ds->Tables->Add("Table");
			Access->DBDA->Fill(ds->Tables["Table"]);
			this->profList->DataSource = ds->Tables["Table"];
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ApproveProf()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  profList;
	private: System::Windows::Forms::Button^  btnUpdate;
	protected:

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
			this->profList = (gcnew System::Windows::Forms::DataGridView());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profList))->BeginInit();
			this->SuspendLayout();
			// 
			// profList
			// 
			this->profList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->profList->Location = System::Drawing::Point(67, 153);
			this->profList->Name = L"profList";
			this->profList->RowTemplate->Height = 24;
			this->profList->Size = System::Drawing::Size(542, 281);
			this->profList->TabIndex = 0;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(67, 457);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(94, 26);
			this->btnUpdate->TabIndex = 1;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ApproveProf::btnUpdate_Click);
			// 
			// ApproveProf
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->profList);
			this->Name = L"ApproveProf";
			this->Size = System::Drawing::Size(658, 499);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profList))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
				 Access->DBDA->Update(ds);
				 ds->AcceptChanges();
	}
	};
}
