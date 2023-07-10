#pragma once

struct Element
{
	// #. ���� �ȿ��� ���� ���� ���Ҹ� ����ų �����Ͱ� �ִ�.
	int value;
	Element* pNext;
};

struct SLL
{
	// #. ���� �ڷᱸ���� �������� ������ ����Ų��.
	Element* head = nullptr;
	Element* tail = nullptr;
};

Element* InputElement(SLL& list, int value);	// ���� �߰�
int CountElement(SLL& list);	// ���� ���� ��ȯ
Element* FindElement(SLL& list, int value);	// ���� ã��
void PrintElement(SLL& list);	// ���� ���
void DeleteElement(SLL& list);	// ���� ��ü ����
void DeleteElement(SLL& list, int value);	// ���� ����