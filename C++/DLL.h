#pragma once

struct Element
{
	int value;
	Element* pNext;	// ����� ����Ʈ �̹Ƿ� ������ ���� ���Ҹ� �����ϴ� �� �ʿ�
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