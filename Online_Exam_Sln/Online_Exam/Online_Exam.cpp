// Online_Exam.cpp : main project file.
#include "stdafx.h"
#include "Login.h"
#include"displayAnswer.h"
#include "ExamPaper.h"
using namespace Online_Exam;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it

	Application::Run(gcnew ExamPaper(11,1));

	return 0;
}
