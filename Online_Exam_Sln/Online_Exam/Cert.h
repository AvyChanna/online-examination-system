#pragma once
#include "Database.h"
namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Drawing::Imaging;
	using namespace Database;
	/// <summary>
	/// Summary for Cert
	/// </summary>
	public ref class Cert : public System::Windows::Forms::UserControl
	{
	public:
		Image ^img;
		Cert(void)
		{
			InitializeComponent();
			ExamCodes = gcnew List<String ^>();
			Grade = "";
			Date = "";
		}
		List<String^> ^ExamCodes;
		String ^Grade;
		String ^Date;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Cert()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::ComboBox^  cbExam;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->cbExam = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(242, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate Certificate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Cert::button1_Click);
			// 
			// printDialog1
			// 
			this->printDialog1->AllowCurrentPage = true;
			this->printDialog1->AllowSelection = true;
			this->printDialog1->AllowSomePages = true;
			this->printDialog1->Document = this->printDocument1;
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Cert::printDocument1_PrintPage);
			// 
			// cbExam
			// 
			this->cbExam->BackColor = System::Drawing::Color::White;
			this->cbExam->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbExam->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbExam->FormattingEnabled = true;
			this->cbExam->Location = System::Drawing::Point(309, 139);
			this->cbExam->Name = L"cbExam";
			this->cbExam->Size = System::Drawing::Size(214, 24);
			this->cbExam->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(163, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select Exam";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(235, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nothing to show here";
			this->label2->Visible = false;
			// 
			// Cert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cbExam);
			this->Controls->Add(this->button1);
			this->Name = L"Cert";
			this->Size = System::Drawing::Size(686, 432);
			this->Load += gcnew System::EventHandler(this, &Cert::Cert_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (cbExam->Text == "")
				 {
					 MessageBox::Show("Select an exam first");
					 return;
				 }
				 OES ^Access = gcnew OES();
				 Access->AddParam("@Username", gVar::Username);
				 Access->ExecQuery("Select ObtainedMarks, FullMarks, SessionNumber from Performance where  ( Username = @Username AND ExamCode = " + ExamCodes[cbExam->SelectedIndex] +" AND Passed = 1 )");
				 if (Access->Exception->Length)
				 {
					 MessageBox::Show("SQL Error");
					 return;
				 }
				 double om = Convert::ToDouble(Access->DBDT->Rows[0]->default[0]->ToString());
				 double fm = Convert::ToDouble(Access->DBDT->Rows[0]->default[1]->ToString());
				 double gr = (om / fm) * 100.0;
				 String^ session_num = Access->DBDT->Rows[0]->default[2]->ToString();

				 Access->ExecQuery("Select PassPercentage,StartTimeSes"+session_num+" From Exam WHERE ExamCode = " + ExamCodes[cbExam->SelectedIndex] + "");
				 Double pp = Convert::ToDouble(Access->DBDT->Rows[0]->default[0]->ToString());
				 pp = 100 - pp;
				 pp = pp / 7;
				 if (gr >= 100-pp)
				 {
					 Grade = "AA";
				 }
				 else if (gr >= 100-2*pp)
				 {
					 Grade = "AB";
				 }
				 else if (gr >= 100 - 3*pp)
				 {
					 Grade = "BB";
				 }
				 else if (gr >= 100 - 4*pp)
				 {
					 Grade = "BC";
				 }
				 else if (gr >= 100 - 5*pp)
				 {
					 Grade = "CC";
				 }
				 else if (gr >= 100 - 6*pp)
				 {
					 Grade = "CD";
				 }
				 else{
					 Grade = "DD";
				 }
				 String^ SesDate =Access->DBDT->Rows[0]->default[1]->ToString();
				 array<String^>^delimiters = { " " };
				 SesDate = SesDate->Split(delimiters, StringSplitOptions::RemoveEmptyEntries)[0];
				 array<String^>^delimiters1 = { "-" };
				 Date += SesDate->Split(delimiters1, StringSplitOptions::RemoveEmptyEntries)[2];

				 String^ month = SesDate->Split(delimiters1, StringSplitOptions::RemoveEmptyEntries)[1];
				 if (month == "01"){
					 Date += " January, ";
				 }
				 else if (month == "02"){
					 Date += " February, ";
				 }
				 else if (month == "03"){
					 Date += " March, ";
				 }
				 else if (month == "04"){
					 Date += " April, ";
				 }
				 else if (month == "05"){
					 Date += " May, ";
				 }
				 else if (month == "06"){
					 Date += " June, ";
				 }
				 else if (month == "07"){
					 Date += " July, ";
				 }
				 else if (month == "08"){
					 Date += " August, ";
				 }
				 else if (month == "09"){
					 Date += " September, ";
				 }
				 else if (month == "10"){
					 Date += " October, ";
				 }
				 else if (month == "11"){
					 Date += " November, ";
				 }
				 else{
					 Date += " December, ";
				 }

				 Date += SesDate->Split(delimiters1, StringSplitOptions::RemoveEmptyEntries)[0];

				 printDocument1->DefaultPageSettings->Landscape = true;
				 printDocument1->DefaultPageSettings->Margins = gcnew Margins(0, 0, 0, 0);
				 printDocument1->DefaultPageSettings->PaperSize = gcnew PaperSize("827 x 1169 hth of Inch (a4)", 827, 1169);
				 printDocument1->Print();
	}
	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Cert::typeid));
				 img = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cert.Image")));
				 
				 System::Drawing::Font ^ftemp = gcnew  System::Drawing::Font("Arial", 30, FontStyle::Bold);//("Times New Roman",
				 System::Drawing::Font ^f;
				 StringFormat ^sf = gcnew StringFormat();
				 sf->Alignment = StringAlignment::Center;
				 sf->LineAlignment = StringAlignment::Center;
				 e->Graphics->DrawImage(img, 0, 0, 1169, 827);
				 String ^s;
				 SizeF ^size;

				 /////////// Full Name
				 s = gVar::Fullname;
				 //s = "a";
				 size = e->Graphics->MeasureString(s, ftemp);
				 
				 if (size->Width >= 781)
				 {
					 f = gcnew  System::Drawing::Font("Arial", 30*781 / (size->Width), FontStyle::Bold);//("Times New Roman",
					 e->Graphics->DrawString(s, f, Brushes::DimGray, RectangleF(194, 336, 781, 45), sf);
				 }
				 else e->Graphics->DrawString(s, ftemp, Brushes::DimGray, RectangleF(194, 336, 781, 45), sf);


				 /////////// Exam Name

				  s= cbExam->Text;
				 size = e->Graphics->MeasureString(s, ftemp);

				 if (size->Width >= 755)
				 {
					 f = gcnew  System::Drawing::Font("Arial", 30 * 755 / (size->Width), FontStyle::Bold);//("Times New Roman",
					 e->Graphics->DrawString(s, f, Brushes::DimGray, RectangleF(205, 438, 755, 45), sf);
				 }
				 else e->Graphics->DrawString(s, ftemp, Brushes::DimGray, RectangleF(205, 438, 755, 45), sf);


				 ///////////// Grade
				 s = Grade;
				 size = e->Graphics->MeasureString(s, ftemp);

				 if (size->Width >= 121)
				 {
					 f = gcnew  System::Drawing::Font("Arial", 30 * 121 / (size->Width), FontStyle::Bold);//("Times New Roman",
					 e->Graphics->DrawString(s, f, Brushes::DimGray, RectangleF(630, 536, 121, 45), sf);
				 }
				 else e->Graphics->DrawString(s, ftemp, Brushes::DimGray, RectangleF(630, 536, 121, 45), sf);

				 //////////// Date
				 s = Date;
				 size = e->Graphics->MeasureString(s, ftemp);

				 if (size->Width >= 159)
				 {
					 f = gcnew  System::Drawing::Font("Arial", 30 * 159 / (size->Width), FontStyle::Bold);//("Times New Roman",
					 e->Graphics->DrawString(s, f, Brushes::Black, RectangleF(815, 628, 159, 45), sf);
				 }
				 else e->Graphics->DrawString(s, ftemp, Brushes::Black, RectangleF(815, 628, 159, 45), sf);
	}
	private: System::Void Cert_Load(System::Object^  sender, System::EventArgs^  e) {
				 cbExam->Items->Clear();
				 OES ^Access = gcnew OES();
				 Access->AddParam("@Username", gVar::Username);
				 Access->ExecQuery("SELECT Exam.ExamCode, Exam.ExamName FROM Exam INNER JOIN Performance ON Exam.[ExamCode] = Performance.[ExamCode] where Performance.[Username] = @Username AND Performance.[Passed] = 1");
				 if (Access->Exception->Length)
				 {
					 MessageBox::Show("Error executing Query");
					 return;
				 }
				 if (Access->DBDT->Rows->Count == 0)
				 {
					 button1->Visible = false;
					 cbExam->Visible = false;
					 label2->Visible = true;
					 label1->Visible = false;
					 return;
				 }
				 for (int i = 0; i < Access->DBDT->Rows->Count;i++)
				 {
					 ExamCodes->Add(Access->DBDT->Rows[i]->default[0]->ToString());
					 cbExam->Items->Add(Access->DBDT->Rows[i]->default[1]->ToString());
				 }
	}
};
}
