#include <iostream>
#include "SLL.h"

Element* InputElement(SLL& list, int value)
{
	// 1. �������� �޸𸮸� �Ҵ��Ͽ� �Է� ���� ���� ����
	Element* one = new Element{ value };
	// 2. ù ��° ������ ��� head, tail�� ù ��° ���ҿ� ��� ����
	if (list.head == nullptr && list.tail == nullptr)
	{
		list.head = one;
		list.tail = one;
	}
	else
	{
		// 3. ù ��° ���Ұ� �ƴ� ��� ���� ���ҿ� ���� ���Ҹ� �����ϰ� tail�� ���� ���ҷ� ����
		list.tail->pNext = one;
		list.tail = one;
	}
	return one;
}

int CountElement(SLL& list)
{
	// 1. ���� �迭�� ��ȸ�� ���ҿ� ������ �� ������ �����.
	Element* c = list.head;
	int count{};
	// 2. �� ������ ������ ���� ������ ����.
	while (c != nullptr)
	{
		count++;
		c = c->pNext;
	}
	return count;
}

Element* FindElement(SLL& list, int value)
{
	// 1. ���� �迭�� ��ȸ�� ���Ҹ� �����.
	Element* f = list.head;
	// 2. �Ű������� ������ ���� ã�Ƽ� ��ȯ�Ѵ�.
	while (f != nullptr)
	{
		if (f->value == value) return f;
		f = f->pNext;
	}
	return nullptr;
}

void PrintElement(SLL& list)
{
	// 1. ���� �迭�� ��ȸ�� ���Ҹ� �����.
	Element* p = list.head;
	// 2. �迭�� ��ȸ�ϸ� ����Ѵ�.
	while (p != nullptr)
	{
		std::cout << p->value << "\n";
		p = p->pNext;
	}
}

void DeleteElement(SLL& list)
{
	// 1. ���� �迭�� ��ȸ�� ���Ҹ� �����.
	Element* d = list.head;
	// 2. �ӽ� ���Ҹ� ���� ���� ������ ���� ���Ҹ� �̸� ������ ���� ���Ҹ� �����.
	while (d != nullptr)
	{
		Element* temp = d->pNext;
		delete d;
		d = temp;
	}
	// 3. �� �����ٸ� head�� tail�� �ʱ�ȭ ���ش�.
	list.head = list.tail = nullptr;
}

void DeleteElement(SLL& list, int value)
{
	// 1. ���� �迭�� ��ȸ�� ���ҿ� ������ ���� ���� ���Ұ� �ʿ��ϴ�.
	Element* e = list.head;
	Element* preV{};
	// 2. �迭�� ��ȸ �ϸ鼭 ���� ���Ҹ� ã�´�.
	while (e != nullptr)
	{
		if (e->value == value) break;
		preV = e;
		e = e->pNext;
	}
	
	// 3. ���� �Ű������� ��ġ�ϴ� ���Ұ� ���ٸ� ��ȯ�Ѵ�.
	if (e == nullptr) return;
	// 4. ���� �迭�� head�� ���� ���Ҷ�� head�� ��ġ�� ���� ���ҷ� �ٲ��ش�.
	else if (list.head == e) list.head = e->pNext;
	// 5. ���� �迭�� tail�� ���� ���Ҷ�� tail�� ��ġ�� ���� ���ҷ� �ٲ��ش�.
	else if (list.tail == e)
	{
		list.tail = preV;
		preV->pNext = e->pNext;
	}// 6. �̰͵� �ƴϰ� ���͵� �ƴ� ��� ���� ���ҿ� ���� ������ ���� ���Ҹ� ������ �ش�.
	else
		preV->pNext = e->pNext;
	// 7. ���� �����.
	delete e;
}
