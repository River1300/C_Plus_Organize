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
	std::cout << "\t\t\tWarrior is Dead ��.��" << std::endl;
}
void Warrior::Reborn() const
{
	Character::Reborn();
	// &1. ��� Ŭ�������� ���� ���� �Լ��� ���� ���ϴ� ���� �ƴϴ�.

	std::cout << "\tHA! HA! HA!" << std::endl;
}