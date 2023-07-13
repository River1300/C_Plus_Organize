/* ----- < �ڷᱸ�� �Ʒ� > ----- */
//
//
//
//
//
/* --- < ����( Stack ) > --- */

/*
< ���� > : LIFO( Last In First Out )�� Ư���� ���� �ڷ� ������.
	#. push : ���� ��ܿ� ���� ���� �ִ´�.
	#. pop : ���� ����� ���� ������ �����ش�.
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
//// #. �����̶�� Ư�� ������ �ε����� ����( + )�� ������ ���� ������ �����ؾ߸� �Ѵ�.
//// #. �ε����� 0���� ������ ��� 0�� �ڸ��� ��� ������ -1�� �ʱ�ȭ �Ѵ�.
//};
//void PrintInfo()
//{
//	std::cout << "<STACK>" << std::endl;
//	std::cout << "[1] push" << std::endl;
//	std::cout << "[2] pop" << std::endl;
//	std::cout << "M--------AAA--------M" << std::endl;
//}
//void PrintStack(Stack& stack)
//{	// #. ���ÿ� ����� ���� ����Ѵ�.
//	std::cout << "---- stack ----" << std::endl;
//	if (stack.topIndex < 0)
//	{	// topIndex�� -1�� ��� ���þ��� ����ִ�.
//		std::cout << "----------------" << std::endl;
//		std::cout << "EMPTY" << std::endl;
//		return;
//	}
//	for (int i = stack.topIndex; i >= 0; i--)
//	{	// ������ ���� �Ʒ��� ����� ������.
//		std::cout << stack.container[i] << std::endl;
//	}	std::cout << "----------------" << std::endl;
//}
//void Push(Stack& stack, int value)
//{	// #. ���ÿ� ���Ҹ� �״´�.
//	if (stack.topIndex >= STACK_SIZE - 1)
//	{
//		std::cout << "������ ���� á���ϴ�." << std::endl;
//		return;
//	}
//	stack.container[++stack.topIndex] = value;
//}
//void Pop(Stack& stack)
//{	// #. ���ÿ� �׿��ִ� ���Ҹ� ������.
//	if (stack.topIndex < 0)
//	{
//		std::cout << "������ ��� �ֽ��ϴ�." << std::endl;
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
//			std::cout << "�߸��� ��ɾ� �Դϴ�!" << std::endl;
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

/* --- < ť( Queue ) > --- */

/*
< ť > : FIFO( First In First Out )�� Ư���� ���� �ڷ� ������.
	#. enqueue(put, push) : ���� �ϴܿ� ���� ���� �ִ´�.
	#. dequeue(get, pop) : ���� ����� ���� ������ ���� �ش�.
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
//{	// #. ���� ť�� ����� ���� ����ü ����
//	int container[QUEUE_SIZE]{};
//	int head{};
//	int tail{};
//// #. head == tail�� ť�� ��� �ִٴ� ��
//// #. (tail+1)%�迭 ũ�� == head�� �迭�� ���� á�ٴ� ��
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
//	{	// #. �迭�� �ε����� �迭 ũ�⸦ �Ѿ�� ���ϰ� �Ѵ�.
//		i = (i + 1) % QUEUE_SIZE;
//		std::cout << queue.container[i] << " ";
//	}	std::cout << std::endl << "------------" << std::endl;
//}
//void Enqueue(Queue& queue, int value)
//{	// #. ť�� ���Ҹ� �����Ѵ�.
//	if ((queue.tail + 1) % QUEUE_SIZE == queue.head)
//	{
//		std::cout << "ť�� ���� á���ϴ�!!!" << std::endl;
//		return;
//	}
//	queue.tail = (queue.tail + 1) % QUEUE_SIZE;
//	queue.container[queue.tail] = value;
//}
//void Dequeue(Queue& queue)
//{	// #. ť���� ���Ҹ� �����´�.
//	if (queue.head == queue.tail)
//	{
//		std::cout << "ť�� ������ϴ�!!!" << std::endl;
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
//			std::cout << "�߸��� ��ɾ� �Դϴ�." << std::endl;
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

/* --- < ���� �ڷᱸ��( Dynamic Data Structure ) > --- */

