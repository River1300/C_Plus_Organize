/* ----- < �ڷᱸ�� �Ʒ� > ----- */
//
//
//
//
//
/* --- < ����( Stack ) > --- */

/*
< ���� > : LIFO( Last In First Out )�� Ư���� ���� �ڷ� ������.
	#. push : ���� ��ܿ� ���� ���� �ִ´�.
	#. pop : ���� ����� ���� ������ �����ش�.
*/

//#include <iostream>
//
//const int STACK_SIZE{ 10 };
//
//enum Command
//{
//	PUSH = 1, POP = 2
//};
//struct Stack
//{
//	int container[STACK_SIZE]{};
//	int topIndex{ -1 };
//// #. �����̶�� Ư�� ������ �ε����� ����( + )�� ������ ���� ������ �����ؾ߸� �Ѵ�.
//// #. �ε����� 0���� ������ ��� 0�� �ڸ��� ��� ������ -1�� �ʱ�ȭ �Ѵ�.
//};
//void PrintInfo()
//{
//	std::cout << "<STACK>" << std::endl;
//	std::cout << "[1] push" << std::endl;
//	std::cout << "[2] pop" << std::endl;
//	std::cout << "M--------AAA--------M" << std::endl;
//}
//void PrintStack(Stack& stack)
//{	// #. ���ÿ� ����� ���� ����Ѵ�.
//	std::cout << "---- stack ----" << std::endl;
//	if (stack.topIndex < 0)
//	{	// topIndex�� -1�� ��� ���þ��� ����ִ�.
//		std::cout << "----------------" << std::endl;
//		std::cout << "EMPTY" << std::endl;
//		return;
//	}
//	for (int i = stack.topIndex; i >= 0; i--)
//	{	// ������ ���� �Ʒ��� ����� ������.
//		std::cout << stack.container[i] << std::endl;
//	}	std::cout << "----------------" << std::endl;
//}
//void Push(Stack& stack, int value)
//{	// #. ���ÿ� ���Ҹ� �״´�.
//	if (stack.topIndex >= STACK_SIZE - 1)
//	{
//		std::cout << "������ ���� á���ϴ�." << std::endl;
//		return;
//	}
//	stack.container[++stack.topIndex] = value;
//}
//void Pop(Stack& stack)
//{	// #. ���ÿ� �׿��ִ� ���Ҹ� ������.
//	if (stack.topIndex < 0)
//	{
//		std::cout << "������ ��� �ֽ��ϴ�." << std::endl;
//		return;
//	}
//	std::cout << stack.container[stack.topIndex--] << " is poped!" << std::endl;
//}
//void ProcessUserInput(Stack& stack)
//{
//	while (true)
//	{
//		int command{};
//		PrintStack(stack);
//		std::cout << std::endl;
//		std::cout << ">  ";
//		std::cin >> command;
//
//		switch (command)
//		{
//		case PUSH:
//			{
//				int value;
//				std::cout << "    value : ";
//				std::cin >> value;
//				Push(stack, value);
//				break;
//			}
//		case POP:
//			Pop(stack);
//			break;
//		default:
//			std::cout << "�߸��� ��ɾ� �Դϴ�!" << std::endl;
//		}
//	}
//}
//
//int main()
//{
//	Stack myStack;
//	PrintInfo();
//	ProcessUserInput(myStack);
//}

/* --- < ť( Queue ) > --- */

/*
< ť > : FIFO( First In First Out )�� Ư���� ���� �ڷ� ������.
	#. enqueue(put, push) : ���� �ϴܿ� ���� ���� �ִ´�.
	#. dequeue(get, pop) : ���� ����� ���� ������ ���� �ش�.
*/

