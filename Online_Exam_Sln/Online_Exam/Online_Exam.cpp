// Online_Exam.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "Database.h"
#include "StudentForm.h"
#include "ProfForm.h"
#include "GlobalVar.h"
#include "Signup.h"

using namespace Online_Exam;
using namespace Global_Var;
//using namespace Database;
//using namespace StudentForm;
[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	gVar::a = 5;
	gVar::b = "tushar";
	// Create the main window and run it
	Application::Run(gcnew Signup());
	
	return 0;
}
