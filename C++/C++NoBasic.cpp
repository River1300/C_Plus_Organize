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

/* ----- < 클래스 기본기 > ----- */
//
//
//
//
//
/* --- < 클래스의 정의 > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 클래스의 크기는 구조체와 마찬가지로 멤버에 따라 변한다. 하지만 클래스의 크기에 멤버 함수 |
| 는 영향을 주지 않는다. 멤버 함수는 시그니쳐 정보로 개별 처리되어 다른 함수들과 함께 특정 |
| 공간( 함수 테이블, function table )에 일괄 저장된다.									   |
| 멤버 함수를 제외하면 거의 구조체와 비슷한 형태로 보이는데, 사실 구조체는 모든 멤버가     |
| public인 클래스의 일부분이라고 보아도 무방하다.										   |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< 구조체 > : 멤버 변수들만 존재하는 자료구조
< 클래스 > : 멤버 함수가 필요한 자료구조

< 멤버 함수의 정의 > : 반환형 클래스이름::함수명(매개 변수 목록) { return 반환값; }
	#. 접근 제한자는 멤버 함수의 선언에 이미 존재하므로 정의에는 생략한다.

< 범위 해결 연산자 > : '클래스이름::함수명'형태로 멤버 함수의 소속 클래스를 명시한다.
	#. 이러한 '::'을 범위 해결 연산자( scope resolution operator )라 한다.

< 멤버 함수의 선언 순서 > : 컴파일러는 위에서 부터 아래로 컴파일을 진행한다.
	#. 전역 함수의 경우 전방 선언을 통해서 함수들 간의 호출 순환을 해결한다.
	#. 그러나 하나의 클래스에 묶인 멤버 함수들은 이러한 제약이 없다.
	#. 클래스의 선언은 모든 내용이 마무리되는 ';'을 만나는 순간 이뤄진다.
	#. 그러므로 멤버 함수들은 그 존재를 서로 알고 있다.

< this 키워드 > : 멤버 함수를 호출한 인스턴스( 객체 )가 암시적으로 멤버 함수 안에 있다.
	#. 멤버 함수는 오직 해당 클래스의 인스턴스만이 호출할 수 있다.
	#. 때문에 멤버 함수는 항상 어떤 객체에서 호출된 것인지 알고있다.
*/

/* --- < 접근 제한자( Access Modifiers ) > --- */

/*
< public > : 클래스 내부/외부에서 모두 사용이 가능
	#. 멤버함수는 물론이고, 객체로 만든 후 객체를 통해서도 읽고/쓸 수 있다.

< protected > : 자신과 자신을 기반으로 하는 파생 클래스에서 사용이 가능
	#. 자신의 멤버 함수 및 파생된 멤버 함수에서 읽고/쓸 수 있다.

< private > : 클래스 내부에서만 사용이 가능
	#. 기본 값으로, 접근 제한자를 생략하면 private이다.
	#. 멤버 함수에서만 해당 변수를 읽고/쓸 수 있다.
*/

/* --- < 상수( Const ) 멤버 함수 > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| const 멤버 함수는 Getter/Setter라 불리는 특수한 형태의 멤버 함수 사용에 매우 유용하다.   |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< 속성( Property ) > : 한 객체에 대해 어떤 객체를 주고 받을 수 있는 행위
	#. 상태가 아닌 행동에 중점을 두고 있다.
	#. 멤버 변수를 직접 접근하는 것을 막고 멤버 함수로 접근하게 하려는 것이 목적이다.

< const 변수 > : 값을 변경할 수 없는 상수 변수로 리터럴로 사용할 때 주로 사용된다.
	#. 이때 상수는 다른 변수와 구분하기 위해 전체 대문자로 명시한다.
		=> const int NAME_LENGTH = 16;

< const 매개 변수 > : 함수 내부에서 매개 변수의 값을 변경하지 않는다는 의미다.
	#. Call By Value에서는 복사가 일어나므로 큰 의미는 없다.
	#. Call By Reference와 같이 매개 변수가 변경될 가능성이 있는 곳에서 사용한다.
		=> void PrintInfo(const Stack& stack);

< const 반환형 함수 > : 반환 값을 변경할 수 없다는 사실을 명확하게 표현할 때 사용한다.
	#. 반환형이 참조형일 때 사용한다.

< const 멤버 함수 > : 멤버 함수 내부에서 클래스의 값( 멤버 변수 )을 수정하지 않는다는 의미
*/

//#include <iostream>
//
//class Calendar {
//private:
//	int mMonth;
//
//public:
//	void SetMonth(std::string month) {
//		// 문자열을 판단해서 mMonth에 값을 지정
//	}
//	std::string GetMonth() const {
//		// mMonth에 따라 문자열 반환
//	}
//// #. 내부에서는 연산을 위해 월( mMonth )을 정수로 관리하겠지만
//// #. 실제 사용자가 달력을 볼때는 January와 같이 문자열을 보게 된다.
//};

//#include <iostream>
//// 자 그러면 객체는 C++상에서 어떻게 만들어낼까요.
//// 이를 위해 C++에서 객체를 만들 수 있는 장치를 준비하였습니다.
//// 쉽게 말하면 객체의 '설계도'라고 볼 수 있지요.
//// 바로 클래스(class)입니다.
//class Animal {
//private:
//	int food;
//	int weight;
//
//public:
//	void set_animal(int _food, int _weight) {
//		food = _food;
//		weight = _weight;
//	}
//	void increase_food(int inc) {
//		food += inc;
//		weight += (inc / 3);
//	}
//	void view_stat() {
//		std::cout << "이 동물의 food : " << food << std::endl;
//		std::cout << "이 동물의 weight : " << weight << std::endl;
//	}
//};
//// 우리는 이 객체의 설계도를 통해서 실제 객체를 만들게 되지요.
//// C++에서 이와 같이 클래스를 이용해서 만들어진 객체를 인스턴스(instance)라고 부릅니다.
//// 앞서 객체의 변수와 메소드를 왜 인스턴스 변수와 인스턴스 메소드라고 했는지 아시겠죠?
//int main()
//{
//// 먼저 main함수에서 Animal클래스의 인스턴스를 어떻게 생성하였는지 살펴 봅시다.
//// 기존의 구조체에서 구조체 변수를 생성할 때와 동일한데, 
//// 그냥 int나 char처럼 Animal이라고 써주면 됩니다.
//// 이와 같이 Animal cat; 을 했으면 Animal클래스의 인스턴스 cat을 만들게 된 것이지요.
//// 이제 본격적으로 클래스가 어떻게 되어 있는지 살펴봅시다.
//	Animal cat;
//	cat.set_animal(100, 50);
//	cat.increase_food(30);
//
//	cat.view_stat();
//// 위는 Animal이라는 클래스를 나타낸 것으로 Animal클래스를 통해서 생성될 
//// 임의의 객체에 대한 설계도라고 볼 수 있습니다.
//// 즉, Animal클래스를 통해서 생성될 객체는 food, weight라는 변수가 있고, 
//// set_animal, increase_food, view_stat이라는 함수들이 있는데, Animal클래스 상에서 
//// 이들을 지칭할 때 각각 멤버 변수(member variable)와 멤버 함수(member function)라고 부릅니다.
//}

/*
인스턴스로 생성된 객체에서는 인스턴스 변수, 인스턴스 함수,
그리고 그냥 클래스 상에서는 멤버 변수, 멤버 함수라고 부르는 것입니다.

멤버 변수와 멤버 함수는 실재 하는 것이 아니지요.
인스턴스가 만들어져야 비로소 세상에 나타나는 것입니다.
즉, 설계도 상에 있다고 해서 아파트가 실제로 존재하는 것이 아닌 것 처럼 말이지요.

private 처음 보는 키워드가 있지요?

이러한 키워드를 '접근 지시자'라고 하는데,
외부에서 이러한 멤버들에 접근을 할 수 있냐 없냐를 지시해주는 것입니다.
private 키워드의 경우, 아래에 쓰여진 것들은 모두 객체 내에서 보호되고 있다 라는 의미이지요.

즉, 멤버 변수들이 안에서 보호 받고 있던 것 기억하시죠?
private되고 있는 모든 것들은 자기 객체 안에서만 접근할 수 있을 뿐
객체 외부에서는 접근할 수 없게 됩니다.

반면에 public 키워드의 경우,
멤버 함수들을 public으로 지정하였습니다.
public이라는 것은 말 그대로 공개된 것으로 외부에서 마음껏 이용할 수 있게 됩니다.
그래서 main함수에서도 이들을 마음껏 접근할 수 있었습니다.
만일 멤버 함수들을 private 로 설정해버렸다면 어떨까요. public 키워드를 지워봅시다.
오류가 3개 정도 등장하게 됩니다.
다시 말해, Animal의 private멤버 함수에 접근할 수 없다는 의미겠지요.
결과적으로 외부에서 접근을 할 수 없는 객체는 그냥 아무짝에도 쓸모 없는 덩어리로 남게 됩니다.
*/

/* --- < 생성자와 소멸자 > --- */

/*
< 선언과 정의 > : 변수나 함수를 생성할 때 선언과 정의가 필요하다.
	#. 이때 일반 타입의 변수는 기본값으로 초기화하거나 간단하게 초기값을 지정할 수 있다.
		#. < 선언( int x; ) > : 타입과 객체이름을 메모리 공간에 지정해 준다.
		#. < 정의( x = 2; ) > : 이름표가 붙은 메모리 공간에 값을 집어 넣어준다.
		#. < 초기화( int x = 2; ) > : 선언과 정의의 기능을 한 번에 실행 한다.
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 클래스 객체는 어떻게 초기화할 수 있나? 멤버가 여러 개가 존재하므로 단일 표현식으로는 처리가 |
| 어렵다. 특히나 동적 객체들을 멤버로 가지고 있다면 메모리 할당에 대한 복잡한 기능이 추가되어 |
| 야 하므로 일반 타입과 같은 정의나 초기화가 불가능 하다.									  |
| C++의 클래스는 이러한 상황을 위해 생성자( Constructor )와 소멸자( Destructor )라는 개념이   |
| 추가되었다.																				  |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< 생성자 > : 클래스의 객체가 인스턴스화될 때 자동적으로 호출되는 특별한 멤버 함수
	#. 생성자는 클래스의 유효한 인스턴스를 생성하는 것을 담당하는데, 멤버들을 적절히 초기화하는 것을 책임진다.
< 소멸자 > : 클래스 객체가 소멸될 때 객체가 사용하던 자료를 지우는 것을 담당하는 특별한 멤버 함수
*/

//#include <iostream>
//
//class MyClass {
//// #2. 인스턴스를 만들기 위해 MyClass클래스의 멤버를 구성한다.
//public:
//// #3. RAM에 MyClass타입의 공간을 할당하고, 해당 공간에 생성자를 호출한다.
//	MyClass() { std::cout << "[생성자] : MyClass" << std::endl; }
//// #6. MyClass클래스의 인스턴스가 소멸되면서 소멸자가 호출된다.
//	~MyClass() { std::cout << "[소멸자] : ~MyClass" << std::endl; }
//};
//
//int main()
//{
//	{
//// #1. MyClass클래스의 인스턴스화를 진행한다.
//// #4. 생성자가 호출된 MyClass타입의 공간에 c라는 이름표를 붙여 인스턴스를 만든다.
//		MyClass c;
//		std::cout << "--* 1 *--" << std::endl;
//	}
//// #5. {}블럭이 끝나면 지역 변수로 만든 c가 소멸된다.
//	std::cout << "--* 2 *--" << std::endl;
//}

