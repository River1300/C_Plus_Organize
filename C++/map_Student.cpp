#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include "map_Student.h"

using Students = std::map<int, Student>;

std::ostream& operator<<(std::ostream& os, const Student& student)
{	// #. PrintStudent 함수에서 사용할 연산자 함수
	os << student.mName << " : " << student.mScore << std::endl;
	return os;
}

void AddStudent(Students& container)
{
	std::cout << "번호 이름 점수 : ";
	int number;
	Student newStudent;
	if (std::cin >> number >> newStudent.mName >> newStudent.mScore)
	{
		auto result = container.insert({ number, newStudent });
		if (!result.second)
		{
			std::cout << "중복된 학생 번호입니다." << std::endl;
			return;
		}
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
	}
}

void RemoveStudent(Students& container)
{
	std::cout << "삭제할 번호를 입력하세요 : ";
	int number;
	if (std::cin >> number)
	{
		container.erase(number);
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
	}
}
// #. 두 개의 값을 묶어서 반환 받을 수 있는 pair 클래스를 매개변수로 받는다.
void PrintStudent(Students::value_type& pair)
{	// #. first 는 키 값을 second 는 Student 값을 나타낸다.
	std::cout << "(" << pair.first << ")" << pair.second;
}

void PrintStudents(Students& container)
{	// container 를 사용자 정의 타입으로 바꾸어 반복을 진행한다.
	for (std::pair<const int, Student>& pair : container)
	{
		PrintStudent(pair);
	}
}

void PrintScoreInfo(Students& container)
{
	int total{ 0 };
	total = std::accumulate(container.begin(), container.end(), 0, [](int accum, auto& pair)
		{
			return accum += pair.second.mScore;
		});
	std::cout << "총점 : " << total << " , 평균 : " << total / container.size() << std::endl;
}

void PrintOverAverage(Students& container)
{
	int average{ 0 };
	for (auto& pair : container)
	{
		average += pair.second.mScore;
	}
	average /= container.size();

	std::for_each(container.begin(), container.end(), [&](auto& pair)
		{
			if (pair.second.mScore >= average)
			{
				PrintStudent(pair);
			}
		});
}