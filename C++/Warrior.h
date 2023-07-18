#pragma once
#include "Character.h"

/* < �߻� Ŭ������ ��� ���� �Ļ� Ŭ���� > */

/*
< �Ļ� Ŭ���� > : �߻� Ŭ������ ��� ���� ���� �Լ��� �������̵� �ؾ߸� �Ѵ�.
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
	// #. Attack(), Dead(), Reborn() ��� �Լ��� ���� �Լ��� ������ �Ѵ�.
};