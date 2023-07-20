/* ----- < 표준 라이브러리( Standard Library : STL ) > ----- */

/*
< STL > : 표준 템플릿 라이브러리( Standard Template Library )
	#. 어떤 자료형에도 사용할 수 있는 자료구조들과 알고리즘으로 이루어진 라이브러리

< 컨테이너( Container ) > : 자료 구조를 위한 템플릿 클래스
	#. 원소를 관리하는 집합과 같은 공간이며 다른 말로 컬렉션( Collection )이라고 한다.

< 반복자( Iterator ) > : 컨테이너 원소들을 순회( Traverse )하기 위한 일반화된 방법을 말한다.
	#. 반복자는 컨테이너에 종속적이지 않기 때문에 언제든지 분리/결합하여 사용이 가능하다.
		#. 포인터 개념 : 원소를 가리킨다.
		#. 원소 순회 : ++, --, --, != 등의 연산자를 지원한다.
		#. 시작과 끝을 제공한다. : .begin(), .end()
	#. 어떤 컨테이너든 간에 동일한 방법으로 순회가 가능하다.

< 알고리즘( Algorithm ) > : 쉽게 생각할 수 있는 정렬, 검색, 복사부터 구현하기 어려운 기능까지 세계 최고의 프로그래머들이 미리 준비해둔 알고리즘 집합니다.
*/

/* --- < std::string > --- */

//#include <iostream>
//#include <string>	// #. 문자를 원소로 가지는 컨테이너이다.
//					// #. 헤더 파일을 보면 string 은 basic_string 템플릿의 char 인스턴스임을 알 수 있다.
//int main()
//{	// #. container 인 string 의 기능을 살펴 보겠다.
//	std::string s1{ "Hello" }, s2{ "World!" };
//
//	s1 = s2;		// #1. 문자열의 복사 배정을 진행할 수 있다.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	s1 += s2;		// #2. 문자열을 이어 붙일 수 있다.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	s1[0] = 'Z';	// #3. 문자열의 첨자 접근을 통해 특정 문자를 바꿀 수 있다.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	if (s1 == s2) {}	// #4. 두 문자열이 같은지 아닌지를 판단하는 제어문을 만들 수 있다.
//
//	std::cout << s1.size() << std::endl;	// #5. 문자열의 크기를 알 수 있다.
//	std::cout << s1.length() << std::endl;	// #6. 문자열의 길이를 알 수 있다.
//
//	const char* pStr = s1.c_str();	// #7. 문자열의 시작 주소를 C 스타일로 반환하는 함수이다.
//
//	s1.insert(3, s2);	// #8. 문자열 중간에 문자를 추가할 수 있다.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	s1.append(s2);		// #9. 가장 뒤에 문자 혹은 문자열을 추가해 준다.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	s1.erase(0, 3);		// #10. 지정한 시작( 이상 )인덱스 부터 n 개의 문자를 지운다.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	std::cout << s1.find('e') << std::endl;	// #11. 문자를 검색해서 참거짓으로 반환한다.
//	std::cout << s1.find("ell") << std::endl;	// #12. 문자열을 검색해서 참거짓으로 반환한다.
//}

//#include <iostream>
//
//void TestPrint(std::string& str)
//{
//	std::cout << str.length() << " : " << str << std::endl;
//}
//
//int main()
//{
//	std::string empty;	// #. string 객체의 선언만을 진행
//	TestPrint(empty);
//
//	std::string sized(10, '\0');	// #. 클래스 크기지정 생성자를 이용하여 크기와 기본 문자를 넘져줌
//	TestPrint(sized);
//
//	std::string s1("test");
//	std::cout << s1[0] << s1[1] << s1[2] << s1[3] << std::endl;
//
//	std::string s2(s1);		// #. 클래스의 복사 생성자를 이용하여 동일한 문자열 객체를 만듦
//	std::string s3 = s1 + s2;
//	TestPrint(s3);
//
//	empty = s3;
//	TestPrint(empty);
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	int number{ 123 };
//	std::string str{};
//
//	str = std::to_string(number);	// 다른 타입의 값을 문자열로 변환하여 대입하는 함수
//// int, float, double 등 기본 타입으로 오버로딩되어 있다.
//
//	number = std::stoi(str);		// string_to_integer 문자열을 정수형 값으로 변환하여 대입하는 함수
//// 실수로 변경하는 std::stof 도 있다.
//
//	std::cout << str << "<->" << number << std::endl;
//}

