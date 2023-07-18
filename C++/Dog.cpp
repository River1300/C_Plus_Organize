#include <iostream>
#include "Dog.h"

Dog::Dog() : mBreed{ BREED::RETRIEVER }
{
	std::cout << "---[DOG SECOND!!!]---" << std::endl;
}

// #. 아무리 상속을 받았다 하더라도 멤버초기화는 해당 클래스에서만 가능하다.
// #. 부모의 생성자를 불러오는 대리 생성자
Dog::Dog(int age, int weight, Dog::BREED breed) : mBreed{ breed }, Animal{ age,weight }
{
	// #. 생성자는 각각 자신의 멤버들만 관리하는 것이 가장 좋은 방법이다.
		//mAge = age;			// 부모의 멤버를 정의할 수 있지만 권장하지는 않는다.
		//mWeight = weight;
	std::cout << "DOG BREED" << std::endl;
}

Dog::~Dog()
{
	std::cout << "DESTROY DOG" << std::endl;
}

// #. 클래스 내부에 있을 때는 BREED타입을 사용할 수 있지만 외부에서 사용하려면 (::)범위 해결 연산자라고 Dog에 소속된 열거형이라고 알려줘야 한다.
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