/*
< ���� ���� ����Ʈ( Single Linked List ) > : �Ϸķ� ������ ���� �ڷᱸ���� �� �������θ� ����
	#. ���� : ���ο� ���Ҹ� �Ҵ��ؼ� ���� �ڿ� �ٿ� �ش�.
	#. ���� : ó������ ������( ��ȸ : Traverse ) ���Ҹ� ���� �����ָ� �ȴ�.
	#. �˻� : ��ȸ�ϸ鼭 ������ ���Ҹ� ã�Ƽ� ��ȯ�Ѵ�.
	#. ���� : Ư���� ���Ҹ� �����ϰ� ������� �̾��ش�.
	#. ���� : Ư���� ���� �ڿ� �����ϰ� ������� �̾��ش�.
	#. < �غ� >
		=> head : ����Ʈ�� ����
		=> tail : ����Ʈ�� ��
		=> next : ���� ���Ҹ� ����Ŵ

< ���� ���� ����Ʈ( Double Linked List ) > : �Ϸķ� ������ �ڷᱸ���� �� �������� ����
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
//			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
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

/* ----- < ��ü ������ ���α׷��� > ----- */
//
//
//
//
//
/* --- < ������ ���α׷���( Procedural Programming ) > --- */

/*
< ������ ���α׷��� > : ���α׷��� ����� �Լ������� �������� �ۼ��ϴ� ��
	#. �Լ��� �ٸ� ���� ���ν���( Procedure )��� �θ���.
*/



/* --- < ��ü ���� ���α׷���( Object Oriented Programming ) > --- */

/*
< ��ü( Object ) > : ���� ��Ȱ�� �ѷ��� ����� �ϳ��� ��ü��� �� �� �ִ�.
	#. ����( STATE )�� �ൿ( BEHAVIOR )�� ������ �ִ�.
< ��ü ���� ���α׷���( OOP ) > : ���� ���踦 �𵨸� �ϵ��� ���α׷����� �ϴ� ���

< Ŭ����( Class ) > : ��ü�� ǥ���ϱ� ���� ���赵, �Ǵ� Ʋ
	#. Ŭ������ �߻����� ������ �� �� �ְ�, Ŭ������ ���� ������ ��ü�� ��ü���� ��ü�̴�.

< �ν��Ͻ�ȭ( Instantiate ) > : �߻����� Ŭ�������� ��ü���� ��ü�� �����ϴ� ��
	#. �ν��Ͻ�( Instance ) : �ν��Ͻ�ȭ�� ���� ������� ��ü
	#. Ŭ������ �ܼ��� û�����뵵�� Ÿ���� ����� �� ���̸�, ���� ���� �޸𸮿� �̸��� �ٿ� �Ҵ�� �ν��Ͻ�( ��ü )�� ��� �ִ�.
*/

/* < OOP�� Ư¡ > */

/*
< ĸ��ȭ( Encapsulation ) > : ���ο� ������ ��� �ִ��� �𸣰� �ϴ� ��
	#. ���ʿ��� ������ �����Ű�� �ʰ� �ΰ��� ����� ���ܵδ�, ���� ������ �������� ���Ǳ⵵ �Ѵ�.

< ���( Inheritance ) > : �� ��ü���� ������踦 ������ �ִ�.
	#. ����̶�� Ŭ������ �����̶�� ���� Ŭ����( ���� )�� ������ �ִ�.
	#. �̷��� ���� ������ ���( �Ļ� )�̶� �θ���.

< ������( Polymorphism ) > : �ϳ��� ��ü�� ��쿡 ���� �ٸ� ���·� ��޵� �� �ִ�.
	#. ����� ����� �̸鼭 ���ÿ� �����̴�. ��Ȳ�� ���� ������ �Ҹ��⵵ �ϰ� ����̶�� �Ҹ��⵵ �ϰ�, �����̶�� �Ҹ��⵵ �Ѵ�.
	#. �����͸� ���� ��ü�� �����ϴ� �޸𸮸� ����Ű�� ������ �پ��ϰ� �ؼ��� �� �ִ�.
*/

//#include <iostream>
//
//class Dog {	// #. Dog��� �߻����� ���赵, Ʋ
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
//{	// #. Dog���赵�� ���� ������� ��ü���� ��ü puppy
//	Dog puppy;
//
//	puppy.mKind = "��� ��Ʈ����";
//	puppy.mAge = 3;
//	puppy.mColor = "��";
//}

