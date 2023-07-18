#include <iostream>
#include "Warrior.h"

Warrior::Warrior() : Character()
{
	std::cout << "+[Warrior] created" << std::endl;
}
Warrior::~Warrior()
{
	std::cout << "-[Warrior] destroyed" << std::endl;
}
void Warrior::Attack() const
{
	std::cout << "\t\t\tWarrior Attack!!!" << std::endl;
}

void Warrior::DoubleSlash() const
{
	std::cout << "\t\t\tWarrior Double Slash!!! Bang!!! Bang!!!" << std::endl;
}

void Warrior::Dead() const
{
	std::cout << "\t\t\tWarrior is Dead ㅠ.ㅠ" << std::endl;
}
void Warrior::Reborn() const
{
	Character::Reborn();
	// &1. 기반 클래스에서 순수 가상 함수를 구현 못하는 것은 아니다.

	std::cout << "\tHA! HA! HA!" << std::endl;
}