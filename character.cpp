#include "character.h"
#include <string>

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

void Character::takeDamage(int damage) {
	healthPoint = healthPoint - damage;
	std::cout << name << "получил урон на " << damage << "HP" << std::endl;
}

int Character::damageCalculation() const
{
	return strength + dexterity;
}

bool Character::isLive() const
{
	return healthPoint >= 0;
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
