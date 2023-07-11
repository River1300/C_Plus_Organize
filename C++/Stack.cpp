#include <iostream>
#include "Stack.h"

void Initialize(Stack& stack)
{	// ���� ������ �ʱ�ȭ
	stack.count = 0;
	stack.pTop = nullptr;
}

void Push(Stack& stack, int value)
{	// ���� �߰�
	Element* pElement = new Element{ value, nullptr };
	pElement->pPrev = stack.pTop;
	stack.pTop = pElement;
	stack.count++;
}

bool Pop(Stack& stack)
{	// ���� ������
	if (stack.count == 0)
	{
		std::cout << "Stack is Empty\n";
		return false;
	}
	
	Element* temp = stack.pTop;
	stack.pTop = stack.pTop->pPrev;
	stack.count--;
	std::cout << "POP : " << temp->value << '\n';
	return true;
}

void Print(Stack& stack)
{	// ���� ���
	Element* pElement = stack.pTop;
	while (pElement != nullptr)
	{
		std::cout << pElement->value << '\n';
		pElement = pElement->pPrev;
	}
}

void ClearAll(Stack& stack)
{	// ��� ���� ����
	Element* pElement = stack.pTop;
	while (pElement != nullptr)
	{
		Element* pPrev = pElement->pPrev;
		delete pElement;
		pElement = pPrev;
	}
	Initialize(stack);
}

/*
three -> pPrev = two(pTop)	   | pTop = three
two   -> pPrev = one(pTop)	   | pTop = two
one   -> pPrev = nullptr(pTop) | pTop = one
*/