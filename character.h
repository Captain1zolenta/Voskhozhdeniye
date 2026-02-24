#pragma once
#include <string>

class Character {

public:
	Character(
		std::string p_name = "Hero",
		int p_healthPoint = 100,
		int p_dexterity = 10,
		int p_strength = 20
	);

	~Character();

	void giveDamage(Character &character);
	int damageCalculation() const;
	bool isLive() const;
	void takeDamage(int damage);

	int getHealth() const;
	int getdexterity() const;
	int getStrength() const;
	std::string getName();

private:
	std::string name;
	int healthPoint;
	int dexterity;
	int strength;
};