//#include <iostream>
//
//class MyClass
//{
//public:
//	int mValue;
//// #2. 다만 사용자가 입력한 생성자가 있을 경우 유니폼 초기화는 무시되고 생성자가 호출된다.
//};
//
//int main()
//{
//	MyClass c{};
//	std::cout << c.mValue;
//// #1. public 공간에 멤버변수가 있을 경우 유니폼 초기화를 할 수 있다.
//}

//#include <iostream>
//
//// #4. 인스턴스를 만들기 위해 Knight클래스의 멤버를 구성한다.
//class Knight
//{
//public:
//// #5. RAM에 Kinght클래스 멤버가 구성되고 생성자가 호출된다.
//	Knight() { std::cout << "기사가 파티에 합류하였다." << std::endl; }
//
//	void Nothing() {}
//};
//
//// #2. 인스턴스를 만들기 위해 Party클래스의 멤버를 구성한다.
//class Party
//{
//private:
//// #3. Knight타입의 인스턴스화를 진행한다.
//	Knight mUltraMarine;
//// #6. 생성자가 호출된 메모리 공간에 mUltraMarine이라는 이름표를 붙인다.
//
//public:
//// #7. RAM에 Party클래스 멤버가 구성되고 생성자가 호출된다.
//	Party(){ std::cout << "마왕토벌 파티가 결성되었다!!!" << std::endl; }
//};
//
//int main()
//{
//// #1. Party 타입의 인스턴스화를 진행한다.
//	Party Hero;
//// #8. 생성자가 호출된 메모리 공간에 Hero라는 이름표를 붙인다.
//}

//#include <iostream>
//
//class ClassA {
//public:
//	ClassA() { std::cout << "A" << std::endl; }
//
//public:
//	class ClassB {
//	public:
//		ClassB() { std::cout << "B" << std::endl; }
//	};
//
//public:
//	//ClassA::ClassB one;
//};
//
//int main()
//{
//	ClassA a;
//	std::cout << std::endl << std::endl;
//	ClassA::ClassB b;
//	std::cout << std::endl << std::endl;
//}

//#include <iostream>
//
//class MyArray {
//private:
//	int mLength;
//	int* mArray;
//
//public:
//	MyArray(int length)
//	{
//		mLength = length;
//		mArray = new int[length] {};
//	}
//	~MyArray() { delete[] mArray; }
//};
//
//int main()
//{
//	MyArray array{ 10 };
//// #. MyArray타입으로 인스턴스를 생성하면 자동으로 배열 형태의 메모리 공간이 동적 할당된다.
//// #. {}블럭이 끝나고 지역 변수인 array가 소멸되면 소멸자가 자동으로 호출되어 동적 해제한다.
//}

/* < 기본 생성자( Default Constructor ) > */

//#include <iostream>
//
//class MyClass {
//private:
//	int mValue;
//	std::string mName;
//
//public:
//	MyClass() {	// #. 매개 변수가 없는 생성자의 형태로 멤버들을 기본값으로 초기화한다.
//		mValue = 0;
//		mName = "UnNamed";
//	}
//};
//
//int main()
//{
//	MyClass c;
//}

/* < 암시적 기본 생성자 > */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 프로그래머가 생성자를 제공하지 않으면 C++컴파일러는 자동적으로 암시적 기본 생성자를 만 |
| 들어 준다. 암시적 기본 생성자는 코드의 편의를 위해 제공하는 기능이기 때문에 멤버 초기화|
| 는 전혀 하지 않는다. 그저 텅 비어 있는 함수이다.										 |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
*/

//#include <iostream>		// < Title : POD >
//
//class MyClass {
//private:
//	int mValue;
//
//public:
//	MyClass(int a) { mValue = a; }
//// #. 프로그래머가 임의의 생성자를 생성하였기 때문에 암시적 기본 생성자는 사라진 상태다.
//};
//
//int main()
//{
//	MyClass c;
//// #. 때에 따라 암시적 기본 생성자와 같이 아무것도 하지 않는 기본 생성자가 필요한 경우가 있다.
//// #. 그럴때  '= default;'를 통해 명시적으로 POD형태의 기본 생성자를 만들 수 있다.
//}

//#include <iostreaM>
//// 생성자는 기본적으로 "객체 생성시 자동으로 호출되는 함수"라고 볼 수 있습니다.
//// 이 때 자동으로 호출 되면서 객체를 초기화 해주는 역할을 담당하게 됩니다.
//// 생성자는 아래와 같이 정의합니다.
//class MyClass
//{
//private:
//	int mValue;
//
//public:
//	MyClass() : mValue{ 0 } {}
//// 이렇게 정의가 된 생성자는 객체를 생성할 때 다음과 같이 위 함수에서
//// 정의한 인자에 맞게마치 함수를 호출하듯이 써준다면 위 생성자를 호출하며 
//// 객체를 생성할 수 있게 됩니다.
//};

/*
디폴트 생성자는 인자를 하나도 가지지 않는 생성자인데,
클래스에서 사용자가 어떠한 생성자도 명시적으로 정의하지 않았을 경우에
컴파일러가 자동으로 추가해주는 생성자입니다.
*/

//#include <iostream>
//// 앞서 함수의 오버로딩에 대해 잠깐 짚고 넘어갔는데, 
//// 생성자 역시 함수이기 때문에 마찬가지로 함수의 오버로딩이 적용될 수 있습니다.
//// 쉽게 말해 해당 클래스의 객체를 여러가지 방식으로 생성할 수 있게 되겠지요.
//class MyClass
//{
//private:
//	int mNumber;
//	char mWord;
//
//public:
//	MyClass() = default;
//	MyClass(int num, char word) : mNumber{ num }, mWord{ word }{}
//	MyClass(std::string a)
//	{
//		std::cout << a << std::endl;
//	}
//};
//int main()
//{
//	MyClass a;
//	MyClass b(10, 'b');
//	MyClass c("Element");
//}

/* --- < 초기화 > --- */

/*
< 복사 초기화( Copy Initialization ) > : int a = 2;
	#. 리터럴 2가 무명의 int타입 객체에 저장되고 배정문을 통해 값이 대입되는 방식
	#. 컴파일러는 이 과정을 자동으로 간소화 해주는데 2가 저장된 무명 객체에 a라는 이름을 붙여 버린다.

< 직접 초기화( Direct Initialization ) > : int a ( 2 );
	#. int, float, char등의 타입에는 이미 내부적으로 생성자가 존재한다.
	#. 함수 형태로 초기화를 수행하는 것으로 생성자가 호출되어 값을 초기화 한다.

< 유니폼 초기화( Uniform Initialization ) > : int a { 2 };
	#. 복사/직접 초기화는 일부 타입에서만 작동하는 초기화 방식이다.
	#. C++에서는 모든 객체에 동일하게 작동하는 단일한 방법인 유니폼 초기화라는 개념이 있다.
	#. 어떤 객체든 초기화 시킬 수 있으며 형변환이 허용되지 않기 때문에 안전하고 빠르다.

< 유니폼 복사 초기화( Uniform Copy Initialization ) > : int a = { 2 };
	#. 리터럴 2를 무명의 int타입 객체에 유니폼 초기화를 하고 배정문을 통해 값을 대입한다.
*/

/* < 클래스 초기화 > */

/*
< 복사 초기화( Copy Initialization ) > : MyClass c = MyClass();
	#. 무명의 객체를 기본 생성자로 만들고 배정문을 통해 멤버를 대입한다.

< 직접 초기화( Direct Initialization ) > : MyClass c(2, 1.0f);
	#. 객체가 생성자를 직접 호출하여 초기화 한다.

< 유니폼 초기화( Uniform Initialization ) > : MyClass c{2, 1.0f};
	#. public 변수들을 초기화 한다.
	#. 만약 동일한 타입의 매개 변수를 받는 생성자가 있다면 생성자가 호출된다.

< 유니폼 복사 초기화( Uniform Copy Initialization ) > : MyClass c = {2, 1.0f};
	#. 무명의 객체를 유니폼 초기화로 만들고 배정문을 통해 멤버를 대입한다.
*/

/* --- < 대리 생성자( Delegating Constructor ) > --- */

//#include <iostream>
//
//class MyClass
//{
//private:
//	int mOne;
//	int mTwo;
//
//public:
//// #. 기본 생성자가 매개 변수를 받는 임의의 생성자를 호출한다.
//// #. 생성자가 다른 생성자를 호출하는 것을 생성자 위임이라고 한다.
//	MyClass() : MyClass(1, 2){}
//	MyClass(int a, int b) : mOne{ a }, mTwo{ b }{}
//// #. 클래스의 멤버를 초기화 한다.
//// ( : )생성자의 초기화 식은 생성자의 블럭{}보다 먼저 실행 된다.
//};
//
//int main()
//{
//	MyClass c;
//// #. 매개 변수를 받지 않는 기본 생성자를 호출한다.
//}

/* < 기본 생성자( Default Constructor ) > */

//#include <iostream>
//
//class MyClass
//{
//private:
//	int mValue;
//
//public:	
//	MyClass() : mValue{ 1 } {}
//// #. 클래스명() : 멤버 변수{ 값 } {}
//// #. 유니폼 초기화식을 이용하여 기본 생성자에서 멤버변수를 초기화 할 수 있다.
//};
//
//int main()
//{
//// #. 인스턴스를 만들때 전달하는 인자가 없다면 기본 생성자가 호출된다.
//	MyClass c1;
//}

/* < 대리 생성자( Delegating Constructor ) > */

//#include <iostream>
//
//class MyClass
//{
//private:
//	int mValue;
//
//public:
//// #. 생성자는 클래스를 만들 때 값을 초기화하거나 특정 작업을 수행하는 것이다.
//// #. 생성자는 특별한 함수로 해당 클래스의 정보로 무명의 객체를 만들어 반환하는 것이 목적이다.
//	MyClass() : mValue{ 1 }
//	{
//		std::cout << "다양한 매개변수를 갖는 생성자를 만든다고 해도 수행하는 작업은 동일하다." << std::endl;
//	}
//
//// #. 동일한 기능을 사용하는 경우, 중복 코드를 방지하기 위해 대리 생성자를 사용하는 것이 좋다.
//	MyClass(std::string name) : MyClass()
//	{
//		std::cout << "main 함수에서 MyClass 타입의 객체를 생성한다." << name << std::endl;
//	}
//};
//
//int main()
//{	// #1. MyClass 타입의 인스턴스화가 진행된다.
//	// #2. 문자열을 매개변수로 받는 임의 생성자가 호출된다.
//	// #3. 임의 생성자의 초기화식이 실행되며 기본 생성자가 호출된다.
//	// #4. 기본 생성자의 초기화식이 실행되며 mValue 의 값이 초기화된다.
//	// #5. 기본 생성자의 {} 블록안의 내용이 실행되고 함수가 반환된다.
//	// #6. 임의 생성자의 {} 블록안의 내용이 실행되고 함수가 반환된다.
//	// #7. 메모리 공간에 클래스 타입의 무명 객체가 생성되고 이 곳에 c1 이라는 이름표를 붙인다.
//	MyClass c("River");
//}

/* < 복사 생성자( Copy Constructor ) > */

