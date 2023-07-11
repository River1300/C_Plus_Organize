#pragma once

enum Command
{
	PUSH = 1, POP = 2, EXIT = 3
};

struct Element
{	// 자신의 값과 자신 이전에 만들어진 원소와의 연결 고리
	int value;
	Element* pPrev;
};

struct Stack
{	// 저장 공간에 저장된 원소의 개수, 가장 마지막에 들어온 원소 포인터
	int count;
	Element* pTop;
};

void Initialize(Stack& stack);
void Push(Stack& stack, int value);
bool Pop(Stack& stack);
void Print(Stack& stack);
void ClearAll(Stack& stack);