//#include <iostream>
//#include <string>
//#include <sstream>
//
//int main()
//{	// 주어진 양식에 맞게 문자열을 출력하는 함수가 있다.
//	int number{ 1 };
//	char name[]{ "River" };
//	float average{ 11.1f };
//
//	char output[128]{};	// C Style
//	sprintf_s(output, sizeof(output), "%d번 학생 %s는 평균 %.1f 입니다.", number, name, average);
//	printf(output);
//
//	std::ostringstream oss;	// C++ Style - string stream
//	oss << number << "번 학생 " << name << "는 평균 " << average << " 입니다.";
//	std::cout << oss.str();
//}

//#include <iostream>
//#include <string>
//#include <sstream>
//
//int main()
//{
//	int myInt{ 123 };
//	float myFloat{ 3.141592f };
//	bool myBool{ true };
//
//	// < boolalpha class > : bool 타입의 변수를 ( 0/1 )이 아닌( false/true )형태로 출력 시켜준다.
//	std::cout << myBool << std::endl;
//	std::cout << std::boolalpha << myBool << std::endl;
//
//	// 10진수 : dec / 16진수 : hex / 8진수 : oct
//	std::cout << std::dec << myInt << std::endl;
//	std::cout << std::hex << myInt << std::endl;
//	std::cout << std::oct << myInt << std::endl;
//
//	// 정밀도( precision ) : 소수점 포함 출력 숫자의 자릿수
//	std::cout.precision(3);	// 인스턴스의 멤버함수 형태로 호출해주어야 한다.
//	std::cout << myFloat << std::endl;
//
//	std::cout.fill('0');	// 배열의 빈 공간을 지정한 문자로 채워준다.
//	std::cout.width(10);	// 문자 간격을 조정해준다.
//	std::cout << myInt << std::endl;
//}

/* < #7. c_str() > */

//#include <iostream>
//#include <string>	// #. c_str() 함수는 const char* 자료형을 반환한다. ( 내용을 변경할 수 없는, char 형 포인터 )
//
//int main()
//{	// #. string 클래스 내부에는 char 타입의 배열이 들어있다.
//	char str[30];
//	std::string s1{ "abcd" };
//// #. string 클래스에 있는 char 타입의 배열은 크기가 동적으로 변할 수 있다.
//
//	const char* pch = s1.c_str();	// #. pch 는 c_str() 함수가 반환한 문자열 리터럴를 가리킨다.
//// #. 이 때, 포인터가 가리키는 것은 해당 문자열의 첫 번째 문자이다.
//
//	char* tar = (char*)pch;	// #. char 타입의 포인터 tar 에 pch 의 값( 문자열 주소값 )을 대입해 준다.
//	tar[3] = 'B';			// #. 상수 포인터가 아닌 tar 는 문자열을 바꿀 수 있게 된다.
//
//	strcpy_s(str, s1.c_str());	// #. c_str() 함수가 반환한 문자열 리터럴( 정확히는 문자열의 시작 주소 )가 NULL 문자를 만날 때 까지 str 에 복사된다.
//
//	std::cout << str << std::endl;
//	std::cout << s1 << std::endl;
//// < const char* c_str() const; > : 단지, string 에 있는 내부 문자열의 시작 주소를 가져오기 위한 함수이다.
//}

/* < #8. insert() > */

//#include <iostream>
//#include <string>
//
//int main()
//{	// insert 함수는 문자열 중간에 문자를 추가해 주는 함수이다.
//	std::string s = "xmple";
//
//	// #1. insert(size_type index, size_type count, char ch)
//	s.insert(0, 1, 'E');	// #1. 주어진 인덱스 번호에 한 개의 문자를 추가한다.
//	std::cout << s << std::endl;
//	// #2. insert(size_type index, const char* s)
//	s.insert(2, "AAA");		// #2. 주어진 인덱스 번호에 문자열을 추가한다.
//	std::cout << s << std::endl;
//}