//#include <iostream>
//
//class MyClass
//{
//private:
//	int mValue;
//
//public:
//	MyClass(int value) : mValue{ value }
//	{
//		std::cout << "일반적이기 짝이 없는 일반 생성자가 호출되었다..." << std::endl;
//	}
//	MyClass(const MyClass& from)
//	{
//		mValue = from.mValue;
//		std::cout << "허걱! 복사 생성자가 호출됬따!!!!!" << std::endl;
//	}
//};
//
//int main()
//{	// #1. MyClass타입의 인스턴스화가 진행된다.
//	// #2. 매개 변수 MyClass{1}을 전달하기 위해 MyClass{1}의 인스턴스화를 진행한다.
//	// #3. 기본 생성자가 호출되고 MyClass{1}의 멤버가 구성되며 무명의 객체가 생성된다.
//	// #4. 무명의 객체가 매개변수로 전달되고 복사 생성자가 호출된다.
//	MyClass c1{ MyClass{1} };
//	std::cout << "----- * ----- * ----- * ----- * ----- * ----- * -----" << std::endl;
//
//	// #1. MyClass타입의 인스턴스화가 진행된다.
//	// #2. 매개 변수 c1을 전달하여 c1의 내용을 그대로 복사하여 c2의 멤버에 대입한다.
//	MyClass c2{ c1 };
//}

/* --- < 상수 클래스( Const Class ) > --- */

/*
< const MyClass c; > : 기본 생성자로 초기화한 상수 객체
< const MyClass c( 2, 2 ); > : 매개 변수 2개인 생성자로 초기화한 상수 객체
< const MyClass c{ 3, 3 }; > : 유니폼 초기화를 사용한 상수 객체
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 클래스 역시 타입으로 생성되는 객체이므로 상수 객체를 만들 수 있다. 클래스 타입으로 만들 |
| 어진 객체를 상수형태로 만들 수 있다. 상수형 객체는 멤버의 값을 바꿀 수 없다.			  |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
*/

//#include <iostream>
//
//class MyClass {
//public:
//	int mOne;
//	int mTwo;
//
//public:
//	MyClass(int a, int b) : mOne{ a }, mTwo{ b }{}
//
//	void SetNumber(int x)
//	{
//		mOne = mTwo = x;
//	}
//
//	void DoNothing() {}
//// #. DoNothing()함수는 클래스의 멤버 변수 값을 바꾸지 않는 함수이다.
//// #. 그러나 인스턴스가 함수를 호출할 수 없고, 호출할 경우 에러가 발생한다.
//// #. 함수 본체는 언제든 프로그래머가 수정할 수 있기 때문에 위험을 미리 막아놓는다.
//
//	void RealyDoNothing() const {}
//// #. 멤버 함수를 상수로 지정할 경우 상수 클래스 객체가 호출할 수 있다.
//};
//
//int main()
//{
//	const MyClass c(0, 0);
//	c.RealyDoNothing();
//}

/* --- < 정적 멤버( static member ) > --- */

/*
< 정적 멤버 > : 같은 클래스로 만들어진 모든 인스턴스 객체에 걸쳐 단 하나만 존재하는 값
	#. 인스턴스가 아닌 클래스에만 존재한다고 해서 '클래스 변수( class variable )라고도 한다.
	#. 정적 멤버 변수는 다른 멤버 변수와 다르게 반드시 외부에 변수를 다시 정의해야 한다.
*/

//#include <iostream>
//
//class MyClass
//{
//public:
//// #. 인스턴스는 생성될 때마다 멤버들이 새로 구성된다.
//// #. static은 그럴 수 없기 때문에 static멤버변수는 인스턴스가 아닌 클래스가 소유한다.
//	static int mValue;
//
//	MyClass() { mValue++; }
//	~MyClass() { mValue--; }
//};
//// #. static멤버변수는 클래스 소유이기 때문에 클래스 외부에서 멤버 변수를 따로 정의해 줘야한다.
//int MyClass::mValue{ 1 };
//
//int main()
//{
//	MyClass c1;
//	{
//		MyClass c2;
//		MyClass c3;
//		std::cout << MyClass::mValue << std::endl;
//	}
//	std::cout << MyClass::mValue << std::endl;
//}

//#include <iostream>
//
//class MyClass
//{
//public:
//// #. MyClass소유의 static멤버 변수 선언
//	static int mValue1;
//	// 인스턴스 소유의 멤버 변수 선언
//	int mValue2;
//
//public:
//// #. MyClass소유의 static멤버 함수 선언
//	static void DoSomething();
//};
//
//// #. 클래스 외부에서 static멤버 변수, 멤버 함수 정의
//int MyClass::mValue1{ 0 };
//
//void MyClass::DoSomething()
//{
//	std::cout << mValue1;
//// #. 인스턴스 소유의 멤버함수는 매개체인 this가 암시적으로 존재하였다.
//// #. MyClass소유의 static멤버 함수는 this가 없다.
//}
//
//int main()
//{
//	MyClass c1;
//
//	MyClass::mValue1 = 1;
//	MyClass::DoSomething();
//// #. static멤버 변수/함수는 클래스에 종속되어 있다는 것을 범위 해결 연산자로 표기해주어야 한다.
//}

/* --- < 친구( Friend ) > --- */

/*
< 친구 > : 내가 너를 친구라고 지정하면 너는 내 모든 것을 알 수 있다.
	#. 친구로 지정된 클래스/함수는 private, protected멤버에 접근할 수 있다.
	#. 친구관계는 일방향성 관계이다.
		=> A가 B를 친구로 지정하면 B는 A의 모든 것을 알 수 있다.
		=> 그러나 A는 B의 모든 것을 알 수 없다.
*/

//#include <iostream>
//
//class Sword
//{
//	friend class Warrior;
//// #1. Warrior클래스를 friend로 지정하여 본인의 모든 정보를 Warrior에게 공개한다.
//
//private:
//	int mAttackDamage;
//
//public:
//	Sword(int damage) : mAttackDamage{ damage } {}
//};
//class Warrior
//{
//public:
//	void AttackWith(Sword& sword)
//	{
//		std::cout << "칼을 휘둘러 " << sword.mAttackDamage << "만큼 피해를 주었다!!!" << std::endl;
//// #2. mAttackDamage는 Sword클래스의 private멤버 변수지만 friend로 지정되었기 때문에 Warrior클래스에서 사용할 수 있다.
//	}
//};
//
//int main()
//{
//	Sword shortSword{ 10 };
//	Warrior w;
//// #3. Sword클래스가 friend로 Warrior을 지정한 것은 Warrior클래스 그 자체에게 정보를 공개한 것이 아니다.
//// #4. Warrior타입으로 생성된 인스턴스( 객체 )에게 공개한 것이다.
//
//	w.AttackWith(shortSword);
//// #5. 인스턴스 w는 멤버 함수를 통해 Sword클래스의 private정보를 출력한다.
//}

//#include <iostream>
//
//class Sword
//{
//private:
//	int mAttackDamage;
//
//public:
//	Sword(int damage) : mAttackDamage{ damage } {}
//	friend void DamageBuff(Sword& sword);
//// #1. 전역함수 DamageBuff() 함수에게 Sword클래스의 모든 정보를 공개한다.
//};
//void DamageBuff(Sword& sword)
//{
//	int oldDamage = sword.mAttackDamage;
//	sword.mAttackDamage = oldDamage * 2;
//	std::cout << "검을 강화했다. " << oldDamage << "=>" << sword.mAttackDamage << std::endl;
//// #2. mAttackDamage는 private멤버 변수지만 friend로 지정되었기 때문에 사용할 수 있다.
//}
//
//int main()
//{
//	Sword ShortSword(10);
//	DamageBuff(ShortSword);
//}

//#include <iostream>
//
//class Sword;
//// #3. 클래스를 전방 선언해준다.
//
//class Warrior
//{
//public:
//	void AttackWith(Sword& sword);
//// #2. 멤버 함수를 전방 선언해준다.
//};
//class Sword
//{
//private:
//	int mAttackDamage;
//
//public:
//	Sword(int damage) : mAttackDamage{ damage } {}
//	friend void Warrior::AttackWith(Sword& sword);
//// #1. 정보를 공개할 클래스를 정보를 받을 멤버 함수보다 아래에 선언한다.
//};
//void Warrior::AttackWith(Sword& sword)
//{
//	std::cout << "칼을 휘둘러 " << sword.mAttackDamage << "만큼 피해를 주었다!!!" << std::endl;
//// #4. friend로 지정된 멤버 함수를 선언과 분리하여 정의를 한다.
//}
//
//int main()
//{
//	Sword shortSword{ 10 };
//	Warrior player;
//
//	player.AttackWith(shortSword);
//}

/* --- < 연산자 오버로딩( Operator Overloading ) > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| int, double, char과 같은 형식들을 다루면서 +, -와 같은 연산자들을 다루어 보았다.   |
| 이러한 연산자는 컴파일러 내부적으로 함수처럼 작동한다.							 |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< 객체의 연산 > : 연산자 함수를 만들어서 객체의 멤버를 일괄적으로 연산할 수 있다.
	#. 컴파일러가 연산자를 호출하여 일반 타입의 연산을 진행하듯이
	#. 사용자가 연산자 함수를 직접 만들어 입맛대로 연산을 실행할 수 있다.
*/

//#include <iostream>		// < Title : 연산자의 컴파일 형태 >
//
//int + (int param1, int param2)
//{
//	return param1 + param2;
//}
//int main()
//{
//	int x{ 1 }, y{ 2 };
//
//	+(x, y);
//// #. x + y라는 명령어를 실행하면 컴파일러는 해당 타입과 일치한 연산자 함수를 호출한다.
//// #. 해당 함수에서 연산이 진행되고 그 결과를 반환해 준다.
//}

//#include <iostream>		// < Title : 객체의 연산 이론 >
//
//class MyClass
//{
//public:
//	int x{ 1 };
//	int y{ 2 };
//};
//
//int main()
//{
//	MyClass a, b;
//
//	a. + (b);
//// #. 만약 사용자가 연산자 함수를 직접 만든다면?
//// #. a.x + b.x라던지 a.x + b.y라던지, 다양한 방식으로 객체의 연산들 실행할 수 있다.
//}

//#include <iostream>
//
//class Point2D
//{
//private:
//	int mX, mY;
//
//public:
//	Point2D() = default;
//	Point2D(int x, int y) : mX{ x }, mY{ y }{}
//	void Print()
//	{
//		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
//	}
//	friend Point2D operator+(const Point2D& p1, const Point2D& p2);
//};
//
//// #. 매개 변수가 상수 참조형이다. 
//// #. 즉 상수 참조형으로 무명의 객체 또한 인자로 받을 수 있게 한다.
//Point2D operator+(const Point2D& p1, const Point2D& p2)
//{
//	Point2D result;
//	result.mX = p1.mX + p2.mX;
//	result.mY = p1.mY + p2.mY;
//
//	return result;
//// #. 반환되는 result객체는 함수가 종료되면 함께 사라진다.
//// #. 때문에 이 함수의 반환 타입은 참조가 아닌 값에 의한 복사로 지정한다.
//}
//
//int main()
//{
//	Point2D pt1{ 2,3 }, pt2{ 4,5 };
//	Point2D pt3, pt4;
//
//	pt3 = pt1 + pt2;		
//// #. pt3을 빼고 보면, [pt1 + pt2]는 R_Value로 그저 표현식에 불과하다.
//// #. 매개 변수로 보낸 형태가 (pt1, pt2)콤마로 이루어진 형태가 아니라는 것을 주의 깊게 봐야한다.
//
//	pt3.Print();
//	pt4 = (pt1 + pt2) + pt3;
//	pt4.Print();
//}

