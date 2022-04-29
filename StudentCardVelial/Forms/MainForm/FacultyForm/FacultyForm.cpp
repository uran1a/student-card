#include "FacultyForm.h"
#include "../../Autorization/Autorization.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	StudentCardVelial::Autorization form;
	Application::Run(% form);
}


