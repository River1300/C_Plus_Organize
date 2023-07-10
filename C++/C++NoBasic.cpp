/* ----- < 자료구조 훈련 > ----- */
//
//
//
//
//
/* --- < 스택( Stack ) > --- */

/*
< 스택 > : LIFO( Last In First Out )의 특성을 가진 자료 구조다.
	#. push : 가장 상단에 값을 집어 넣는다.
	#. pop : 가장 상단의 값을 꺼내어 돌려준다.
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
//// #. 스택이라는 특성 때문에 인덱스의 증가( + )그 다음에 값의 대입을 실행해야만 한다.
//// #. 인덱스를 0부터 시작할 경우 0의 자리가 비기 때문에 -1로 초기화 한다.
//};
//void PrintInfo()
//{
//	std::cout << "<STACK>" << std::endl;
//	std::cout << "[1] push" << std::endl;
//	std::cout << "[2] pop" << std::endl;
//	std::cout << "M--------AAA--------M" << std::endl;
//}
//void PrintStack(Stack& stack)
//{	// #. 스택에 저장된 값을 출력한다.
//	std::cout << "---- stack ----" << std::endl;
//	if (stack.topIndex < 0)
//	{	// topIndex가 -1일 경우 스택안은 비어있다.
//		std::cout << "----------------" << std::endl;
//		std::cout << "EMPTY" << std::endl;
//		return;
//	}
//	for (int i = stack.topIndex; i >= 0; i--)
//	{	// 위에서 부터 아래로 출력해 나간다.
//		std::cout << stack.container[i] << std::endl;
//	}	std::cout << "----------------" << std::endl;
//}
//void Push(Stack& stack, int value)
//{	// #. 스택에 원소를 쌓는다.
//	if (stack.topIndex >= STACK_SIZE - 1)
//	{
//		std::cout << "스택이 가득 찼습니다." << std::endl;
//		return;
//	}
//	stack.container[++stack.topIndex] = value;
//}
//void Pop(Stack& stack)
//{	// #. 스택에 쌓여있는 원소를 꺼낸다.
//	if (stack.topIndex < 0)
//	{
//		std::cout << "스택이 비어 있습니다." << std::endl;
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
//			std::cout << "잘못된 명령어 입니다!" << std::endl;
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

/* --- < 큐( Queue ) > --- */

/*
< 큐 > : FIFO( First In First Out )의 특성을 가진 자료 구조다.
	#. enqueue(put, push) : 가장 하단에 값을 집어 넣는다.
	#. dequeue(get, pop) : 가장 상단의 값을 꺼내어 돌려 준다.
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
//{	// #. 원형 큐를 만들기 위한 구조체 생성
//	int container[QUEUE_SIZE]{};
//	int head{};
//	int tail{};
//// #. head == tail은 큐가 비어 있다는 뜻
//// #. (tail+1)%배열 크기 == head는 배열이 가득 찼다는 뜻
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
//	{	// #. 배열의 인덱스가 배열 크기를 넘어가지 못하게 한다.
//		i = (i + 1) % QUEUE_SIZE;
//		std::cout << queue.container[i] << " ";
//	}	std::cout << std::endl << "------------" << std::endl;
//}
//void Enqueue(Queue& queue, int value)
//{	// #. 큐에 원소를 저장한다.
//	if ((queue.tail + 1) % QUEUE_SIZE == queue.head)
//	{
//		std::cout << "큐가 가득 찼습니다!!!" << std::endl;
//		return;
//	}
//	queue.tail = (queue.tail + 1) % QUEUE_SIZE;
//	queue.container[queue.tail] = value;
//}
//void Dequeue(Queue& queue)
//{	// #. 큐에서 원소를 꺼내온다.
//	if (queue.head == queue.tail)
//	{
//		std::cout << "큐가 비었습니다!!!" << std::endl;
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
//			std::cout << "잘못된 명령어 입니다." << std::endl;
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

/* --- < 동적 자료구조( Dynamic Data Structure ) > --- */

/*
< 단일 연결 리스트( Single Linked List ) > : 일렬로 나열된 동적 자료구조로 한 방향으로만 연결
	#. 생성 : 새로운 원소를 할당해서 가장 뒤에 붙여 준다.
	#. 개수 : 처음부터 끝까지( 순회 : Traverse ) 원소를 세서 돌려주면 된다.
	#. 검색 : 순회하면서 동일한 원소를 찾아서 반환한다.
	#. 삭제 : 특정한 원소를 삭제하고 연결고리를 이어준다.
	#. 삽입 : 특정한 원소 뒤에 생성하고 연결고리를 이어준다.
	#. < 준비물 >
		=> head : 리스트의 시작
		=> tail : 리스트의 끝
		=> next : 다음 원소를 가리킴

< 이중 연결 리스트( Double Linked List ) > : 일렬로 나열된 자료구조로 양 방향으로 연결
*/

#include <iostream>
#include "SLL.h"

int main()
{
	SLL myList;

	InputElement(myList, 10);
	InputElement(myList, 20);
	InputElement(myList, 30);

	std::cout << CountElement(myList) << std::endl;
	PrintElement(myList);

	std::cout << std::endl << "-------------------------------------" << std::endl;

	DeleteElement(myList, 30);

	std::cout << CountElement(myList) << std::endl;
	PrintElement(myList);

	DeleteElement(myList);
}