/* ----- < 복잡한 형식들 > ----- */
//
//
//
//
//
/* --- < 형식 변환( Type Conversion ) > --- */

/*
< 형식( Type ) > : 형식은 해당 객체의 사용 가능한 "값"과 적용할 수 있는 "연산"을 정의한다.
	#. 객체는 주어진 타입의 값을 저장하는 메모리 공간이다.
	#. 값은 주어진 타입으로 메모리 공간의 비트 집합을 해석한 것이다.
	#. 변수는 객체에 이름을 붙여 둔 것이다.
	#. < 선언( declaration ) > : 객체의 이름을 지정하는 구분이다.
	#. < 정의( definition ) > : 객체의 메모리 공간을 할당하는 일종의 선언이다.
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 컴퓨터의 메모리 공간은 항상 비트구조로 되어 있다. 어떤 타입의 값을 저장하더라도 컴퓨터에는|
| 비트화 되어 있기 때문에 타입이 없다면 그 값이 무엇인지 컴퓨터가 알 수 없다.				|
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
*/

//#include <iostream>
//
//int main()
//{
//// 1. Default
//	int myInt = 255;
//	// std::string myStr = myInt; 서로 다른 형식은 저장할 수 없다.
//
//	long long myLong = myInt;
////	#. 4byte인 myInt를 8byte인 myLong에 대입하였다.
////	#. 두 객체는 다른 type이지만 정상적으로 컴파일이 진행됨을 확인할 수 있다.
////	#. 이러한 것을 형식 변환이라고 부른다.
////		=> 크기가 작은 것에서 큰 것으로 변환은 안전하게 변환된다.
////		=> 마치 작은 물컴에 담은 물은 큰 컵에 옮겨 담아도 넘쳐흐르지 않는 것 처럼
//
//// 2. 축소 변환
//	char myChar = myInt;
//	int value = 1.6;
////	#. 4byte 형식을 1byte 형식에 저장할 경우 데이터의 손실이 발생할 수 있다.
////	#. 큰 저장 공간에 있는 값이 작은 저장 공간으로 넘어가면서 발생할 수 있는 문제이다.
////	#. 실수를 정수에 저장할 경우 소수점 아래가 전부 잘려나간다.
//	std::cout << myChar << " : " << value << '\n';
//}

/* < 암시적 형변환( implicit conversion ) > */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 기본적으로 형식 변환의 원칙은 '정보 손실을 최소화'할 수 있는 방향으로 수행한다는 것이다.|
| 정보 손실은 저장 공간이 큰 값에서 작은 값으로 이동할 때 발생하는 것이 기본이지만 정수와 |
| 실수에서도 발생한다.																	  |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< 암시적 형변환 > : 컴파일러가 자동으로 하나의 기본 자료형을 다른 자료형으로 변환한다.
	#. < 숫자 승격( numeric promotion ) > : 한 자료형의 값이 더 큰 유사한 자료형의 값으로 변환
		=> 형식 변환이 되어도 데이터가 그대로 보존된다.
	#. < 숫자 변환( numeric conversion ) > : 한 자료형의 값이 더 작은 유사한 자료형의 값으로 변환
		=> 형식 변환으로 인해 데이터가 손실될 수도 있다.
*/

//#include <iostream>
//
//int main()
//{
//// 1. Default
//	float myFloat = 3;	// int형식의 리터럴 3을 3.0f로 암시적 형변환을 하여 myFloat에 저장한다.
//	double myDouble = 3;	// int형식의 리터럴 3을 3.0으로 암시적 형변환을 하여 myDouble에 저장한다.
//
//// 2. 숫자 승격
//	double d(0.12f);	// float형식의 리터럴 0.12f값을 더 큰 유사항 자료형의 값으로 변환하여 저장한다.
//
//	int i;
//	char c = 1;
//	i = c;	// char 형식의 리터럴 1을 더 큰 유사한 자료형의 값으로 변환하여 저장한다.
//
//	std::cout << d << " : " << i << '\n';
//
//// 3. 숫자 변환
//	double dd = 3;	// 정수 3이 실수 dd에 저장되기 위해 숫자 변환이라는 암시적 형변환이 진행된다.
//	
//	short s = 2;	// 4byte의 int형식 리터럴 2가 2byte의 short형식 변수 s에 저장되기 위해 순자 변환이 진행된다.
//
//	std::cout << dd << " : " << s << '\n';
//}

