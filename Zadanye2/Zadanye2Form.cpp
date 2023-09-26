#include "Zadanye2Form.h"
#include <Windows.h>
using namespace Zadanye2;  // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Zadanye2Form);
    return 0;
}
