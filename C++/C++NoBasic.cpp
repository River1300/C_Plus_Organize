/* ----- < 자료구조 훈련 > ----- */
//
//
//
//
//
/* --- < 스택( Stack ) > --- */

/*
< 스택 > : LIFO( Last In First Out )의 특성을 가진 자료 구조다.
	#. push : 가장 상단에 값을 집어 넣는다.
	#. pop : 가장 상단의 값을 꺼내어 돌려준다.
*/

//#include <iostream>
//
//const int STACK_SIZE{ 10 };
//
//enum Command
//{
//	PUSH = 1, POP = 2
//};
//struct Stack
//{
//	int container[STACK_SIZE]{};
//	int topIndex{ -1 };
//// #. 스택이라는 특성 때문에 인덱스의 증가( + )그 다음에 값의 대입을 실행해야만 한다.
//// #. 인덱스를 0부터 시작할 경우 0의 자리가 비기 때문에 -1로 초기화 한다.
//};
//void PrintInfo()
//{
//	std::cout << "<STACK>" << std::endl;
//	std::cout << "[1] push" << std::endl;
//	std::cout << "[2] pop" << std::endl;
//	std::cout << "M--------AAA--------M" << std::endl;
//}
//void PrintStack(Stack& stack)
//{	// #. 스택에 저장된 값을 출력한다.
//	std::cout << "---- stack ----" << std::endl;
//	if (stack.topIndex < 0)
//	{	// topIndex가 -1일 경우 스택안은 비어있다.
//		std::cout << "----------------" << std::endl;
//		std::cout << "EMPTY" << std::endl;
//		return;
//	}
//	for (int i = stack.topIndex; i >= 0; i--)
//	{	// 위에서 부터 아래로 출력해 나간다.
//		std::cout << stack.container[i] << std::endl;
//	}	std::cout << "----------------" << std::endl;
//}
//void Push(Stack& stack, int value)
//{	// #. 스택에 원소를 쌓는다.
//	if (stack.topIndex >= STACK_SIZE - 1)
//	{
//		std::cout << "스택이 가득 찼습니다." << std::endl;
//		return;
//	}
//	stack.container[++stack.topIndex] = value;
//}
//void Pop(Stack& stack)
//{	// #. 스택에 쌓여있는 원소를 꺼낸다.
//	if (stack.topIndex < 0)
//	{
//		std::cout << "스택이 비어 있습니다." << std::endl;
//		return;
//	}
//	std::cout << stack.container[stack.topIndex--] << " is poped!" << std::endl;
//}
//void ProcessUserInput(Stack& stack)
//{
//	while (true)
//	{
//		int command{};
//		PrintStack(stack);
//		std::cout << std::endl;
//		std::cout << ">  ";
//		std::cin >> command;
//
//		switch (command)
//		{
//		case PUSH:
//			{
//				int value;
//				std::cout << "    value : ";
//				std::cin >> value;
//				Push(stack, value);
//				break;
//			}
//		case POP:
//			Pop(stack);
//			break;
//		default:
//			std::cout << "잘못된 명령어 입니다!" << std::endl;
//		}
//	}
//}
//
//int main()
//{
//	Stack myStack;
//	PrintInfo();
//	ProcessUserInput(myStack);
//}

/* --- < 큐( Queue ) > --- */

/*
< 큐 > : FIFO( First In First Out )의 특성을 가진 자료 구조다.
	#. enqueue(put, push) : 가장 하단에 값을 집어 넣는다.
	#. dequeue(get, pop) : 가장 상단의 값을 꺼내어 돌려 준다.
*/