/* --- < std::wstring > --- */

//#include <iostream>
//// #. 유니코드 문자를 원소로 가지는 컨테이너이다.
//// #. 헤더파일을 보면 wstring 은 basic_string 템플릿의 wchar_t 인스턴스임을 알 수 있다.
//
//int main()
//{
//	char ch = 'a';
//	wchar_t wch = '가';	// #. < wchar_t > : 유니코드 전용 문자 타입
//// 영어 이외의 언어는 유니코드로 지정되어 있다.
//
//	std::wstring myName = L"김주연";
//// 유니코드를 입력할 때 문자열 앞에 L 키워드를 입력한다.
//}

/* --- < iterator > --- */

//#include <iostream>
//
//int main()
//{
//	std::string s{ "Hello World!" };
//
//// #1. < const_iterator begin() const; > : 문자열의 첫 번째 문자를 가리키는 iterator 을 반환한다.
//	s.begin();
//// #2. < const_iterator end() const; > : 문자열의 마지막의 바로 다음을 가리키는 iterator 을 반환한다.
//	s.end();
//
//	for (std::string::iterator itr = s.begin(); itr != s.end(); itr)
//	{	// #3. iterator 는 포인터 개념이기 때문에 ( * )역참조 연산자를 통해서 내부 값에 진입할 수 있다.
//		std::cout << *itr;
//	}
//}

/* ----- < std::array > ----- */

/*
< std::array( Random Access ) > : 정적 배열
	#. 순차적( Sequence ) : 정해진 순서가 있고, 그 순서대로 접근한다.
	#. 연속된 저장공간( Contiguaous ) : 포인터로 이동이 가능하다.
	#. 정적 : 저장공간의 크기가 고정되어 있다.
	#. 연산 : algorithm 에 정의된 함수들을 사용할 수 있다.
	#. 생성자 : 클래스의 생성자를 호출하여 초기화 할 수 있다.
	#. 소멸자 : 배열 소멸 시에 모든 원소들의 소멸자를 호출한다.
*/

//#include <iostream>
//#include <array>
//
//int main()
//{
//	int arr[3]{ 1,2,3 };
//	int b[3];
//	b = arr;
//// #. 일반 배열의 경우 대입 연산자를 통한 값의 복사 배정을 할 수 없다.
//
//	std::array<int, 3> x{ 1,2,3 };
//	std::array<int, 3> y;
//	y = x;
//// #. std::array 는 배열의 각각의 원소들에 대해 대입 연산자를 호출할 수 있다.
//}

//#include <iostream>
//#include <array>
//
//int main()
//{
//	std::array<int, 6> data = { 1,2,4,5,5,6 };
//
//	data.at(1) = 88;	// #. 배열의 인덱스 1로 찾아가 값을 바꾸어 준다.
//	// #. 배열의 인덱스 2로 찾아가 값을 참조형으로 반환한다.
//	std::cout << "인덱스 2 에 위치한 원소 : " << data.at(2) << "\n";
//	std::cout << "data 배열의 크기 = " << data.size() << "\n";
//
//	try {	//#. 크기가 고정되어 있기 때문에 배열의 크기를 넘어가는 원소를 참조할 경우 에러가 발생한다.
//		data.at(6) = 666;
//	}
//	catch (std::out_of_range const& exc) {
//		std::cout << "예외 발생 : " << exc.what() << "\n";
//	}
//
//	std::cout << "data : ";
//	for (auto e : data)
//	{
//		std::cout << " " << e;
//	}	std::cout << std::endl;
//}

//#include <iostream>
//#include <array>
//
//int main()
//{
//	std::array<int, 3> x = { 1,2,3 };
//	std::array<int, 0> y;
//	// #. 각각 첫 번째와 마지막 원소를 참조형으로 반환해준다.
//	std::cout << x.front() << " : " << x.back() << std::endl;
//	std::cout << y.front() << " : " << y.back() << std::endl;
//// #. 배열의 크기가 0 일 경우, front 와 back 함수를 호출할 수 없다.
//}

