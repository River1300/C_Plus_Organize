#include <iostream>
#include "SLL.h"

Element* InputElement(SLL& list, int value)
{
	// 1. 동적으로 메모리를 할당하여 입력 받은 값을 저장
	Element* one = new Element{ value };
	// 2. 첫 번째 원소일 경우 head, tail을 첫 번째 원소에 모두 연결
	if (list.head == nullptr && list.tail == nullptr)
	{
		list.head = one;
		list.tail = one;
	}
	else
	{
		// 3. 첫 번째 원소가 아닐 경우 이전 원소와 현재 원소를 연결하고 tail을 현재 원소로 연결
		list.tail->pNext = one;
		list.tail = one;
	}
	return one;
}

int CountElement(SLL& list)
{
	// 1. 동적 배열을 순회할 원소와 갯수를 셀 변수를 만든다.
	Element* c = list.head;
	int count{};
	// 2. 빈 공간을 만날때 까지 갯수를 센다.
	while (c != nullptr)
	{
		count++;
		c = c->pNext;
	}
	return count;
}

Element* FindElement(SLL& list, int value)
{
	// 1. 동적 배열을 순회할 원소를 만든다.
	Element* f = list.head;
	// 2. 매개변수와 동일한 값을 찾아서 반환한다.
	while (f != nullptr)
	{
		if (f->value == value) return f;
		f = f->pNext;
	}
	return nullptr;
}

void PrintElement(SLL& list)
{
	// 1. 동적 배열을 순회할 원소를 만든다.
	Element* p = list.head;
	// 2. 배열을 순회하며 출력한다.
	while (p != nullptr)
	{
		std::cout << p->value << "\n";
		p = p->pNext;
	}
}

void DeleteElement(SLL& list)
{
	// 1. 동적 배열을 순회할 원소를 만든다.
	Element* d = list.head;
	// 2. 임시 원소를 만들어서 지울 원소의 다음 원소를 미리 가리켜 놓고 원소를 지운다.
	while (d != nullptr)
	{
		Element* temp = d->pNext;
		delete d;
		d = temp;
	}
	// 3. 다 지웠다면 head와 tail도 초기화 해준다.
	list.head = list.tail = nullptr;
}

void DeleteElement(SLL& list, int value)
{
	// 1. 동적 배열을 순회할 원소와 연결을 위한 이전 원소가 필요하다.
	Element* e = list.head;
	Element* preV{};
	// 2. 배열을 순회 하면서 지울 원소를 찾는다.
	while (e != nullptr)
	{
		if (e->value == value) break;
		preV = e;
		e = e->pNext;
	}
	
	// 3. 만약 매개변수와 일치하는 원소가 없다면 반환한다.
	if (e == nullptr) return;
	// 4. 만약 배열의 head가 지울 원소라면 head의 위치를 다음 원소로 바꿔준다.
	else if (list.head == e) list.head = e->pNext;
	// 5. 만약 배열의 tail이 지울 원소라면 tail의 위치를 이전 원소로 바꿔준다.
	else if (list.tail == e)
	{
		list.tail = preV;
		preV->pNext = e->pNext;
	}// 6. 이것도 아니고 저것도 아닐 경우 이전 원소와 지울 원소의 다음 원소를 연결해 준다.
	else
		preV->pNext = e->pNext;
	// 7. 이제 지운다.
	delete e;
}
