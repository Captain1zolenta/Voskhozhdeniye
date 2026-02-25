/*
    This is a small home-grown project for practicing C++. 
    It's a small console game about a knight who must ascend a hundred-level tower, 
    overcoming obstacles and defeating enemies and bosses along the way.

    VERSION 0.0.0
*/

#include <iostream>
#include "game.h"
#include "character.h"
#include "storyTeller.h"
#include <random>
#include <windows.h>


int main() {

    // Устанавливаем кодировку UTF-8 для консоли
    SetConsoleOutputCP(CP_UTF8);

    // Опционально: для ввода тоже
    SetConsoleCP(CP_UTF8);

    StoryTeller::printPoster();

    Character biba{ "Biba", 135, 5, 35};
    Character boba{ "Boba", 70, 40, 10};

    while (biba.isLive() && boba.isLive())
    {
        //system("cls");
        
        std::cout << "HP Героя: " << biba.getHealth() << std::endl;
        std::cout << "HP противника: " << boba.getHealth() << std::endl;
        
        int choice_attack;
        int choice_protect;

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(1, 3);
        int random_atack = distrib(gen);
        int random_protect = distrib(gen);

        std::cout << "Выберите куда ударить: \n 1) Голова \n 2) Тело \n 3) Рука \n" << std::endl;
        std::cin>> choice_attack;

        if (choice_attack != random_protect)
        {
            biba.giveDamage(boba);
            std::cout << "Атака прошла успешно \n" << std::endl;
        }else{
            std::cout << "Атака была заблокирована \n" << std::endl;
        }

        //std::cout << "HP Героя: " << biba.getHealth() << std::endl;
        //std::cout << "HP противника: " << boba.getHealth() << std::endl;

        std::cout << "Выберите что защитить: \n 1) Голова \n 2) Тело \n 3) Рука \n" << std::endl;
        std::cin >> choice_protect;

        if (choice_protect != random_atack)
        {
            boba.giveDamage(biba);
            std::cout << "Атака противника прошла успешно \n" << std::endl;
        }
        else {
            std::cout << "Атака противника была заблокирована \n" << std::endl;
        }

        //std::cout << "HP Героя: " << biba.getHealth() << std::endl;
        //std::cout << "HP противника: " << boba.getHealth() << std::endl;
    }

    return 0;
}