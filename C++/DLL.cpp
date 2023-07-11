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
	{	// ù ��°�� ������� ���Ұ� �ƴ϶�� �ű� ������ ���� ���� ���� ���ҿ� ����
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
		if (e->pPrev == nullptr) list.head = e->pNext;	// ������ ���Ұ� ���� �տ� �ִ� ������ ��� head�� ����
		else e->pPrev->pNext = e->pNext;	// �װ� �ƴ϶�� ���� ������ �ڸ� �հ� ���� ����
		
		if (e->pNext == nullptr) list.tail = e->pPrev;	// ������ ���Ұ� ���� �ڿ� �ִ� ������ ��� tail�� ����
		else e->pNext->pPrev = e->pPrev;	// �װ� �ƴ϶�� ���� ������ ���� �ڿ� ����

		delete e;
	}
}
