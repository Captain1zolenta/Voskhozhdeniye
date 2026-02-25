#include "storyTeller.h"
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <windows.h>

StoryTeller::StoryTeller() {}

StoryTeller::~StoryTeller() {}

void StoryTeller::printPoster() {

    HWND hwnd = GetConsoleWindow();

    ShowWindow(hwnd, SW_MAXIMIZE);

    std::ifstream file("poster.txt");
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << '\n';
    }

    std::cout << "Press any key ... " << '\n';
    char key = _getch();
    system("cls");
}


