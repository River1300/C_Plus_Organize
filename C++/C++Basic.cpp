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

/* ----- < 함수 > ----- */
//
//
//
//
//
/* --- < 함수( Function ) > --- */

/*
< 함수 > : 여러개의 명령어로된 집합으로 이러한 집합에 이름을 붙인 것

< 매개 변수 > : 함수가 수행할 명령에 필요한 것들
	#. < Callee > : 매개 변수, 함수 정의에 열거된 이름
	#. < Caller > : 인자, 함수 호출에 넘겨줄 값

< 매개 변수 기본값( Default ) > : 함수가 매개 변수로 인자를 받지 못하였을 경우 기본값을 자동 대입
	#. 매개 변수에 ( = 0 )을 기입하면 실행된다.
		=> < void Func(int a = 0); > : 기본값 설정은 함수 선언에만 있어도 작동한다.
	#. 기본값을 제공하는 매개 변수는 맨 뒤의 매개 변수부터 작성해야 한다.
		=> < void func(int a, int b = 1, int c = 0); >

< 가변 인자 > : 매개 변수로 어떤 인자든 올 수 있게 하는 기능
	#. < ... > : 말줄임표를 통해 사용할 수 있다.
		=> void Func(int num, ...);
		=> 첫 번째 매개 변수는 고정 매개 변수를 작성한 뒤 가변인자를 작성

< 재귀 호출 > : 내가 나를 부르는 함수
	#. < Base Case > : 더 이상 자를 수 없는 가장 작은 문제가 있어야 한다.
	#. < Recursive Case > : 문제를 작은 집합으로 나눌 수 있어야 한다.
*/

//#include <iostream>
//
//struct Song
//{
//	std::string name;
//	int trackNum;
//	int price;
//};
//
//Song Input(std::string name, int trackNum, int price)
//{	// #. Song타입을 반환하고 매개 변수 3개를 받는 함수를 정의한다.
//	Song cd;
//
//	cd.name = name;
//	cd.trackNum = trackNum;
//	cd.price = price;
//
//	// #. Song타입의 객체를 반환한다.
//	return cd;
//}
//
 //int Sum(int a = 2, int b = 1)
//{	// #. 매개 변수( Callee )에 기본값을 지정하여 인자를 전달받지 못해도 정상 작동한다.
//	return a + b;
//}
// 
//int main()
//{
//	Song Twice;
//
//	std::cout << "트랙 정보를 입력하세요." << std::endl;
//	std::string name;
//	int trackNum;
//	int price;
//
//	std::cin >> name >> trackNum >> price;
//
//// #. 함수의 반환타입에 맞추어 Song타입의 객체 Twice가 반환값을 받는다.
//// #. 매개 변수( Callee )에 전달할 인자( Caller )의 타입을 맞추어 전달한다.
//	Twice = Input(name, trackNum, price);
//}

//#include <iostream>
//#include <stdarg.h>
//// #. 매개변수 가변인자를 사용하려면 stdarg.h 헤더파일이 필요하다.
//
//void function(int count, ...)
//{	// #. count는 뒤에 올 매개변수의 갯수를 입력받는다.
//	va_list params;
//// #. 길이가 변할 수 있는 가변의 저장공간을 제공하는 타입이라고 볼 수있다.
//// #. va_list타입으로 params라는 이름의 매개변수를 저장하는 메모리 공간을 만든다.
//
//	va_start(params, count);
//// #. count갯수 만큼 params메모리 공간에 전달받은 매개변수 값을 초기화 해준다.
//
//	for (int i = 0; i < count; i++)
//	{	// #. int타입으로 params변수에 있는 값을 출력한다.
//		std::cout << va_arg(params, int);
//	}	std::cout << std::endl;
//}
//
//int main()
//{
//	function(1, 1);
//	function(2, 2, 3);
//}

/* < 매개 변수 일치 > */

/*
< 함수 구분 > : 함수는 변수와 다르게 이름이 같아도 컴파일러가 구분할 수 있다.
	#. 함수의 구분은 "이름"뿐만 아니라 "매개 변수"의 종류와 갯수도 포함된다.

< 함수 다형성 > : 똑같은 이름의 함수를 여러개 선언 및 정의할 수 있다.
	#. < 함수 오버로딩 > : 같은 이름의 함수를 여러개 쌓을( STACK ) 수 있다.
		#. 매개 변수와는 다르게 반환 값이 다를 경우는 오버로딩이 적용되지 않는다.

< Call Stack > : 함수가 호출될 때 RAM공간에 차곡차곡 쌓여지는 형태를 말한다.
	#. 함수가 반환될 때는 쌓여진 마지막 함수부터 차례로 반환된다.

< Stack > : 함수와 변수가 저장되는 RAM의 공간
	#. RAM안에 할당된 STACK공간이 가득차서 넘칠 경우 Stack Overflow에러가 발생한다.
*/

//#include <iostream>		// < Title : default >
//
//void WhoAmI(int value) { std::cout << "나는 정수를 처리한다."; }
//void WhoAmI(float value) { std::cout << "나는 소수를 처리한다."; }
//void WhoAmI(char value) { std::cout << "나는 문자를 처리한다."; }
//// #. 동일한 이름의 함수지만 Caller가 어떤 타입이냐에 따라 구분되어 함수가 호출된다.
//
//int main()
//{
//	WhoAmI(10.0f);
//}

/* --- < 재귀함수( Recursive Function ) > --- */

/*
< 재귀함수 > : 함수의 내부에서 자기 자신을 다시 호출하는 함수를 말한다.
	#. < 분할 정복( Divide & Conquar ) > : 큰 문제를 잘라서 작은 문제로 만든다.
		#. 간단해진 문제를 재귀적( Recursive )으로 해결한다.
			=> 동일한 문제의 작은 집합을 가진 문제
*/

//#include <iostream>
//
//// 1. 팩토리얼
//int Factor(int N)
//{
//	// Base-Case
//	if (N == 1) { return 1; }
//
//	// Recursive-Case
//	return N * Factor(N - 1);
//}
//// 2. 피보나치수열
//int Fibo(int N)
//{
//	// Base-Case
//	if (N <= 2) { return 1; }
//
//	// Recursive-Case
//	return Fibo(N - 2) + Fibo(N - 1);
//}
//// 3. 하노이탑
//void Move(char go, char end)
//{
//	std::cout << go << "를 " << end << "로 이동시킨다." << std::endl;
//}
//void Hanoi(char A, char B, char C, int N)
//{
//	if (N == 1) { Move(A, C); }
//	else {
//		Hanoi(A, C, B, N - 1);
//		Move(A, C);
//		Hanoi(B, A, C, N - 1);
//	}
//}
//int main()
//{
//	std::cout << Factor(5) << std::endl;
//	std::cout << Fibo(6) << std::endl;
//	Hanoi('A', 'B', 'C', 4);
//}

/* ----- < 컴파일과 링크 > ----- */
//
//
//
//
//
/* --- < 파일 포멧 > --- */

/*
< Header File( .h ) > : 변수나 함수의 [선언]을 모아둔 파일
	#. < 시스템 헤더 > : 비쥬얼 스튜디오에서 제공하는 헤더 파일
		=> #include <iostream>
	#. < 사용자 헤더 > : 사용자가 선언한 함수, 변수를 임의로 만든 헤더 파일
		=> #include "myHeader"

< Source File( .cpp ) > : 변수나 함수의 [정의]를 모아둔 파일

< Library File( .lib ) > : 컴파일된 기계어로 제공되는 파일
	#. 개발을 위해 사용되는 함수 모임, 일종의 함수 세트
	#. < Static Library( .lib ) > : 실행파일을 만들 때 동시에 링크되며 만들어진다.
		=> 라이브러리가 업데이트될 때마다 실행파일을 다시 만들어야 한다.
	#. < Dynamic Library( .dll ) > : 실행파일을 실행할 때 함께 실행된다.
		=> 라이브러리가 업데이트되어도 실행파일에는 변동이 없다.

< 변수 > : 타입 + 객체 + 값
	#. < 타입 > : 해당 객체의 사용 가능한 값과 적용할 수 있는 연산을 정의
	#. < 객체 > : 주어진 타입의 값을 저장하는 메모리 공간
	#. < 값 > : 주어진 타입의 메모리 공간의 비트 집합을 해석

< Call By Value > : 값에 의한 호출
	#. 매개 변수가 있는 함수를 호출할 때 변수안에 있는 값을 꺼내서 보낸다.
		=> < Function(x); > : x안에 있는 값을 꺼내서 무명 객체에 저장한 뒤 Function함수의 매개 변수에 복사 대입한다.

< Call By Reference > : 참조에 의한 호출
	#. 매개 변수로 보내는 것이 변수 그 자체
		=> < Function(array); > : array라는 배열의 주소값을 무명의 객체에 저장한 뒤 Function함수의 매개 변수에 복사 대입한다.
		=> 전달된 값이 주소 값이기 때문에 함수안에서 값이 바뀔 경우 함수밖에서도 값이 바뀐다.
*/

/* ----- < 포인터 > ----- */
//
//
//
//
//
/* --- < 포인터 개요 > --- */

/*
< 포인터 > : 메모리 공간에 할당된 주소를 저장하는 변수
	#. 프로그램에서 사용하는 단순 변수는 특정 메모리의 위치( 주소 )에 특정한 크기( 바이트 )로 저장된다.
	#. 이러한 변수의 메모리 공간을 포인터가 "가리키어" 사용자가 변수의 주소에 직접 접근할 수 있게된다.
*/

