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

#include <iostream>
// #. POD와 Trivial Type은 성능에 관련이 있다.
class ClassA
{
// #. 그런데 사용자가 클래스에 생성자를 붙이면 Trivial Type이 아니게 된다.
public:
	ClassA() {}
};
class ClassB
{
public:
	// #. POD가 되게 위해서는 ( = default )키워드로 암시적 기본 생성자를 명시해야한다.
	ClassB() = default;
};

int main()
{
	std::cout << std::is_trivial<ClassA>::value << std::is_pod<ClassA>::value << std::endl;
	std::cout << std::is_trivial<ClassB>::value << std::is_pod<ClassB>::value << std::endl;
}