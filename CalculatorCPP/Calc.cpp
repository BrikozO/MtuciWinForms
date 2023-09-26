#include "Calc.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CalculatorCPP::Calc form;
	Application::Run(%form);
}