//#include <iostream>
//
//const int QUEUE_SIZE{ 10 };
//
//enum Command
//{
//	ENQUEUE = 1, DEQUEUE = 2
//};
//struct Queue
//{	// #. 원형 큐를 만들기 위한 구조체 생성
//	int container[QUEUE_SIZE]{};
//	int head{};
//	int tail{};
//// #. head == tail은 큐가 비어 있다는 뜻
//// #. (tail+1)%배열 크기 == head는 배열이 가득 찼다는 뜻
//};
//void PrintInfo()
//{
//	std::cout << "<QUEUE>" << std::endl;
//	std::cout << "[1] enqueue" << std::endl;
//	std::cout << "[2] dequeue" << std::endl;
//}
//void PrintQueue(Queue& queue)
//{
//	std::cout << "---- queue ----" << std::endl;
//	if (queue.head == queue.tail)
//	{
//		std::cout << "----------------" << std::endl;
//		std::cout << "EMPTY" << std::endl;
//		return;
//	}
//	int i = queue.head;
//	while (i != queue.tail)
//	{	// #. 배열의 인덱스가 배열 크기를 넘어가지 못하게 한다.
//		i = (i + 1) % QUEUE_SIZE;
//		std::cout << queue.container[i] << " ";
//	}	std::cout << std::endl << "------------" << std::endl;
//}
//void Enqueue(Queue& queue, int value)
//{	// #. 큐에 원소를 저장한다.
//	if ((queue.tail + 1) % QUEUE_SIZE == queue.head)
//	{
//		std::cout << "큐가 가득 찼습니다!!!" << std::endl;
//		return;
//	}
//	queue.tail = (queue.tail + 1) % QUEUE_SIZE;
//	queue.container[queue.tail] = value;
//}
//void Dequeue(Queue& queue)
//{	// #. 큐에서 원소를 꺼내온다.
//	if (queue.head == queue.tail)
//	{
//		std::cout << "큐가 비었습니다!!!" << std::endl;
//		return;
//	}
//	queue.head = (queue.head + 1) % QUEUE_SIZE;
//	std::cout << queue.container[queue.head] << " dequeue." << std::endl;
//}
//void ProcessUserInput(Queue& queue)
//{
//	while (true)
//	{
//		int command{};
//		PrintQueue(queue);
//		std::cout << std::endl;
//		std::cout << ">  ";
//		std::cin >> command;
//		
//		switch (command)
//		{
//		case ENQUEUE:
//			{
//				int value;
//				std::cout << "   value : ";
//				std::cin >> value;
//				Enqueue(queue, value);
//				break;
//			}
//		case DEQUEUE:
//			Dequeue(queue);
//			break;
//		default:
//			std::cout << "잘못된 명령어 입니다." << std::endl;
//			return;
//		}
//	}
//}
//int main()
//{
//	Queue myQueue;
//
//	PrintInfo();
//	ProcessUserInput(myQueue);
//}

/* --- < 동적 자료구조( Dynamic Data Structure ) > --- */

/*
< 단일 연결 리스트( Single Linked List ) > : 일렬로 나열된 동적 자료구조로 한 방향으로만 연결
	#. 생성 : 새로운 원소를 할당해서 가장 뒤에 붙여 준다.
	#. 개수 : 처음부터 끝까지( 순회 : Traverse ) 원소를 세서 돌려주면 된다.
	#. 검색 : 순회하면서 동일한 원소를 찾아서 반환한다.
	#. 삭제 : 특정한 원소를 삭제하고 연결고리를 이어준다.
	#. 삽입 : 특정한 원소 뒤에 생성하고 연결고리를 이어준다.
	#. < 준비물 >
		=> head : 리스트의 시작
		=> tail : 리스트의 끝
		=> next : 다음 원소를 가리킴

< 이중 연결 리스트( Double Linked List ) > : 일렬로 나열된 자료구조로 양 방향으로 연결
*/

//#include <iostream>
//#include "SLL.h"
//#include "DLL.h"
//
//int main()
//{
//	SLL myList;
//
//	InputElement(myList, 10);
//	InputElement(myList, 20);
//	InputElement(myList, 30);
//
//	std::cout << CountElement(myList) << std::endl;
//	PrintElement(myList);
//
//	std::cout << std::endl << "-------------------------------------" << std::endl;
//
//	DeleteElement(myList, 30);
//
//	std::cout << CountElement(myList) << std::endl;
//	PrintElement(myList);
//
//	DeleteElement(myList);
//
//	DDL myList;
//
//	InputElement(myList, 10);
//	InputElement(myList, 20);
//	InputElement(myList, 30);
//
//	CountElement(myList);
//	PrintElement(myList);
//
//	std::cout << std::endl << "------------------------------" << std::endl;
//
//	DeleteElement(myList, 10);
//
//	CountElement(myList);
//	PrintElement(myList);
//
//	DeleteElement(myList);
//}