//#include <iostream>
//
//int main()
//{
//	int x{ 10 };
//
//// #. int 타입을 가리키는 포인터 변수 px (px point to integer)
//// #. < ( * )포인터 연산자 > : * 기호 우측의 객체가 "포인터 변수" 라고 지정 (참조:Reference)
//	int* px;
//
//// #. 포인터 변수 px에 x의 주소값을 대입 [px 는 x 를 참조]
//// #. < ( & )주소 연산자 > : & 기호 우측 객체의 주소를 구함
//	px = &x;
//// < px = &100; > : 포인터 변수는 오직 주소 값만 저장할 수 있음, R_Value 는 저장 불가능
//// R_Value : 값, 현재 식 이외에는 유지되지 않는 임시 값, 리터럴, 상수, 연산식 등
//
//// #. < ( * )역참조 연산자 > : * 기호 우측의 포인터 변수가 가리키는 곳의 값을 꺼내올 수 있다.
//// #. 역참조 연산자를 통해 가리키는 곳의 값을 변경할 수 있다.
//	std::cout << *px << std::endl;
//
//	*px = 1500;
//	std::cout << px << " : " << *px << std::endl;
//	std::cout << "-------------------------------------------------------------" << std::endl;
//
//	int* pointer{ nullptr };
//	//pointer = &100;
//	//const int number{ 10 };
//	//pointer = &number;
//	//pointer = &(30 + 50);
//}

/* --- < 포인터 연산 > --- */

//#include <iostream>
//
//int main()
//{
//	int x{ 1 };
//	int* px{ &x };
//
//// #. 주소 + sizeof(int) * 1 : 주소 값은 type 의 크기 만큼 증가
//// #. 역참조를 통한 연산은 리터럴 그대로 증감
//	std::cout << px + 0 << " : " << px + 1 << " : " << px + 2 << std::endl;
//	std::cout << *px + 9 << " : " << *px + 32 << " : " << *px + 192 << std::endl;
//
//	char s{ 'a' };
//	char* ps{ &s };
//
//// #. char* 형은 문자를 표현하는 특수한 자료형이기 때문에 (void*)() 명시적 형변환이 필요
//// #. 역참조는 형변환이 필요 없다.
//	std::cout << (void*)(ps + 0) << " : " << (void*)(ps + 2) << std::endl;
//	std::cout << *ps + 0 << " : " << *ps + 10 << " : " << *ps + 100 << std::endl;
//	std::cout << "-------------------------------------------------------------" << std::endl;
//
//	char string[5]{ "Love" };
//	char* pStr{ string };
//
//	std::cout << (void*)(pStr + 0) << " : " << (void*)(pStr + 1) << " : " << (void*)(pStr + 2)
//		<< " : " << (void*)(pStr + 3) << std::endl;
//	std::cout << *(pStr + 0) << " : " << *(pStr + 1) << " : " << *(pStr + 2) << " : " << *(pStr + 3) << std::endl;
//}

/* --- < void 포인터 > --- */

//#include <iostream>
//
//int main()
//{
//	int number{ 9 };
//	float under{ 3.14f };
//	char string{ 'Z' };
//
//// #. < void 포인터 > : 보이드 포인터는 어떠한 타입의 변수든 가리킬 수 있다.
//// #. 다만, 가리킬 수 만 있을 뿐 역참조와 연산은 불가능 하다.
//	void* pointer;
//	pointer = &number;
//	pointer = &under;
//	pointer = &string;
//
//// #. 보이드 포인터를 역참조하기 위해서는 명시적 형변환이 필요하다.
//// #. 먼저 포인터 타입을 지정해 주고 변환된 상태에서 역참조를 해준다.
//	std::cout << pointer << " : " << *((char*)pointer) << std::endl;
//}

/* --- < nullptr > --- */

//#include <iostream>
//
//void SameFunc(int A);
//void SameFunc(int* A);
//int main()
//{
//	int* p01{}, * p02{ 0 }, * p03{ NULL };
//	std::cout << p01 << " : " << p02 << " : " << p03 << std::endl;
//
//// #. [0] 은 NULL포인터를 지칭하기도 하지만 정수 0을 지칭하기도 한다.
//// #. 때문에 NULL포인터를 지칭하고 싶다면 nullptr을 사용하길 권장한다.
//	SameFunc(0);
//}
//void SameFunc(int A)
//{
//	std::cout << "매개 변수로 0을 받을 경우 포인터 보다 정수를 우선 순위로 받는다."
//		<< std::endl;
//}
//void SameFunc(int* A)
//{
//	std::cout << "NULL포인터를 받고자 한다면 nullptr로 입력하는 것이 좋다."
//		<< std::endl;
//}

/* --- < 값의 분할 > --- */

//#include <iostream>
//
//int main()
//{
//// 2진수 : 0000 0000 / 0000 0000 / 0000 0100 / 0000 0001
//// 16진수:		0	 /		0	 /		4	 /		1
//	int number{ 1025 };
//	int* pointer{ &number };
//
//// #. int 형으로 가리킨 정수 값을 char 형으로 가리켜서 값을 1바이트 단위로 나누어 볼 수 있음
//	char* cPoint{ (char*)pointer };
//
//	// 컴퓨터는 값을 뒤집어서 저장함 (Little-Endian)
//	// 컴퓨터가 연산을 함에 있어서 더 빠르게 연산하기 위함
//	for (int i = 0; i < 4; i++)
//	{
//		std::cout << (void*)cPoint << " : " << (int)*cPoint << std::endl;
//		cPoint++;
//	}
//}

/* --- < 포인터의 포인터 > --- */

/*
< 포인터의 포인터 > : 포인터 변수의 주소값을 가리키는 포인터 변수
	#. 배열이 각 배열 원소를 가리키기 때문에 배열 자체는 포인터라고 볼 수 있다.
	#. 그러다면 배열을 가리키는 포인터는 포인터의 포인터라고 볼 수 있다.
	#. 2차원 배열 또한 포인터의 포인터라고 볼 수 있다.
*/

//#include <iostream>
//
//void Swap1(int* p1, int* p2);
//void Swap2(int** p1, int** p2);
//
//int main()
//{
//	int number{ 10 };
//	int* pointer1{ &number };
//	int** pointer2{ &pointer1 };
//	int*** pointer3{ &pointer2 };
//
//	std::cout << number << " : " << *pointer1 << " : " << **pointer2 << " : "
//		<< ***pointer3 << std::endl;
//	std::cout << &number << " : " << pointer1 << " : " << *pointer2 << " : "
//		<< **pointer3 << std::endl;
//
//	int num1{ 10 }, num2{ 20 };
//	int* ptr1{ &num1 }, * ptr2{ &num2 };
//
//	std::cout << ptr1 << " : " << *ptr1 << " " << ptr2 << " : " << *ptr2 << std::endl;
//
//// #. ptr1, ptr2 가 가리키는 주소값과 p1, p2 의 주소값은 같은 값이지만 복사된 별개의 변수
//// #. p1, p2 가 가리키는 주소값은 바뀌었지만 ptr1, ptr2 가 가리키는 주소값은 그대로 이다.
//	Swap1(ptr1, ptr2);
//	std::cout << ptr1 << " : " << *ptr1 << " " << ptr2 << " : " << *ptr2 << std::endl;
//
//// #. 더블 포인터로 ptr1, ptr2 의 자체 주소값을 매개 변수로 전달 받음
//	Swap2(&ptr1, &ptr2);
//	std::cout << ptr1 << " : " << *ptr1 << " " << ptr2 << " : " << *ptr2 << std::endl;
//}
//void Swap1(int* p1, int* p2)
//{
//	int* temp = p1; p1 = p2; p2 = temp;
//}
//void Swap2(int** p1, int** p2)
//{
//	int* temp = *p1; *p1 = *p2; *p2 = temp;
//}

//#include <iostream>
//
//// #. maxPtr, minPtr 이 가리키는 값을 지정하기 위해 더블 포인터로 매개 변수를 받음
//void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr);
//int main()
//{
//	int* maxPtr{ nullptr }, * minPtr{ nullptr };
//	int arr[5]{ 1,3,5,2,4 };
//
//	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
//
//	std::cout << *maxPtr << " : " << *minPtr << std::endl;
//}
//void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr)
//{	// 가리키는 주소 값을 바꾸기 위해서는 (*)역참조 연산자 한 개
//	// 내부 값을 비교할 때는 (*)역참조 연산자 두 개
//	*mxPtr = *mnPtr = &arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (**mxPtr < arr[i])
//			*mxPtr = &arr[i];
//		if (**mnPtr > arr[i])
//			*mnPtr = &arr[i];
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int num1{ 10 }, num2{ 20 }, num3{ 30 };
//
//// #. 포인터 배열은 더블 포인터이기도 하다.
//	int* arr1[3]{ &num1,&num2,&num3 };
//	for (int i = 0; i < 3; i++)
//	{	// []인덱스는 해당 배열 요소의 값을 출력해준다.
//		// 때문에 포인터 배열이 가리키는 값, 즉 주소값을 출력한다.
//		// 내부의 값을 출력하려면 (*)역참조 연산자를 활용해야 한다.
//		std::cout << arr1[i] << " : " << *arr1[i] << std::endl;
//	}
//
//	int* ptr1{ &num1 }, * ptr2{ &num2 }, * ptr3{ &num3 };
//	int* arr2[3]{ ptr1,ptr2,ptr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		std::cout << arr2[i] << " : " << *arr2[i] << std::endl;
//	}
//
//// #. 더블 포인터로 포인터 배열을 가리킴, 즉 같은 것을 가리킴
//	int** dptr{ arr2 };
//	for (int i = 0; i < 3; i++)
//	{
//		std::cout << dptr[i] << " : " << *dptr[i] << std::endl;
//	}
//}

//#include <iostream>
//
//void Swap(int** array, int SIZE);
//int main()
//{
//	const int SIZE{ 5 };
//	int num1{ 5 }, num2{ 3 }, num3{ 9 }, num4{ 7 }, num5{ 1 };
//	int* array[SIZE]{ &num1,&num2,&num3,&num4,&num5 };
//
//	Swap(array, SIZE);
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		std::cout << *array[i] << " ";
//	}
//}
//void Swap(int** array, int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = i + 1; j < SIZE; j++)
//		{
//			if (*array[i] < *array[j])
//			{
//				int* temp = array[i];
//				array[i] = array[j];
//				array[j] = temp;
//			}
//		}
//	}
//}

/* --- < 구조체 포인터 > --- */

