#pragma once
#include <iostream>
#include <vector>

class Student
{
public:
	int mNumber;
	std::string mName;
	int mScore;

	void Print()
	{
		std::cout << "(" << mNumber << ") " << mName << " : " << mScore << std::endl;
	}
};

void AddStudent(std::vector<Student>& vector);		// �ű� �л� ���
void RemoveStudent(std::vector<Student>& vector);	// �л� ����
void PrintStudent(std::vector<Student>& vector);	// �л��� ���
void PrintScoreInfo(std::vector<Student>& vector);	// �б� ���� ���
void PrintOverAverage(std::vector<Student>& vector);// ��� �̻��� �л� ���