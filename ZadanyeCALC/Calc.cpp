#include "Calc.h"
#include <Windows.h>
using namespace ZadanyeCALC;  // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Calc);
    return 0;
}

