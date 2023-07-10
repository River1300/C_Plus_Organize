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
// #. �����̶�� Ư�� ������ �ε����� ����( + )�� ������ ���� ������ �����ؾ߸� �Ѵ�.
// #. �ε����� 0���� ������ ��� 0�� �ڸ��� ��� ������ -1�� �ʱ�ȭ �Ѵ�.
};
void PrintInfo()
{
	std::cout << "<STACK>" << std::endl;
	std::cout << "[1] push" << std::endl;
	std::cout << "[2] pop" << std::endl;
	std::cout << "M--------AAA--------M" << std::endl;
}
void PrintStack(Stack& stack)
{	// #. ���ÿ� ����� ���� ����Ѵ�.
	std::cout << "---- stack ----" << std::endl;
	if (stack.topIndex < 0)
	{	// topIndex�� -1�� ��� ���þ��� ����ִ�.
		std::cout << "----------------" << std::endl;
		std::cout << "EMPTY" << std::endl;
		return;
	}
	for (int i = stack.topIndex; i >= 0; i--)
	{	// ������ ���� �Ʒ��� ����� ������.
		std::cout << stack.container[i] << std::endl;
	}	std::cout << "----------------" << std::endl;
}
void Push(Stack& stack, int value)
{	// #. ���ÿ� ���Ҹ� �״´�.
	if (stack.topIndex >= STACK_SIZE - 1)
	{
		std::cout << "������ ���� á���ϴ�." << std::endl;
		return;
	}
	stack.container[++stack.topIndex] = value;
}
void Pop(Stack& stack)
{	// #. ���ÿ� �׿��ִ� ���Ҹ� ������.
	if (stack.topIndex < 0)
	{
		std::cout << "������ ��� �ֽ��ϴ�." << std::endl;
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
			std::cout << "�߸��� ��ɾ� �Դϴ�!" << std::endl;
		}
	}
}

int main()
{
	Stack myStack;
	PrintInfo();
	ProcessUserInput(myStack);
}