//#include <iostream>		// < Title : 전역 함수 >
//
//class MyClass
//{
//public:
//	int mValue;
//	MyClass() = default;
//	MyClass(int x) : mValue{ x }
//	{
//		std::cout << "[ MyClass(x) ] : " << mValue << std::endl;
//	}
//};
//
//// #. 객체의 + 연산이 진행될 때마다 호출되는 전역함수
//MyClass operator+(MyClass operand1, MyClass operand2)
//{
//	return MyClass{ operand1.mValue + operand2.mValue };
//// #. 반환값에 이름을 붙이지 않았기 때문에 무명의 객체가 생성되었다가 소멸된다.
//}
//
//int Square(const MyClass& c)
//{
//	return c.mValue * c.mValue;
//}
//
//int main()
//{
//	MyClass c1{ 1 }, c2{ 2 };	// 생성자 x : 1, x :2
//
//	std::cout << "     " << Square(c1 + c2) << std::endl;	//	생성자 x : 3
//
//	std::cout << "     " << (c1 + c2).mValue << std::endl;	//	생성자 x : 3
//
//	MyClass c3 = c1 + c2;		// 생성자 x : 3
//}

//#include <iostream>		// < Title : 멤버 함수 >
//
//class Point2D
//{
//private:
//	int mX, mY;
//
//public:
//	Point2D() = default;
//	Point2D(int x, int y) : mX{ x }, mY{ y }{}
//// #. 매개 변수를 받는 생성자가 있어야 해당 연산자 함수에서 무명의 객체를 만들 수 있다.
//
//	void Print()
//	{
//		std::cout << "(" << mX << " : " << mY << ")" << std::endl;
//	}
//	Point2D operator+(const Point2D& pt)
//	{
//		return Point2D(mX + pt.mX, mY + pt.mY);
//	}
//};
//
//int main()
//{
//	Point2D pt1{ 2,3 }, pt2{ 4,5 };
//	Point2D pt3, pt4;
//
//// #. [pt1 + pt2]는 pt1.operator+(pt2);와 같다.
//	pt3 = pt1 + pt2;
//	pt3.Print();
//	pt4 = (pt1 + pt2) + pt3;
//	pt4.Print();
//}

//#include <iostream>		// < Title : 단항 연산자 >
//
//class Point2D
//{
//private:
//	int mX, mY;
//
//public:
//	Point2D() = default;
//	Point2D(int x, int y) : mX{ x }, mY{ y }{}
//	void Print()
//	{
//		std::cout << mX << ", " << mY << std::endl;
//	}
//
//// #. 반환 값을 상수 참조형으로 지정하여 호출한 객체를 그대로 반환한다.
//// #. 전위 연산 함수
//	const Point2D& operator++()
//	{
//		++mX;
//		++mY;
//		// this는 포인터이기 때문에 역참조가 필요하다.
//		return *this;
//	}
//
//// #. 후위 연산 함수는 아무 의미 없는 매개변수를 지정해 준다.
//	Point2D operator++(int x)
//	{	// #. 값을 먼저 돌려주고 이 후에 증가시켜야 하기 때문에 기존 값을 저장할 객체를 생성한다.
//		Point2D temp(mX, mY);
//		++(*this);
//		return temp;
//	}
//};
//
//int main()
//{
//	Point2D pt{ 2,3 };
//	++pt;
//	pt.Print();
//}

//#include <iostream>		// < Title : 배열 첨자 >
//
//class MyClass
//{
//private:
//	int mArray[10];
//	int count;
//
//public:
//	MyClass() : mArray{} {}
//
//// #. 반환 타입을 int로 지정할 경우 원소의 값을 가져올 순 있지만
//// #. 대입하는 용도로는 사용이 불가능 하다.
//	int& operator[] (const int& index)
//	{
//		return mArray[index];
//	}
//};
//int main()
//{
//	MyClass arr;
//	arr[0] = 1;
//// #1. < array[0] = 1; > 중 '=' 의 좌측값( array[0] )이 배열 연산자를 호출한다.
//// #3. 매개 변수는 인덱스를 받기 때문에 리터럴을 받을 수 있게 const 참조형으로 지정한다.
//// #4. 반환타입 복사를 통해 반환한다면 함수 안에 this와 함수를 호출한 객체는 서로 다른 객체가 된다.
//// #6. 그럼 배열 요소에 값을 대입할 수 없기 때문에 참조형을 반환한다.
//
//	std::cout << arr[0] << " : " << arr[1] << std::endl;
//// 연산자 함수는 반환되는 값이 호출한 객체 그 자체라는 것을 주의해야 한다.
//// 반환 타입을 잘 지정해 주자.
//}

//#include <iostream>		// < Title : 형변환 >
//
//class Point2D
//{
//private:
//	int mX, mY;
//
//public:
//	Point2D() = default;
//	Point2D(int x, int y) : mX{ x }, mY{ y }{}
//	void Print()
//	{
//		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
//	}
//
//// #. 형변환 연산자 함수는 반환값을 생략하도록 되어있다.
//	operator const float()
//	{	// #. 상수를 반환하여 반환된 값을 바꾸지 못하게 한다.
//		return float(sqrt(mX * mX + mY * mY));
//// sqrt 공식은 double 을 반환하는 함수이므로 float 형변환을 해준다.
//	}
//};
//
//int main()
//{
//	Point2D pt1{ 2,3 };
//
//// #. 형변환 연산자 또한 함수로 전달되는 것은 표현식이기 때문에 무명의 객체가 전달된다.
//	float dist{ pt1 };
//	std::cout << pt1 << std::endl;
//}

//#include <iostream>		// < Title : 함수 연산자 >
//
//class Point2D
//{
//private:
//	int mX, mY;
//
//public:
//	Point2D() = default;
//	Point2D(int x, int y) : mX{ x }, mY{ y }{}
//	void Print()
//	{
//		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
//	}
//
//// #. 함수 연산자는 operator()가 이름이고 ()가 매개 변수가 들어갈 공간이다.
//	void operator()()
//	{
//		mX = mY = 0;
//	}
//	void operator()(int x, int y)
//	{
//		mX = x; mY = y;
//	}
//};
//
//int main()
//{
//	Point2D pt1{ 2,3 };
//
//// pt1(); 이 operator()를 호출하엿다.
//// 함수 연산자 호출식 : Function Object 함수 객체 : Functor
//	pt1();
//	pt1.Print();
//
//// pt1(1, 2); 이 오버로딩된 operator()를 호출하였다.
//	pt1(1, 2);
//	pt1.Print();
//}

//#include <iostream>		// < Title : 스트림 연산자 >
//
//class Point2D
//{
//private:
//	int mX, mY;
//
//public:
//	Point2D() = default;
//	Point2D(int x, int y) : mX{ x }, mY{ y }{}
//	void Print()
//	{
//		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
//	}
//	friend std::ostream& operator <<(std::ostream& os, Point2D& pt);
//// std::cout의 cout또한 객체이다. 이 객체는 ostream이라는 클래스의 객체이다.
//};
//
//std::istream& operator >> (std::istream& is, Point2D pt)
//{
//	return is;
//}
//
//// std::cout은 ostream타입이다.
//// #2. 함수가 실행되고 반환된다.
//// #4. 이 함수의 매개 변수 역시 값에 복사가 진행되기 때문에 참조형으로 바꿔주어야 한다.
//std::ostream& operator <<(std::ostream& os, Point2D& pt)
//{
//	os << "(" << pt.mX << ", " << pt.mY << ")";
//
//	return os;
//}
//
//int main()
//{
//	Point2D pt1{ 2,3 };
//
//// #1. [std::cout << pt1] 까지 먼저 함수를 호출한다.
//// #3. 반환 값이 첫번째 매개 변수가 되고 <<std::endl; 가 두번째 매개 변수가 된다.
//	std::cout << pt1 << std::endl;
//}

//#include <iostream>		< Title : 점 연산자 >
//
//class Character
//{
//public:
//// #. 반환 타입을 참조형으로 지정할 경우 연산자를 호출한 객체가 그대로 되돌아 온다는 뜻이다.
//	Character& MoveForward()
//	{
//		std::cout << "Move" << std::endl;
//		return *this;
//	}
//	Character& TurnLeft()
//	{
//		std::cout << "TurnLeft" << std::endl;
//		return *this;
//	}
//	Character& TurnRight()
//	{
//		std::cout << "TurnRight" << std::endl;
//		return *this;
//	}
//	Character& Swing()
//	{
//		std::cout << "Swing" << std::endl;
//		return *this;
//	}
//};
//
//int main()
//{
//	Character player;
//// #. 객체가 멤버함수를 호출할 때는 이미 해당 멤버 함수에 this라는 키워드로 객체 자신을 가리키는 포인터가 있다.
//	player.MoveForward()
//		.TurnLeft()
//		.TurnRight()
//		.Swing();
//}

/* ----- * ----- < 산술 연산자 오버로딩 > ----- * ----- */

/*
안녕하세요 여러분!
지난 강좌에서 만들었던 MyString을 손 좀 봐주었나요?
아마도 MyString을 이용하여 여러가지 작업을 하면서 다음과 같은 생각을 하셨을 수도 있었을 것입니다.

#. [if(str1.compare(str2) == 0)]하지 말고 [if(str1 == str2)]하면 어떨까?

#. [str1.insert(str1.length(), str2)]하지 말고 [str1 = str1 + str2;]하면 어떨까?

#. [str1[10] = 'c';]와 같은 것도 할 수 있을까?

물론 C언어에서는 이러한 것을 상상조차 할 수 없었습니다.
+, -, ==, [] 와 같은 기본 연산자들은 모두 C언어에 기본적으로 정의되어 있는
데이터 타입(int, float 등)에만 사용 가능한 것들 이였기 때문이죠.
이들을 구조체 변수에 사용한다는 것은 불가능하였습니다.

하지만 놀랍게도 C++ 에서는 사용자 정의 연산자를 사용할 수 있습니다.
어떠한 연산자들이 가능하나면,
:: (범위 지정), . (멤버 지정), .* (멤버 포인터로 멤버 지정) 을 제외한
여러분이 상상하는 모든 연산자를 사용할 수 있다는 것입니다.

대표적으로
#. [+, -, *] 와 같은 산술 연산자

#. [+=, -=] 와 같은 축약형 연산자

#. [>=, ==] 와 같은 비교 연산자

#. [&&, ||] 와 같은 논리 연산자

#. [-> 나 *] 와 같은 멤버 선택 연산자 (여기서 * 는 역참조 연산자 입니다. 포인터에서 *p 할 때 처럼)

#. [++, --] 증감 연산자

#. [] (배열 연산자) 와 심지어 () 까지 (함수 호출 연산자)
까지 모두 여러분이 직접 만들 수 있습니다.

이 때 이러한 기본 연산자들을 직접 사용자가 정의하는 것을 연산자를 오버로딩(overloading)한다고 부릅니다.
이전에 같은 이름의 함수를 인자만 다르게 사용하는 것을 '함수를 오버로딩 했다'라고 불렀던 것 처럼,
기본 연산자를 여러분이 설계한 클래스에 맞게 직접 사용하는 것을 '연산자를 오버로딩 했다'라고 부릅니다.

일단 연산자 오버로딩을 사용하기 위해서는, 다음과 같이 오버로딩을 원하는 연산자 함수를 제작하면 됩니다.
(리턴 타입) operator(연산자) (연산자가 받는 인자)

(※ 참고적으로 위 방법 외에는 함수 이름으로 연산자를 절대 넣을 수 없습니다)
예를 들어서 우리가 ==를 오버로딩 하고 싶다면, ==연산자는 그 결과값이 언제나 bool이고,
인자로는 ==로 비교하는 것 하나만 받게 됩니다. 따라서 다음과 같이 함수를 정의하면 됩니다.

#. bool operator==(MyString& str);
이제, 우리가 [str1 == str2]라는 명령을 한다면 이는 [str1.operator==(str2)]로 내부적으로 변환되서 처리됩니다.
그리고 그 결과값을 리턴하게 되겠지요.

사실 [operator==]를 만드는 것 자체는 별로 어려운 일은 아닙니다.
왜냐하면 이미 MyString에서 compare라는 좋은 함수를 제공하고 있기 때문이지요. 간단하게 만들어 보면 다음과 같습니다.
#. bool MyString::operator==(MyString& str) {
	   return !compare(str);  // str과 같으면 compare에서 0을 리턴한다.
   }
여기서 [!compare(str)]을 리턴하는 이유는 compare함수에서 str과 *this가 같으면 0을 리턴하도록 하였는데,
[operator==]은 둘이 같으면 true를 리턴해야 되기 때문입니다.
따라서 NOT연산자인 !를 앞에 붙여서 리턴하면 올바르게 작동할 수 있습니다.
*/

