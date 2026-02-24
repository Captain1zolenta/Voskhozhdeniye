#include "storyTeller.h"
#include <iostream>
#include <string>
#include <fstream>

StoryTeller::StoryTeller() {}

StoryTeller::~StoryTeller() {}

void StoryTeller::printPoster() {
    std::ifstream file("poster.txt");
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << '\n';
    }
}


