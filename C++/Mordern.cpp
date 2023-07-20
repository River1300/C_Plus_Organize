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