//#include <iostream>
//
//struct Status
//{
//	int HP; int MP;
//};
//int main()
//{
//	Status Knight{ 100,5 };
//	Status Warload{ 65,55 };
//
//	Status* pK{ &Knight };
//	Status* pW{ &Warload };
//
//// #. 구조체의 포인터는 (*포인터 이름) or ->화살표 연산자로 역참조를 할 수 있다.
//// #. -> 화살표 연산자는 역참조 기능이 포함되어 있기 때문에 (*)를 같이 쓰면 않된다.
//	std::cout << Knight.HP << " : " << (*pK).HP << " : " << pK->HP << std::endl;
//	std::cout << Knight.MP << " : " << (*pK).MP << " : " << pK->MP << std::endl;
//	std::cout << Warload.HP << " : " << (*pW).HP << " : " << pW->HP << std::endl;
//	std::cout << Warload.MP << " : " << (*pW).MP << " : " << pW->MP << std::endl;
//}

/* --- < 함수 포인터 > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 함수를 구분짖는 특징은 반환타입과 함수이름, 그리고 매개 변수라 할 수 있다.		    |
| 이러한 특징을 통해서 함수 포인터를 만들 수 있다.										|
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
*/

//#include <iostream>
//
//// #. 반환타입 + (*포인터 이름) + (매개 변수)으로 특정 함수를 포인터로 가리킬 수 있다.
////		=> bool (*Comparison)(int, int);
//
//using Comparison = bool(*)(int, int);
//// 함수 포인터 코드를 입력하기 불편하기 때문에 별칭을 사용한다.
//
//void Sort(int* scores, int size, Comparison f);
//bool Ascending(int a, int b);
//bool Descending(int a, int b);
//int main()
//{
//	const int SIZE{ 5 };
//	int scores[SIZE]{ 20,10,40,70,90 };
//
//	Sort(scores, SIZE, Ascending);
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		std::cout << scores[i] << " ";
//	}
//}
//void Sort(int* scores, int size, Comparison f)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (f(scores[i], scores[j]))
//			{
//				int temp = scores[i];
//				scores[i] = scores[j];
//				scores[j] = temp;
//			}
//		}
//	}
//}
//bool Ascending(int a, int b)
//{
//	return a > b;
//}
//bool Descending(int a, int b)
//{
//	return a < b;
//}

//#include <iostream>
//
//using AddFunc = void(*)(int, int);
//
//void SimpleAdder(int n1, int n2);
//void ShowString(std::string* str);
//int main()
//{
//	std::string str{ "Function Pointer" };
//	int num1{ 10 }, num2{ 20 };
//
//// #. 일반 포인터도 선언을 할 때 int, char, float등 가리킬 타입을 지정한다.
//// #. 함수 포인터 역시 가리킬 함수의 특징을 입력하여 어떤 타입의 함수를 가리킬지 알려줘야 한다.
//	void(*fptr1)(int, int) { SimpleAdder };
//	void(*fptr2)(std::string*) { ShowString };
//// #. 함수 포인터를 선언하고 해당 타입과 일치하는 함수를 가리켜 준다.
//
//	fptr1(num1, num2);
//	fptr2(&str);
//
//	AddFunc f{ SimpleAdder };
//	f(num1, num2);
//}
//void SimpleAdder(int n1, int n2)
//{
//	std::cout << n1 << " + " << n2 << " = " << n1 + n2 << std::endl;
//}
//void ShowString(std::string* str)
//{
//	std::cout << *str << std::endl;
//}

//#include <iostream>
//using sosu = void(*)(int);
//
//void SoSu(int a);
//int main()
//{
//	int num{};
//	std::cout << "소수를 구할 범위";
//	std::cin >> num;
//
//	void(*so)(int) { SoSu };
//	so(num);
//	sosu ss{ SoSu };
//	ss(num);
//}
//void SoSu(int a)
//{
//	for (int i = 1; i <= a; i++)
//	{
//		int count{};
//		for (int j = 1; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				count++;
//			}
//		}
//		if (count == 2)
//		{
//			std::cout << i << " ";
//		}
//	}
//}

/* --- < 복잡한 코드를 읽는 방법 > --- */

/*
<컴파일 원리> : 오른쪽 -> 왼쪽으로 해석
			  => int x; => x라는 객체는 int형
			  => a = b = 0;
			  => const int a; => a is intType which is const a는 int형인데 상수이다.
			  => int const a; => a int constant integer a는 상수형 정수이다. 위와 같은 의미
			  => const int * a;  => a is pointer to int which is const  // 내부 값을 바꿀 수 없고
			  => int * const a;  => a is constant pointer to int		// 가리키는 대상을 바꿀 수 없고

			  => int* (*(*fp1)(int))[10];
						=> 1. 식별자(Identifier)를 찾습니다.
						=> 2. 식별자 오른쪽으로 읽으세요.
								-> 괄호기호 )를 만나면 무조건 왼쪽으로~
								-> 오른쪽으로 읽을 것이 없으면 끝
						=> 3. 왼쪽으로 ~
						=> 4. (*) : poiner to
						=> 5. [] : array of
						=> 6. (int) : Function has int parameter return
			=> ex) int nums[3] : nums is array of 3 integer
			=> ex) int *nums[3] : nums is array of 3 pointer to integer  // 원소가 3개인데 각각 포인터가 있음
			=> ex) int (*nums)[3]; : nums is pointer to array of 3 integer  // 원소가 3개인 배열의 포인터
			=> ex) const int * const p; : p is constant pointer to integer which is const  // p는 상수인데 int 포인터인데 그 int가 상수형
			=> ex) int* (*(*fp1)(int))[10]; : fp1 is pointer to Function has integer parameter return pointer to array of 10 integer pointer to // fp1은 포인터인데 int를 반환하는 함수이고 그게 또 포인터 이고 그 포인터는 원소가 10개인 배열을 가리키고 이 모든게 int형 포인터이고
			=>>> fp is pointer to Function has int parameter return pointer to array of 10 pointer to integer
			=>>> fp는 함수 포인터인데 배열에 대한 포인터를 반환하는데 그 배열은 10개의 정수임
*/

/* --- < 상수( Constant ) > --- */

/*
< const 변수 > : 값을 변경할 수 없는 상수
	#. 리터럴로 사용할 때 주로 사용된다.

< const 매개변수 > : 함수 내부에서 매개변수의 값을 변경하지 않는다는 의미
	#. Call By Value 에서는 복사가 일어나므로 큰 의미가 없다.
	#. Call By Reference 와 같이 매개변수가 변경될 가능성이 있는 곳에서 주로 사용된다.

< const 반환형 함수 > : 매개변수와 마찬가지로 반환형에 참조형이 사용될 때, 해당 반환값을 변경할 수 없다는 의미
	#. 주로 R_Value 를 반환할 때 사용된다.

< const 멤버함수 > : 멤버함수 내부에서 클래스의 값( 멤버변수 )을 수정하지 않는다는 의미
	#. void PrintMember() const;
	#. const int& GetNumber();

< const 클래스 > : 멤버들의 값을 바꿀 수 없다는 의미
	#. const Dog myDog;

< const int* p1; > : 내부 값을 바꿀 수 없다는 의미
	#. 상수를 가리킬 때 주로 사용한다.

< int* const p1; > : 가리키는 주소 값을 바꿀 수 없다는 의미
*/

/* --- < 참조형( Reference ) > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 일반적인 함수는 매개변수와 인자간에 값이 복사된다. 따라서 인자는 매개변수와는 다른 메모리|
| 공간의 변수로 서로 영향을 줄 수 없게된다.												   |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< 참조형 >
	#. 객체를 수정할 수 있고, 복사 없이 사용할 수 있다.
		#. < int a{ 1 }; > : int형 변수 a에 값 1을 저장하여 초기화한다.
		#. < int& ref = a; > : int+참조형 변수 ref에 변수 a를 배정하여 초기화한다.
	#. 선언과 동시에 초기화를 해야한다.
		#. 초기화 이후에는 다른 변수를 참조할 수 없다.
	#. 메모리 공간을 차지하지 않는다.
		#. < int* p = &a; > : p는 메모리 공간에 8바이트를 차지한다.
		#. < int& ref = a; > : ref는 another_a로써 메모리 공간을 차지하지 않는다.
	#. 참조형은 주로 매개변수로 사용된다.

< 참조와 상수 >
	#. R_Value는 해당 라인을 넘어가면 사라지는 것이 원칙이다.
	#. 상수 참조형으로 R_Value를 받을 수 있고 이로인해 R_Value가 좀더 오래 유지될 수 있다.
*/

//#include <iostream>
//
//// #. 매개변수 ref가 정의되는 순간은 함수가 호출될때 이다.
//// #. 사실상 int& ref = number; 가 실행된다고 볼 수 있다.
//void ChangeValue(int& ref)
//{	// #. ref는 number 의 또다른 이름이기에 number의 값이 99로 바뀐다.
//	ref = 99;
//}
//
//int main()
//{
//// 1. Default
//	int a = 3;
//	int& another_a = a;
//// #. 'another_a는 a의 참조자다' 라는 의미로 another_a는 a의 또 다른 이름이라는 뜻이다.
//// #. another_a가 어떤 작업을 수행하든 사실상 a가 작업을 하는 것과 마찬가지인 상황이 된다.
//
//	another_a = 5;
//	std::cout << "a :  " << a << std::endl;
//	std::cout << "another_a :  " << another_a << std::endl;
//
//	int b = 9;
//// #. 참조형은 한 번 참조한 변수를 다른 변수로 바꿀 수 없다. 
//// #. < another_a = b; > : b 에 있는 값, 리터럴 9 를 대입한다는 뜻이다.
//	another_a = b;
//	std::cout << "a :  " << a << std::endl;
//	std::cout << "another_a :  " << another_a << std::endl;
//
//// 2. 매개 변수
//	int number = 5;
//	std::cout << number << std::endl;
//	ChangeValue(number);
//	std::cout << number << std::endl;
//
//// 3. 리터럴
//// #. 리터럴, 무명의 객체는 일반 참조형으로 받을 수 없다.
//	// int& ref1 = 4;
//	// std::cout << ref1 << std::endl;
//
//// #. 상수 참조형은 리터럴도 참조할 수 있다.
//// #. 상수 참조형은 참조한 값을 바꾸지 않겠다는 뜻이고 
//// #. 이는 ref2가 리터럴 4, 그 자체가 된다는 뜻이다.
//	const int& ref2 = 4;
//// #. a = 4; 와 동일한 문장이라고 볼 수 있다.
//	int a = ref2;
//}