/* ----- < 복소수( Complex Number ) > ----- */

/*
< 허수( Imaginary number ) > : 음수의 제곱근을 나타내기 위한 정의

< 복소수 > : 허수와 실수를 모두 포함하는 수 체계로, 허수와 실수의 합으로 표현할 수 있다.
*/

//#include "Complex.h"
//
//int main()
//{
//	Complex a(1.0, 2.0);
//	Complex b(3.0, -2.0);
//	Complex c(0.0, 0.0);
//
//	c = a * b + a / b + a + b;
//	a += b;
//
//	c.Print();
//	a.Print();
//	b.Print();
//}

/* --- < 얕은 복사& 깊은 복사 > --- */

/*
< 초기화 과정 >
	< 일반 타입 >
		#. int x = 5; : 복사(대입) 초기화
			=> x를 선언하고 5를 대입한다.
		#. int x(5); : 직접 초기화
			=> 클래스 생성자와 같은 개념으로 생성자를 호출하여 초기화 한다.
		#. int x{ 5 }; : 유니폼 초기화
			=> 유니폼 초기화식 문법으로 초기화한다.

	< 클래스 타입 >
		#. MyClass c = MyClass(5); : 복사(대입) 초기화
			=> c를 선언하고 MyClass(5)로 입시 객체를 만들어서 복사한다.
		#. MyClass c = 5; : 복사(대입) 초기화
			=> 5라는 값을 클래스 타입으로 암시적 변환을 수행한다.
		#. MyClass c(5); : 직접 초기화
			=> 생성자를 사용한 초기화다.
		#. MyClass c{ 5 }; : 유니폼 초기화
			=> 유니폼 초기화식 문법으로 초기화한다.

< 복사 생성자 > : 새로운 객체를 초기화할 때 기존에 있던 객체를 넘겨주어 해당 자료로 생성할 수 있다.
	#. MyClass(const MyClass& from) {}
		=> 새로 만들어진 객체에 인자로 받은 객체의 멤버 변수를 그대로 복사한다.
		=> 즉, 해당 객체를 복사본을 만드는 것이 목표이므로 인자를 변경할 이유가 없기 때문에 const를 붙인다.
*/

//#include <iostream>		// < Title : 초기화 방식 >
//
//class MyClass
//{
//private:
//	int mValue;
//
//public:
//	// 초기화식을 입력한 임의 생성자
//	MyClass(int value) : mValue{ value }
//	{
//		std::cout << "[MyClass] : " << mValue << std::endl;
//	}
//};
//
//int main()
//{	
//// #. 이론상 생성자가 두 번 불려야만 한다.
//// #. c1이라는 객체의 생성자와 복사를 위해 생성된 무명 객체의 생성자가 각각 호출된다는 이론
//// #. 그런데 컴파일러가 최적화를 통해 값 5가 있는 무명 객체의 생성자를 호출하고 이 객체에 이름 c1을 붙인다.
//// #. 그로인해 무명 객체가 호출한 생성자, 한 번만 불린다.
//	MyClass c1 = 5;				// 복사 초기화
//	MyClass c2 = MyClass(5);	// 복사 초기화
//
//	MyClass c3(5);				// 직접 초기화
//	MyClass c4{ 5 };			// 유니폼 초기화
//}

//#include <iostream>
//
//class MyClass
//{
//private:
//	int mValue;
//
//public:
//	MyClass(int value) : mValue{ value }
//	{
//		std::cout << "[MyClass] : " << mValue << std::endl;
//	}
//	// 암시적으로 복사 생성자가 클래스 내부에 있다.
//	MyClass(const MyClass& from)
//	{
//		mValue = from.mValue;
//		std::cout << "[MyClass Copy] : " << mValue << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass c1 = 5;		// 복사 초기화
//	MyClass c2(c1);		// 복사 생성자 : 다른 객체로부터 나를 참고하여 생성
//// #. 즉 c1의 카피본을 c2라는 이름으로 만든다.
//
//// #. 리터럴을 매개 변수로 보내어 무명 객체를 생성하고 이 무명 객체를 참고하여 c3가 생성된다.
//// #. 그러나 이건 MyClass c3(5);와 완전히 동일한 사용법이다.
//// #. 따라서 컴파일러는 자동으로 최적화를 수행해서 하나의 객체만 생성한다.
//	MyClass c3(MyClass(5));
//}

//#include <iostream>		// < Title : 얕은 복사 >
//						// #. 주어진 객체의 각 멤버 변수를 새 객체의 멤버 변수에 배정하기만 한다.
//
//class Dog {};
//class DogHouse
//{
//	Dog* owner;
//// #. 멤버 변수에 포인터가 있을 경우 문제가 발생할 수 있다.
//};
//DogHouse house1;			// #. house1.owner가 HEAP에 할당된 메모리 공간을 가리킨다.
//DogHouse house2(house1);	// #. house2.owner가 house1.owner가 가리키는 메모리 공간을 가리킨다.
//// #. 이 때 house1이 소멸된다면 house2.owner는 알 수 없는 공간을 가리키는 상황이 된다.

//#include <iostream>		// < Title : 깊은 복사 >
//						// #. 실제로 새로운 메모리를 할당해 준다.
//
//class Dog 
//{
//public:
//	int age;
//	int weight;
//	int color;
//};
//class DogHouse
//{
//	Dog* owner;
//
//public:
//	DogHouse(const DogHouse& house)
//	{
//		owner = new Dog();
//		owner->age = house.owner->age;
//		owner->weight = house.owner->weight;
//		owner->color = house.owner->color;
//// #. 같은 HEAP공간을 가리키지 않고 새로운 메모리 공간을 가리킨다.
//// #. 얕은 복사와 비교하여 안전하지만 추가적인 메모리가 필요하다.
//	}
//};

/* --- < Relationship > --- */

/*
< OOP Relationship >
	#. 한 명의 친구를 정의하려면 그 친구 개인의 특성이나 능력을 묘사해야 할 뿐 아니라
	#. 다른 사람과의 관계 역시 매우 중요하다.
	#. OOP는 현실 세계의 오브젝트를 프로그램에 도입한 개념이므로 마찬가지로 오브젝트들의 관계를 표현할 수 있다.

< 오브젝트들의 상관 관계 > : 효율적이고 깔끔한 클래스 설계를 위한 이해
	#. < is-part-of : Composition( 결합성 ) >
		#. engine is part of car : ~의 구성 요소
			=> 복잡한 객체( 자동차 )는 조금 더 간단한 객체( 엔진 )로 구성되어 있다.
		#. < A is part of B > : A는 B의 일부 구성 요소다.
			=> A는 한 번에 하나의 객체에만 존재한다.
			=> A는 B에 의해 관리된다.
			=> A는 B의 존재를 모른다.

	#. < has-a : Aggregation( 집단화 ) >
		#. car has tire : ~을 가지고 있다.
			=> 복잡한 객체( 자동차 )는 별도로 관리된는 다른 간단한 객체( 타이어 )로 구성되어 있다.
		#. < A has a B > : B는 A의 일부 구성 요소다.
			=> B는 한 번에 여러 오브젝트에 소속될 수 있다.
			=> B는 A에 의해 관리되지 않는다.
			=> B는 A의 존재를 모른다.

	#. < use-a : Association( 연관화 ) >
		#. father use a car : ~을 사용할 수 있다.
		#. < A use a B > : B는 A와 관련이 없다.
			=> B는 여러 오브젝트에 소속될 수 있다.
			=> B는 A에 의해 관리되지 않는다.
			=> B는 A의 존재를 알 수도 있고 모를 수도 있다.

	#. < is-a : Generalization( 일반화 ) 혹은 Specialication( 특수화 ) >
		#. Car <- Suv <- Jeep <- Rubicon : 상속 관계
			#. <- 방향으로 갈 수록 일반화 / -> 방향으로 갈 수록 특수화
			#. < 일반화 > : 공통적으로 가지는 특성을 묶어서 상위 개념을 만드는 것
			#. < 특수화 > : 일반화 개념으로 부터 고유 기능만 추가하는 것
*/

//#include <iostream>		// < Title : is-part-of >
//// 플레이어 클래스는 매우 다양한 속성을 가지고 있지만 그 중 능력치 역시 매우 복잡한 구조일 것이다.
//// 따라서 능력치를 다른 클래스로 만들어 [멤버]로 가지고 있는 것이 효율적이다.
//
//class Status	// #. A : Player의 구성 요소
//{
//	int mHP, mMP;
//};
//
//// Player는 능력치, 아이템, 장비, 스킬 등 다양한 속성을 가지고 있으면 Status는 속성 중 하나이다.
//class Player	// #. B : A( Status ) is part of B( Player )
//{
//	Status mStatus;		
//// mStatus는 Player의 객체에 의해 관리된다.
//// Player는 자신의 속성 중 한 개인 Status를 멤버로 갖는다.
//// Player는 mStatus멤버를 통해 Status정보를 알지만 Status는 Player의 정보를 모른다.
//};
//
//int main()
//{
//	Player warrior;	// Player의 객체 별로 mStatus는 각각 독립적으로 존재한다.
//	Player wizard;	// warrior의 mStatus와 wizard의 mStatus는 서로 별개이다.
//}

//#include <iostream>		// < Title : has-a >
//
//class Player	// #. B : Auction의 구성요소가 될 수 있다.
//{	// Player 는 Auction 의 정보를 모른다.
//};
//
//class Auction	// #. A : A( Auction ) has a B( Player )
//{
//	Player* mPlayers;
//// Auction이 Player를 관리할 수 없다.
//// 포인터로 설계하여 메모리 공간은 다른 곳에서 관리된다.
//// Auction설계도의 객체가 사라진다고 해서 mPlayers가 가리키는 메모리 공간이 사라지는 것은 아니다.
//};

//#include <iostream>		// < Title : use-a >
//
//class Potion	// #. B : Player 에 소속될 수 있다.
//{
//	int mRecovery;
//// Potion은 Player와 관련이 없다. 단지 체력만 회복해줄 뿐, Player의 속성과 상관 관계가 있지는 않다.
//};
//
//class Player	// #. A : A( Player ) use a B( Potion )
//{
//	Potion* mPotion;
//// Player객체가 죽는다고 Potion이 사라지지는 않는다.
//// 고정 회복량을 가지는 물약은 Player의 정보를 몰라도 되지만, 최대 체력 비율로 회복해주는 물약은 Player최대 체력 정보를 알아야 한다.
//};

/* --- < 파생 구문 > --- */

/*
< class 파생클래스 : [virtual] [접근제한자] 기반 클래스1, 기반 클래스2, ... >
	#. < class Dog : public Animal >

개념	| 파생( Derivation ) | 상속( Inheritence ) |
		|					 |					   |
일반화	| 기반 클래스		 | 부모 클래스		   | 상위 클래스
		| ( Base Class )	 | ( Parent Class )    | ( Super Class )
특수화	| 파생 클래스		 | 자식 클래스		   | 하위 클래스
		| ( Derived Class )	 | ( Child Class )	   | ( Sub Class )


< 접근 제한자 >
	BASE	  |	public상속 | protected상속 | private상속
	public	  |	public	   | protected	   | private
	protected |	protected  | protected	   | private
	private	  |	X		   | X			   | X
*/

