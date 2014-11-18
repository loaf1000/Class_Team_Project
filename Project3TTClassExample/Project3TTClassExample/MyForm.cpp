// This file is MyForm.cpp : main Source File.

/*==============================================================================

These are the step to create a new project in our "GUI" environment:

1 -- New Project
2 -- CLR > CLR Empty Project (and name your Project)
3 -- Add > New Item
4 -- UI > Windows Form (and name your .cpp file or use the default, MyForm.cpp)
5 -- Open MyForm.cpp and paste ALL of THIS code into MyForm.cpp
Make sure change the Project name to the correct one
in using namespace xxx;

If weird things happen in the design mode, then you MAY need to do the following:
6 -- Close weird designer
7 -- Right-click on header name MyForm.h and Open Designer to get plain pizza form from which can build stuff
8 -- Right-click on header file MyForm.h and Open Code to access C++ source code


==============================================================================*/

//#include "stdafx.h"		//Sometimes this include file is needed
#include "MyForm.h"		//Use name of form here

using namespace Project3TTClassExample;	//Use Project name here

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew MyForm());	//Use form name here
	return 0;
}