//#include <iostream>
//
//class Animal {	// #. Animal�̶�� ���� ����( Parent Class )
//public:
//	int mAge;
//	int mWeight;
//	int mHeight;
//
//	void Eat();
//	void Walk();
//	void Sleep();
//};
//class Dog : public Animal {	// #. Animal�� ������ ��ӹ��� Dog��� ���� ����( Child Class )
//public:
//	std::string mKind;
//
//	void Bark();
//	void Rolling();
//};
//
//int main()
//{	// #. DogŬ������ AnimalŬ������ ����� ����� �� �ִ�.
//	Dog marry;
//	marry.mAge = 3;
//	marry.mKind = "���踣��";
//// #. marry�� �ν��Ͻ�ȭ�� ����Ǹ� ���� DogŬ������ �Ҹ���.
//// #. DogŬ������ �ڽ��� ����� �����ϱ� ���� AnimalŬ������ �θ���.
//// #. AnimalŬ������ ���� �޸� ������ �����ǰ� �� ���� DogŬ������ �޸� ������ �����ȴ�.
//// #. �׷��Ƿ� marry�̸�ǥ�� ���� �޸� �������� Animal�� Dog�� ����� ��� �����Ǿ� �ִ�.
//}

//#include <iostream>
//
//class Animal {	// #. Animal�̶�� ���� ����( Parent Class )
//public:
//	int mAge;
//	int mWeight;
//	int mHeight;
//
//	void Eat();
//	void Walk();
//	void Sleep();
//};
//class Dog : public Animal {	// #. Animal�� ������ ��ӹ��� Dog��� ���� ����( Child Class )
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
//	happy->mKind = "���޶�Ͼ�";
//// #. happy�� ����Ű�� �޸� ������ Dog�� AnimalŬ������ ����� ������ �����̴�.
//// #. dragon�̶�� �����ʹ� AnimalŸ���̱� ������ AnimalŬ������ ����� ����Ű�Եȴ�.
//	Animal* dragon = happy;
//	dragon->Eat();
//
//	delete happy;
//}

/* < ��Ÿ ��� > */

/*
< ������( Constructor ) > : ��ü�� ������ �� �Ҹ��� Ư�� �Լ�
< �Ҹ���( Destructor ) > : ��ü�� ����� �� �Ҹ��� Ư�� �Լ�

< ���� ���( Static Member ) > : Ŭ������ ���ͽ��Ͻ�ȭ �ؼ� ��ü�� ������ �ʾƵ� �ٷ� Ŭ�������� �ٷ� ����� �� �ִ�.
	#. ���¿� �ൿ�� �� ��ü( �ν��Ͻ� )�� ������ ������ ���������.
	#. DogŬ������ 'happy'�� ��üȭ �ϸ� ���¿� �ൿ�� 'happy'��� ��ü�� ���ӵȴ�.
	#. �̷��� Ư���� �ݴ�Ǵ� ���� ���� ����� static�̶�� Ű���尡 �ٴ´�.

< �߻� Ŭ����( Abstract Class ) > : �߻����� ������ ��� �ִ� Ŭ������ �����θ� �ν��Ͻ�ȭ �� �� ����.
	#. �߻� Ŭ������ �ν��Ͻ�ȭ �Ϸ��� �߻� Ŭ�����κ��� ����� �޾� �ڽ� Ŭ�������� �ν��Ͻ�ȭ �ؾ� �Ѵ�.
	#. �߻� Ŭ������ ���� �ڽ� Ŭ�������� ������ �� �ִ� �������� ���Ǹ� �����Ѵ�.
		#. �߻� Ŭ������ �߻� ���¿� �߻� �ൿ�� ���� �� �ִµ� �� �߻� �޼���� ������ ���� ���Ǹ� ����ִ�.
			#. �߻� Ŭ�����κ��� ����� ���� �ڽ� Ŭ������ ������ �� �߻� �޼��带 ��������� �Ѵ�.

< �������̽�( Interface ) > : ���� �ٸ� �� ��ġ�� ���ӽ����ִ� �κ�
	#. A�� Ű���带 USB�� ��ǻ�Ϳ� ������ B�� Ű���带 ������ Ÿ������ ���������� �۵��Ѵ�.
		#. ǥ�� �Է� ����� ���س��� �̸� �� Ű����簡 �԰��� ��Ű���� ������ ������� �����Ѵ�.
			#. �̷��� �԰��� �������̽���� �ϸ� C++������ �߻� Ŭ������ ����Ͽ� �����Ѵ�.
		#. �������̽��� ���´� ���� �ൿ�� ������, ���� �ൿ�� ���������� �ʴ´�.
			#. �� �� �����⸸ ������ ���� ������ ��ӹ��� Ŭ�������� ������ �ش�.

< �����ε�( Overloading ) > : �ϳ��� �ൿ�� �Ű������� �ٸ��� �����Ͽ� ���� ���� �ൿ�� �����ϴ� ��

< �������̵�( Overriding ) > : �θ� Ŭ������ �ൿ�� �ڽ� Ŭ�������� ������ �ؼ� �θ� Ŭ������ �ൿ�� �����Ѵٴ� ��

< ������ �����ε�( Operator Overloading ) > : �ǿ����ڸ� ���� �ٸ��� �����ؼ� �� ��ü�� �´� �����ڸ� ����ٴ� ��
*/