//#include <iostream>
//
//class GameDeveloper		// #. 개발자라는 개념의 클래스
//{
//public:		// 모든 직군에 공통으로 필요한 정보로는 이름과 나이가 있다.
//	std::string mName;
//	int mAge;
//};
//
//// 개발자라는 기반 클래스의 상속을 받은 파생 클래스
//class Programmer : public GameDeveloper		// #. 프로그래머라는 개념의 클래스
//{
//public:
//	void Coding();
//	void Debugging();
//// #. 프로그래머만의 특수한 고유 기능
//};
//
//// 개발자라는 기반 클래스의 상속을 받은 파생 클래스
//class Designer : public GameDeveloper		// #. 기획자라는 개념의 클래스
//{
//public:
//	void Documentation();
//	void Presentation();
//// #. 기획자만의 특수한 고유 기능
//};
//
//// 개발자라는 기반 클래스의 상속을 받은 파생 클래스의 상속을 받은 파생 클래스
//class ChiefProgrammer : public Programmer		// #. 프로그램 팀장이라는 개념의 클래스
//{
//public:
//	void Architecture();
//	void Scheduling();
//// #. 프로그램 팀장만의 특수한 고유 기능
//};

/* < Protected 접근 제한자 > */

/*
상속과 캡슐화를 모두 만족하는 접근 제한자
[클래스 외부에서는 보이지 않으나] [상속된 클래스에서는 접근이 가능하다.]
*/

//#include <iostream>
//
//class Animal
//{
//private:		// #. 클래스 외부 + 상속된 클래스에서 모두 사용 불가능
//	int mAge;
//protected:		// #. 클래스 외부에서는 사용 불가능, 상속된 클래스 내부에서는 사용 가능
//	int mWeight;
//public:			// #. Free
//	int mColor;
//};
//
//class Dog : public Animal
//{
//	// mWeight, mColor 사용 가능
//};
//
//int main()
//{
//	Animal a;
//	a.mAgae; a.mWeight;		// 외부에서는 사용이 불가능
//	a.mColor;
//	Dog d;
//	d.mAge;		// 존재하는지도 모름
//	d.mWeight;	// 존재하는지는 아는데 외부에서는 접근 불가능
//	d.mColor;
//}

/* --- < 멤버 함수 오버라이딩( Overriding ) > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| RPG게임의 직업을 클래스화 한다고 가정해보자. Character라는 기반 클래스가 Attack()함수를 정의하였다.	 |
| 이때 Warrior, Archer라는 파생 클래스가 있고, Warrior는 근접 공격을, Archer는 원거리 공격을 한다고 정의 |
| 한다면 각각 AttackMelee(), AttackRange()를 만들어 둘 것인가? 피격 판정이나 데미지 계산 등 공격에 처리되|
| 는 공통 루틴이 있을 것이다. 이런 것들을 중복 작성하는 것은 좋지 않다.									 |
| Warrior의 Attack은 근거리를, Archer의 Attack은 원거리를 처리해 준다면 깔끔할 것이다.					 |
| 기반 클래스의 Attack()을 각 파생 클래스가 서로 다르게 해석하는 것을 멤버 함수 오버라이딩이라 한다.	 |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< 멤버 함수 오버라이딩 > : 동일한 반환값, 동일한 이름, 동일한 매개 변수의 함수를 파생 클래스가 다른 기능으로 재정의 하는 것
*/

//#include <iostream>		// < Title : default >
//
//class Character
//{
//public:
//	void Attack() { std::cout << "맨손 공격 : 1" << std::endl; }
//// #. 기반 클래스에서 Attack()함수를 만들고 파생 클래스에서도 Attack()함수를 만들어 준다.
//};
//class Warrior : public Character
//{
//public:
//	void Attack() { std::cout << "거대 도끼 공격! : 999" << std::endl; }
//// #. 동일한 값, 이름, 매개 변수의 함수를 파생 클래스가 다른 기능으로 재정의 하는 것을 말한다.
//};
//class Archer : public Character
//{
//public:
//	void Attack() { std::cout << "파라솔 화살 발싸! : 10000" << std::endl; }
//};
//
//int main()
//{
//	Character Chobo;
//	Chobo.Attack();
//	Warrior hero;
//	hero.Attack();
//	Archer Legolas;
//	Legolas.Attack();
//// #. 생성된 객체의 클래스에 따라서 오버라이딩 된 멤버함수가 호출된다.
//
//	hero.Character::Attack();
//// #. 만약 파생 클래스의 객체로 기반 클래스의 오버라이딩 함수를 호출하고자 할때는 범위 해결 연산자를 사용하면 된다.
//}

//#include <iostream>		// < Title : Error >
//
//class Car
//{
//public:
//	void Mover(int km) { std::cout << "아기 자동차로 " << km << " 거리를 갔다" << std::endl; }
//	void Mover(int km, float l) { std::cout << "연료"<<l<<"을 사용해서 아기 자동차로 " << km << " 거리를 갔다" << std::endl; }
//};
//class Jeep : public Car
//{
//public:
//	void Mover(int km) { std::cout << "**[JEEP]** 자동차로 " << km << " 거리를 갔다" << std::endl; }
//	//void Mover(int km, float l) { std::cout << "연료" << l << "을 사용해서 **[JEEP]** 자동차로 " << km << " 거리를 갔다" << std::endl; }
//// #. 오버라이딩을 할꺼라면 해당 함수의 오버로딩된 모든 함수를 오버라이딩 해주어야 한다.
//};
//
//int main()
//{	
//	Jeep rubicon;
//	rubicon.Mover(10, 5);
//// #. Car클래스의 Mover(int km, float l)멤버함수를 호춯하려고 하지만 Mover(int km)이 이미 오버라이딩 된 상황에서는 호출의 매칭이 되지 않는다.
//// #. 이 경우 Car클래스의 오버로딩된 멤버함수를 Jeep클래스에서 모두 오버라이딩 해주어야만 한다.
//}

/* --- < 다형성 > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 파생 클래스를 기반 클래스로 처리할 수 있는 것을 다형성이라 한다. 다양한 형태가 된다는 뜻으로 상속과  |
| 함께 OOP의 핵심 개념 중 하나이다. 다형성은 포인터에 의해 구현된다.								   |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< 다형성 > : 포인터와 가상 함수로 구현할 수 있다.
*/

//#include <iostream>
//
//// #. RPG 게임에서 플레이어들 간의 충돌을 처리하는 함수를 만들고자 한다.
//// #. 기반 클래스( Character )를 만들고 파생 클래스( 직업들... )를 만든다.
//class Character {};
//class Warrior : public Character {};
//class Archer : public Character {};
//class Healer : public Character {};
//
//// #. 매개변수는 2개를 받는다. 누가 누구랑 충돌했는지 알아야 하니까...
//// #. 그런데 만약 플레이어들의 직업이 6종류가 되고 Character클래스에서 파생한 몬스터 종류가 100종류가 된다면? 
//// #. 오버로딩 함수를 굉장히 많이 만들어야 할 것이다.
//bool CheckCollision(Warrior w, Archer a);
//bool CheckCollision(Warrior w, Healer h);
//bool CheckCollision(Healer w, Archer a);
//// #. 이때 C++에서는 파생 클래스를 기반 클래스로 처리하는 기능이 있다. 
//// #. 개념상 파생클래스는 기반 클래스의 모든 특성을 가지고 있으니까.
//
//bool CheckCollision(Character* c1, Character* c2);
//// #. 값에 의한 복사로 인자를 받을 경우 Character c1, Character c2의 파생 클래스 정보가 사라진다.
//// #. 때문에 포인터로 주소값을 받아야 한다.
//
//int main()
//{
//	Warrior babarian;
//	Archer legolas;
//// #. 파생 클래스의 객체를 만들때는 항상 기반 클래스의 정보 또한 객체 메모리 공간에 구성된다는 것을 기억하라.
//
//	CheckCollision(&babarian, &legolas);
//}

/* < 가상 함수( virtual function ) > */

/*
< 가상 함수 > : 파생 클래스에서 재정의 할 것으로 기대하는 멤버 함수
	#. 기대한다는 의미는 컴파일 될 때 해당 함수가 사용될지 결정되는 것이 아니라
	#. 실행시간( runtime )에 어떤 함수를 사용할 지를 결정한다는 의미이다.
	#. 즉, 함수를 호출하는 시점에서 어떤 함수를 연결( bind )할 지 결정하게 된다.
*/

//#include <iostream>
//
//class Animal { public: void Sound() { std::cout << "동물 소리는 무엇인가?" << std::endl; } };
//class Dog : public Animal { public: void Sound() { std::cout << "강아지는 멍멍멍!!!" << std::endl; } };
//
//int main()
//{
//	Animal* pAnimal = new Dog;
//// #. Dog객체를 heap메모리 공간에 저장하고 Animal타입을 가리키는 포인터 pAnimal로 해당 메모리 공간을 가리킨다.
//// #. Animal이라는 틀로 Dog객체의 메모리 공간을 가리키기 때문에 Sound멤버함수는 Animal의 Sound멤버 함수를 실행한다.
//	pAnimal->Sound();
//}

//#include <iostream>
//
//class ClassA
//{
//public:
//	void func1() { std::cout << "ClassA::func1()" << std::endl; }
//
//	virtual void func2() { std::cout << "ClassA::func2()" << std::endl; }
//// #. < virtual > : 파생 클래스( ClassB )에서 오버라이딩된 멤버함수를 재정의 할 것을 기대한다는 의미
//};
//class ClassB : public ClassA
//{
//public:
//	void func1() { std::cout << "ClassB::func1()" << std::endl; }
//	void func2() { std::cout << "ClassB::func2()" << std::endl; }
//};
//
//int main()
//{
//	ClassA* a = new ClassA;		// ClassA객체를 heap메모리 공간에 할당하고 포인터 a가 해당 공간을 가리킨다.
//	ClassB* b = new ClassB;		// ClassB객체를 heap메모리 공간에 할당하고 포인터 b가 해당 공간을 가리킨다.
//	a->func1(); a->func2(); b->func1(); b->func2();
//
//	std::cout << std::endl << "----------------------" << std::endl;
//
//	ClassA* c = b;				// ClassA를 가리키는 포인터 c가 ClassB메모리 공간을 가리킨다.
//
//	c->func1(); c->func2();
//// #. ClassA라는 틀로 ClassB객체의 메모리 공간을 가리키기 때문에 func2멤버함수는 ClassA의 func2멤버함수가 호출되어야 한다.
//// #. 그런데 virtual키워드를 사용하였기 때문에 파생 클래스에서 재정의된 멤버함수가 호출된다.
//}

//#include <iostream>
//
//// #. 기반 클래스에 가상 함수로 Attack()을 만들었다.
//class Character { public: virtual void Attack(); };
//
//// #. 이를 상속받은 5개의 직업군 클래스가 있고, 각 특성에 맞는 공격을 수행할 예정이다.
//class Warrior : public Character { public: void Attack(); };
//class Archer : public Character { public: void Attack(); };
//class Wizard : public Character { public: void Attack(); };
//class Priest : public Character { public: void Attack(); };
//class Thief : public Character { public: void Attack(); };
//
//int main()
//{	// 5개의 직업으로 이루어진 파티를 만들고, 다형성을 이용하여 모두 Character포인터로 한번에 묶어서 관리할 수 있다.
//	Character* party[5] = {
//		new Warrior,	// 일단 메모리 공간에는 파생된 클래스 객체를 저장한다.
//		new Archer,
//		new Wizard,
//		new Priest,
//		new Thief
//	};
//
//	for (int i = 0; i < 5; i++)
//	{	// #. 파티 전원이 공격하려면 간단히 for문으로 Attack만 호출해주면 된다.
//		party[i]->Attack();
//// #. 기반 클래스에 Attack멤버 함수가 가상 함수이므로 각 원소가 실제 어떤 직업인지 파악한 후 해당 직업의 공격을 수행한다.
//	}
//}

