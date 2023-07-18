#pragma once

/*
< FIRST_STEP_일반화 > : 상태나 행동들 중에서 '동물'이라는 일반 개념으로 올릴 수 있는 것을 기반 클래스로 설계한다.
	#. Dog객체를 구성하기 위한 다양한 상태/행동을 나열한다.
	#. 그 중 Dog객체에 포함되면서 동물의 일반적인 상태/행동을 나타내는 개념을 상위 클래스로 묶어준다.
*/

class Animal
{
protected:
	// #. < is-a > 관계에서 private로멤버 변수를 숨길 경우 상속이 않되기 때문에 protected로 숨겨 준다.
	// #. protected접근 제한자는 클래스 외부에서는 보이지 않으나 상속된 클래스 내부에서는 접근이 가능하다.
	int mAge;
	int mWeight;	// 상속할 수 있는 공통된 상태

public:
	Animal();
	Animal(int age, int weight);
	~Animal();

	int GetAge() const;		// 멤버 변수를 반환만해주고 값을 바꾸지는 않을 것이다.
	void SetAge(int age);	// 매개 변수를 받고 멤버변수를 바꿔준다.
	int GetWeight() const;
	void SetWeight(int weight);

	void Sound();	// 상속할 수 있는 공통된 행동
};