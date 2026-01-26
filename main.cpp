/*
    This is a small home-grown project for practicing C++. 
    It's a small console game about a knight who must ascend a hundred-level tower, 
    overcoming obstacles and defeating enemies and bosses along the way.

    VERSION 0.0.0
*/

#include <iostream>
#include "game.h"
#include "character.h"

int main() {

    Character biba{ Biba, 135, 5, 35 };
    Character boba{ Boba, 70, 40, 10 };

    int damage{ biba.damageCalculation };
    boba.takeDamage(damage);
    std::cout << "HP Boba: " << boba.getHealth << std::endl;

    return 0;
}