/* --- < 바인딩( Binding ) > --- */

/*
< 바인딩 > : 프로그램에서 사용하는 변수/함수등의 이름( 식별자 )을 값으로 연결해 주는 과정

< virtual 함수 바인딩 순서 >
	#1. 파생 클래스의 인스턴스가 만들어진다.
	#2. 이때 메모리 공간에는 기반 클래스와 파생 클래스의 멤버가 구성된다.
	#3. 메모리 공간에 멤버를 구성할 때 기반 클래스의 멤버가 먼저 구성되는데
	#4. 이 과정에서 기반 클래스에 가상 함수가 있을 경우 이 가상 함수를 가상 함수 테이블에 옮겨 둔다.
	#5. 이후 자동적으로 인스턴스에 가상 함수 테이블을 가리키는 포인터를 만들어서 연결해 둔다.
	#6. 기반 클래스가 다 구성된 뒤 파생 클래스의 구성이 진행 되면서 오버라이딩 된 멤버 함수가 있으면
	#7. 가상 함수 테이블에 파생 클래스의 멤버 함수를 덮어 씌워준다.
	#8. 이 과정을 거쳐 기반 클래스를 가리키는 포인터를 만들어도 가리키는 메모리 공간이
	#9. 파생 클래스의 메모리 공간일 경우 파생 클래스의 멤버 함수를 호출할 수 있게된다.
*/

//#include <iostream>
//
//class A { public: virtual void func() { std::cout << "A" << std::endl; } };
//class B : public A { public: void func() { std::cout << "B" << std::endl; } };
//class C : public A { public: void func() { std::cout << "C" << std::endl; } };
//
//int main()
//{
//	int a = 10;
//// #. 정수형 변수 공간에 a라고 이름을 붙여주는 바인딩
//// #. 이 경우 이른 바인딩( Early binding )이 발생한다.
//
//	A* p = new C;
//	p->func();
//// #. 가상 함수 호출은 늦은 바인딩( Late binding )이 발생한다.
//// #. p의 객체가 실제로 무엇인지 알아야 하기 때문이다.
//
//	delete p;
//}

/* < 이른 바인딩( early binding ) & 늦은 바인딩( late binding ) > */

//#include <iostream>
//
//class Animal
//{
//public:
//	Animal() { std::cout << "Animal 클래스의 생성자가 불린다." << std::endl; }
//	virtual ~Animal() { std::cout << "Animal 클래스의 소멸자가 불린다." << std::endl; }
//// #. 기반 클래스의 소멸자는 가상 함수로 지정하지 않을 경우 파생 클래스의 소멸자가 호출되지 않는다.
//};
//class Dog : public Animal
//{
//public:
//	Dog() { std::cout << "Dog 가 집을 나왔다!" << std::endl; }
//	~Dog() { std::cout << "Dog 가 집에 들어왔다!" << std::endl; }
//// #. 기반과 파생으로 클래스를 구성하였을 경우 반드시 기반 클래스의 소멸자를 가상 함수로 지정해 주어야 한다.
//};
//
//int main()
//{	// 생성자는 기반 클래스 => 파생 클래스 순으로 호출된다.
//	Animal * p = new Dog;
//	delete p;
//	// 소멸자는 파생 클래스 => 기반 클래스 순으로 호출된다.
//}

/* --- < 상속과 복사 생성자 > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 복사 생성자는 특정한 객체를 넘겨주고 그 객체의 복사본을 생성하는 것이라 했다.							|
| 그런데 상속관계에서는 복사 생성자가 문제가될 수 있다. 인스턴스 생성 구조를 보면 가상 생성자를 만들 수 |
| 없다. 기반 클래스를 만들 때 이미 생성을 해야 파생 클래스를 만들기 때문에 순서상 기반 클래스 생성자를  |
| 만들 수 없다. C++에서는 가상 생성자를 허용하지 않기 때문에 가상 복사 함수를 만들어서 자기 자신을 복사 |
| 하도록 만들면 된다.																					|
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
*/

//#include <iostream>
//
//class Animal
//{
//private:
//	int mAge;
//
//public:
//	Animal() {}
//	Animal(int age) : mAge{ age }
//	{
//		std::cout << "Animal" << std::endl;
//	}
//	virtual ~Animal() {}
//// #. 복사 생성자는 특정한 객체를 넘겨주고 그 객체의 복사본을 생성하는 것이다.
//// #. C++에서는 가상 생성자를 허용하지 않기 때문에 가상 복사 함수를 만들어서 자기 자신을 복사하도록 해야 한다.
//	virtual Animal* Clone()
//	{
//		std::cout << "Clone Animal!!!" << std::endl;
//		return new Animal(*this);
//	}
//};
//class Dog : public Animal
//{
//public:
//	Dog() {}
//	~Dog() {}
//
//	Animal* Clone()
//	{
//		std::cout << "Clone Dog!!!" << std::endl;
//		return new Dog(*this);
//	}
//};
//
//int main()
//{
//	Dog john;
//	
//	Animal* clone = john.Clone();
//
//	delete clone;
//}

//#include <iostream>
//#include "Dog.h"
//// #. Dog헤더파일 안에 이미 Aniaml헤더파일이 있기 때문에 main에서는 Dog헤더파일만 등록해도 된다.
//
//int main()
//{
//	// #1. Dog클래스의 객체를 만드려면 우선 Animal클래스의 정보가 필요하다.
//	// #2. Animal클래스의 멤버가 모두 구성된 뒤에 Dog클래스의 멤버가 구성된다.
//	Dog happy;	// #3. 자식을 만들 때는 부모도 함께 만들어 진다.
//
//	happy.Sound();	// Animal 의 Sound 이지만 Dog 가 상속을 받앗고 또한 public 멤버함수이기 때문에 외부에서 사용이 가능핟.
//	happy.Roll();
//
//	// #. BREED는 Dog에 종속되어 있는 열거형 타입이다.
//	// #. public이기 때문에 외부에서 사용을 가능하지만 어디에 종속되어 있는지 반드식 입력해 줘야 한다.
//	Dog merry(5, 2, Dog::BREED::CHIHUAHUA);
//}

//#include <iostream>
//#include "Warrior.h"
//
//int main()
//{
//	Character* pHero = new Warrior;
//	pHero->Attack();
//// 파생 클래스의 메모리 공간을 할당 받을 때는 기반 클래스도 메모리 공간에 구성된다.
//// 다형성을 사용하여 가상( virtul )함수 Attack을 호출했다.
//
//	((Warrior*)(pHero))->DoubleSlash();
//// #. 현재 메인 함수에 생성된 객체 pHero는 Character포인터 이기 때문에 Warrior클래스의 특수 함수인 DoubleSlash를 호출할 수 없다.
//// #. pHero가 Warrior클래스의 DoubleShash를 호출하기 위해 형 변환을 실행할 것이다.
//// #. 힙( heap )공간에 생성된 객체는 Warrior이므로 위와 같은 형변환이 가능하다.
//// #. 현재 코드는 단순하기 때문에 아무런 의심 없이 형변환을 진행하고 실행할 수 있다. 
//// #. 그런데 만약 코드가 복잡하다면?
//
//	Warrior* pWarrior = static_cast<Warrior*>(pHero);
//// #. 어떤 타입을 어떤 타입으로 변환하였는지 명확하게 하고 싶다면 정적변환을 사용하면 된다.
//	if (pWarrior == nullptr)
//	{
//		std::cout << "Error!!!!!!!!!!!!!!!" << std::endl;
//	}
//	else
//	{
//		pWarrior->DoubleSlash();
//	}
//
//	pHero->Dead();
//	pHero->Reborn();
//
//
//	delete pHero;
//// 객체( 인스턴스 )의 생성은 1. 기반 2. 파생 순서로 메모리 공간에 구성된다.
//// 객체( 인스턴스 )의 소멸은 1. 파생 2. 기반 순서로 메모리 공간에서 소멸된다.
//}

/* --- < 형 변환 > --- */

/*
< 상향 변환( up-cast ) > : 파생 클래스 -> 기반 클래스
	#. 안전한 변환이라 암시적 변환으로 충분히 가능하다.
		=> Character* pHero = new Warrior;

< 하향 변환( down-cast ) > : 기반 클래스 -> 파생 클래스
	#. 런타임에 체크하지 않으면 결과를 알 수 없다.
		=> (Warrior*)pHero

< static_cast > : 컴파일타임에 형변환을 결정하는 연산자
	#. static_cast <new_type> ( expression ) : 정적으로 변환을 해준다.
$. early-binding = static-binding = compile-time-binding

< dynamic_cast > : 런타임에 동적으로 타입을 변환하는 연산자
	#. dynamic_cast < new_type > ( expression ) : 동적으로 변환을 해준다.
	#. 클래스의 포인터 및 참조형에서만 사용이 가능하다.
		#. 주어진 포인터를 대상 타입의 완전히 유효한 객체에 대한 포인터로 변환하는 것을 보장한다.
$. late-binding = dynamic-binding = run-time=binding

< reinterpret_cast > : 어떠한 형 변환도 강제로 수행하는 위험하지만 유용한 형 변환 연산자
	#. 객체의 자료를 바이너리 데이터로 해석한 다음 해당 타입으로 변환을 시도한다.
	#. 주로 데이터를 파일로 변환하거나 할때 사용하는 표기법이다.

< const_cast > : 상수를 변환해 준다.
	#. const 기호를 추가/제거가 가능하다.
	#. 단, 포인터 및 참조형만 가능하다.
*/

//#include <iostream>		// < Title : reinterpret_cast >
//
//class ClassA {};
//class ClassB {};
//
//int main()
//{
//	float myFloat = 10.0f;
//	std::cout << *reinterpret_cast<int*>(&myFloat);
//// #. 부동 소수점 표현을 위해 메모리 공간을 2진수로 변환한 다음 정수로 변환하기 때문에 예상치 못한 값이 나온다.
//
//	ClassA* a = new ClassA;
//	ClassB* b;
//	b = reinterpret_cast<ClassB*>(a);
//// #. 심지어 아무런 상관 없는 클래스도 강제로 변환한다.
//// #. 물론 안전은 보장하지 않는다.
//}

//#include <iostream>		// < Title : const_cast >
//
//void Print(char* text)
//{	// 함수의 매개 변수는 char포인터 자료형을 받아야 한다.
//	std::cout << text << std::endl;
//}
//
//int main()
//{	
//	char myString[]{ "Hello" };
//	
//	Print(const_cast<char*>("Hello"));
//// #. 함수로 넘겨주는 인자는 const char포인터 자료형이다.
//// #. "Hello"는 문자열에 대한 리터럴이라고 부른다.
//
//	Print(myString);
//}

/* --- < 인터페이스( Interface ) > --- */

/*
< 인터페이스 > : 순수 가상 함수들만 모여 있는 추상 클래스를 종종 다른 언어나 시스템에서는 인터페이스라 부른다.
	#. 사전적 의미로는 서로 다른 두 시스템의 접점이라는 뜻이다.
	=> USB : 컴퓨터의 데이터 입출력 단자에 연결하는 주변 기기들을 사용하기 쉽게 만든 외부 단자
	=> HDMI : 비디오/오디오등 모든 단자를 통합하여 컴퓨터 및 영상기기에서 출력을 처리하는 규약
		#. 서로 다른 제조사 간의 데이터 전송을 언제 어디서나 동일하게 보장해 주는 개념이 인터페이스다.
*/

