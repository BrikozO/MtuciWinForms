#include "FFirst.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	// CHANGE TO FILE NAMES Calc -> Core name, FFirst -> form name
	Calc::FFirst form;
	Application::Run(% form);
}