//#include <iostream>
//#include "Stack.h"
//
//void PrintInfo()
//{
//	std::cout << "-----STACK-----" << std::endl;
//	std::cout << "[1] push" << std::endl;
//	std::cout << "[2] pop" << std::endl;
//	std::cout << "[3] exit" << std::endl;
//	std::cout << "---------------" << std::endl;
//}
//void ProcessUserInput(Stack& stack)
//{
//	int command{};
//	while (true)
//	{
//		Print(stack);
//		std::cout << std::endl;
//		std::cout << ">  ";
//		std::cin >> command;
//
//		switch (command)
//		{
//		case PUSH:
//		{
//			int value;
//			std::cout << "   > ";
//			std::cin >> value;
//			Push(stack, value);
//			break;
//		}
//		case POP:
//			Pop(stack);
//			break;
//		case EXIT:
//			return;
//		default:
//			std::cout << "잘못된 입력입니다." << std::endl;
//			break;
//		}
//	}
//}
//
//int main()
//{
//	Stack myStack;
//
//	Initialize(myStack);
//
//	PrintInfo();
//	ProcessUserInput(myStack);
//	ClearAll(myStack);
//}

/* ----- < 객체 지향적 프로그래밍 > ----- */
//
//
//
//
//
/* --- < 절차적 프로그래밍( Procedural Programming ) > --- */

/*
< 절차적 프로그래밍 > : 프로그램의 기능을 함수단위를 바탕으로 작성하는 것
	#. 함수는 다른 말로 프로시져( Procedure )라고도 부른다.
*/



/* --- < 객체 지향 프로그래밍( Object Oriented Programming ) > --- */

/*
< 객체( Object ) > : 현실 생활을 둘러싼 대상을 하나의 객체라고 볼 수 있다.
	#. 상태( STATE )와 행동( BEHAVIOR )을 가지고 있다.
< 객체 지향 프로그래밍( OOP ) > : 현실 세계를 모델링 하듯이 프로그래밍을 하는 방법

< 클래스( Class ) > : 객체를 표현하기 위한 설계도, 또는 틀
	#. 클래스는 추상적인 정보라 할 수 있고, 클래스를 통해 생성된 객체가 구체적인 실체이다.

< 인스턴스화( Instantiate ) > : 추상적인 클래스에서 구체적인 객체를 생성하는 것
	#. 인스턴스( Instance ) : 인스턴스화를 통해 만들어진 객체
	#. 클래스는 단순한 청사진용도로 타입을 만드는 것 뿐이며, 실제 값은 메모리에 이름을 붙여 할당된 인스턴스( 객체 )가 들고 있다.
*/

/* < OOP의 특징 > */

/*
< 캡슐화( Encapsulation ) > : 내부에 무엇이 들어 있는지 모르게 하는 것
	#. 불필요한 정보를 노출시키지 않고 민감한 기능을 숨겨두는, 정보 은닉의 개념으로 사용되기도 한다.

< 상속( Inheritance ) > : 각 객체들은 상관관계를 가지고 있다.
	#. 고양이라는 클래스는 동물이라는 상위 클래스( 개념 )을 가지고 있다.
	#. 이러한 계층 구조를 상속( 파생 )이라 부른다.

< 다형성( Polymorphism ) > : 하나의 객체가 경우에 따라 다른 형태로 취급될 수 있다.
	#. 나비는 고양이 이면서 동시에 동물이다. 상황에 따라 나비라고 불리기도 하고 고양이라고 불리기도 하고, 동물이라고 불리기도 한다.
	#. 포인터를 통해 객체가 존재하는 메모리를 가리키기 때문에 다양하게 해석할 수 있다.
*/

//#include <iostream>
//
//class Dog {	// #. Dog라는 추상적인 설계도, 틀
//public:
//	std::string mKind;
//	int mAge;
//	std::string mColor;
//
//	void Bark();
//	void Rolling();
//};
//
//int main()
//{	// #. Dog설계도를 통해 만들어진 구체적인 실체 puppy
//	Dog puppy;
//
//	puppy.mKind = "골든 리트리버";
//	puppy.mAge = 3;
//	puppy.mColor = "금";
//}

