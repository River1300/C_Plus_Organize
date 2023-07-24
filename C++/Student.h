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

void AddStudent(std::vector<Student>& vector);		// 신규 학생 등록
void RemoveStudent(std::vector<Student>& vector);	// 학생 전학
void PrintStudent(std::vector<Student>& vector);	// 학생부 출력
void PrintScoreInfo(std::vector<Student>& vector);	// 학급 점수 출력
void PrintOverAverage(std::vector<Student>& vector);// 평균 이상의 학생 출력