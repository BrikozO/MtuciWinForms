#include "Zadanye1Form.h"
#include <Windows.h>
using namespace Zadanye1;  // �������� �������

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Zadanye1Form);
    return 0;
}