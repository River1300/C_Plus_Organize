#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include "Student.h"

//void AddStudent(std::vector<Student>& vector)
//{
//	std::cout << "번호 이름 점수 : ";
//
//	// 타입의 값이 한 개가 아닌 세 개이기에 객체로 묶어서 벡터에 저장해준다.
//	Student newStudent;
//	// 따로 변수를 만들 필요 없이 std::cin 을 통해 클래스 멤버 변수로 다이렉트 저장이 가능하다.
//	if (std::cin >> newStudent.mNumber >> newStudent.mName >> newStudent.mScore)
//	{	// 제어문의 조건으로 기본 타입 입력을 지정하여 타입에 맞지 않는 입력은 자동으로 걸러낸다.
//		for (auto& elem : vector)
//		{
//			if (elem.mNumber == newStudent.mNumber)
//			{
//				std::cout << "중복된 학생 번호입니다.\n";
//				return;
//			}
//		}
//		// 클래스 객체를 벡터의 원소로 집어 넣는다.
//		vector.push_back(newStudent);
//	}
//	else
//	{
//		std::cout << "잘못된 입력입니다.\n";
//	}
//}
void AddStudent(std::vector<Student>& vector)
{
	std::cout << "번호 이름 점수 : ";

	Student newStudent;
	if (std::cin >> newStudent.mNumber >> newStudent.mName >> newStudent.mScore)
	{	// find_if : 시작 지점부터 끝 지점까지 순회하며 단항 함수의 조건에 맞는지 찾아낸다.
		auto itr = std::find_if(vector.begin(), vector.end(), [&](auto& elem)->bool
			{	// bool 타입을 반환하며 외부 자료를 참조형으로 받는 람다식
				return elem.mNumber == newStudent.mNumber;
			});
		if (itr != vector.end())
		{	// itr 이 end() 지점을 가리킨다는 것은 람다식 조건에 일치하는 값이 없다는 말
			std::cout << "중복된 학생 번호입니다." << std::endl;
			return;	// itr 이 end() 지점이 아니라면 중간에 람다식 조건에 일치하는 값이 있었다는 말
		}
		vector.push_back(newStudent);
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
	}
}

//void RemoveStudent(std::vector<Student>& vector)
//{
//	std::cout << "삭제할 번호를 입력하세요 : ";
//	int number;
//	if (std::cin >> number)
//	{
//		for (auto itr = vector.begin(); itr != vector.end(); itr++)
//		{	// iterator 는 포인터 개념이기 때문에 화살표 연산자로 멤버에 접근한다.
//			if (itr->mNumber == number)
//			{	// iterator 는 포인터 개념, iterator 는 포인터 개념, iterator 는 포인터 개념
//				vector.erase(itr);
//				break;
//			}
//		}
//	}
//	else
//	{
//		std::cout << "잘못된 입력입니다.\n";
//	}
//}
void RemoveStudent(std::vector<Student>& vector)
{
	std::cout << "삭제할 번호를 입력하세요 : ";
	int number;
	if (std::cin >> number)
	{	// remove_if 는 컨테이너의 크기를 바꿔주지 않기 때문에 erase() 를 통해서 빈 공간도 제거해 준다.
		vector.erase(std::remove_if(vector.begin(), vector.end(), [&](auto& elem)->bool
			{	// remove_if : 람다식 조건에 맞는 원소를 찾아서 제거하고 end() 지점을 반환한다.
				return elem.mNumber == number;
			}));
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
	}
}

void PrintStudent(std::vector<Student>& vector)
{
	for (auto& elem : vector)
	{	// 클래스의 멤버 함수를 통해 멤버 변수가 모두 출력되기 때문에 반복만 해주면 된다.
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
//	std::cout << "총점 : " << total << " , 평균 : " << total / vector.size() << std::endl;
//}
void PrintScoreInfo(std::vector<Student>& vector)
{
	int total{ 0 };
	total = std::accumulate(vector.begin(), vector.end(), 0, [](int accum, auto& elem)
		{	// accumulate : 시작 지점 부터 끝 지점까지 지정한 값( 0 )에서 부터 op 연산을 수행해서 값을 누적 시킨다.
			return accum += elem.mScore;
		});
	std::cout << "총점 : " << total << " , 평균 : " << total / vector.size() << std::endl;
	// #. BinaryOperation : 현재 누적된 값, 현재 원소의 두 개의 매개변수를 가지며 누적된 값을 반환 한다.
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
		{	// for_each 의 장점은 반복을 수행하면서 함수를 통해 연산이 가능하다는 것이다.
			elem.Print();
		}});
}