//#include <iostream>
//
//class Animal {	// #. Animal이라는 상위 개념( Parent Class )
//public:
//	int mAge;
//	int mWeight;
//	int mHeight;
//
//	void Eat();
//	void Walk();
//	void Sleep();
//};
//class Dog : public Animal {	// #. Animal의 개념을 상속받은 Dog라는 하위 개념( Child Class )
//public:
//	std::string mKind;
//
//	void Bark();
//	void Rolling();
//};
//
//int main()
//{	// #. Dog클래스는 Animal클래스의 멤버를 사용할 수 있다.
//	Dog marry;
//	marry.mAge = 3;
//	marry.mKind = "도배르만";
//// #. marry의 인스턴스화가 진행되면 먼저 Dog클래스가 불린다.
//// #. Dog클래스는 자신의 멤버를 구성하기 위해 Animal클래스를 부른다.
//// #. Animal클래스가 먼저 메모리 공간에 구성되고 그 다음 Dog클래스가 메모리 공간에 구성된다.
//// #. 그러므로 marry이름표가 붙은 메모리 공간에는 Animal과 Dog의 멤버가 모두 구성되어 있다.
//}

//#include <iostream>
//
//class Animal {	// #. Animal이라는 상위 개념( Parent Class )
//public:
//	int mAge;
//	int mWeight;
//	int mHeight;
//
//	void Eat();
//	void Walk();
//	void Sleep();
//};
//class Dog : public Animal {	// #. Animal의 개념을 상속받은 Dog라는 하위 개념( Child Class )
//public:
//	std::string mKind;
//
//	void Bark();
//	void Rolling();
//};
//
//int main()
//{
//	Dog* happy = new Dog;
//	happy->mKind = "포메라니안";
//// #. happy가 가리키는 메모리 공간은 Dog와 Animal클래스의 멤버가 구성된 공간이다.
//// #. dragon이라는 포인터는 Animal타입이기 때문에 Animal클래스의 멤버만 가리키게된다.
//	Animal* dragon = happy;
//	dragon->Eat();
//
//	delete happy;
//}

/* < 기타 용어 > */

/*
< 생성자( Constructor ) > : 객체가 생성될 때 불리는 특수 함수
< 소멸자( Destructor ) > : 객체가 사라질 때 불리는 특수 함수

< 정적 멤버( Static Member ) > : 클래스를 인터스턴스화 해서 객체로 만들지 않아도 바로 클래스에서 바로 사용할 수 있다.
	#. 상태와 행동은 각 객체( 인스턴스 )의 고유한 값으로 만들어진다.
	#. Dog클래스로 'happy'를 객체화 하면 상태와 행동은 'happy'라는 객체에 종속된다.
	#. 이러한 특성과 반대되는 것이 정적 멤버로 static이라는 키워드가 붙는다.

< 추상 클래스( Abstract Class ) > : 추상적인 개념을 담고 있는 클래스로 스스로를 인스턴스화 할 수 없다.
	#. 추상 클래스를 인스턴스화 하려면 추상 클래스로부터 상속을 받아 자식 클래스에서 인스턴스화 해야 한다.
	#. 추상 클래스는 여러 자식 클래스에서 공유할 수 있는 공통적인 정의를 제공한다.
		#. 추상 클래스는 추상 상태와 추상 행동을 가질 수 있는데 이 추상 메서드는 구현이 없이 정의만 들어있다.
			#. 추상 클래스로부터 상속을 받은 자식 클래스는 무조건 이 추상 메서드를 구현해줘야 한다.

< 인터페이스( Interface ) > : 서로 다른 두 장치를 접속시켜주는 부분
	#. A사 키보드를 USB로 컴퓨터에 꼽으나 B사 키보드를 꼽으나 타이핑은 정상적으로 작동한다.
		#. 표준 입력 방식을 정해놓고 이를 각 키보드사가 규격을 지키도록 각각의 방식으로 설계한다.
			#. 이러한 규격을 인터페이스라고 하며 C++에서는 추상 클래스를 사용하여 설계한다.
		#. 인터페이스는 상태는 없고 행동만 있으며, 실제 행동을 구현하지는 않는다.
			#. 즉 빈 껍데기만 있으며 실제 구현은 상속받은 클래스에서 구현해 준다.

< 오버로딩( Overloading ) > : 하나의 행동을 매개변수만 다르게 지정하여 여러 개의 행동을 정의하는 것

< 오버라이딩( Overriding ) > : 부모 클래스의 행동을 자식 클래스에서 재정의 해서 부모 클래스의 행동을 무시한다는 뜻

< 연산자 오버로딩( Operator Overloading ) > : 피연산자를 서로 다르게 지정해서 각 개체에 맞는 연산자를 만든다는 뜻
*/

