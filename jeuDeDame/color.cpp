#include <iostream>
#include <windows.h>


void color(int k){

HANDLE hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole,k);
        }