/* < 명시적 형변환( explicit conversion ) > */

/*
< 명시적 형변환 > : 프로그래머가 직접 지정하는 형변환으로 Type Cast라고 부른다.
	#. 변환 하려는 형식 앞에'(형식)'을 붙여서 명시적으로 표현한다.
	#. 큰 형식에서 작은 형식으로 변환하면 저장공간의 크기 때문에 값이 잘려 나간다.
	#. 명시적으로 표기해도 불가능한 캐스팅이 있다.
*/

//#include <iostream>
//
//int main()
//{
//// 1. Default
//	int myInt = 1000;
//	unsigned char myChar = myInt;
//
//	std::cout << "Int : " << myInt << "\nChar : " << (int)myChar << '\n';
////	#. char 형식의 문자를 명시적 형변환을 통해 정수 형태로 출력하였다.
////	#. int 형식으로 1000이라는 값은 2진수로 [0011 1110 1000]이다.
////	#. char 형식은 최대 255의 값을 담기 때문에 1byte에 해당하는 [1110 1000]만 출력할 수 있다.
//
//// 2. C 스타일 형변환
//	int A = 10;
//	int B = 4;
//
//	float myFloat = A / B;
////	#. [10/4]를 계산하여 2라는 값을 생성하고, 암시적 형변환으로 2.0f라는 값을 변수에 저장한다.
//	
//	myFloat = (float)A / B;
////	#. A를 명시적으로 형식을 바꾸면 A/B계산이 float형식으로 진행되어 2.5f라는 값을 변수에 저장한다.
////	#. C-style cast는 컴파일 타임에 검사되지 않으므로 오용될 수 있다.
//
//	std::cout << myFloat << '\n';
//
//// 3. static_cast
//	char myChar = 'a';
//
//	std::cout << static_cast<int>(myChar) << '\n';
////	#. static_cast는 하나의 자료형을 다른 자료형으로 변환하는데 가장 좋은 방법이다.
//
//	int a = 10;
//	int b = 4;
//	float myFloat = static_cast<float>(A) / B;
////	#. 컴파일 타임에 형식 검사를 하기 때문에 부주의한 오류를 예방할 수 있다.
//}

/* --- < 별칭( Alias ) > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| std::vector<std::string>과 같이 type을 입력하기 길어서 사용할 때 매우 귀찮은 상황이 있다.|
| 별칭이라는 기능을 사용하면 이러한 긴 입력을 짧게 줄일 수 있다.						   |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< typedef > : typedef 기존형식 별칭;
	=> typedef std::pair<int, std::string> Pair;
< using > : using 별칭 = 기존형식;
	=> using Music = std::vector<int, std::vector<int>>;
*/

//#include <iostream>
//
//typedef unsigned int uInt;
//using uChar = unsigned char;
//
//int main()
//{
//	uInt myInt = 1;	// unsigned int라는 형식 이름을 uInt로 바꾸어 사용하였다.
//	uChar myChar = 'a';	// unsigned char라는 형식 이름을 uChar로 바꾸어 사용하였다.
//}

/* --- < 열거형( Enumeration Type ) > --- */

/*
< 열거형 > : "집합타입"으로 새로운 형식을 정의하여, 유한한 집합을 표현할 수 있다.
	#. 내부적으로 정수 형식이다.
	#. 명시적 형변환을 통해 정수로 변환이 가능하다.
	#. 반대로 정수형에서 명시적으로 열거형으로 변환이 가능하다.
	#. 열거형은 "상수"로 해석된다.
*/