//#include <iostream>
//
//// #2. 무명의 객체에 담긴 상수의 주소값을 상수 참조형 x에 배정한다.
//// #2. 상수는 값의 변경을 허용하지 않기 때문에 인자가 상수일 경우 매개 변수 또한 상수여야만 한다.
//void PrintConstant(const int& x)
//{	// #3. 매개변수 x는 y와 같은 주소값을 사용하기 때문에 x의 출력은 곧 y의 출력이다.
//	std::cout << x << std::endl;
//}
//
//// $2. 무명의 객체에 담긴 표현식을 상수 참조형 x에 배정한다. 
//// $2. 리터럴은 값을 저장할 수 있는 이름있는 객체가 아니다.
//// $2. 때문에 값의 변경은 허용하지 않는다. 그래서 리터럴을 받는 매개 변수는 상수여야만 한다.
//void PrintOperator(const int& x)
//{	// $3. 매개변수 x에 저장된 표현식을 값의 변환 없이 그대로 출력한다.
//	std::cout << x << std::endl;
//}
//
//int main()
//{	
//// 4. 표현식
//// #1. 상수 y의 주소값을 복사하여 무명의 객체에 담는다.
//	const int y{ 20 };
//	PrintConstant(y);
//
//// $1. 리터럴로 이루어진 표현식을 무명에 객체에 담는다.
//	PrintOperator(40 + 50);
//
//// 5. 배열 참조
//	int arr[3] = { 1,2,3 };
//	int(&ref)[3] = arr;
//// #. 참조형 배열이 배열을 참조하도록 한다. 
//// #. 이 경우 ref[0] 부터 ref[2] 가 각각 arr[0] 부터 arr[2] 를 참조한다고 보면 된다.
//	
//	ref[0] = 2;
//	std::cout << arr[0] << ref[1] << arr[2] << std::endl;
//}

//#include <iostream>
//
//// #. Func 함수는 참조형을 반환한다. 그런데 지역 변수 a는 반환됨과 동시에 사라진다.
//int& Func()
//{
//	int a = 2;
//	return a;
//// #. 그러므로 참조형의 본체를 함수 종료와 함께 소멸되지 않도록 주의해야 한다.
//}
//
//int main()
//{	
//// 6. 예기치 못한 오류에 주의
//// #. b는 Func()함수의 지역변수 a를 참조한다. 그런데 a가 사라졌다.
//	int& b = Func();
//}

/* --- < 배열과 포인터 > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 배열은 내부적으로는 포인터를 사용하고 있기 때문에 배열의 원소표기를 떼면 가장 앞 원소를   |
| 가르키는 포인터로 취급할 수 있다.	배열은 메모리 공간에서 연속된 주소에 위치하고 있기		|
| 때문에 포인터로 지정하고 포인터 연산을 통해서 배열의 각 원소를 순회할 수 있다.			|
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< pointer = array + 1; > : 배열의 타입 크기( byte )를 +연산한다.
	#. array는 &array[0]과 같은 주소를 가리키고 있다.
	#. 그 뜻은 array + 1은 &array[1]과 같다는 의미다.

< array > : 배열의 이름은 그 배열의 시작 주소라고 보아도 무방하다.
*/

//#include <iostream>
//
//int main()
//{
//	int array[10]{ 1,2,3,4,5,6,7,8,9,10 };
//	int* pArr{ nullptr };
//
//	int sum{};
//	for (int i = 0, *pArr = array; i < 10; i++, pArr++)
//	{
//// sum += array[i];
//// sum += *(array + i);
//		sum += *pArr;
//// #. pArr은 정수형 포인터( int* )라고 타입을 지정했기 때문에 pArr++는 int크기만큼 증가한다.
//	}
//	pArr = &array[1];
//// #. 배열의 N번째 원소는 인덱스에 N을 넣어 가리킬 수 있다.
//
//	std::cout << sum << std::endl;
//}

/* --- < 2차원 배열의 포인터 > --- */

/*
< 2차원 배열 > : 메모리 상으론 1열로 정렬되어 있지만 컴파일러는 행과 열을 나누어 구분할 수 있다.
	#. < int array[3][3]; > : array[0][0]배열에서 가로 행 + 1을 할 경우 array[1][0]이되고
	#. array[0][0]배열에서 세로 열 + 1을 할 경우 array[0][1]이 된다.
		#. 메모리 상으론 가로 행 + 1은 (4 * 3)byte를 더한 값이고
		#. 메모리 상으로 세로 열 + 1은 4byte를 더한 값이다.
*/

