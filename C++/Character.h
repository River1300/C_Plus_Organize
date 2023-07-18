#pragma once
#include <iostream>
/* --- < ���� ���� �Լ�( Pure Virtual Function ) > --- */

/*
< �߻� Ŭ����( Abstract Class ) > : ���� ���� �Լ��� �� ���� �ִ� Ŭ����
	#. �߻� Ŭ������ �ν��Ͻ��� ���� �� ����.
	#. ���� ���� �Լ� : ���ǰ� ���� ������ ���� �Լ�( virtual �Լ� = 0; )
		#. ���� ���� ������ ���� �ִ�.
	#. virtual ~Character(); : �Ļ� Ŭ������ ���� ��� Ŭ������ �ݵ�� �Ҹ��ڸ� ���� �Լ��� �����ؾ� �Ѵ�.

< ���� ���� �Լ� > : �Ļ� Ŭ�������� �ݵ�� �����ϰ� �� �԰��� ���� �ش�.
	#. ���� �Լ� ���� �ڿ� = 0�� �ٿ� �ش�.
*/

class Character
{
protected:
	int mHp;

public:
	Character();
	virtual ~Character();

public:
	// ���� �Լ��� �����Ͽ� �Լ��� ȣ���ϴ� ����( run-time )�� � �Լ��� ������ �� �����Ѵ�.
	virtual void Attack() const;

	virtual void Dead() const = 0;
	virtual void Reborn() const
	{
		std::cout << "\tI'm Back!!!" << std::endl;
	}
	// %1. ���� ���� �Լ�( pure virtual function ) = �߻�( Abstract )Ŭ����
	// %2. ���ǰ� ������ϰ� �� ��� �ڽ� Ŭ�������� �ݵ�� �������־�� �Ѵ�.
};