/* --- < 이름공간( Namespace ) > --- */

/*
< 이름 공간 > : 내부 식별자들에 범위를 지정할 수 있는 별도의 공간

< using 지시자 > : 예를 들어 std::cout에서 std::와 같은 동일한 타이핑을 매번 하는 것을 간추릴 수 있다.
	=> using namespace std;
	#. 헤더 파일에서는 사용하면 않된다.
	#. 동일한 지역 식별자가 존재하면 구분이 되지 않아 컴파일 에러가 발생한다.
*/

//#include <iostream>
//
//namespace Game
//{
//	class Warrior
//	{
//	public:
//		void DoubleSlash() {}
//	};
//	void Print() {}
//}
//namespace GUI
//{
//	void Print() {}
//}
//// #. 이름 공간안에서 지정한 이름은 다른 이름 공간이나 전역 공간에서 만든 같은 이름과 중복되지 않는다.
//
//int main()
//{
//	Game::Warrior warrior;
//// #. 이름 공간에 접근하기 위해서는 ( :: ) 범위 해결 연산자를 사용해야 한다.
//
//	warrior.DoubleSlash();
//// #. warrior 같이 인스턴스화된 객체는 이름 공간에 소속되지 않게된다.
//
//	Game::Print();
//	GUI::Print();
//}

/* --- < 멤버 함수의 포인터 > --- */

/*
< 정적 멤버 함수 > : ret-type (*) (param-list)
	#. 예제 : using fptr = int (*) (int)
	#. 예제 호출 : fptr(3);

< 비 정적 멤버 함수 > : ret-type (class-name::*) (param-list)
	#. 예제 : using fptr = int (MyClass::*) (int)
	#. 예제 호출 : (instance.*fptr)(3);
*/

//#include <iostream>		// < Title : 일반 함수 포인터 >
//
//// #. 전역 함수의 포인터 : 반환값 + (포인터,이름) + (매개변수 종류)
//using FunctionPtr = int(*)(int);	// int (*f)(int x)
//// #. FunctionPtr은 int타입을 반환하고 매개 변수를 int타입으로 한 개 받는 포인터의 별칭이다.
//
//int Sigma(FunctionPtr f, int m, int n)
//{
//	int sum = 0;
//	for (int i = m; i <= n; i++)
//	{
//		sum += f(i);
//	}
//	return sum;
//}
//
//// f(x) = x
//int NormalFunction(int x) { return x; }
//
//// f(x) = x ^ 2
//int SquareFunction(int x) { return x * x; }
//
//int main()
//{
//	std::cout << Sigma(NormalFunction, 1, 10) << std::endl;
//
//	int (*S)(FunctionPtr, int, int) { Sigma };
//// #. S라는 이름의 함수 포인터를 선언 및 Sigma함수를 대입하여 초기화
//
//	std::cout << S(SquareFunction, 1, 10) << std::endl;
//}

//#include <iostream>		// < Title : 정적 멤버 함수의 포인터 >
//
//class MyFunctions
//{
//public:
//	static int NormalFunction(int x)
//	{
//		return x;
//	}
//	static int SquareFunction(int x)
//	{
//	return x * x;
//	}
//// #. static멤버 함수는 class가 소유하고 있다.
//// #. 이 정적 멤버 함수를 포인터로 지정하여 사용할 예정이다.
//};
//
//using FunctionPtr = int(*)(int);
//
//int Sigma(FunctionPtr f, int m, int n)	// 전역 함수 Sigma
//{
//	int sum = 0;
//	for (int i = m; i <= n; i++)
//	{
//		sum += f(i);
//	}
//	return sum;
//}
//
//int main()
//{
//	std::cout << Sigma(&MyFunctions::NormalFunction, 1, 10) << std::endl;
//// #1. 함수 포인터로 전달할 매개 변수는 class소유의 static멤버 함수이다.
//// #2. 때문에 ( :: ) 범위 해결 연산자를 통해서 클래스에 속해있다는 것을 알려주어야 한다.
//// #3. 전역 함수의 포인터는 전달하는 함수 인자를 자동적으로 함수 포인터 형식으로 변환시켜준다.
//// #4. 그러나 멤버 함수는 그렇지 않기 때문에 멤버함수의 주소( & )를 넘겨주어야 한다.
//}

//#include <iostream>		// < Title : 비 정적 멤버 함수의 포인터 >
//
//class MyFunctions
//{
//public:
//	int NormalFunction(int x)
//	{
//		return x;
//	}
//	int SquareFunction(int x)
//	{
//		return x * x;
//	}
//// #. 비 정적 멤버함수는 인스턴스가 소유하고 있다.
//};
//
//using FunctionPtr = int(MyFunctions::*)(int);
//// #. 포인터가 클래스 내부에 있다는 것을 알려줘야 한다.
//
//int Sigma(MyFunctions& instance, FunctionPtr f, int m, int n)
//{
//	int sum = 0;
//	for (int i = m; i <= n; i++)
//	{
//		sum += (instance.*f)(i);
//		// 멤버 함수 호출은 인스턴스에 (.)점 연산자를 사용한다는 것을 기억해라
//		// 멤버 함수를 가리키는 포인터 f에 접근하기 위해 *f로 입력한다.
//	}
//	return sum;
//}
//
//int main()
//{
//	MyFunctions mf;
//	Sigma(mf, &MyFunctions::NormalFunction, 1, 10);
//// #. 비 정적 멤버 함수는 인스턴스가 소유하고 있기 때문에 인스턴스를 통해 호출해야 한다.
//}

/* --- < 템플릿( Template ) > --- */

/*
< 템플릿 >
	#. 타입을 일반화( Generalization )하여 어떠한 타입도 처리할 수 있도록 만들고
	#. 프로그래머가 원하는 타입으로 특수화( Specialization )를 진행한다.

< 템플릿 함수 > : 함수를 호출할때, 컴파일러는 T가 어떤 타입일지 자동으로 추론해서 함수를 만들어 준다.
	=> template < typename T1, typename T2 ... >

< 템플릿 클래스 > : 클래스를 호출할때, 컴파일러는 멤버 T가 어떤 타입일지 자동으로 추론해서 클래스를 만들어 준다.
	=> template < class T1, class T2 ... >

< 템플릿 주의 사항 >
	#. 자동이 아니다. 많은 타입으로 특수화를 하면 그 만큼의 코드가 추가된다.
	#. 템플릿 선언과 정의는 같은 파일에 존재해야 한다.
*/

//#include <iostream>		// < Title : 템플릿 함수 >
//
//// #1. 함수 타입을 일반화시킨다.
//template <typename T>
//T Function(T x, T y)
//{	
//// #3. 함수가 호출되어 실행이 되면 이 함수 코드가 특수화된 타입으로 바뀐 버전이 암시적으로 복사된다.
//	T sum;
//	sum = x + y;
//	return sum;
//// #4. 다양한 타입으로 함수를 호출하면 할 수록 코드의 용량이 커진다는 단점이 있다.
//}
//
//int main()
//{	
//// #2. 함수가 호출되면서 특수화가 진행된다.
//// <> 부등호로 타입을 묶어주지 않아도 실행된다. 그러나 코드를 읽기 어려워짐으로 입력해주는 것이 좋다.
//	std::cout << Function<int>(10, 50) << std::endl;
//	std::cout << Function<float>(1.1f, 1.1f) << std::endl;
//
//	std::cout << Function(1, 1) << std::endl;
//	std::cout << Function(2.2f, 2.2f) << std::endl;
//}

//#include <iostream>		// < Title : 템플릿 함수 >
//
//// #1. 템플릿 함수를 정의 하여 지정한 변수들의 타입을 일반화 시킨다.
//template<typename T>
//void SequentialSort(T input[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (input[i] > input[j])
//			{
//				T temp = input[i];
//				input[i] = input[j];
//				input[j] = temp;
//			}
//		}
//	}
//}
//
//// #2. 템플릿 함수를 정의 하여 지정한 변수들의 타입을 일반화 시킨다.
//template<typename T>
//void PrintArray(T input[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << input[i] << " ";
//	}
//	std::cout << std::endl;
//}
//
//int main()
//{	
//// #3. 정렬을 진행할 배열을 초기화 해준다.
//	int integerArray[]{ 3,2,1,5,4 };
//	float floatArray[]{ 1.1f,0.3f,1.2f,4.0f,2.5f };
//
//// #4. int 타입으로 특수화 하여 템플릿 함수를 호출한다.
//	SequentialSort<int>(integerArray, 5);
//	PrintArray<int>(integerArray, 5);
//
//// #5. float 타입으로 특수화 하여 템플릿 함수를 호출한다.
//	SequentialSort<float>(floatArray, 5);
//	PrintArray<float>(floatArray, 5);
//}

//#include <iostream>		// < Title : 클래스 템플릿 >
//
//class Party {};
//
//// #1. 클래스의 멤버 타입을 일반화 한다.
//template<class T>
//class LinkedList
//{
//	T* pHead;
//	T* pTail;
//public:
//	void Print() { std::cout << "gold"; }
//};
//
//int main()
//{	
//// #2. 클래스의 멤버 타입을 'Party'로 지정하여 특수화하고 객체 hero로 만들어 준다.
//	LinkedList<Party> hero;
//	hero.Print();
//}

//#include <iostream>		// < Title : 문제 상황 >
//
//// MyClass.h라고 가정
//template <typename T>
//class MyClass {
//	T mValue;
//public:
//	void Function(T arg);
//};
//// #. 멤버 변수 mValue는 문제가 없다 문제는 멤버 함수에서 발생한다.
//
//// MyClass.cpp라고 가정
//template <typename T>
//void MyClass<T>::Function(T arg) { }
//// #1. 이 라인까지는 템플릿이 일반화만 되어있는 상태고 특수화가 진행되지 않은 상황이다.
//
//// main.cpp라고 가정
//int main()
//{
//	MyClass<int> c1;
//	c1.Function(10);
//// #2. 객체가 멤버 함수를 호출할 때 '함수를 찾을 수 없다'라는 링크 에러를 발생 시킨다.
////		=> c1이 멤버 함수를 호출하면 MyClass.h에 있는 Function은 (int arg)타입으로 특수화가 진행된다.
////		=> Function(int arg)함수는 정의가 있는 .cpp로 가서 자기 자신에 대한 정의를 찾으려 한다.
////		=> 그런데 MyClass.cpp에 있는 Function은 (T arg)인 일반화 형태 그대로인 상태이다.
//// #3. 이와 같은 문제를 해결하려면 .h에 일반화한 멤버 함수를 정의 해주어야 한다.
//}

/* --- < 명시적 생성자( explicit constructor ) > --- */

/*
< 명시적 생성자 > : 클래스 객체를 만들때 생성자를 명시하도록 지정해 놓는 키워드
*/

//#include <iostream>
//
//class MyClass
//{
//public:
//	int mInt;
//
//// #. 객체를 만들때 클래스 타입을 명확히 명시하도록 강요하는 코드
//	explicit MyClass(int val) : mInt{ val } {}
//};
//
//int main()
//{
//	MyClass c = 1;	// 암시적 생성자 : MyClass c = MyClass(1)가 explicit으로 인해 맊힌다.
//
//	MyClass c1 = MyClass(1);	// 명시적으로 클래스 생성자를 통해 복사 대입한다는 것을 알려주어야 한다.
//}