//#include <iostream>
//#include <array>
//#include <cstddef>
//
//void pointer_func(const int* p, std::size_t size)
//{
//	std::cout << "data = ";
//	for (std::size_t i = 0; i < size; i++)
//	{
//		std::cout << p[i] << " ";
//	}	std::cout << std::endl;
//}
//
//int main()
//{
//	std::array<int, 4>container{ 1,2,3,4 };
//	pointer_func(container.data(), container.size());
//// #. data() 함수는 std::array 가 참조하고 있는 배열의 시작 주소값을 반환한다.
//}

//#include <iostream>
//#include <array>
//
//int main()
//{
//	std::array<int, 3> x{ 1,2,3 };
//
//	std::cout << "시작점을 나타내는 iterator : ";
//	for (auto itr = x.begin(); itr != x.end(); itr++)
//	{
//		std::cout << *itr << " ";
//	}	std::cout << std::endl;
//	std::cout << "역방향 시작점을 나타내는 iterator : ";
//	for (auto itr = x.rbegin(); itr != x.rend(); itr++)
//	{
//		std::cout << *itr << " ";
//	}	std::cout << std::endl;
//}

//#include <iostream>
//#include <array>
//#include <algorithm>
//
//int main()
//{
//	std::array<int, 6> data = { 3,1,5,2,6,4 };
//	std::sort(data.begin(), data.end());
//
//	for (auto e : data)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}

//#include <iostream>
//#include <array>
//
//int main()
//{	// 배열의 크기가 0 인지 아닌지 bool 타입으로 반환한다.
//	std::array<int, 4> arr;
//	std::cout << arr.empty() << std::endl;
//	std::array<int, 0> brr;
//	std::cout << brr.empty() << std::endl;
//
//	arr.fill(3);	// 모든 배열의 원소를 인자로 전달된 값으로 채운다.
//	for (auto e : arr)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//
//	std::array<int, 4> crr{ 1,1,1,1 };
//	arr.swap(crr);	// 두 배열의 내용을 바꾼다.
//	for (auto e : arr)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}

/* ----- < Container-Vector > ----- */

/*
< 벡터( Vector ) > : 자동으로 메모리가 할당되는 배열
	#. 벡터 객체는 원소의 타입을 지정해서 인스턴스와 한다.
	#. 벡터 객체는 원소들의 크기와 해당 원소들의 시퀀스를 가지고 있다.
	#. 원소들의 시퀀스는 인덱스를 이용해 접근이 가능하다.

< 순수 수학적 벡터 > : S 집합의 연속된 n 개의 값
< 기하학적 벡터 > : 크기와 방향을 가진 값
*/

/* --- < std::vector_Basic > --- */

