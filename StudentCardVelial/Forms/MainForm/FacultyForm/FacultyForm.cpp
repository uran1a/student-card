#include "FacultyForm.h"
#include "../../Authorization/Authorization.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	StudentCardVelial::Autorization form;
	//StudentCardVelial::CreateStudent form;
	//StudentCardVelial::FacultyForm form(1,false);
	Application::Run(% form);
}