/* --- < POD( Plain Old Data ) > --- */

/*
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
| C���� �����Ǵ� Ÿ�Ե��� POD��� �θ���. �����ϰ� ������ ������, �ܼ��� �޸� ������	 |
| ������ ��ü�� ���Ѵ�. POD�� ������ ���� �޸𸮿��� �ٸ� �޸𸮷� ���糪 �̵��� �ſ� ������ |
| ��ǻ�� ���ɿ� ū �δ��� ���ٴ� ���̴�.													 |
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
< C++�� POD >
	#. Standard Layout Type( ǥ�� ���̾ƿ� Ÿ�� ) : C���� ���� ���̾ƿ�
	#. Trivial Type( ������ Ÿ�� ) : ����ڰ� ������ �ſ� ������ �ڷ� ����
*/

//#include <iostream>
//// #. POD�� Trivial Type�� ���ɿ� ������ �ִ�.
//class ClassA
//{
//// #. �׷��� ����ڰ� Ŭ������ �����ڸ� ���̸� Trivial Type�� �ƴϰ� �ȴ�.
//public:
//	ClassA() {}
//};
//class ClassB
//{
//public:
//	// #. POD�� �ǰ� ���ؼ��� ( = default )Ű����� �Ͻ��� �⺻ �����ڸ� ����ؾ��Ѵ�.
//	ClassB() = default;
//};
//
//int main()
//{
//	std::cout << std::is_trivial<ClassA>::value << std::is_pod<ClassA>::value << std::endl;
//	std::cout << std::is_trivial<ClassB>::value << std::is_pod<ClassB>::value << std::endl;
//}

/* --- < ���� ��ü( Anonymous Object ) > --- */

//#include <iostream>
//
//int Square(int x)
//{
//	return x * x;
//// $2. �Ϲ� Ÿ�� ���� ��ü��� �Ѵٸ�, x * x �� ��� �� �� �ִ� �ӽ� ��ü�� �ʿ��ϴ�.
//// $3. ���� ��� int temp = x * x;  return temp;
//// $4. �����Ϸ� ���ο����� �� �۾��� �̷������. �ٸ�, �ӽ÷� ����ϴ� ��ü�� �ش� �ڵ� �̿ܿ��� ����� �ʿ䰡 �����Ƿ�, ���� �������� ������ �ʰ� ����Ѵ�.
//// $5. �̸� �̸����� ��ü( anonymous object )��� �θ���.
//}
//
//int main()
//{
//	int x{ 2 };
//// $1. < int x(1); > : ���ݱ��� ����� �Ϲ� Ÿ�Ե�( int, float... ) ���� ���ο����� ��ü( x ��� �̸��� ��ü )�� ó���ȴ�.
//
//	std::cout << Square(x) << std::endl;
//	// #1. Square(x)�Լ��� ȣ���Ѵ�.
//	// #2. Square(x)���� x�� ���ͷ� 2�� ġȯ�ȴ�. �� �������� ���ͷ� 2�� ������ ��ü�� ����ȴ�.
//	// #3. ������ ��ü�� ����� 2�� Square(int x)�� �Ű����� x�� ����ȴ�. �� �������� [�Ű����� x]�� [���� x]�� ���� �ٸ� ��ü�� �з��ȴ�.
//	// #4. x * x �� ������ ��ü�� �����Ѵ�.
//	// #5. ���� ��ü�� ��ȯ�ϰ� �Լ��� ����Ǹ� ���� ��ü�� �Ҹ�ȴ�. 
//}

//#include <iostream>
//
//int main()
//{
//	int x{ 2 };
//	int y{};
//
//	// 1. x + x�� ���ͷ� 2 + 2�� ġȯ�Ѵ�.
//	// 2. ���� ��( 4 )�� ���� ��ü�� �����Ѵ�.
//	// 3. ���� ��ü�� ��ȯ( ��� )�ϰ� �ش� ������ ������ �Ҹ�ȴ�.
//	std::cout << x + x << std::endl << std::endl;
//
//	// 1. x + x�� ���ͷ� 2 + 2�� ġȯ�Ѵ�.
//	// 2. ���� ��( 4 )�� ���� ��ü�� �����Ѵ�.
//	// 3. ���� ��ü�� y�� �����ϰ� �ش� ������ ������ �Ҹ�ȴ�.
//	y = x + x;
//}

