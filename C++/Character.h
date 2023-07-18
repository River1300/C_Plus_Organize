#pragma once
#include <iostream>
/* --- < 순수 가상 함수( Pure Virtual Function ) > --- */

/*
< 추상 클래스( Abstract Class ) > : 순수 가상 함수가 한 개라도 있는 클래스
	#. 추상 클래스는 인스턴스를 만들 수 없다.
	#. 순수 가상 함수 : 정의가 없는 형태의 가상 함수( virtual 함수 = 0; )
		#. 때에 따라서 정의할 수도 있다.
	#. virtual ~Character(); : 파생 클래스를 갖는 기반 클래스는 반드시 소멸자를 가상 함수로 지정해야 한다.

< 순수 가상 함수 > : 파생 클래스에서 반드시 정의하게 끔 규격을 정해 준다.
	#. 가상 함수 선언 뒤에 = 0을 붙여 준다.
*/

class Character
{
protected:
	int mHp;

public:
	Character();
	virtual ~Character();

public:
	// 가상 함수로 지정하여 함수를 호출하는 시점( run-time )에 어떤 함수를 연결할 지 결정한다.
	virtual void Attack() const;

	virtual void Dead() const = 0;
	virtual void Reborn() const
	{
		std::cout << "\tI'm Back!!!" << std::endl;
	}
	// %1. 순수 가상 함수( pure virtual function ) = 추상( Abstract )클래스
	// %2. 정의가 없어야하고 이 경우 자식 클래스에서 반드시 정의해주어야 한다.
};