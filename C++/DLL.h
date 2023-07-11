#pragma once

struct Element
{
	int value;
	Element* pNext;	// 양방향 리스트 이므로 이전과 다음 원소를 연결하는 고리 필요
	Element* pPrev;
};

struct DDL
{
	Element* head = nullptr;
	Element* tail = nullptr;
};

Element* InputElement(DDL& list, int value);
int CountElement(DDL& list);
Element* FindElement(DDL& list, int value);
void PrintElement(DDL& list);
void DeleteElement(DDL& list);
void DeleteElement(DDL& list, int value);