#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include "map_Student.h"

using Students = std::map<int, Student>;

std::ostream& operator<<(std::ostream& os, const Student& student)
{	// #. PrintStudent �Լ����� ����� ������ �Լ�
	os << student.mName << " : " << student.mScore << std::endl;
	return os;
}

void AddStudent(Students& container)
{
	std::cout << "��ȣ �̸� ���� : ";
	int number;
	Student newStudent;
	if (std::cin >> number >> newStudent.mName >> newStudent.mScore)
	{
		auto result = container.insert({ number, newStudent });
		if (!result.second)
		{
			std::cout << "�ߺ��� �л� ��ȣ�Դϴ�." << std::endl;
			return;
		}
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	}
}

void RemoveStudent(Students& container)
{
	std::cout << "������ ��ȣ�� �Է��ϼ��� : ";
	int number;
	if (std::cin >> number)
	{
		container.erase(number);
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	}
}
// #. �� ���� ���� ��� ��ȯ ���� �� �ִ� pair Ŭ������ �Ű������� �޴´�.
void PrintStudent(Students::value_type& pair)
{	// #. first �� Ű ���� second �� Student ���� ��Ÿ����.
	std::cout << "(" << pair.first << ")" << pair.second;
}

void PrintStudents(Students& container)
{	// container �� ����� ���� Ÿ������ �ٲپ� �ݺ��� �����Ѵ�.
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
	std::cout << "���� : " << total << " , ��� : " << total / container.size() << std::endl;
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