//#include <iostream>
//
//const int QUEUE_SIZE{ 10 };
//
//enum Command
//{
//	ENQUEUE = 1, DEQUEUE = 2
//};
//struct Queue
//{	// #. ���� ť�� ����� ���� ����ü ����
//	int container[QUEUE_SIZE]{};
//	int head{};
//	int tail{};
//// #. head == tail�� ť�� ��� �ִٴ� ��
//// #. (tail+1)%�迭 ũ�� == head�� �迭�� ���� á�ٴ� ��
//};
//void PrintInfo()
//{
//	std::cout << "<QUEUE>" << std::endl;
//	std::cout << "[1] enqueue" << std::endl;
//	std::cout << "[2] dequeue" << std::endl;
//}
//void PrintQueue(Queue& queue)
//{
//	std::cout << "---- queue ----" << std::endl;
//	if (queue.head == queue.tail)
//	{
//		std::cout << "----------------" << std::endl;
//		std::cout << "EMPTY" << std::endl;
//		return;
//	}
//	int i = queue.head;
//	while (i != queue.tail)
//	{	// #. �迭�� �ε����� �迭 ũ�⸦ �Ѿ�� ���ϰ� �Ѵ�.
//		i = (i + 1) % QUEUE_SIZE;
//		std::cout << queue.container[i] << " ";
//	}	std::cout << std::endl << "------------" << std::endl;
//}
//void Enqueue(Queue& queue, int value)
//{	// #. ť�� ���Ҹ� �����Ѵ�.
//	if ((queue.tail + 1) % QUEUE_SIZE == queue.head)
//	{
//		std::cout << "ť�� ���� á���ϴ�!!!" << std::endl;
//		return;
//	}
//	queue.tail = (queue.tail + 1) % QUEUE_SIZE;
//	queue.container[queue.tail] = value;
//}
//void Dequeue(Queue& queue)
//{	// #. ť���� ���Ҹ� �����´�.
//	if (queue.head == queue.tail)
//	{
//		std::cout << "ť�� ������ϴ�!!!" << std::endl;
//		return;
//	}
//	queue.head = (queue.head + 1) % QUEUE_SIZE;
//	std::cout << queue.container[queue.head] << " dequeue." << std::endl;
//}
//void ProcessUserInput(Queue& queue)
//{
//	while (true)
//	{
//		int command{};
//		PrintQueue(queue);
//		std::cout << std::endl;
//		std::cout << ">  ";
//		std::cin >> command;
//		
//		switch (command)
//		{
//		case ENQUEUE:
//			{
//				int value;
//				std::cout << "   value : ";
//				std::cin >> value;
//				Enqueue(queue, value);
//				break;
//			}
//		case DEQUEUE:
//			Dequeue(queue);
//			break;
//		default:
//			std::cout << "�߸��� ��ɾ� �Դϴ�." << std::endl;
//			return;
//		}
//	}
//}
//int main()
//{
//	Queue myQueue;
//
//	PrintInfo();
//	ProcessUserInput(myQueue);
//}

/* --- < ���� �ڷᱸ��( Dynamic Data Structure ) > --- */

/*
< ���� ���� ����Ʈ( Single Linked List ) > : �Ϸķ� ������ ���� �ڷᱸ���� �� �������θ� ����
	#. ���� : ���ο� ���Ҹ� �Ҵ��ؼ� ���� �ڿ� �ٿ� �ش�.
	#. ���� : ó������ ������( ��ȸ : Traverse ) ���Ҹ� ���� �����ָ� �ȴ�.
	#. �˻� : ��ȸ�ϸ鼭 ������ ���Ҹ� ã�Ƽ� ��ȯ�Ѵ�.
	#. ���� : Ư���� ���Ҹ� �����ϰ� ������� �̾��ش�.
	#. ���� : Ư���� ���� �ڿ� �����ϰ� ������� �̾��ش�.
	#. < �غ� >
		=> head : ����Ʈ�� ����
		=> tail : ����Ʈ�� ��
		=> next : ���� ���Ҹ� ����Ŵ

< ���� ���� ����Ʈ( Double Linked List ) > : �Ϸķ� ������ �ڷᱸ���� �� �������� ����
*/

//#include <iostream>
//#include "SLL.h"
//#include "DLL.h"
//
//int main()
//{
//	SLL myList;
//
//	InputElement(myList, 10);
//	InputElement(myList, 20);
//	InputElement(myList, 30);
//
//	std::cout << CountElement(myList) << std::endl;
//	PrintElement(myList);
//
//	std::cout << std::endl << "-------------------------------------" << std::endl;
//
//	DeleteElement(myList, 30);
//
//	std::cout << CountElement(myList) << std::endl;
//	PrintElement(myList);
//
//	DeleteElement(myList);
//
//	DDL myList;
//
//	InputElement(myList, 10);
//	InputElement(myList, 20);
//	InputElement(myList, 30);
//
//	CountElement(myList);
//	PrintElement(myList);
//
//	std::cout << std::endl << "------------------------------" << std::endl;
//
//	DeleteElement(myList, 10);
//
//	CountElement(myList);
//	PrintElement(myList);
//
//	DeleteElement(myList);
//}

#include <iostream>
#include "Stack.h"

void PrintInfo()
{
	std::cout << "-----STACK-----" << std::endl;
	std::cout << "[1] push" << std::endl;
	std::cout << "[2] pop" << std::endl;
	std::cout << "[3] exit" << std::endl;
	std::cout << "---------------" << std::endl;
}
void ProcessUserInput(Stack& stack)
{
	int command{};
	while (true)
	{
		Print(stack);
		std::cout << std::endl;
		std::cout << ">  ";
		std::cin >> command;

		switch (command)
		{
		case PUSH:
		{
			int value;
			std::cout << "   > ";
			std::cin >> value;
			Push(stack, value);
			break;
		}
		case POP:
			Pop(stack);
			break;
		case EXIT:
			return;
		default:
			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
			break;
		}
	}
}

int main()
{
	Stack myStack;

	Initialize(myStack);

	PrintInfo();
	ProcessUserInput(myStack);
	ClearAll(myStack);
}