//#include <iostream>
//
//// #2. �Ű����� x�� main�� x�� ���ٰ� �� �� �ִ�.
//const int& Square(int& x)
//{
//	return x * x;
//// #3. x * x�� ǥ�������� ���� ������ ��ü�� ���������� ���� ��� ������ ��ü�� �ڵ������� ����ȴ�.
//// #4. �� ��ȯ�Ǵ� ���� ���������� ���� �Ű����� x�� ���� ���� ��ü��.
//// #5. �� �Լ��� ��ȯ Ÿ���� �������̴�. �ּ� ���� ���·� ��ȯ �Ѵٴ� ���ε� �� �ּ� ���� �Լ��� ����Ǹ� �������.
//// #6. �������� ������ ��ü�� �޾Ƶ��� �� ���� ������ const�������� ��ȯ�ؾ� �Ѵ�.
//}
//
//int main()
//{
//	int x = 2;
//	std::cout << Square(x) << std::endl;
//// #1. Square()�Լ��� ȣ���ϴµ� ���ڷ� �������� ���� x��� ��ü�� �ּ� ���̴�.
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
//// #. �Ű����� c�� �������ε� �������� R_Value�� ���� ���Ѵٴ� Ư���� �ִ�. �� ������ ��ü�� ���� ���Ѵ�.
//// #. �׷��Ƿ� �Ű����� c�� ��� ���������� �ٲپ��ش�.
//	MyClass operator+(const MyClass& c)
//	{	// mValue = c1, c.mValue = c2
//		// ��ȯ������ MyClassŸ���� ���� ��ü( �ν��Ͻ� )�� �����Ǿ���.
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
//// #. c1�� ������ �Լ��� ȣ���ϰ� c2�� ���ͷ� 2�� ġȯ�� �� ���� ��ü�� �����Ͽ� ���ڷ� ������.
//
//	std::cout << "------ * ------" << std::endl << std::endl;
//	std::cout << "       " << (c1 + c2).mValue << std::endl;
//
//	std::cout << "------ * ------" << std::endl << std::endl;
//	MyClass c3{ c1 + c2 };
//}

/* ----- * ----- < ��ü��? > ----- * ----- */

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
//// animal������ ���� �̸� �ʿ�� �ϴ� �Լ��鿡��
//	Animal cat{ "ring", 2, 10, 10, 10 };
//	play(cat);
//// �̿� ���� ������ �־����ϴ�.
//// �׷���, ������ ������ ���� play�Լ��� ���ڷ� �����ϴ� ���� �ſ� �����غ��Դϴ�.
//// ��ġ ���þƽ� ���� ó�� "Play�� Animal�� �մϴ�!" ��� �� �� �ִµ�,
//// ����� "Animal�� Play�� �Ѵ�" �� �� �±� ����������.
//// �ٽ� ���ؼ� Animal��ü�� Play�� �ϴ� ������, Play�� Animal�� ���ִ� ���� �ƴմϴ�.
//}

//#include <iostream>
//// ���� Animal ��ü�� Play�� �Ѵ� ��� ������ �����ϰ� �ȴٸ�, 
//// ������ ���� ������ �� ���� ���Դϴ�.
//class Animal {
//public:
//	void play() {
//		std::cout << "dog";
//	}
//};
//
//int main()
//{
//// �̷��� �ϸ� play�Լ��� animal�� ���ڷ� ���� �ʾƵ� �˴ϴ�.
//// �ֳ��ϸ� ���� play�ϴ� ���̱� ������ �� ������ �̹� play�Լ��� �� �˰� �ֱ� �����Դϴ�.
//// play�Լ��� ���� ���µ�, ���� �� ü���̳�, ����� ������ �ǰ��� ���� ���� 
//// ��� �� �� �ֱ� ������ ���� ���� ������ ó���� �� �� �ְ� �Ǵ� ���Դϴ�.
//	Animal cat;
//	cat.play();
//// ��, animal�� �ڽ��� ���¸� �˷��ִ� ����(variable)��, �ڽ��� �ϴ� �ൿ��(play,sleep���)
//// �� �����ϴ� �Լ�(method)��� �̷�����ٰ� �� �� �ֽ��ϴ�.
//}

