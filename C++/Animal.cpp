#include <iostream>
#include "Animal.h"

Animal::Animal() : mAge{ 1 }, mWeight{ 1 }
{
	std::cout << "---[ANIMAL FIRST!!!]---" << std::endl;
}

Animal::Animal(int age, int weight) : mAge{ age }, mWeight{ weight }
{
	std::cout << "ANIMAL AGE, WEIGHT" << std::endl;
}

Animal::~Animal()
{
	std::cout << "DESTROY ANIMAL" << std::endl;
}

int Animal::GetAge() const
{
	return mAge;
}

void Animal::SetAge(int age)
{
	mAge = age;
}

int Animal::GetWeight() const
{
	return mWeight;
}

void Animal::SetWeight(int weight)
{
	mWeight = weight;
}

void Animal::Sound()
{
	std::cout << "--------Animal!!!  Bark~!!!---------" << std::endl;
}