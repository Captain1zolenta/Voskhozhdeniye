#include "character.h"
#include <string>
#include <iostream>

Character::Character(
	std::string p_name,
	int p_healthPoint,
	int p_dexterity,
	int p_strength
) : name{ p_name },
healthPoint{ p_healthPoint },
dexterity{ p_dexterity },
strength{ p_strength }
{
}

Character::~Character(){}

void Character::giveDamage(Character& character) {
	int damage = damageCalculation();
	character.takeDamage(damage);
	std::cout << name << " нанес " <<  character.getName() << " урона на " << damage << " HP" << std::endl;
}

int Character::damageCalculation() const
{
	return strength + dexterity;
}

bool Character::isLive() const
{
	return healthPoint >= 0;
}

void Character::takeDamage(int damage)
{
	Character::healthPoint -= damage;
}


int Character::getHealth() const {
	return healthPoint;
}

int Character::getdexterity() const {
	return dexterity;
}

int Character::getStrength() const{
	return strength;
}

std::string Character::getName()
{
	return name;
}