//#include <iostream>
//
//int main()
//{
//	int array1[3];
//	int* pArr1{ array1 };
//
//	int array2[2][3]{};
//	pArr1 = &array2[0][0];
//// #. array2는 원소가 2개인데 그 원소의 값이 3칸의 배열인 2차원 배열이다.
//// #. 포인터에게 배열안에 3개의 integer Type이 있는 배열이라고 알려줘야 한다.
//// #. < pArr1 = array2; > : 포인터가 2차원 배열 전체를 가리키는 것 이기 때문에 에러가 발생한다.
//	
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			std::cout << &array2[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int arr2D[3][3];
//
//	std::cout << arr2D << " : " << arr2D[0] << " : " << &arr2D[0][0] << std::endl;
//	std::cout << arr2D[1] << " : " << &arr2D[1][0] << std::endl;
//	std::cout << arr2D[2] << " : " << &arr2D[2][0] << std::endl;
//
//// #. arr2D는 배열 전체(3층에 3개의 홋수가 있는 아파트)를 의미한다.
//// #. arr2D[0]은 첫 번째 요소를 가리키되 1행만을 의미 한다. [[0][0][0]]
//	std::cout << sizeof(arr2D) << " : " << sizeof(arr2D[0]) << " : " << sizeof(arr2D[1])
//		<< " : " << sizeof(arr2D[2]) << std::endl;
//}

//#include <iostream>
//
//int main()
//{
//	// 3층 2열
//	int yier2[3][2];
//	// 2층 3열
//	int yier3[2][3];
//
//	// #. 2열이기 때문에 +1은 8바이트 증가
//	std::cout << yier2 << " : " << yier2 + 1 << std::endl;
//	// #. 3열이기 때문에 +1은 12바이트 증가
//	std::cout << yier3 << " : " << yier3 + 1 << std::endl;
//}

//#include <iostream>
//
//int main()
//{
//	int arr[3][4]{};
//
//// #. ptr point to array of four integer : ptr 은 4개의 정수 배열을 가리킨다.
//// #. 원소의 값으로 4개의 배열을 갖고있는 2차원 배열을 가리킨다.
//	int(*ptr)[4]{ arr };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			std::cout << ptr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int num1{ 10 }, num2{ 20 }, num3{ 30 }, num4{ 40 };
//	int* ptr1[4]{ &num1,&num2,&num3,&num4 };
//	std::cout << *ptr1[0] << " " << *ptr1[1] << " " << *ptr1[2] << " " << *ptr1[3] << std::endl;
//	std::cout << std::endl;
//// #. 포인터 배열로 각각의 원소값을 주소값으로 저장한다.
//// #. 즉 배열의 요소가 포인터로 이루어져있다.
//
//	int arr[2][4]{ 1,2,3,4,5,6,7,8 };
//	int(*ptr2)[4]{ arr };
//// #. 배열 포인터로 배열의 첫번째 주소를 가리킨다.
//// #. 즉 특정 사이즈의 배열만을 가리킬 수 있는 포인터이다.
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			std::cout << ptr2[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//}

//#include <iostream>
//
//int main()
//{	
//// #. arr1은 1차원 배열, int형 포인터 변수로 이루어진 포인터 배열이다.
//	int* arr1[5]{};
//
//// #. arr2은 2차원 배열, int형 포인터 변수로 이루어진 더블 포인터 배열, 행 길이는 5이다.
//	int* arr2[3][5]{};
//
//// #. arr1은 int형 싱글 포인터 변수를 가리키므로 arr1의 포인터 형식은 int형 더블 포인터다.
//	int** ptr1{ arr1 };
//
//// #. 2차원 배열의 경우 배열의 요소와 배열의 가로 길이를 통해서 포인터 형식이 결정된다.
//	int* (*ptr2)[5]{ arr2 };
//}

//#include <iostream>
//
//void ComplexFuncOne(int** arr1, int* (*arr2)[5]);
//void ComplexFuncTwo(int*** arr3, int*** (*arr4)[5]);
//int main()
//{
//	int* arr1[3];		// #. 1차원 포인터 배열
//	int* arr2[3][5];	// #. 2차원 포인터 배열
//	int** arr3[5];		// #. 1차원 더블 포인터 배열
//	int*** arr4[3][5];	// #. 2차원 트리플 포인터 배열
//
//	ComplexFuncOne(arr1, arr2);
//	ComplexFuncTwo(arr3, arr4);
//}

//#include <iostream>
//
//int main()
//{
//	int arr[3][2]{ {1,2},{3,4},{5,6} };
//
//	// arr[1][0] == 3 : arr[0][1] == 2
//	std::cout << arr[1][0] << " " << arr[0][1] << std::endl;
//
//	// *(arr[2] + 1) == 6 : *(arr[1] + 1) == 4
//	std::cout << *(arr[2] + 1) << " " << *(arr[1] + 1) << std::endl;
//
//	// (*(arr + 2))[0] == 5 : (*(arr + 0))[1] == 2
//	std::cout << (*(arr + 2))[0] << " " << (*(arr + 0))[1] << std::endl;
//
//	// **arr == 1 : *(*(arr + 0) + 0) == 1
//	std::cout << **arr << " " << *(*(arr + 0) + 0) << std::endl;
//}

//#include <iostream>
//
//int main()
//{
//	int arr[2][2][2]{ 1,2,3,4,5,6,7,8 };
//
//	std::cout << arr[1][0][1] << " : " << (*(arr + 1))[0][1] << " : " << (*(arr[1] + 0))[1]
//		<< " : " << *((arr[1][0]) + 1) << " : " << *(*(*(arr + 1) + 0) + 1) << " : " 
//		<< *(arr[1][0] + 1) << std::endl;
//}

/* --- < 배열 포인터 연산 > --- */

//#include <iostream>
//
//int main()
//{
//	int arr[3][2]{ {1,2},{3,4},{5,6} };
//
//	std::cout << "arr[0][0] : " << **arr << " " << (*(arr + 0))[0] 
//		<< " " << *(arr[0] + 0) << std::endl;
//
//	std::cout << "arr[1][1] : " << (*(arr + 1))[1] << " " << *(arr[1] + 1) 
//		<< " " << *(*(arr + 1) + 1) << std::endl;
//
//	std::cout << "arr[2][1] : " << (*(arr + 2))[1] << " " << *(arr[2] + 1) 
//		<< " " << *(*(arr + 2) + 1) << std::endl;
//
//	std::cout << "arr[0] : " << *arr << " " << *(arr + 0) << std::endl;
//	std::cout << "arr[1] : " << *(arr + 1) << " " << std::endl;
//
//
//	int arr2D[2][3]{ {1,2,3},{5,6,7} };
//	int(*pArr)[3]{ arr2D };
//	std::cout << "pArr 은 [[1][2][3]] 1층 배열을 가리킵니다." << pArr << std::endl;
//	std::cout << "*pArr 은 [[1][2][3]] 1층 배열의 1호를 가리킵니다." << *pArr << std::endl;
//	std::cout << "pArr+1 은 [[5][6][7]] 2층 배열을 가리킵니다." << pArr + 1 << std::endl;
//	std::cout << "*(pArr+1) 은 [[5][6][7]] 2층 배열의 1호를 가리킵니다." << *(pArr + 1) << std::endl;
//	std::cout << "*(pArr+1)+2 은 [[5][6][7]] 2층 배열의 3호를 가리킵니다." << *(pArr + 1) + 2 << std::endl;
//	std::cout << "*(*pArr+1) 은 [[1][2][3]] 1층 배열의 2호 내부 값을 가리킵니다. " << *(*pArr + 1) << std::endl;
//// 2차원 배열을 아파트로 비유 했을 때 배열 이름은 아파트의 층을 가리킨다.
//// (*) 한 개의 역참조는 해당 층의 홋수를 가리키고, (*) 두 개의 역참조는 해당 층 홋수 안에 사람을 가리킨다.
//}

//#include <iostream>
//
//int main()
//{
//	int array2D[2][3]{ {1,2,3},{5,6,7} };
//	int(*pArr)[3]{ array2D };
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			std::cout << *(*(pArr + i) + j) << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			std::cout << *(*pArr + j) << " ";
//		}
//		pArr++;
//		std::cout << std::endl;
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int array2D[2][3]{ {1,2,3},{5,6,7} };
//	int* pArr{ &array2D[0][0] };
//// #. 2차원 배열의 배열 요소를 (세 칸씩이 아니라)한 칸씩 가리키는 방법
//// #. int(*pArr)[3]{ array2D };의 경우 가로 열 배열의 값을 묶음으로 가리켰다.
//// #. &array2D[0][0]로 가리킬 경우 전체 배열을 세로 원소 한 칸씩 가리킨다.
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			std::cout << *pArr++ << " ";
//		}
//		std::cout << std::endl;
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int array3D[2][3][4]{};
//
//	// #. 2차원 배열의 포인터는 가리켜야 하는 원소가 [열]이였다.
//	// #. 3차원 배열의 포인터는 가리켜야 하는 원소가 [행][열]이다.
//	int(*pArray)[3][4]{ array3D };
//}

/* --- < 배열의 매개 변수 > --- */

//#include <iostream>
//
//// #. [][3] 행을 비워두고 열에 3개의 원소가 들어간다는 것을 명시하여 열이 3개인 2차원 배열을 받을 수 있게 된다.
//int Sum(int input[][3], int row, int col)
//{
//	int sum{};
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			sum += *(*input + j);
//			//sum += input[i][j];
//		}
//		input++;
//	}
//	return sum;
//}
//int main()
//{
//	int array2D[2][3]{ 1,2,3,4,5,6 };
//	std::cout << Sum(array2D, 2, 3) << std::endl;
//}

/* --- < 문자열 포인터 > --- */

/*
< char* pointer > : pointer는 문자열을 다루는 포인터지만, 시작 지점만 존재한다.
	#. pointer가 문자열을 의미하려면 어디가 끝인지를 반드시 알아야만 한다.
	#. 그 때문에 '\0'널 값을 문자열 마지막에 넣는 것이다.
	#. char[]로 생성하면 배열로 메모리가 준비된 상태로 등록되지만
	#. char*로 생성하면 상수로 만들어진다.
*/

//#include <iostream>
//
//int main()
//{
//	char words[6]{};
//// #. 문자형 포인터 char* (문자열형 포인터 std::string*)
//	char* pw;
//
//	for (int i = 0; i < 5; i++)
//	{
//		std::cin >> words[i];
//	}
//	pw = words;
//
//	std::cout << words << std::endl;
//// #. 문자 배열을 가리키는 포인터는 예외적으로 
//// #. (*) 역참조 없이도 포인터 이름으로 내부값을 출력할 수 있다.
//	std::cout << pw << std::endl;
//}

//#include <iostream>
//
//int main()
//{
//	char words[6]{ "River" };
//	char* pW{ &words[0] };
//// #. char* pW{"River"};가 가리키는 값은 R_Value라 올 수 없다.
//// #. R_Value( 무명 객체 )를 가리키려면 상수 포인터로 가리켜야 한다.
//
//	std::cout << words << std::endl;
//	std::cout << pW << std::endl;
//}

//#include <iostream>		// < Title : const >
//
//int main()
//{	
//// char 타입의 크기로 12개의 항목으로 이루어진 data001 변수 선언
//	char data001[12]{ 't','i','p','s','s','o','f','t',0 };				
//// 문자열을 초깃값으로 저장하고 싶다면 널 값을 포함하여 ('')에 한 문자씩 입력
//// 배열의 각 항목에 문자를 하나씩 대입하도록 명령어가 구성된다.
//// 즉, Stack 메모리에 배열을 위한 공간이 마련되고 
//// 배열의 각 항목에 1바이트 크기의 숫자 값을 대입하는 최소 9개의 명령어가 추가된다.
//
//	char data002[12]{ "tipssoft" };										
//// ('')로 입력한 문자열은 읽기가 불편하여 ("")문자열 상수로 입력하기를 선호한다.
//// tipssoft가 문자열 상수로 프로그램에 등록된다.
//// 이는 문자를 한 개씩 대입하는 것이 아니라 
//// 문자열 상수가 저장된 메모리 시작 주소를 이용해서 data002 변수에 
//// 9바이트 크기의 메모리를 복사하는 명령어가 추가된다.
//
//	const char* pString{ "tipssoft" };
//// #. < char* pString = "tipssoft"; > : 문자열 상수는 const char* 로 받아야 한다. 
//// #. 문자열 상수는 *pString = 'k' 와 같이 문자의 수정이 불가능 하다.
//// #. char[]문자 배열과는 다르게 char*포인터는 배열 상태로 메모리가 준비되지 않는다.
//}

//#include <iostream>
//
//int main()
//{
//	int myInteger{ 5 };
//	char myString[]{ "One_Two_Three" };
//
//// #. +5 만큼 앞에서 부터 이동한 뒤 그 이후 부터 문자열 출력
//	std::cout << myString + 5 << std::endl;
//	std::cout << myString + myInteger << std::endl;
//}

//#include <iostream>
//
//int main()
//{
//	int myInteger{ 5 };
//
//	wchar_t myString[]{ L"는 정수 입니다." };
//// #. 일반 문자형은 [char], 유니코드 문자형은 [wchar_t]
//// #. wchar은 wide character의 약자이다.
//// #. 문자열("")앞에 L은 유니코드 문자열을 알려주기 위한 표기
//
//// #. 유니코드는 여러 국가의 언어를 표현하기 때문에, 각 언어에 맞는 특성으로 변환해야 한다.
//	std::locale myLocale("kor");
//	std::wcout.imbue(myLocale);
//
//// #. 유니코드를 화면에 출력하려면 cout이 아닌 wcout을 사용해야 한다.
//	std::wcout << myString << std::endl;
//	std::wcout << myString + myInteger << std::endl;
//}

//#include <iostream>
//
//int main()
//{
//	char input[1000];
//	std::cin >> input;
//
//// #. < strlen(변수) > : iostream 에서 제공하는 문자의 갯수를 세는 함수
//	std::cout << strlen(input) << std::endl;
//}

//#include <iostream>
//
//int main()
//{
//	char myString[5]{ "test" };
//
//	// #. < size_t strlen(const char* str); > : 문자열의 갯수를 반환한다.(널 문자 제외)
//	// #. string length의 약자
//	std::cout << "length : " << strlen(myString) << std::endl;
//	std::cout << "size : " << sizeof(myString) << std::endl;
//
//	char compareStr[5];
//
//	// #. < char* strcpy_s(char* destination, size_t size, const char* source); >
//	// #. source의 문자열을 destination의 문자열로 size만큼 복사
//	strcpy_s(compareStr, 5, "boy");
//	std::cout << "Compare with " << compareStr << " : "
//		<< strcmp(myString, compareStr) << std::endl;
//
//	// #. < int strcmp(const char* str1, const char* str2); >
//	// #. str1과 str2의 문자열을 비교한다.
//	// #. ( < 0 ) : str1이 더 작은 경우(아스키 코드상)
//	// #. ( 0 ) : 두 문자열이 일치할 경우
//	// #. ( > 0 ) : str1이 더 큰 경우(아스키 코드상)
//	strcpy_s(compareStr, 5, "test");
//	std::cout << "Compare with " << compareStr << " : "
//		<< strcmp(myString, compareStr) << std::endl;
//	strcpy_s(compareStr, 5, "word");
//	std::cout << "Compare with " << compareStr << " : "
//		<< strcmp(myString, compareStr) << std::endl;
//}

/* ----- < 동적 메모리 관리 > ----- */
//
//
//
//
//
/* --- < 동적 할당 개요 > --- */

/*
< 자동 메모리 할당( Automatic Memory Allocation ) >
	#. 지역 변수, 함수 매개변수등은 타입으로 객체를 만들면 자동으로 타입의 크기만큼 메모리가 배정된다.
	#. 이 변수들의 생존주기는 블록{}에서 시작되고 블록에서 끝난다.
	#. 메모리 공간을 얼마나 사용할 지 컴파일타임에 지정한다.

< 정적 메모리 할당( Static Memory Allocation ) >
	#. 한 번 만들어지면 끝까지 살아남는다는 의미로 정적이라고 부른다.
	#. 즉 전역변수 및 정적변수들이 이런 형태가 된다.
	#. 메모리 공간을 얼마나 사용할 지 컴파일타임에 지정한다.

< 동적 메모리 할당( Dynamic Memory Allocation ) >
	#. 동적 즉, 프로그래머가 필요할 때 만들고 제거할 수 있는 형태를 말한다.
	#. 포인터의 핵심 기능이다.
	#. 메모리 공간을 얼마나 사용할 지 런타임에 지정한다.
*/

//#include <iostream>
//
//int Factor(int);
//
//// main 함수가 스택 영역(Stack Area)에 저장된다.
//int main()
//{	
//// #. Local Variable : 지역 변수가 스택 영역에 저장된다.
//	int number{ 5 };
//// #. < Stack Area > : 함수, 지역변수, 매개 변수가 타입을 지정하여 객체를 만든다.
////		=> 만들어진 객체는 자동으로 타입의 크기만큼 메모리가 배정된다.
////		=> 배정된 메모리는 블록{}에서 시작되고 끝난다.
//	std::cout << Factor(number) << std::endl;
//}
//
//// Factor 함수가 스택 영역에 저장된다.		ex) Stack[main[number], Factor[num]]
//// #. 매개 변수 num 이 스택 영역에 저장된다.
//int Factor(int num)
//{
//	if (num == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return num * Factor(num - 1);
//	}
//}

//#include <iostream>
//
//int Increase(void);
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		std::cout << Increase() << std::endl;
//	}
//}
//int Increase(void)
//{	
//// #. static 변수가 데이터 영역(Data Area)에 저장된다.		ex) Data[Increase[number]]
//	static int number{ 1 };
//// #. < Data Area > : 글로벌 변수, static 변수가 타입을 지정하여 객체를 만든다.
////		=> 만들어진 객체는 자동으로 타입의 크기만큼 메모리가 배정된다.
////		=> 배정된 메모리는 프로그램 시작될 때 생성되어 프로그램 종료시 사라진다.
//	return number++;
//}

//#include <iostream>
//
//int main()
//{	
//// #. Contiguous allocation
//// #. 원소의 크기가 size인 원소를 num개 할당, 모든 원소를 0으로 초기화
//	void* calloc(size_t num, size_t size);
//// #. 확보된 메모리의 시작 주소를 buf포인터에 저장
//// #. char형으로 20개의 원소를 할당하여 메모리 공간 확보 ( 20개의 원소가 각각 1바이트 )
//	char* buf = (char*)calloc(20, sizeof(char));
//
//// #. Memory allocation
//// #. size 바이트 만큼의 메모리를 할당, 초기화 X
//	void* malloc(size_t size);
//// #. 확보된 메모리의 시작 주소를 marry 포인터에 저장
//// #. int 형으로 200개의 원소를 4바이트 size 로 메모리 확보
//	int* marry = (int*)malloc(sizeof(int) * 200);
//// #. 확보된 공간을 배열처럼 사용할 수 있다.
//	marry[2] = 40;
//
//// #. 확보된 메모리 공간과 포인터간의 연결을 끊는다.
//	void free(void* ptr);
//	free(marry);
//}

/* --- < C++ Style 동적 메모리 할당 개요 > --- */

/*
< 동적 메모리 할당 > : 원하는 만큼 메모리를 언제든 만들고 없앨 수 있다.
	#. new 연산자 : 주어진 타입으로 메모리 공간을 할당한 후 돌려 주는 단항 연산자
	#. delete 연산자 : 주어진 포인터 변수의 메모리를 해제 하는 단항 연산자
	#. new[] : 배열 형태로 메모리를 할당하는 연산자
	#. delete[] : 배열 형태로 할당한 메모리를 해제하는 연산자
*/

//#include <iostream>
//
//struct Student
//{
//	std::string name;
//	int scores;
//};
//
//int main()
//{
//// #. < 포인터 변수 = new 타입; > : 포인터 변수를 위한 메모리 공간 할당
//	int* pointer1 = new int;
//	*pointer1 = 100;
//	std::cout << *pointer1 << std::endl;
//
//// #. < delete 포인터 변수; > : 포인터 변수와 메모리 공간의 연결을 끊음
//	delete pointer1;
//	pointer1 = nullptr;
//
//// #. < 포인터 변수 = new 타입[크기]; > : 해당 타입의 배열 크기만큼 메모리 공간을 할당
//	int* pointer2 = new int[5];
//	for (int i = 0; i < 5; i++)
//	{
//		std::cin >> pointer2[i];
//	}
//
//// #. < delete[] 포인터 변수; > : 포인터 변수와 메모리 공간의 연결을 끊음
//	delete[] pointer2;
//	pointer2 = nullptr;
//
//	Student* pointer3 = new Student[5];
//	for (int i = 0; i < 5; i++)
//	{	// 배열의 인덱스[] 안에 역참조 기능이 있기 때문에 화살표는 사용 불가
//		std::cin >> pointer3[i].name;
//		std::cin >> pointer3[i].scores;
//	}
//	delete[] pointer3;
//	pointer3 = nullptr;
//}

/* --- < 힙( Heap ) & 스택( Stack ) > --- */

/*
< 힙&스택 > : 동적 메모리를 사용하는 또 다른 경우는 데이터를 힙( Heap )에 등록해야 할 경우다.
	#. 스택( Stack )은 매우 작은 메모리를 사용하기 때문에 매우 큰 데이터는 지역 변수로 사용할 수 없다.
*/

//#include <iostream>
//
//void MyFunction1();
//void MyFunction2();
//
//// #1. 전역 변수는 Data( 전역, static 변수 저장 공간 )영역에 저장된다.
//// +1. Data[gString, gInteger]
//char gString[]{ "Memory" };
//int gInteger;
//
//// #2. Entry-Point로 main함수가 실행된다.
////	 2-1. 메인 함수가 실행 되며 Stack영역에 저장된다.		+ Stack[main[]]
////	 2-2. Stack메모리 공간은 굉장히 작은 크기가 할당된다.
//int main()
//{	
//// #3. 동적할당은 Heap 에 할당된 메모리를 가리킨다.
//// +3. Stack[main[allocated->]->] -> Heap[]
////	 3-1. main함수에 저장된 지역변수가 Heap에 4바이트 메모리 공간을 가리킨다.
////	 3-2. Heap메모리 공간은 큰 크기가 할당된다.
//	int* allocated{ new int };
//
//// #4. Stack에 MyFunction1이 저장된다.		+ Stack[main[allocated], MyFunction1[]]
//	MyFunction1();
//
//// #8. Heap을 가리키고 있던 allocated가 연결을 끊음
////	 8-1. Stack 공간에 main안에 있는 지역 변수 allocated는 살아 있다.
//	delete allocated;
//	allocated = nullptr;
//}
//void MyFunction1()
//{	
//// #5. Stack에 저장된 MyFunction1안에 지역 변수 local이 저장된다.
////	 +5. Stack[main[allocated], MyFunction1[local]]
//	int loca;
//
//// #6. Stack에 MyFunction2가 저장된다.		+ Stack[main[allocated], MyFunction1[local], MyFunction2[]]
//	MyFunction2();
//}
//void MyFunction2()
//{	
//// #7. Stack에 저장된 MyFunction2안에 지역 변수 local이 저장된다.
////	 +7. Stack[main[allocated], MyFunction1[local], MyFunction2[local]]
//	int local;
//}

/* --- < 동적 배열 > --- */

//#include <iostream>
//
//int main()
//{
//	int count{};
//
//	std::cout << "배열의 크기는 ? ";
//	std::cin >> count;
//	if (count <= 0)
//	{
//		std::cout << "배열의 크기는 0보다 커야 합니다." << std::endl;
//		return 0;
//	}
//// #. 동적 할당을 활용하면 배열의 크기를 사용자로부터 입력받을 수 있다.
//	int* pArray = new int[count] {};
//
//	for (int i = 0; i < count; i++)
//	{
//		std::cout << i + 1 << "번 째 배열 요소 : ";
//		std::cin >> pArray[i];
//	}
//
//	delete[] pArray;
//	pArray = nullptr;
//}

//#include <iostream>
//
//int main()
//{
//	int count{};
//
//	std::cout << "몇 명의 친구가 있나요 : ";
//	std::cin >> count;
//	if (count <= 1)
//	{
//		std::cout << "친구의 수는 1보다 많아야 합니다." << std::endl;
//		return 0;
//	}
//// #. 문자열 포인터 std::string* 사용
//	std::string* pArray = new std::string[count]{};
//	// 가장 긴 이름이 있는 배열 요소를 저장할 변수
//	int longest{};
//	// < size_t > : unsigned int로 비교한다.
//	// unsigned int maxlen{};과 같은 뜻
//	size_t maxlen{};
//
//	for (int i = 0; i < count; i++)
//	{
//		std::cout << "이름 " << i + 1 << "을 입력하세요 : ";
//		std::cin >> pArray[i];
//		if (pArray[i].size() > maxlen)
//		{
//			maxlen = pArray[i].size();
//			longest = i;
//		}
//	}
//	std::cout << std::endl;
//	std::cout << "이름이 가장 긴 친구는 " << pArray[longest] << " 입니다." << std::endl;
//
//	delete[] pArray;
//	pArray = nullptr;
//}

//#include <iostream>
//
//int main()
//{
//	int number{ 5 };
//	int* p{ &number };
//	std::cout << p << " : " << *p << std::endl;
//// #. p는 number의 주소를 가지고 있습니다.
//// #. *p는 역참조로 number의 값을 가져옵니다.
//
//	int** pp = &p;
//	std::cout << pp << " : " << *pp << " : " << **pp << std::endl;
//// #. pp는 p의 주소를 가지고 있습니다.
//// #. *pp는 역참조로 p의 값을 가지고 있으니, number의 주소가 될겁니다.
//// #. **pp는 p의 역참조가 number의 주소이므로 다시 역참조 해서 number의 값을 가지게 됩니다.
//
//	//int** dp{ && number };
//// #. number : 값 5를 저장하고 있는 변수( L_Value )
//// #. &number : number의 메모리 상의 주소값, 즉 0067FF7F4라는 리터럴( R_Value )
//// #. &(&number) : &0067FF7F4이라는 표현이 되어 버려서 처리 불가능
//}

//#include <iostream>
//
//int main()
//{
//	int row{ 2 };		// 2층(행)
//	int col{ 3 };		// 3호(열)
//
//// #. 2차 배열을 포인터로 지정하는 방법 : int (*point)[3] = array;
//// #. 2차 배열을 포인터로 가리키려면 1차원의 원소 크기를 지정해 줘야만 했다.
//
//// #. 가로 행에 값으로 지정된 세로 열 배열은 싱글 포인터로 가리킨다.
//// #. 그러므로 더블 포인터로 가로 행의 크기를 먼저 지정해 준다.
//	int** p = new int* [row];
//
//	for (int i = 0; i < row; i++)
//	{	// #. 행을 만든 뒤 각 행 별로 열의 크기를 지정해 준다.
//		p[i] = new int[col];
//	}
//
//	p[0][0] = 1;
//	p[0][1] = 2;
//
//// #. 동적 할당을 해제할 때에는 세로 열을 먼저 해제해야만 한다.
//	for (int i = 0; i < row; i++)
//	{
//		delete[] p[i];
//		p[i] = nullptr;
//	}
//	delete[] p;
//	p = nullptr;
//}

/* ----- < 오류 > ----- */
//
//
//
//
//
/* --- < 오류의 종류 > --- */

/*
< 컴파일 시간 오류( Compile-Time ERROR ) >
	#. 컴파일러가 찾아 낸 오류로 가장 수정하기 쉽다.
		=> 문법 오류 : C++의 정해진 문법을 지키지 않아서 발생
		=> 타입 오류 : 타입에 지원되지 않는 연산등을 수행할 때 발생

< 링크 시간 오류( Link-Time ERROR ) >
	#. 링커가 탐지한 오류로 역시 수정하기 쉽다.
	#. 주로 외부 라이브러리의 잘못된 사용으로 발생한다.

< 실행 시간 오류( Run-Time ERROR ) >
	#. 프로그램을 실행하는 동안 발생하는 오류로, 프로그래머가 용의주도하고 꼼꼼하다면 수정하기 쉽다.
		=> 컴퓨터가 감지한 오류 : 컴퓨터가 허용하지 않은 계산을 하려고 할 때 발생
		=> 라이브러리가 감지한 오류 : 라이브러리가 허용하지 않은 계산에서 발생
		=> 사용자가 감지한 오류 : 프로그래머가 직접 허용되지 않는 계산을 지정하고, 오류를 발생

< 논리 오류( Logic ERROR ) >
	#. 찾기 어려운 문제로 입력 -> 연산 -> 결과 모두 문제없이 실행되는데, 결과가 다른경우
	#. 디버깅( Debugging )을 하면서 잘못된 부분을 하나하나 추적해 나가야 한다.
*/

/* --- < 오류의 원인 > --- */

/*
< 잘못된 명세 >
	#. 프로그램 명세( program specification )는 프로그램의 목적과 해야 할 일을 명시하는 것이다.
	#. 이러한 명세서에 논리적인 결함이 있을 경우 그대로 구현한 프로그램을 오류를 가지고 있을 것이다.

< 불완전한 프로그램 >
	#. 급하게 코딩하는 경우에 추가적인 오류가 발생할 수도 있다.

< 예상 밖의 인자 >
	#. 함수에 사용되는 입력은 주의해야 한다.
		=> 나이를 입력받아 계산하는 함수가 음수를 매개변수로 전달받는 다면?
		=> 문자열을 인자로 받는 함수가 빈 문자열을 받는다면?

< 예상 밖의 입력 >
	#. 프로그램은 주로 GUI( Graphic User Interface )를 이용해 사용자와 상호작용한다.
		=> 정수를 입력 받는데 사용자가 문자열을 입력한다거나
		=> 다른 작업을 진행 중에 버튼을 누른다거나

< 예상 밖의 상태 >
	#. 계산을 위해 숨겨진 자료구조는 프로그램을 작성할때 눈으로 볼 수 없기 때문에 실수할 가능성이 높다.

< 논리 오류 >
	#. 프로그래머의 실수
*/

//#include <iostream>
//
//double LinearEquation(int a, int b)
//{
//	if (a == 0)
//	{	// 함수가 처리할 수 없는 오류가 발생하면 이를 프로그래머가 인지해서 일반적인 return이 아닌 예외를 던진다.
//		throw std::logic_error("divide by zero!");
//	}
//	return -((double)b / a);
//}
//
//int main()
//{
//	int a;
//	int b;
//
//	std::cout << "두 정수를 입력하세요 : ";
//	std::cin >> a >> b;
//
//	try {	// 함수를 직간접적으로 호출한 모든 쪽에서 계산을 시도( try )
//		std::cout << LinearEquation(a, b) << std::endl;
//	}
//	catch (std::logic_error) {	// 예외를 잡아내서( catch )해당 예외에 대한 처리를 수행
//		std::cerr << "divide by zero!" << std::endl;
//	}
//}

/* ----- < 알고리즘 > ----- */
//
//
//
//
//
/* --- < N^2 > --- */

//#include <iostream>
//
//void PrintArray(int input[], int size)
//{
//	for (int i = 0; i < size; i++) std::cout << input[i] << ' ';
//}
//void Swap(int& x, int& y)
//{
//	int temp = x; x = y; y = temp;
//}
//
//void SelectionSort(int input[], int size);	// 순차 정렬 : 배열을 순회하면서 가장 작은(or 큰)원소를 선택하여 정렬
//void BubbleSort(int input[], int size);	// 거품 정렬 : 인접한 두 원소를 비교하면서 위치를 교환하는 정렬
//void InsertionSort(int input[], int size);	// 삽입 정렬 : 배열의 원소를 하나씩 선택하여 정렬된 부분 배열의 적절한 위치에 삽입
//
//int main()
//{
//	const int SIZE{ 10 };
//	int array[SIZE]{ 1,10,5,8,7,6,4,3,2,9 };
//
//	// SelectionSort(array, SIZE);
//	// BubbleSort(array, SIZE);
//	InsertionSort(array, SIZE);
//	PrintArray(array, SIZE);
//}
//
//void SelectionSort(int input[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		int minIndex = i;
//
//		for (int j = i + 1; j < size; j++)
//		{
//			// 1. 배열의 원소 중 가장 작은 원소를 찾는다.
//			if (input[j] < input[minIndex]) minIndex = j;
//		}
//
//		// 2. 해당 원소를 배열의 가장 앞쪽 원소와 교환한다.
//		Swap(input[i], input[minIndex]);
//	}
//}
//
//void BubbleSort(int input[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			// 1. 배열의 첫 번째 원소부터 마지막 원소까지 인접한 원소들을 비교
//			// 2. 인접한 두 원소를 비교하여 크기 순서에 맞지 않는 경우, 위치를 교환
//			if (input[j] > input[j + 1]) Swap(input[j], input[j + 1]);
//
//			// 3. 이러한 비교와 교환 과정을 마지막 원소까지 반복
//			// 4. 가장 큰(or 작은)원소가 배역의 끝쪽으로 이동하게 된다.
//			// 5. 다시 첫 번째 원소부터 마지막에서 두 번째 원소까지 위의 과정을 반복
//			// 6. 위의 과정을 배열의 크기 -1번 만큼 반복하여 정렬
//		}
//	}
//}
//
//void InsertionSort(int input[], int size)
//{
//// 1. 배열의 두 번째 원소부터 마지막 원소까지 반복
//	for (int i = 1; i < size; i++)
//	{
//		// 2. 현재 원소를 Key 값으로 저장한다.
//		int key = input[i];
//		// 3. 다음 반복문의 인덱스로 활용할 변수에 현재 원소 바로 이전 인덱스를 저장
//		int j = i - 1;
//
//		// 4. 현재 원소를 이미 정렬된 부분 배열의 적절한 위치에 삽입하기 위한 반복
//		//		=> j가 배열 인덱스를 넘지 않으면서 && Key 이전의 값이 Key보다 크면 계속 반복문을 실행한다.
//		while (j >= 0 && input[j] > key)
//		{
//			// 5. 큰 값을 배열 끝으머리로 밀어버린다.
//			input[j + 1] = input[j];
//			j--;
//		}
//		// 6. 반복문을 나오면 Key값의 위치가 정해 진다.
//		input[j + 1] = key;
//	}
//}

//#include <iostream>
//
//void Swap(int& x, int& y)
//{
//	int temp = x; x = y; y = temp;
//}
//
//void SelectionSort(int input[], int size)
//{
//	// 1. 배열 중 가장 작은 값을 찾는다.
//	for (int i = 0; i < size; i++)
//	{
//		int minIndex = i;
//		for (int j = i + 1; j < size; j++)
//		{
//			if (minIndex < input[j])
//			{
//				minIndex = j;
//			}
//		}
//		// 2. 가장 작은 값을 맨 앞으로 보낸다.
//		Swap(input[i], input[minIndex]);
//	}
//}
//
//void BubbleSort(int input[], int size)
//{
//	// 1. 배열 첫 번째 원소부터 마지막 원소 이전까지 인접한 원소끼리 비교
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			// 2. 큰 값을 배열의 뒤로 보낸다.
//			if (input[j] > input[j + 1]) Swap(input[j], input[j + 1]);
//		}
//	}
//}
//
//void InsertionSort(int input[], int size)
//{
//	// 1. 배열의 두 번째 원소부터 순회
//	for (int i = 1; i < size; i++)
//	{
//		// 2. 현재 원소를 기준값 Key로 지정
//		int Key = input[i];
//		// 3. 현재 원소의 이전 인덱스를 저장
//		int j = i - 1;
//
//		// 4. 이전 인덱스가 배열을 벗어나지 않고, 기준값이 이전 인덱스의 원소값보다 작다면
//		while (j >= 0 && input[j] > Key)
//		{
//			// 5. 기준 원소보다 큰 값들은 뒤로 한 칸씩 이동
//			//		=> 7 3 1 : Key[3] -> 7 7 1 -> 3 7 1 -> Key[1] -> 3 7 7 -> 3 3 7 -> 1 3 7
//			input[j + 1] = input[j];
//			j--;
//		}
//		input[j + 1] = Key;
//	}
//}

//#include <iostream>
//#include <vector>
//
//void BubbleSort(std::vector<int>& input)
//{
//	int size = input.size();
//	// 1. 정렬이 필요한 구간인지 체크할 플래그 변수
//	bool swapped;
//
//	for (int i = 0; i < size - 1; i++)
//	{
//		// 2. 정렬을 시작할 때 false를 쥐어 준다.
//		swapped = false;
//
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (input[j] > input[j + 1])
//			{
//				std::swap(input[j], input[j + 1]);
//				// 3. 정렬이 필요한 구간일 경우 true를 준다.
//				swapped = true;
//			}
//		}
//		// 4. 정렬이 필요 없는 구간이라면 다음 구간으로 이동하기 위해 탈출
//		if (!swapped) break;
//	}
//}
//
//int main()
//{
//	std::vector<int> arr{ 3,2,5,9,1,7,6,4,8 };
//
//	BubbleSort(arr);
//
//	for (int i : arr) std::cout << i << ' ';
//}

//#include <iostream>
//#include <vector>
//
//void BinaryInsertionSort(std::vector<int>& input)
//{
//	int size = input.size();
//
//	// 1. 가장 앞의 원소는 정렬이 완성되었다는 가정으로 두 번째 원소부터 정렬을 시도 한다.
//	for (int i = 1; i < size; i++)
//	{
//		int key = input[i];
//		// 2. 이진 탐색을 하기 위해 범위를 지정 한다.
//		int left{};
//		int right{ i - 1 };
//
//		while (left <= right)
//		{
//			// 3. 범위의 기준을 가운데로 지정한다.
//			int mid = (left + right) / 2;
//
//			// 4. Key 값과 비교하여 Key 값이 들어갈 자리를 찾는다.
//			if (input[mid] > key) right = mid - 1;
//			else left = mid + 1;
//		}
//		
//		// 5. 원소들을 뒤로 이동
//		for (int j = i - 1; j >= left; j--) input[j + 1] = input[j];
//
//		// 6. Key 값의 자리
//		input[left] = key;
//	}
//}
//
//int main()
//{
//	std::vector<int> arr{ 5,3,2,6,1,7,8,9,4 };
//
//	BinaryInsertionSort(arr);
//
//	for (int i : arr) std::cout << i << ' ';
//}

/* --- < NLogN > --- */

//#include <iostream>
//#include <vector>
//
//// 2. 작은 단계로 나누어진 배열을 정렬하며 합치는 함수
//void Merge(std::vector<int>& input, int left, int mid, int right)
//{
//	int i = left;	// 왼쪽 배열 인덱스
//	int j = mid + 1;	// 오른쪽 배열 인덱스
//	int k = left;	// 병합한 배열의 인덱스
//
//	std::vector<int> temp(input.size());
//
//	// 왼쪽 집합과 오른쪽 집합을 비교하여 작은( 큰 )값을 임시 배열에 저장
//	while (i <= mid && j <= right)
//	{
//		if (input[i] <= input[j])
//			temp[k++] = input[i++];
//		else
//			temp[k++] = input[j++];
//	}
//	// 남은 원소들을 임시 배열에 저장
//	while (i <= mid) temp[k++] = input[i++];
//	while (j <= right) temp[k++] = input[j++];
//
//	// 정렬된 배열을 기존 배열로 배정
//	for (int index = left; index <= right; index++)
//		input[index] = temp[index];
//}
//
//// 1. 배열을 반으로 나누는 함수
//void Devide(std::vector<int>& input, int left, int right)
//{
//	if (left >= right) return;
//
//	int mid = (left + right) / 2;
//
//	Devide(input, left, mid);
//	Devide(input, mid + 1, right);
//	Merge(input, left, mid, right);
//}
//
//int main()
//{
//	std::vector<int> arr{ 9,5,7,1,3,8,6,2,4 };
//	Devide(arr, 0, arr.size() - 1);
//	for (int i : arr) std::cout << i << ' ';
//}

//#include <iostream>
//#include <vector>
//
//// #. 배열을 분할하고 피벗의 위치를 반환하는 함수
//int Part(std::vector<int>& input, int low, int high)
//{
//	int pivot = input[high];	// 피벗은 배열의 마지막 원소를 갖는다.
//	int i = low - 1;	// 작은 값들을 저장하기 위한 인덱스 변수
//
//	for (int j = low; j < high; j++)
//	{
//		if (input[j] <= pivot) // 피벗보다 작거나 같다면
//		{
//			// i를 증가시키고 Swap하여 작은 값들은 왼쪽에 위치하게 한다.
//			i++;
//			std::swap(input[i], input[j]);
//		}
//	}
//	// 반복문 종료 후 피벗을 정렬된 위치로 이동
//	std::swap(input[i + 1], input[high]);
//
//	return i + 1;
//}
//
//// #. 배열을 재귀적으로 정렬하는 함수
//void QuickSort(std::vector<int>& input, int low, int high)
//{
//	// 배열의 크기가 1 이상인 경우에만 정렬을 수행한다.
//	if (low < high)
//	{
//		// 배열을 분할하고 피벗의 위치를 받는다.
//		int pivotIndex = Part(input, low, high);
//
//		// 재귀호출하며 왼쪽 부분, 오른쪽 부분을 각각 정렬
//		QuickSort(input, low, pivotIndex - 1);
//		QuickSort(input, pivotIndex + 1, high);
//	}
//}
//
//int main()
//{
//	std::vector<int> arr = { 9, 5, 7, 1, 3, 8, 6, 2, 4 };
//
//	QuickSort(arr, 0, arr.size() - 1);
//
//	for (int i : arr) std::cout << i << ' ';
//}

//#include <iostream>
//#include <vector>
//// #. 배열을 나누고 피벗의 위치를 반환하는 함수를 만든다.
//int Part(std::vector<int>& input, int low, int high)
//{
//	// 1. 전달 받은 배열 범위의 마지막을 pivot으로 지정하고 pivot 보다 작은 값의 인덱스를 저장할 변수가 필요하다.
//	int pivot = input[high];
//	int i = low - 1;
//
//	for (int j = low; j < high; j++)
//	{
//		// 2. 반복문을 통해 pivot 보다 작은 값들을 앞으로 이동 시킨다.
//		if (input[j] <= pivot)
//		{
//			i++;
//			std::swap(input[i], input[j]);
//		}
//	}
//	// 3. pivot을 정렬된 위치로 이동 시키고 피벗의 위치를 반환한다.
//	std::swap(input[i + 1], input[high]);
//	return i + 1;
//}
//// #. 배열을 재귀적으로 정렬하는 함수
//void QuickSort(std::vector<int>& input, int low, int high)
//{
//	if (low < high)
//	{
//		int pivotIndex = Part(input, low, high);
//
//		QuickSort(input, low, pivotIndex - 1);
//		QuickSort(input, pivotIndex + 1, high);
//	}
//}

//#include <iostream>
//#include <vector>
//
//void QuickSort(std::vector<int>& input, int low, int high)
//{
//	// Base_Case : 배열의 크기가 1 이상일 때만 정렬 로직을 실행
//	if (low < high)
//	{
//		// 1. 배열의 중간을 피벗으로 지정한다.
//		int pivotIndex = (low + high) / 2;
//		int pivotValue = input[pivotIndex];
//		// 2. 배열의 가장 앞, 뒤를 지정한다.
//		int i = low;
//		int j = high;
//
//		// 3. 배열의 앞과 뒤가 서로 뒤바뀌기 전까지 계속 반복
//		while (i <= j)
//		{
//			// 4. pivot을 중심으로 앞은 작은 값을 몰아 넣기 위해 pivot 보다 큰 값이 나올 때 까지 i를 증가 시킨다.
//			while (input[i] < pivotValue) i++;
//			// 5. pivot을 중심으로 뒤는 큰 값을 몰아 넣기 위해 pivot 보다 작은 값이 나올 때 까지 j를 감소 시킨다.
//			while (input[j] > pivotValue) j--;
//
//			// 6. 배열의 앞과 끝이 서로의 영역을 침범하지 않았을 경우
//			if (i <= j)
//			{
//				// 7. pivot보다 큰 i와 pivot보다 작은 j를 서로 교환 한다.
//				std::swap(input[i], input[j]);
//				i++;
//				j--;
//			}
//		}
//
//		QuickSort(input, low, j);
//		QuickSort(input, i, high);
//	}
//}