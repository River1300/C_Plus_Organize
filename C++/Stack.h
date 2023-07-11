#pragma once

enum Command
{
	PUSH = 1, POP = 2, EXIT = 3
};

struct Element
{	// �ڽ��� ���� �ڽ� ������ ������� ���ҿ��� ���� ��
	int value;
	Element* pPrev;
};

struct Stack
{	// ���� ������ ����� ������ ����, ���� �������� ���� ���� ������
	int count;
	Element* pTop;
};

void Initialize(Stack& stack);
void Push(Stack& stack, int value);
bool Pop(Stack& stack);
void Print(Stack& stack);
void ClearAll(Stack& stack);