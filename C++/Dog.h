#pragma once
#include "Animal.h"

/*
< SECOND_STEP_특수화 > : Dog객체만이 갖고 있는 특수한 상태/행동을 묶어준다.
	#. 먼저 만들어 놓은 상위 클래스를 파생하여 만든다.
*/

class Dog : public Animal
{
public:
	enum BREED
	{
		BEAGLE, DOBERMAN, BERNARD, CHIHUAHUA, HUSKY, RETRIEVER
	};

private:
	BREED mBreed;		// 파생된 클래스의 특수한 상태

public:
	Dog();
	Dog(int age, int weight, Dog::BREED breed);
	~Dog();

	BREED GetBreed() const;
	void SetBreed(BREED breed);

	void Roll();		// 파생된 클래스의 특수한 행동
};