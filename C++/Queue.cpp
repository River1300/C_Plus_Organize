#include <iostream>
#include "Queue.h"

void Initialize(Queue& queue)
{
	queue.count = 0;
	queue.pFront = nullptr;
	queue.pRear = nullptr;
}

void Enqueue(Queue& queue, int value)
{
	Element* pElement = new Element{ value,nullptr };

	if (queue.pFront == nullptr && queue.pRear == nullptr)
	{	// ó�� ����� ������ ��� �迭�� ���۰� �� ������ ���� ���ҿ� �����Ѵ�.
		queue.pFront = pElement;
		queue.pRear = pElement;
	}
	else
	{	// �ٷ� ������ ������� ������ ���� ���� ���� ���� ���ҿ� �������ְ� �迭�� �� ������ ���� ���ҷ� ����
		queue.pRear->pNext = pElement;
		queue.pRear = pElement;
	}
	queue.count++;
}

bool Dequeue(Queue& queue)
{
	if (queue.count == 0)
	{
		std::cout << "Queue is Empty\n";
		return false;
	}
	Element* pTemp = queue.pFront;
	queue.pFront = queue.pFront->pNext;
	queue.count--;
	std::cout << "Dequeue : " << pTemp->value << '\n';
	delete pTemp;

	return true;
}

void Print(Queue& queue)
{
	Element* pElement = queue.pFront;
	while (pElement != nullptr)
	{
		std::cout << pElement->value << ' ';
		pElement = pElement->pNext;
	}
}

void ClearAll(Queue& queue)
{
	Element* pElement = queue.pFront;

	while (pElement != nullptr)
	{
		Element* pNext = pElement->pNext;
		delete pElement;
		pElement = pNext;
	}
	Initialize(queue);
}