/*
��������� ��ü�� ������ ���� ���ǵ˴ϴ�.

��ü��, ������� ���� �ڷ��� �̷���� ����Ʈ���� ��� �̴�.
�� �� ��ü�� ���� ���迡���� �����ϴ� �͵��� ��Ÿ���� ���ؼ���
�߻�ȭ(abstraction)��� ������ �ʿ��մϴ�.
��ǻ�� �󿡼� ���� ���踦 100% ��Ÿ�� �� ���� ���̱� ������,
�����ϰ� ��ǻ�Ϳ��� ó���� �� �ֵ��� �ٲٴ� ���ε�,

���� �� �ڵ����� ��� '��ȭ�� �Ѵ�', '���ڸ� ������' �� ���� �͵���
'�ڵ����� �ϴ� ��' �̹Ƿ� �Լ��� �߻�ȭ��ų �� �ְ�,

�ڵ����� ���¸� ��Ÿ���� �͵�,
���� �� �ڱ� �ڽ��� ��ȭ ��ȣ�� ���͸� �ܷ� ���� ���� ������ �߻�ȭ��ų �� �ֽ��ϴ�.

�̿� ���� ��� ��ü�� �ڱ� ���� ������ ��Ÿ���� �������,
�̸� ������ ��� �۾��� �ϴ� �Լ���� �ѷ��ΰ� �ִٰ� ���ø� �˴ϴ�.

�����, �̷��� ��ü�� ������ �Լ����� ���� �ν��Ͻ� ����(instance variable)��
�ν��Ͻ� �޼ҵ�(instance method)��� �θ��� �Ǵµ�,
�׳� �˰� ��ô� ������ �Լ��� ������ ������ �����Ͻø� �˴ϴ�.

������ �ν��Ͻ� �޼ҵ��� �ϸ�"�� �׳� ��ü�� ���ǵǾ� �ִ� �Լ�����"��� �����Ͻø� �˴ϴ�.
*/

//#include <iostream>
//// �ܺο��� ��� ��ü�� �ν��Ͻ� ������ ���� �ٲ��� ���ϰ� 
//// ���� ��ü�� �ν��Ͻ� �Լ��� ���ؼ��� �����ϴٴ� ��������
//// (���� �׻� �̷��� �ش������� �Ұ��� �� ���� �ƴϰ� ��� ����ڰ� ������ �� �ֽ��ϴ�) 
//// �̸� �ܼ��� �ڵ�� ǥ���Ѵٸ�, ������ Animal�� food�� �ٲ۴ٰ� �� ��
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
//// �̷��� �ȴٴ� ���Դϴ�.
//// �ϴ� animal.food += 100; ��ü�� �ܺο��� animal�̶�� '��ü'�� '�ν��Ͻ� ����'��
//// '����'�����ϴ� ���̱� ������ �Ұ����� ���̰�, 
//// �Ʒ��� animal.increase_food(100); �� ��� animal��ü�� '�ν��Ͻ� �Լ�'�� ���ؼ� 
//// ���� �����ϴ� ���̱� ������ ������ ��������.
//// �̿� ���� �ܺο��� ���� �ν��Ͻ� ������ ���� �ٲ� �� ���� 
//// �׻� �ν��Ͻ� �޼ҵ带 ���ؼ� ���������� �����ϴ� ���� 
//// ĸ��ȭ(Encapsulation)��� �θ��ϴ�.
//}

/*
�� ������ ó�� ����� �� �̰� �� �ʿ��ϳİ� �����Ͻô� �е��� �����ϴ�.

���� ĸ��ȭ�� ���� �ؾߵ� ������ ��á���ŵ��.
�׳�, animal.food += 100; �ϳ� animal.increase_food(100); �ϳ�
�ű⼭ �ű����� ��� ������ ������.

�ϴ� ���⼭�� ĸ��ȭ�� ������ ���ؼ��� ���߿� �����ϰ����� �����ϰ� �����ڸ�,
"��ü�� ���������� ��� �۵��ϴ��� ���� ����� �� �˰� �ȴ�"
��� �� �� �ֽ��ϴ�.

������ animal.increase_food(100); �� �ϸ�
���������� food���� ���� 100�����ϴ°� �Ӹ��� �ƴ϶�
�����Ե� �ٲ� �� �ְ�, �ູ���� �ö� �� �ְ� ��� �������� �۾����� �Ͼ������.

���� increase_food�Լ��� ������� �ʾҴٸ� �������� ó���� ���α׷��Ӱ� ���� ���־�� �մϴ�.
*/