/* --- < POD( Plain Old Data ) > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| C언어에서 제공되는 타입들을 POD라고 부른다. 간단하고 오래된 데이터, 단순한 메모리 구조를	 |
| 가지는 객체를 말한다. POD의 장점은 원본 메모리에서 다른 메모리로 복사나 이동이 매우 쉬워서 |
| 컴퓨터 성능에 큰 부담이 없다는 것이다.													 |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< C++의 POD >
	#. Standard Layout Type( 표준 레이아웃 타입 ) : C언어와 같은 레이아웃
	#. Trivial Type( 간단한 타입 ) : 사용자가 정의한 매우 간단한 자료 구조
*/

//#include <iostream>
//// #. POD와 Trivial Type은 성능에 관련이 있다.
//class ClassA
//{
//// #. 그런데 사용자가 클래스에 생성자를 붙이면 Trivial Type이 아니게 된다.
//public:
//	ClassA() {}
//};
//class ClassB
//{
//public:
//	// #. POD가 되게 위해서는 ( = default )키워드로 암시적 기본 생성자를 명시해야한다.
//	ClassB() = default;
//};
//
//int main()
//{
//	std::cout << std::is_trivial<ClassA>::value << std::is_pod<ClassA>::value << std::endl;
//	std::cout << std::is_trivial<ClassB>::value << std::is_pod<ClassB>::value << std::endl;
//}

/* --- < 무명 객체( Anonymous Object ) > --- */

//#include <iostream>
//
//int Square(int x)
//{
//	return x * x;
//// $2. 일반 타입 역시 객체라고 한다면, x * x 를 담아 둘 수 있는 임시 객체가 필요하다.
//// $3. 예를 들어 int temp = x * x;  return temp;
//// $4. 컴파일러 내부에서는 이 작업이 이루어진다. 다만, 임시로 사용하는 객체로 해당 코드 이외에는 사용할 필요가 없으므로, 굳이 변수명을 붙이지 않고 사용한다.
//// $5. 이를 이름없는 객체( anonymous object )라고 부른다.
//}
//
//int main()
//{
//	int x{ 2 };
//// $1. < int x(1); > : 지금까지 사용한 일반 타입들( int, float... ) 역시 내부에서는 객체( x 라는 이름의 객체 )로 처리된다.
//
//	std::cout << Square(x) << std::endl;
//	// #1. Square(x)함수를 호출한다.
//	// #2. Square(x)에서 x가 리터럴 2로 치환된다. 이 과정에서 리터럴 2가 무명의 객체에 저장된다.
//	// #3. 무명의 객체에 저장된 2가 Square(int x)의 매개변수 x에 복사된다. 이 과정에서 [매개변수 x]와 [인자 x]는 서로 다른 객체로 분류된다.
//	// #4. x * x 를 무명의 객체에 저장한다.
//	// #5. 무명 객체를 반환하고 함수가 종료되며 무명 객체도 소멸된다. 
//}

//#include <iostream>
//
//int main()
//{
//	int x{ 2 };
//	int y{};
//
//	// 1. x + x를 리터럴 2 + 2로 치환한다.
//	// 2. 더한 값( 4 )를 무명 객체에 저장한다.
//	// 3. 무명 객체를 반환( 출력 )하고 해당 라인이 끝나면 소멸된다.
//	std::cout << x + x << std::endl << std::endl;
//
//	// 1. x + x를 리터럴 2 + 2로 치환한다.
//	// 2. 더한 값( 4 )를 무명 객체에 저장한다.
//	// 3. 무명 객체를 y에 대입하고 해당 라인이 끝나면 소멸된다.
//	y = x + x;
//}

