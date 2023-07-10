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

#include <iostream>

const int STACK_SIZE{ 10 };

enum Command
{
	PUSH = 1, POP = 2
};
struct Stack
{
	int container[STACK_SIZE]{};
	int topIndex{ -1 };
// #. 스택이라는 특성 때문에 인덱스의 증가( + )그 다음에 값의 대입을 실행해야만 한다.
// #. 인덱스를 0부터 시작할 경우 0의 자리가 비기 때문에 -1로 초기화 한다.
};
void PrintInfo()
{
	std::cout << "<STACK>" << std::endl;
	std::cout << "[1] push" << std::endl;
	std::cout << "[2] pop" << std::endl;
	std::cout << "M--------AAA--------M" << std::endl;
}
void PrintStack(Stack& stack)
{	// #. 스택에 저장된 값을 출력한다.
	std::cout << "---- stack ----" << std::endl;
	if (stack.topIndex < 0)
	{	// topIndex가 -1일 경우 스택안은 비어있다.
		std::cout << "----------------" << std::endl;
		std::cout << "EMPTY" << std::endl;
		return;
	}
	for (int i = stack.topIndex; i >= 0; i--)
	{	// 위에서 부터 아래로 출력해 나간다.
		std::cout << stack.container[i] << std::endl;
	}	std::cout << "----------------" << std::endl;
}
void Push(Stack& stack, int value)
{	// #. 스택에 원소를 쌓는다.
	if (stack.topIndex >= STACK_SIZE - 1)
	{
		std::cout << "스택이 가득 찼습니다." << std::endl;
		return;
	}
	stack.container[++stack.topIndex] = value;
}
void Pop(Stack& stack)
{	// #. 스택에 쌓여있는 원소를 꺼낸다.
	if (stack.topIndex < 0)
	{
		std::cout << "스택이 비어 있습니다." << std::endl;
		return;
	}
	std::cout << stack.container[stack.topIndex--] << " is poped!" << std::endl;
}
void ProcessUserInput(Stack& stack)
{
	while (true)
	{
		int command{};
		PrintStack(stack);
		std::cout << std::endl;
		std::cout << ">  ";
		std::cin >> command;

		switch (command)
		{
		case PUSH:
			{
				int value;
				std::cout << "    value : ";
				std::cin >> value;
				Push(stack, value);
				break;
			}
		case POP:
			Pop(stack);
			break;
		default:
			std::cout << "잘못된 명령어 입니다!" << std::endl;
		}
	}
}

int main()
{
	Stack myStack;
	PrintInfo();
	ProcessUserInput(myStack);
}