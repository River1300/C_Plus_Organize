#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "Student.h"

//void AddStudent(std::vector<Student>& vector)
//{
//	std::cout << "��ȣ �̸� ���� : ";
//
//	// Ÿ���� ���� �� ���� �ƴ� �� ���̱⿡ ��ü�� ��� ���Ϳ� �������ش�.
//	Student newStudent;
//	// ���� ������ ���� �ʿ� ���� std::cin �� ���� Ŭ���� ��� ������ ���̷�Ʈ ������ �����ϴ�.
//	if (std::cin >> newStudent.mNumber >> newStudent.mName >> newStudent.mScore)
//	{	// ����� �������� �⺻ Ÿ�� �Է��� �����Ͽ� Ÿ�Կ� ���� �ʴ� �Է��� �ڵ����� �ɷ�����.
//		for (auto& elem : vector)
//		{
//			if (elem.mNumber == newStudent.mNumber)
//			{
//				std::cout << "�ߺ��� �л� ��ȣ�Դϴ�.\n";
//				return;
//			}
//		}
//		// Ŭ���� ��ü�� ������ ���ҷ� ���� �ִ´�.
//		vector.push_back(newStudent);
//	}
//	else
//	{
//		std::cout << "�߸��� �Է��Դϴ�.\n";
//	}
//}
void AddStudent(std::vector<Student>& vector)
{
	std::cout << "��ȣ �̸� ���� : ";

	Student newStudent;
	if (std::cin >> newStudent.mNumber >> newStudent.mName >> newStudent.mScore)
	{	// find_if : ���� �������� �� �������� ��ȸ�ϸ� ���� �Լ��� ���ǿ� �´��� ã�Ƴ���.
		auto itr = std::find_if(vector.begin(), vector.end(), [&](auto& elem)->bool
			{	// bool Ÿ���� ��ȯ�ϸ� �ܺ� �ڷḦ ���������� �޴� ���ٽ�
				return elem.mNumber == newStudent.mNumber;
			});
		if (itr != vector.end())
		{	// itr �� end() ������ ����Ų�ٴ� ���� ���ٽ� ���ǿ� ��ġ�ϴ� ���� ���ٴ� ��
			std::cout << "�ߺ��� �л� ��ȣ�Դϴ�." << std::endl;
			return;	// itr �� end() ������ �ƴ϶�� �߰��� ���ٽ� ���ǿ� ��ġ�ϴ� ���� �־��ٴ� ��
		}
		vector.push_back(newStudent);
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	}
}

//void RemoveStudent(std::vector<Student>& vector)
//{
//	std::cout << "������ ��ȣ�� �Է��ϼ��� : ";
//	int number;
//	if (std::cin >> number)
//	{
//		for (auto itr = vector.begin(); itr != vector.end(); itr++)
//		{	// iterator �� ������ �����̱� ������ ȭ��ǥ �����ڷ� ����� �����Ѵ�.
//			if (itr->mNumber == number)
//			{	// iterator �� ������ ����, iterator �� ������ ����, iterator �� ������ ����
//				vector.erase(itr);
//				break;
//			}
//		}
//	}
//	else
//	{
//		std::cout << "�߸��� �Է��Դϴ�.\n";
//	}
//}
void RemoveStudent(std::vector<Student>& vector)
{
	std::cout << "������ ��ȣ�� �Է��ϼ��� : ";
	int number;
	if (std::cin >> number)
	{	// remove_if �� �����̳��� ũ�⸦ �ٲ����� �ʱ� ������ erase() �� ���ؼ� �� ������ ������ �ش�.
		vector.erase(std::remove_if(vector.begin(), vector.end(), [&](auto& elem)->bool
			{	// remove_if : ���ٽ� ���ǿ� �´� ���Ҹ� ã�Ƽ� �����ϰ� end() ������ ��ȯ�Ѵ�.
				return elem.mNumber == number;
			}));
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	}
}

void PrintStudent(std::vector<Student>& vector)
{
	for (auto& elem : vector)
	{	// Ŭ������ ��� �Լ��� ���� ��� ������ ��� ��µǱ� ������ �ݺ��� ���ָ� �ȴ�.
		elem.Print();
	}
}

//void PrintScoreInfo(std::vector<Student>& vector)
//{
//	int total{ 0 };
//	for (auto& elem : vector)
//	{
//		total += elem.mScore;
//	}
//	std::cout << "���� : " << total << " , ��� : " << total / vector.size() << std::endl;
//}
void PrintScoreInfo(std::vector<Student>& vector)
{
	int total{ 0 };
	total = std::accumulate(vector.begin(), vector.end(), 0, [](int accum, auto& elem)
		{	// accumulate : ���� ���� ���� �� �������� ������ ��( 0 )���� ���� op ������ �����ؼ� ���� ���� ��Ų��.
			return accum += elem.mScore;
		});
	std::cout << "���� : " << total << " , ��� : " << total / vector.size() << std::endl;
	// #. BinaryOperation : ���� ������ ��, ���� ������ �� ���� �Ű������� ������ ������ ���� ��ȯ �Ѵ�.
}

//void PrintOverAverage(std::vector<Student>& vector)
//{
//	int average{ 0 };
//	for (auto& elem : vector)
//	{
//		average += elem.mScore;
//	}
//	average /= vector.size();
//	for (auto elem : vector)
//	{
//		if (elem.mScore >= average)
//		{
//			elem.Print();
//		}
//	}
//}
void PrintOverAverage(std::vector<Student>& vector)
{
	int average{ 0 };
	for (auto& elem : vector)
	{
		average += elem.mScore;
	}
	average /= vector.size();
	std::for_each(vector.begin(), vector.end(), [&](auto& elem) {
		if (elem.mScore >= average)
		{	// for_each �� ������ �ݺ��� �����ϸ鼭 �Լ��� ���� ������ �����ϴٴ� ���̴�.
			elem.Print();
		}});
}