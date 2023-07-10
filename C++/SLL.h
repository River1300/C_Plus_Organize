#pragma once

struct Element
{
	// #. 원소 안에는 값과 다음 원소를 가리킬 포인터가 있다.
	int value;
	Element* pNext;
};

struct SLL
{
	// #. 동적 자료구조의 시작점과 끝점을 가리킨다.
	Element* head = nullptr;
	Element* tail = nullptr;
};

Element* InputElement(SLL& list, int value);	// 원소 추가
int CountElement(SLL& list);	// 원소 갯수 반환
Element* FindElement(SLL& list, int value);	// 원소 찾기
void PrintElement(SLL& list);	// 원소 출력
void DeleteElement(SLL& list);	// 원소 전체 삭제
void DeleteElement(SLL& list, int value);	// 원소 삭제