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
	{	// 처음 저장된 원소일 경우 배열의 시작과 끝 지점을 현재 원소에 지정한다.
		queue.pFront = pElement;
		queue.pRear = pElement;
	}
	else
	{	// 바로 이전에 만들었던 원소의 다음 연결 고리를 현재 원소와 연결해주고 배열의 끝 지점을 현재 원소로 지정
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