//#include <iostream>
//#include <vector>
//
//int main()
//{	// v 라는 이름의 객체에 5개의 원소가 생성되고 각각의 값이 저장되어있다.
//	// 각각의 원소들은 1차 배열처럼 연결되어 있다.
//	std::vector<int> v{ 2,3,1,5,6 };
//	// 문자열로 된 시퀀스도 만들 수 있다.
//	std::vector<std::string> v2{ "doggy","kitty","bunny" };
//
//	std::vector<int> v3(5);	// 5 개의 원소를 저장할 수 있는 빈 vector 객체를 만든다.
//
//	std::cout << v[0];
//	v[1] = 9;
//	// v[5] = 10;	// v 의 크기를 넘어갈 경우 run-time error 가 발생한다.
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{	// vecter 클래스를 int 타입으로 특수화하여 v 라는 이름의 객체를 생성한다.
//	std::vector<int> v{ 2,3,1,5,6 };	// 객체 v 에는 5개의 원소가 있다.
//	
//	v.push_back(2); // 배열에 한 칸 추가하고 값 2 를 저장
//	v.push_back(3);	// 배열에 한 칸 추가하고 값 3 을 저장
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v{ 1,2,3,4,5 };
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		std::cout << v[i] << std::endl;
//		++v[i];
//	}
//	for (int& x : v)
//	{	// x 는 지역 변수로 정의되었기 때문에 일반적으로는 값을 바꿀 수 없다. x 를 참조형 변수로 정의해야 값을 바꿀 수 있다.
//		std::cout << x << std::endl;
//		++x;
//// traverse( 순회 )
//// < 범위 기반 반복( range-based-loop ) [0 : size()) > : 반복문 조건식으로 0 이상 ~ size() 미만
//	}
//
//	// 일반 배열도 내부적으로 Container 취급을 해준다. ( 실제로는 아니지만 )
//	std::string myName = { "PartManSu" };
//	for (char x : myName)
//	{
//		std::cout << x;
//	}
//	int array[]{ 1,2,3,4 };
//	for (int x : array)
//	{
//		std::cout << x;
//	}
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v;
//	int sum{};
//
//	// int 타입의 값을 입력받는다면 계속해서 반복되는 구조
//	for (int value; std::cin >> value;)
//	{	// 입력한 값은 한 개씩 원소로 저장된다.
//		v.push_back(value);
//	}
//	for (int e : v)	// v 에 저장된 원소의 개수만큼 원소의 시작부터 끝까지 순회한다.
//	{
//		sum += e;
//	}
//	// static_cast 로 형변환을 진행한다.
//	std::cout << sum << " : " << static_cast<float>(sum) / v.size() << std::endl;
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v1{ 3 };	// 유니폼 초기화식
//
//	// 기본 값으로 초기화 된 3개의 원소를 가지는 v2 이름의 객체
//	std::vector<int> v2(3);		// 직접초기화 ( 생성자를 통한 초기화 )
//
//	for (int e : v1)
//	{	// 현재 v1 은 한 개의 원소만 갖고 있다.
//		std::cout << e << " ";
//	}
//	std::cout << std::endl;
//	for (int e : v2)
//	{	// 현재 v2 는 3 개의 원소를 갖고 있다.
//		std::cout << e << " ";
//	}
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v{ 1,2,3,4,5,6,7,8,9 };
//
//	v.assign(5, 2);		// #1. 2의 값으로 5개의 원소를 할당한다.
//// #1. 기존에 초기화한 원소들은 제거된다.
//
//	int& a = v.at(0);	// #2. 객체에 저장된 몇 번째 원소를 참조형으로 반환한다.
//	a = 99;				// #2. 참조형으로 반환된 값은 해당 원소의 주소값으로 봐도 무방하다.
//
//	int& b = v[1];		// #3. 객체에 저장된 몇 번째 원소를 참조형으로 반환한다.
//	b = 88;				// #3. at() 함수보다 빠른 속도로 컴파일하지만 안전하지 않다.
//
//	int& c = v.front();	// #4. 첫 번째 원소를 참조형으로 반환한다.
//	c = 11;
//
//	int& d = v.back();	// #5. 마지막 원소를 참조형으로 반환한다.
//	d = 99;
//
//	v.clear();			// #6. 모든 원소를 제거한다. 
//// #6. 원소만 제거하고 메모리는 남아있다. ( size 는 줄어들지만 capacity 는 그대로 )
//
//	v = { 1,2,3,4,5,6,7,8,9 };
//
//	v.push_back(99);	// #7. 마지막 원소 뒤에 원소를 추가한다.
//	v.pop_back();		// #8. 마지막 원소를 제거한다.
//
//	v.begin();			// #9. 첫 번째 원소를 가리킨다.
//	v.end();			// #10. 마지막 원소의 바로 뒤를 가리킨다.
//// #9, #10. iterator 클래스를 사용할 때 사용하는 포인터 개념의 함수
//
//	v.rbegin();			// #11. 원소 배열을 뒤집었을 때 첫 번째 원소를 가리킨다. ( 마지막 원소 )
//	v.rend();			// #12. 원소 배열을 뒤집었을 때 마지막 원소 바로 뒤를 가리킨다. ( 첫 번째 원소 앞 공간 )
//// #11, #12. 원소를 뒤에서 부터 순회할 때 사용한다.
//
//	v.reserve(5);		// #13. 몇 개의 원소를 저장할 위치를 예약한다. 
//// #13. vecter 타입으로 입력된 개수 만큼 동적할당을 해놓는다.
//
//	v.resize(12);		// #14. 크기를 몇 개로 변경한다.
//// #14. 값이 들어가 있는 원소보다 더 큰 크기일 경우 0의 값으로 초기화해준다.
//
//	v.resize(15, 3);	// #15. 크기를 몇 개로 변경한다.
//// #15. 값이 들어가 있는 원소보다 더 큰 크기일 경우 입력한 임의의 값으로 초기화해준다.
//
//	// #16, 17. 현재 원소의 갯수와 할당된 크기를 반환해준다.
//	std::cout << v.size() << " : " << v.capacity() << std::endl;
//
//	std::vector<int>v2{ 1,2,3,4,5 };
//
//	v2.swap(v);		// #18. 두 개의 원소 배열을 서로 바꿔 준다.
//
//	std::cout << v.empty() << std::endl;	// #19. 객체의 size 가 0일 경우 true 를 반환한다.
//
//	std::cout << v.size() << " : " << v.capacity() << std::endl;
//
//	for (auto e : v) { std::cout << e << " "; }
//}

/* < size / capacity > */

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v;
//	std::cout << "[ v[i], v.size(), v.capacity() ]" << std::endl;
//
//// #1. size() : 원소의 갯수를 반환한다.
//// #2. capacity() : 할당된 공간의 크기를 반환한다. ( c++ 에서는 기본 메모리 * 2 로 증가한다. )
//	
//	for (int i = 0; i <= 64; i++)
//	{
//		v.push_back(i + 1);
//		std::cout << "[ " << v[i] << " , " << v.size() << " , " << v.capacity() << " ]" << std::endl;
//// #3. size 는 데이터가 채워진 원소의 갯수 이고, capacity 는 할당된 메모리 공간임을 알 수 있다.
//	}
//}

/* < vector 의 멤버 형식 > */

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v;
//
//	v.push_back(21); v.push_back(32); v.push_back(53); v.push_back(64); v.push_back(15);
//
//// #1. < size_type > : 원소의 개수의 형식
//	std::cout << "ex1-1) [ v.at(i) ] size_type : ";
//	for (std::vector<int>::size_type i = 0; i < v.size(); i++)
//	{
//		std::cout << v.at(i) << " ";
//	}   std::cout << std::endl;
//
//	std::cout << "ex1-1) [ v[i] ] size_type : ";
//	for (std::vector<int>::size_type i = 0; i < v.size(); i++)
//	{
//		std::cout << v[i] << " ";
//	}	std::cout << std::endl << std::endl;
//
//
//// #2. < iterator > : 반복자 형식
//	std::cout << "ex2) [ *iter ] iterator : ";
//	std::vector<int>::iterator itr;
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " ";
//	}	std::cout << std::endl;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//
//int main()
//{
//	std::vector<std::string> v;
//
//	v.push_back("NOODLE");
//	v.push_back("SIN NOODLE");
//	v.push_back("JIN NOODLE");
//	v.push_back("ZZAJANG");
//	v.push_back("PALDO");
//	v.push_back("TMSAE");
//
//// #1. < v.front > : 객체 원소 중 가장 앞에 있는 원소를 참조형으로 반환하는 함수
//// #2. < v.back > : 객체 원소 중 가장 뒤에 있는 원소를 참조형으로 반환하는 함수
//	std::cout << "//ex3) v.front(), v.back()" << std::endl;
//	std::cout << "v.front() : " << v.front() << std::endl;
//	std::cout << "v.back() : " << v.back() << std::endl;
//	std::cout << std::endl;
//
//	std::cout << "//ex4) v.popback()" << std::endl;
//	std::vector<std::string>::iterator itr;
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " / ";
//	}	std::cout << std::endl;
//
//	v.pop_back();	// #3. < v.pop_back > : 객체 원소 중 가장 뒤에 있는 원소를 제거하는 함수
//
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " / ";
//	}	std::cout << std::endl << std::endl;
//
//	std::cout << "//ex6) v.erase(itr)" << std::endl;
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		if (*itr == "JIN NOODLE")
//		{	// #4. < v.erase(itr) > : 객체를 순회하며 특정 원소를 제거하는 함수
//			v.erase(itr);
//			break;
//		}
//	}
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " / ";
//	}	std::cout << std::endl << std::endl;
//
//// #5. 객체 안에 원소가 제거될 경우 size 는 줄어 들지만 capacity 는 초기에 할당한 값 그대로 유지되고 있다.
//	std::cout << "//ex7) v.size(), v.capacity()" << std::endl;
//	std::cout << "v.size() : " << v.size() << std::endl;
//	std::cout << "v.capacity() : " << v.capacity() << std::endl;
//}

/*
< Contaier > : 임의 타입의 객체를 보관할 수 있는 컨테이너
	#. < Sequence Container > : 배열 처럼 객체들을 순차적으로 보관하는 컨테이너
	#. < Associative Container > : 키를 바탕으로 대응되는 값을 찾아주는 컨테이너

< Iterator > : 컨테이너에 보관된 원소에 접근할 수 있는 반복자

< Algorithm > : 반복자들을 가지고 일련의 작업을 수행하는 알고리즘
*/

//#include <iostream>
//#include <vector>
//
//template <typename T>
//void print_vector(std::vector<T>& vec)
//{
//	for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end(); itr++)
//	{	// iterator 가 std::vector<T> 의 의존 타입이기 때문에 앞에 typename 을 작성해 주어야 한다.
//		std::cout << *itr << std::endl;
//	}
//}
//
//int main()
//{
//	std::vector<int> vec;
//	vec.push_back(10);
//	vec.push_back(20);
//	vec.push_back(30);
//	vec.push_back(40);
//
//	std::cout << "--------- 처음 벡터 상태 ---------" << std::endl << std::endl;
//	print_vector(vec);
//	std::cout << std::endl << "------------------------------------" << std::endl << std::endl;
//
//	vec.insert(vec.begin() + 2, 999);	// #. vec[2] 앞에 값 999 cnrk
//	print_vector(vec);
//	std::cout << std::endl << "------------------------------------" << std::endl << std::endl;
//
//	vec.erase(vec.begin() + 3);			// #. vec[3] 제거
//	print_vector(vec);
//}

/* ----- < 반복자( Iterator ) > ----- */

/*
< 반복자 > : 컨테이너를 순회하기 위한 포인터라고 할 수 있다.
	#. 모든 컨테이너는 반복자를 가지고 있다.
		=> std::vector<int>::iterator itr;
	#. 반복자는 각각의 컨테이너 안에 있는 요소를 구별할 수 있다.
	#. 반복자는 요소안에 저장된 값을 알 수 있다.
		=> *itr
	#. 반복자는 컨테이너 안에 있는 요소들 간에 이동할 수 있는 연산을 제공한다.
*/

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v{ 1,2,3 };
//
//	std::vector<int>::iterator itr;	// #. itr 앞에 있는 문장이 타입이다.
//	itr = v.begin();	// #. iterator 타입의 객체 itr 이 vecter 타입의 객체 v 의 첫 번째 원소를 가리키게 한다.
//
//	while (itr != v.end())
//	{	// #. itr 포인터가 v 객체의 마지막 원소 바로 뒤 주소값을 가리키기 전까지 반복한다.
//		std::cout << *itr << " ";
//		itr++;
//	}
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v{ 1,2,3 };
//
//	for (std::vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " ";
//	}
//}

/* < auto 키워드 > */

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v{ 1,2,3 };
//	auto itr = v.begin();	// #. 컴파일러가 객체의 타입을 추론할 수 있을 경우 auto 로 입력할 수 있다.
//
//	for (auto e : v)
//	{	// #. 컴파일러는 객체 v 의 원소 값이 int 타입이라는 것을 알 수 있기 때문에 객체 e 의 타입을 추론할 수 있다.
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//	for (auto& e : v)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}