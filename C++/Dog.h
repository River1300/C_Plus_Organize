#pragma once
#include "Animal.h"

/*
< SECOND_STEP_Ư��ȭ > : Dog��ü���� ���� �ִ� Ư���� ����/�ൿ�� �����ش�.
	#. ���� ����� ���� ���� Ŭ������ �Ļ��Ͽ� �����.
*/

class Dog : public Animal
{
public:
	enum BREED
	{
		BEAGLE, DOBERMAN, BERNARD, CHIHUAHUA, HUSKY, RETRIEVER
	};

private:
	BREED mBreed;		// �Ļ��� Ŭ������ Ư���� ����

public:
	Dog();
	Dog(int age, int weight, Dog::BREED breed);
	~Dog();

	BREED GetBreed() const;
	void SetBreed(BREED breed);

	void Roll();		// �Ļ��� Ŭ������ Ư���� �ൿ
};