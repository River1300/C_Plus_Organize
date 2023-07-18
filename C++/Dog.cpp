#include <iostream>
#include "Dog.h"

Dog::Dog() : mBreed{ BREED::RETRIEVER }
{
	std::cout << "---[DOG SECOND!!!]---" << std::endl;
}

// #. �ƹ��� ����� �޾Ҵ� �ϴ��� ����ʱ�ȭ�� �ش� Ŭ���������� �����ϴ�.
// #. �θ��� �����ڸ� �ҷ����� �븮 ������
Dog::Dog(int age, int weight, Dog::BREED breed) : mBreed{ breed }, Animal{ age,weight }
{
	// #. �����ڴ� ���� �ڽ��� ����鸸 �����ϴ� ���� ���� ���� ����̴�.
		//mAge = age;			// �θ��� ����� ������ �� ������ ���������� �ʴ´�.
		//mWeight = weight;
	std::cout << "DOG BREED" << std::endl;
}

Dog::~Dog()
{
	std::cout << "DESTROY DOG" << std::endl;
}

// #. Ŭ���� ���ο� ���� ���� BREEDŸ���� ����� �� ������ �ܺο��� ����Ϸ��� (::)���� �ذ� �����ڶ�� Dog�� �Ҽӵ� �������̶�� �˷���� �Ѵ�.
Dog::BREED Dog::GetBreed() const
{
	return mBreed;
}

void Dog::SetBreed(Dog::BREED breed)
{
	mBreed = breed;
}

void Dog::Roll()
{
	std::cout << "ROLLING SUNDER!!!!!!!!!!!!!!!!" << std::endl;
}