//#include <iostream>
//
//// #2. 매개변수 x는 main의 x와 같다고 볼 수 있다.
//const int& Square(int& x)
//{
//	return x * x;
//// #3. x * x는 표현식으로 따로 저장할 객체를 지정해주지 않을 경우 무명의 객체에 자동적으로 저장된다.
//// #4. 즉 반환되는 값은 참조형으로 받은 매개변수 x와 관련 없는 객체다.
//// #5. 이 함수의 반환 타입은 참조형이다. 주소 값의 형태로 반환 한다는 말인데 이 주소 값이 함수가 종료되면 사라진다.
//// #6. 참조형은 무명의 객체를 받아들일 수 없기 때문에 const참조형을 반환해야 한다.
//}
//
//int main()
//{
//	int x = 2;
//	std::cout << Square(x) << std::endl;
//// #1. Square()함수를 호출하는데 인자로 보내지는 것은 x라는 객체의 주소 값이다.
//}

//#include <iostream>
//
//class MyClass
//{
//public:
//	int mValue;
//
//	MyClass(int value) : mValue{ value }
//	{
//		std::cout << "[ MyClass() ] : " << mValue << std::endl;
//	}
//
//// #. 매개변수 c는 참조형인데 참조형은 R_Value를 받지 못한다는 특성이 있다. 즉 무명의 객체를 받지 못한다.
//// #. 그러므로 매개변수 c를 상수 참조형으로 바꾸어준다.
//	MyClass operator+(const MyClass& c)
//	{	// mValue = c1, c.mValue = c2
//		// 반환값으로 MyClass타입의 무명 객체( 인스턴스 )가 생성되었다.
//		return MyClass{ mValue + c.mValue };
//	}
//};
//
//int Square(MyClass c)
//{
//	return c.mValue * c.mValue;
//}
//
//int main()
//{
//	MyClass c1{ 1 }, c2{ 2 };
//
//	std::cout << "------ * ------" << std::endl << std::endl;
//	std::cout << "       " << Square(c1 + c2) << std::endl;
//// #. c1이 연산자 함수를 호출하고 c2는 리터럴 2로 치환한 뒤 무명 객체에 저장하여 인자로 보낸다.
//
//	std::cout << "------ * ------" << std::endl << std::endl;
//	std::cout << "       " << (c1 + c2).mValue << std::endl;
//
//	std::cout << "------ * ------" << std::endl << std::endl;
//	MyClass c3{ c1 + c2 };
//}

/* ----- * ----- < 객체란? > ----- * ----- */

//#include <iostream>
//
//struct Animal {
//	char name[30];
//	int age;
//
//	int health;
//	int food;
//	int clean;
//};
//
//void play(Animal& a) {
//	std::cout << a.age;
//}
//
//int main()
//{
//// animal변수를 만들어서 이를 필요로 하는 함수들에게
//	Animal cat{ "ring", 2, 10, 10, 10 };
//	play(cat);
//// 이와 같이 전달해 주었습니다.
//// 그런데, 곰곰히 생각해 보면 play함수에 인자로 전달하는 것이 매우 불필해보입니다.
//// 마치 러시아식 유머 처럼 "Play가 Animal을 합니다!" 라고 볼 수 있는데,
//// 사실은 "Animal이 Play를 한다" 가 더 맞기 때문이지요.
//// 다시 말해서 Animal자체가 Play를 하는 것이지, Play가 Animal을 해주는 것이 아닙니다.
//}

//#include <iostream>
//// 만일 Animal 자체가 Play를 한다 라는 개념을 생각하게 된다면, 
//// 다음과 같이 생각할 수 있을 것입니다.
//class Animal {
//public:
//	void play() {
//		std::cout << "dog";
//	}
//};
//
//int main()
//{
//// 이렇게 하면 play함수에 animal을 인자로 주지 않아도 됩니다.
//// 왜냐하면 내가 play하는 것이기 때문에 내 정보는 이미 play함수가 다 알고 있기 때문입니다.
//// play함수는 나의 상태들, 예를 들어서 체력이나, 배고픔 정도나 피곤한 정도 등을 
//// 모두 알 수 있기 때문에 나에 대한 적절한 처리를 할 수 있게 되는 것입니다.
//	Animal cat;
//	cat.play();
//// 즉, animal은 자신의 상태를 알려주는 변수(variable)와, 자신이 하는 행동들(play,sleep등등)
//// 을 수행하는 함수(method)들로 이루어졌다고 볼 수 있습니다.
//}

