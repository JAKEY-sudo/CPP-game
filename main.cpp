#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif
#include "game.h"

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Переключаем консоль на UTF-8
    #endif
    
    playGame();
    return 0;
}
