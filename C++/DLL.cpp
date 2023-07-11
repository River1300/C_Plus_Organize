#include <iostream>
#include "DLL.h"

Element* InputElement(DDL& list, int value)
{
	Element* one = new Element{ value };
	if (list.head == nullptr && list.tail == nullptr)
	{
		list.head = one;
		list.tail = one;
	}
	else
	{	// 첫 번째로 만들어진 원소가 아니라면 신규 원소의 이전 고리를 이전 원소와 연결
		one->pPrev = list.tail;
		list.tail->pNext = one;
		list.tail = one;
	}
	return one;
}

int CountElement(DDL& list)
{
	Element* c = list.head;
	int count{};
	while (c != nullptr)
	{
		count++;
		c = c->pNext;
	}
	return count;
}

Element* FindElement(DDL& list, int value)
{
	Element* f = list.head;
	while (f != nullptr)
	{
		if (f->value == value) return f;
		f = f->pNext;
	}
	return nullptr;
}

void PrintElement(DDL& list)
{
	Element* p = list.head;
	while (p != nullptr)
	{
		std::cout << p->value << '\n';
		p = p->pNext;
	}
}

void DeleteElement(DDL& list)
{
	Element* e = list.head;
	while (e != nullptr)
	{
		Element* temp = e->pNext;
		delete e;
		e = temp;
	}
	list.head = list.tail = nullptr;
}

void DeleteElement(DDL& list, int value)
{
	Element* e = FindElement(list, value);
	if (e != nullptr)
	{
		if (e->pPrev == nullptr) list.head = e->pNext;	// 제거할 원소가 가장 앞에 있는 원소일 경우 head를 교정
		else e->pPrev->pNext = e->pNext;	// 그게 아니라면 지울 원소의 뒤를 앞과 서로 연결
		
		if (e->pNext == nullptr) list.tail = e->pPrev;	// 제거할 원소가 가장 뒤에 있는 원소일 경우 tail을 교정
		else e->pNext->pPrev = e->pPrev;	// 그게 아니라면 지울 원소의 앞을 뒤와 연결

		delete e;
	}
}