//#include <iostream>
//
//enum Sound
//{	// #. Shoot = 0, Throw = 1, Hit = 2, Dead = 3 이렇게 자동으로 0 부터 정수가 배정된다.
//	Shoot, Throw, Hit, Dead
//};
//enum Color
//{	// #. 원소 이름을 색깔로 지정하고 각 원소 안에 16진수 값을 배정한다.
//	White = 0xFFFFFF, Magenta = 0xFF00FF, Pink = 0xFFC0CB
//};
//enum QuestFlag
//{	// #. 2진수로 Flag를 세울 수 있도록 값을 지정한다.
//	None = 0,
//	Q1 = 1, Q2 = 2, Q3 = 4, Q4 = 8, Q5 = 16
//};
//
//int main()
//{
//	Sound playSound;
//
//	switch (playSound)
//	{	// playSound 객체에 저장된 값을 스위치 레이블과 매칭하여 알맞는 레이블 실행
//		case Shoot:
//			break;
//		case Throw:
//			break;
//		case Hit:
//			break;
//		case Dead:
//			break;
//	}
//
//	int QuestComplete{ None };	// 사용자의 퀘스트 클리어 상태를 확인하기 위해 변수를 선언한다.
//	// QuestComplete = 0000
//
//	QuestComplete = Q1;	// 사용자가 퀘스트 1을 클리어 했을 때 Q1을 배정한다.
//	// QuestComplete = 0000 | 0001 ( 0001 )
//
//	QuestComplete = QuestFlag(QuestComplete | Q3);	// 사용자가 퀘스트 1을 클리어 한 이후 퀘스트 3을 클리어 하였음을 표현한다.
//	// QuestComplete = 0001 | 0100 ( 0101 )
//
//	QuestComplete = QuestFlag(QuestComplete | Q4);	// 1, 3을 클리어 한 이후 4를 클리어
//	// QuestComplete = 0101 | 1000 ( 1101 )
//
//// #. 사용자가 퀘스트 1과 3을 클리어 하였을 경우 이벤트를 발생
//	if (QuestComplete & Q1 && QuestComplete & Q3)
//		std::cout << "이벤트";
//}

/* --- < 구조체( Structure ) > --- */

/*
< 구조체 > : 다양한 type을 하나의 카테고리로 묶을 수 있다.
*/

//#include <iostream>
//
//struct Status
//{	// #. 서로 관련 있는 정보를 하나의 형식 처럼 묶을 수 있다.
//	float Hp; float Mp; int Power; int Magica;
//};
//
//int main()
//{	// warrior 라는 이름의 객체는 Status 구조체의 모든 원소를 가지고 있다.
//	Status warrior{ 100.0f,0.0f,10,0 };
//
//	warrior.Hp = 99.9f;	// 구조체 객체에 값을 대입하려면 '.'점을 찍어 멤버 변수에 접근해야 한다.
//	warrior.Mp = 3.0f;
//	warrior.Power = 32;
//	warrior.Magica = 0;
//
//	warrior = { 123.4f, 10.1f, 99, 3 };
//	// 배열 방식으로도 유니폼 초기화를 이용하여 대입이 가능하다.
//}

//#include <iostream>
//
//struct OneByte	// RAM 메모리에 1Byte를 전달하기 위한 구조체
//{
//	char myChar;
//};
//
//struct FiveByte	// RAM 메모리에 5Byte를 전달하기 위한 구조체
//{
//// #. 기본적으로 메모리의 저장은 4Byte 단위로 저장된다.
//// #. 때문에 char로 1Byte를 저장할 경우 3Byte의 빈 공간이 생기고
//// #. 이 뒤에 int 4Byte가 저장되어 빈 공간까지 합쳐저 8Byte가 저장된다.
//	char myChar;
//	int myInt;
//};
//
//// #. 일시적으로 메모리의 저장 단위를 1Byte로 바꿀 수 있다.
//#pragma pack(push, 1)
//struct FiveByte2
//{
//	char myChar;
//	int myInt;
//};
//#pragma pack(pop)
// 바꾼 저장 단위를 우너상태로 돌려 놓는다.

/* --- < 공용체( Union ) > --- */

/*
< 공용체 > : 내부의 멤버들이 동일한 메모리를 공유한다.
	#. 메모리를 절약하기 위한 방식이다.
*/

//#include <iostream>
//
//union myUni
//{	// 메모리를 절약하기 위해 공용체 내부의 멤버들이 메모리를 공유함
//	int i;
//	float f;
//	char c;
//};
//int main()
//{
//	myUni u{};	// 공용체 type의 객체는 원소 중 가장 큰 크기의 type의 메모리 공간을 할당 받는다.
//
//	u.i = 98;
//	std::cout << sizeof(myUni) << '\n';
//}

/* ----- < 배열 > ----- */
//
//
//
//
//
/* --- < 배열( Array ) > --- */

