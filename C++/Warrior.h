#pragma once
#include "Character.h"

/* < 추상 클래스를 상속 받은 파생 클래스 > */

/*
< 파생 클래스 > : 추상 클래스의 모든 순수 가상 함수를 오버라이딩 해야만 한다.
*/

class Warrior : public Character
{
public:
	Warrior();
	~Warrior();

public:
	void Attack() const;
	void DoubleSlash() const;

	void Dead() const;
	void Reborn() const;
	// #. Attack(), Dead(), Reborn() 기반 함수의 가상 함수를 재정의 한다.
};