/*
결과적으로 객체는 다음과 같이 정의됩니다.

객체란, 변수들과 참고 자료들로 이루어진 소프트웨어 덩어리 이다.
이 때 객체가 현실 세계에서의 존재하는 것들을 나타내기 위해서는
추상화(abstraction)라는 과정이 필요합니다.
컴퓨터 상에서 현실 세계를 100% 나타낼 수 없는 것이기 때문에,
적절하게 컴퓨터에서 처리할 수 있도록 바꾸는 것인데,

예를 들어서 핸드폰의 경우 '전화를 한다', '문자를 보낸다' 와 같은 것들은
'핸드폰이 하는 것' 이므로 함수로 추상화시킬 수 있고,

핸드폰의 상태를 나타내는 것들,
예를 들어서 자기 자신의 전화 번호나 배터리 잔량 같은 것은 변수로 추상화시킬 수 있습니다.

이와 같이 어떠한 객체는 자기 만의 정보를 나타내는 변수들과,
이를 가지고 어떠한 작업을 하는 함수들로 둘러싸고 있다고 보시면 됩니다.

참고로, 이러한 객체의 변수나 함수들을 보통 인스턴스 변수(instance variable)와
인스턴스 메소드(instance method)라고 부르게 되는데,
그냥 알고 계시는 변수와 함수와 동일한 것으로 생각하시면 됩니다.

누군가 인스턴스 메소드라고 하면"아 그냥 객체에 정의되어 있는 함수구나"라고 생각하시면 됩니다.
*/

//#include <iostream>
//// 외부에서 어떠한 객체의 인스턴스 변수의 값을 바꾸지 못하고 
//// 오직 객체의 인스턴스 함수를 통해서만 가능하다는 것이지요
//// (물론 항상 이렇게 극단적으로 불가능 한 것은 아니고 사실 사용자가 조절할 수 있습니다) 
//// 이를 단순히 코드로 표현한다면, 예컨대 Animal의 food를 바꾼다고 할 때
//class Animal {
//private:
//	int food{};
//
//public:
//	void increase_food(int a) {
//		food += a;
//	}
//};
//
//int main()
//{
//	Animal cat;
//	cat.food += 100;
//	cat.increase_food(100);
//// 이렇게 된다는 것입니다.
//// 일단 animal.food += 100; 자체는 외부에서 animal이라는 '객체'의 '인스턴스 변수'에
//// '직접'접근하는 것이기 때문에 불가능한 것이고, 
//// 아래의 animal.increase_food(100); 의 경우 animal객체의 '인스턴스 함수'를 통해서 
//// 값을 수정하는 것이기 때문에 가능한 것이지요.
//// 이와 같이 외부에서 직접 인스턴스 변수의 값을 바꿀 수 없고 
//// 항상 인스턴스 메소드를 통해서 간접적으로 조절하는 것을 
//// 캡슐화(Encapsulation)라고 부릅니다.
//}

/*
이 개념을 처음 들었을 때 이게 왜 필요하냐고 생각하시는 분들이 많습니다.

저도 캡슐화를 굳이 해야될 이유를 못찼었거든요.
그냥, animal.food += 100; 하나 animal.increase_food(100); 하나
거기서 거기이지 라는 생각을 말이죠.

일단 여기서는 캡슐화의 장점에 대해서는 나중에 설명하겠지만 간단하게 말하자면,
"객체가 내부적으로 어떻게 작동하는지 몰라도 사용할 줄 알게 된다"
라고 볼 수 있습니다.

예컨대 animal.increase_food(100); 을 하면
내부적으로 food변수 값이 100증가하는것 뿐만이 아니라
몸무게도 바뀔 수 있고, 행복도도 올라갈 수 있고 등등 여러가지 작업들이 일어나겠지요.

만일 increase_food함수를 사용하지 않았다면 여러가지 처리를 프로그래머가 직접 해주어야 합니다.
*/