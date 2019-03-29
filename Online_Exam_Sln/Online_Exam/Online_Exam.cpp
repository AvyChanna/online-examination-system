// Online_Exam.cpp : main project file.

#include "stdafx.h"
#include "ProfForm.h"
#include "Login.h"
#include "AdminForm.h"
#include "ExamPaper.h"
using namespace Online_Exam;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it

	Application::Run(gcnew ExamPaper(11));

	return 0;
}
