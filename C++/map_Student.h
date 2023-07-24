#pragma once
#include <iostream>
#include <map>

class Student
{
public:
	std::string mName;
	int mScore;
};

using Students = std::map<int, Student>;	// #. map �� key �� value �� �� ���̴�.

// #. �л� ���� ���( value )
std::ostream& operator<<(std::ostream& os, const Student& student);
void AddStudent(Students& container);			// #. �л� �߰�
void RemoveStudent(Students& container);		// #. �л� ����

void PrintStudent(Students::value_type& pair);	// #. �л� ���
// #. std::map<class Key, class T> ���¸� ���Ƿ� std::pair<const Key, T> ���·� ������ Ÿ��

void PrintStudents(Students& container);
void PrintScoreInfo(Students& container);
void PrintOverAverage(Students& container);