/*
< 배열 > : "동일한 Type"의 값을 여러 개 저장할 수 있는 기능
	#. 형식 변수명[크기];
	#. 변수명[인덱스] = 값;
	#. 변수명 뒤에 대괄호[]를 붙여 주고 크기를 지정하면 배열로 선언이 가능하다.
		#. []기호를 첨자( subscript )라고 부른다.
	#. 값을 가져오거나 사용할 때는 변수명 뒤에 대괄호로 인덱스( 순서 )를 지정해 줘야 한다.
	#. 인덱스는 0을 기준으로 출발한다.

< 배열의 크기 지정 > : 배열 첨자는 다양한 형태로 지정이 가능하다.
	#. 다만, 배열을 "선언할 때" 크기는 상수만 가능하다.
*/

//#include <iostream>
//
//enum Order { Friend = 10 };
//
//struct Point2D
//{
//	double x;
//	double y;
//};
//
//int main()
//{
//// 1. Default
//	int arr[5];	// 동일한 type의 값을 여러 개 저장할 수 있다.
//	arr[0] = 1; arr[1] = 2; arr[2] = 3;	// 인덱스[] 별로 한 번씩 대입할 수 있다.
//
//// 2. 첨자 지정
//	int arr1[5]{};	// 리터럴은 배열 첨자로 입력하여 배열을 선언할 수 있다.
//	int arr2[Friend]{};	// 상수 및 열거형은 배열 첨자로 입력하여 배열을 선언할 수 있다.
//
//	int x{ 1 };
//	// int arr3[x]; 변수는 배열 첨자로 입력되어 배열을 선언할 수 없다.
//// #. 변수는 실행파일이 실행될 때, 즉 런타임때 변수에 메모리 공간이 할당되며 값이 저장된다.
//// #. 그러나 배열은 컴파일타임에 미리 준비하는 것이기 때문에 컴파일 타임 상수가 필요하다.
//
//	int arr4[3 * 3]{};	// 표현식도 배열 첨자로 입력하여 배열을 선언할 수 있다.
//
//// 3. 구조체와 배열
//	Point2D pt[3]
//	{	// Point2D type의 pt 이름을 가진 배열 선언, 각 인덱스[] 별로 x값과 y값을 초기화
//		{1.0, 1.0},
//		{2.0, 2.0},
//		{3.0, 3.0}
//	};
//
//	pt[0].x = 1.5;
//	pt[1].y = 5.1;	// 구조체 배열은 '.'점을 통해 멤버 변수에 값을 대입
//
//// 4. 다차원 형태의 1차원 배열
//	int myArray[15]{
//		0,0,1,0,0,
//		0,1,1,1,0,
//		1,1,1,1,1
//	};
//
//	for (int i = 0; i < 15; i++)
//	{
//		std::cout << myArray[i] << ' ';
//		if ((i + 1) % 5 == 0)	// 5로 나누어서 나머지가 0일 때마다 줄바꿈
//			std::cout << '\n';
//	}
//}

/* --- < 2차원 배열( 2-Dimensional Array ) > --- */

/*
< 2차원 배열 > : 배열의 배열이라는 개념으로 배열 뒤에 다시 배열을 붙여서 [][]표기한다.
	#. 크기를 지정할 때는 [행][열]과 같이 지정한다.
		=> 가로( ㅡ )로 줄을 그으며 아래로 세는 것을 행
		=> 세로( ㅣ )로 줄을 그으며 옆으로 세는 것을 열
*/

//#include <iostream>
//
//int main()
//{	// 3개의 배열을 만들고 그 배열의 값으로 배열을 지정한다.
//	int arr[3][5]
//	{	// 각각의 배열마다 5개의 원소가 있는 배열이 저장된 배열이다.
//		{0,0,1,0,0},
//		{0,1,1,1,0},
//		{1,1,1,1,1}
//	};
//	// 가로 행 배열을 0부터 아래로 2행 배열까지 순회한다.
//	for (int i = 0; i < 3; i++)
//	{	// 세로 열 배열을 0부터 옆으로 4열 배열까지 순회한다.
//		for (int j = 0; j < 5; j++)
//		{	// i행 j열에 저장된 원소를 출력한다.
//			std::cout << arr[i][j] << ' ';
//		}
//		std::cout << '\n';
//	}
//}

