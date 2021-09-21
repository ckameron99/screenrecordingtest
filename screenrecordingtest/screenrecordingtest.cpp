// screenrecordingtest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

int changeResolution(int horiz, int vert)
{
    DEVMODE desiredMode = { 0 };
    desiredMode.dmSize = sizeof(DEVMODE);
    desiredMode.dmPelsWidth = horiz;
    desiredMode.dmPelsHeight = vert;
    desiredMode.dmFields = DM_PELSHEIGHT | DM_PELSWIDTH;
    LONG res = ChangeDisplaySettings(&desiredMode, CDS_UPDATEREGISTRY | CDS_GLOBAL | CDS_RESET);
    return res;
}

int main()
{
    //std::cout << changeResolution(1280, 720);
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
