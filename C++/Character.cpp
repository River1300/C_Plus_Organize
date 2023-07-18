#include <iostream>
#include "Character.h"

Character::Character() : mHp{ 0 }
{
	std::cout << "+[Character] created" << std::endl;
}
Character::~Character()
{
	std::cout << "-[Character] destroyed" << std::endl;
}
void Character::Attack() const
{
	std::cout << "\t\t\tBaby Attack!" << std::endl;
}