//#include <iostream>
//#include <array>
//
//int main()
//{	// #. 원소가 3개인 배열을 만드는데 그 원소가 std::array<int, 5>이다.
//	std::array<std::array<int, 5>, 3> arr{
//		0,0,1,0,0,
//		0,1,1,1,0,
//		1,1,1,1,1
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			std::cout << arr[i][j] << ' ';
//		}
//		std::cout << '\n';
//	}
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{	// 생성자를 이용하여 동적 배열 3칸을 할당하고 그 원소를 동적 배열로 할당한다.
//	std::vector<std::vector<int>> vec(3, std::vector<int>(5));
//
//	vec[0] = { 0,0,1,0,0 };
//	vec[1] = { 0,1,1,1,0 };
//	vec[2] = { 1,1,1,1,1 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			std::cout << vec[i][j] << ' ';
//		}	std::cout << '\n';
//	}
//}

/* --- < 좌측값( L_Value )과 우측값( R_Value ) > --- */

/*
< L_Value > : 저장할 수 있는 실명의 객체
	#. 한줄의 코드를 넘어서도 lvalue는 지워지지 않는다.
	#. 주로 변수를 지칭한다.
	#. rvalue는 lvalue로 변환될 수 없다.

< R_Value > : 저장할 수 없는 "무명"의 객체
	#. 현재 식 이외에는 유지되지 않는 임시 값이다.
	#. 리터럴, 상수, 연산식등을 지칭한다.
	#. lvalue가 rvalue로 변환될 수 있다.

< 배열의 이름은 L_Value가 아니다 > : 배열 이름은 메모리의 위치만 지정할 뿐이다.
	#. 배열 첨자를 이용하여 특별한 공간을 지정하고 있을 때 lvalue가 된다.
*/

//#include <iostream>
//
//int main()
//{
//	int arrayOne[5]{ 1,2,3,4,5 };
//	int arrayTwo[5]{};
//
//	arrayTwo[0] = arrayOne[0];
//// #. arrayTwo배열의 0번째 원소에 arrayOne배열의 0번째 원소를 대입한다.
//
//	arrayTwo = arrayOne;
//// #. 배열 이름은 메모리의 위치만 지정할 뿐이기 때문에 값을 저장할 수 없다.
//// #. arrayOne의 모든 원소를 arrayTwo에 대입하려면 한 개씩 직접 대입해 줘야 한다.
//}

/* --- < 문자열( Character Array, String ) > --- */

/*
< 문자열 > : 문자들로 이루어진 집합을 말한다.
	#. 문자( Character ) + 배열( Array )
	#. 문자 리터럴 : 작은 따옴표로 둘러 싸여 있다. 'a'
	#. 문자열 리터럴 : 큰 따옴표로 둘러 싸여 있다. "Hello"
*/

//#include <iostream>
//
//struct Student
//{
//	char name[10];
//	int num;
//	int score;
//};
//
//int main()
//{
//// 1. Default
//	char c[6]{ 'R','i','v','e','r','\0' }; // #. 문자열을 한 문자씩('')입력 받을 때는 널값을 넣어야만 한다.
//	c[0] = 'M'; c[1] = 'o'; c[2] = 'n'; c[3] = 'e'; c[4] = 'y'; c[5] = '\0';
//	
//	char std[6]{ "River" };	// #. 문자열 리터럴("")에는 \0 널값이 포함되어 있다.
//	std::cout << c << std::endl;
//	std::cout << std << std::endl;
//
//// 2. std::cin
//	Student tom;
//	std::cout << "Input : ";
//	std::cin >> tom.name >> tom.num >> tom.score;
//// #. std::cin은 스페이스바, 엔터로 문자열을 구분하여 입력받는다.
//	
//	std::cout << tom.name << std::endl;
//	std::cout << tom.num << std::endl;
//	std::cout << tom.score << std::endl;
//
//// 3. 주소
//	char myText[20]{ "Greetings!" };
//// #. 문자열은 모두 메모리 공간을 할당 받는다.
//// #. 컴파일러는 이 메모리 공간에 접근하여 해당 문자열을 출력해준다.
//	std::cout << myText << " : " << &myText << std::endl;
//	std::cout << "Greetings!" << " : " << &"Greetings!" << std::endl;
//
//// 4. 포인터
//	char nameOne[10]{ "River" };
//	char* pointer{ nameOne };
//// #. 배열의 이름은 해당 배열의 첫번째 원소 주소값을 가리킨다.
//// #. 그러므로 nameOne과 &nameOne[0]의 출력 결과는 같다.
//	std::cout << nameOne << " : " << &nameOne << " : " << &nameOne[0] << std::endl;
//
//// #. pointer는 nameOne의 주소값을 저장한다. 문자열의 주소값은 저장된 문자열을 출력해 준다.
//	std::cout << pointer << " : " << &pointer << " : " << (pointer + 0) << std::endl;
//
//// #. nameOne은 문자 배열의 크기를, nameOne[0]은 문자 배열의 첫번째 메모리 공간의 크기를,
//// #. &nameOne은 할당된 메모리 공간의 크기를, &nameOne[0]도 동일한 메모리 공간의 크기를 출력한다.
//	std::cout << sizeof nameOne << " : " << sizeof nameOne[0] << " : " 
//		<< sizeof & nameOne << " : " << sizeof & nameOne[0] << std::endl;
//
//// 5. const char* 
//	const char* name = "River";
//// #. "River"는 만들어 질 때 메모리 공간을 할당받는다.
//// #. name은 이 메모리 공간을 가리킨다.
//// #. "River"는 rvalue( 무명 객체 )이기 때문에 해당 라인이 지나면 지워진다.
//// #. 때문에 일반 포인터가 아닌 상수 포인터로 가리켜야 한다.
//	std::cout << name << " : " << (void*)name << std::endl;
//}

/* --- < 문자열 스트림( String Stream ) > --- */

/*
< stream > : 입출력을 추상화해서 나타내어 준다.

< sstream( string ) > : 문자열로부터 입력을 받는다.
	#. ostring stream : 문자열 포맷을 조합하여 저장할 때 사용한다.
	#. string stream : 문자열에서 내가 원하는 자료형의 데이터를 추출할 때 사용한다.
	#. istring stream : 문자열 포맷을 parsing할 때 사용한다.
		#. parsing : 일련의 문자열을 의미있는 token( 어휘 분석의 단위 )으로 분해하고 그것들로 이루어진 Parse tree를 만드는 과정

< istream( input ) > : 사용자로부터 입력 받는다.

< ifstream( file ) > : 파일로부터 입력 받는다.
*/

//#include <iostream>
//#include <sstream>
//
//int main()
//{	
// #. 다양한 형식의 변수들을 하나의 객체에 저장할 수 있다.
//	int number{ 1 };
//	char name[]{ "River" };
//	float average{ 90.1f };
//
//// #. ostringstream클래스로 객체 oss를 만들고 그 안에 변수와 문자열을 저장해 준다.
//	std::ostringstream oss;
//	oss << number << "번 학생 " << name << "는 평균 " << average << "입니다.";
//
//// #. str()함수를 이용하여 객체 안에 있는 값을 문자열로 출력할 수 있다.
//	std::cout << oss.str() << std::endl;
//}

//#include <iostream>
//#include <sstream>
//#include <string>
//
//int main()
//{
//	int n;
//	std::stringstream ss;
//	ss.str("12 345 6789 0 -12 a");
//// #. stringstream클래스의 객체 ss를 만든다.
//// #. str()함수를 사용해 문자열을 집어 넣는다.
//
//	for (int i = 0; i < 5; i++)
//	{	// #. 문자열 중 int형식으로 변환되는 문자만 int 형식으로 꺼낸다.
//		ss >> n;
//		std::cout << n << std::endl;
//	}
//}

//#include <iostream>
//#include <sstream>
//
//int main()
//{	
// #. istringstream클래스의 객체 iss를 만든다.
//	std::istringstream iss("test 123 123hah ahha");
//	std::string str1, str2, str3;
//	int num;
//
//	std::cout << iss.str() << std::endl;
//	
//// #. 스페이스바, 탭으로 구분하여 각 변수에 저장한다.
//	iss >> str1 >> num >> str2 >> str3;
//	std::cout << str1 << " : " << str2 << " : " << str3 << " : " << num;
//}