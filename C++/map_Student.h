#pragma once
#include <iostream>
#include <map>

class Student
{
public:
	std::string mName;
	int mScore;
};

using Students = std::map<int, Student>;	// #. map 은 key 와 value 가 한 쌍이다.

// #. 학생 정보 출력( value )
std::ostream& operator<<(std::ostream& os, const Student& student);
void AddStudent(Students& container);			// #. 학생 추가
void RemoveStudent(Students& container);		// #. 학생 제거

void PrintStudent(Students::value_type& pair);	// #. 학생 출력
// #. std::map<class Key, class T> 형태를 임의로 std::pair<const Key, T> 형태로 정의한 타입

void PrintStudents(Students& container);
void PrintScoreInfo(Students& container);
void PrintOverAverage(Students& container);