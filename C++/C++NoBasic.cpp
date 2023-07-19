/* ----- < ÀÚ·á±¸Á¶ ÈÆ·Ã > ----- */
//
//
//
//
//
/* --- < ½ºÅÃ( Stack ) > --- */

/*
< ½ºÅÃ > : LIFO( Last In First Out )ÀÇ Æ¯¼ºÀ» °¡Áø ÀÚ·á ±¸Á¶´Ù.
	#. push : °¡Àå »ó´Ü¿¡ °ªÀ» Áı¾î ³Ö´Â´Ù.
	#. pop : °¡Àå »ó´ÜÀÇ °ªÀ» ²¨³»¾î µ¹·ÁÁØ´Ù.
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
//// #. ½ºÅÃÀÌ¶ó´Â Æ¯¼º ¶§¹®¿¡ ÀÎµ¦½ºÀÇ Áõ°¡( + )±× ´ÙÀ½¿¡ °ªÀÇ ´ëÀÔÀ» ½ÇÇàÇØ¾ß¸¸ ÇÑ´Ù.
//// #. ÀÎµ¦½º¸¦ 0ºÎÅÍ ½ÃÀÛÇÒ °æ¿ì 0ÀÇ ÀÚ¸®°¡ ºñ±â ¶§¹®¿¡ -1·Î ÃÊ±âÈ­ ÇÑ´Ù.
//};
//void PrintInfo()
//{
//	std::cout << "<STACK>" << std::endl;
//	std::cout << "[1] push" << std::endl;
//	std::cout << "[2] pop" << std::endl;
//	std::cout << "M--------AAA--------M" << std::endl;
//}
//void PrintStack(Stack& stack)
//{	// #. ½ºÅÃ¿¡ ÀúÀåµÈ °ªÀ» Ãâ·ÂÇÑ´Ù.
//	std::cout << "---- stack ----" << std::endl;
//	if (stack.topIndex < 0)
//	{	// topIndex°¡ -1ÀÏ °æ¿ì ½ºÅÃ¾ÈÀº ºñ¾îÀÖ´Ù.
//		std::cout << "----------------" << std::endl;
//		std::cout << "EMPTY" << std::endl;
//		return;
//	}
//	for (int i = stack.topIndex; i >= 0; i--)
//	{	// À§¿¡¼­ ºÎÅÍ ¾Æ·¡·Î Ãâ·ÂÇØ ³ª°£´Ù.
//		std::cout << stack.container[i] << std::endl;
//	}	std::cout << "----------------" << std::endl;
//}
//void Push(Stack& stack, int value)
//{	// #. ½ºÅÃ¿¡ ¿ø¼Ò¸¦ ½×´Â´Ù.
//	if (stack.topIndex >= STACK_SIZE - 1)
//	{
//		std::cout << "½ºÅÃÀÌ °¡µæ Ã¡½À´Ï´Ù." << std::endl;
//		return;
//	}
//	stack.container[++stack.topIndex] = value;
//}
//void Pop(Stack& stack)
//{	// #. ½ºÅÃ¿¡ ½×¿©ÀÖ´Â ¿ø¼Ò¸¦ ²¨³½´Ù.
//	if (stack.topIndex < 0)
//	{
//		std::cout << "½ºÅÃÀÌ ºñ¾î ÀÖ½À´Ï´Ù." << std::endl;
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
//			std::cout << "Àß¸øµÈ ¸í·É¾î ÀÔ´Ï´Ù!" << std::endl;
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

/* --- < Å¥( Queue ) > --- */

/*
< Å¥ > : FIFO( First In First Out )ÀÇ Æ¯¼ºÀ» °¡Áø ÀÚ·á ±¸Á¶´Ù.
	#. enqueue(put, push) : °¡Àå ÇÏ´Ü¿¡ °ªÀ» Áı¾î ³Ö´Â´Ù.
	#. dequeue(get, pop) : °¡Àå »ó´ÜÀÇ °ªÀ» ²¨³»¾î µ¹·Á ÁØ´Ù.
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
//{	// #. ¿øÇü Å¥¸¦ ¸¸µé±â À§ÇÑ ±¸Á¶Ã¼ »ı¼º
//	int container[QUEUE_SIZE]{};
//	int head{};
//	int tail{};
//// #. head == tailÀº Å¥°¡ ºñ¾î ÀÖ´Ù´Â ¶æ
//// #. (tail+1)%¹è¿­ Å©±â == head´Â ¹è¿­ÀÌ °¡µæ Ã¡´Ù´Â ¶æ
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
//	{	// #. ¹è¿­ÀÇ ÀÎµ¦½º°¡ ¹è¿­ Å©±â¸¦ ³Ñ¾î°¡Áö ¸øÇÏ°Ô ÇÑ´Ù.
//		i = (i + 1) % QUEUE_SIZE;
//		std::cout << queue.container[i] << " ";
//	}	std::cout << std::endl << "------------" << std::endl;
//}
//void Enqueue(Queue& queue, int value)
//{	// #. Å¥¿¡ ¿ø¼Ò¸¦ ÀúÀåÇÑ´Ù.
//	if ((queue.tail + 1) % QUEUE_SIZE == queue.head)
//	{
//		std::cout << "Å¥°¡ °¡µæ Ã¡½À´Ï´Ù!!!" << std::endl;
//		return;
//	}
//	queue.tail = (queue.tail + 1) % QUEUE_SIZE;
//	queue.container[queue.tail] = value;
//}
//void Dequeue(Queue& queue)
//{	// #. Å¥¿¡¼­ ¿ø¼Ò¸¦ ²¨³»¿Â´Ù.
//	if (queue.head == queue.tail)
//	{
//		std::cout << "Å¥°¡ ºñ¾ú½À´Ï´Ù!!!" << std::endl;
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
//			std::cout << "Àß¸øµÈ ¸í·É¾î ÀÔ´Ï´Ù." << std::endl;
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

/* --- < µ¿Àû ÀÚ·á±¸Á¶( Dynamic Data Structure ) > --- */

/*
< ´ÜÀÏ ¿¬°á ¸®½ºÆ®( Single Linked List ) > : ÀÏ·Ä·Î ³ª¿­µÈ µ¿Àû ÀÚ·á±¸Á¶·Î ÇÑ ¹æÇâÀ¸·Î¸¸ ¿¬°á
	#. »ı¼º : »õ·Î¿î ¿ø¼Ò¸¦ ÇÒ´çÇØ¼­ °¡Àå µÚ¿¡ ºÙ¿© ÁØ´Ù.
	#. °³¼ö : Ã³À½ºÎÅÍ ³¡±îÁö( ¼øÈ¸ : Traverse ) ¿ø¼Ò¸¦ ¼¼¼­ µ¹·ÁÁÖ¸é µÈ´Ù.
	#. °Ë»ö : ¼øÈ¸ÇÏ¸é¼­ µ¿ÀÏÇÑ ¿ø¼Ò¸¦ Ã£¾Æ¼­ ¹İÈ¯ÇÑ´Ù.
	#. »èÁ¦ : Æ¯Á¤ÇÑ ¿ø¼Ò¸¦ »èÁ¦ÇÏ°í ¿¬°á°í¸®¸¦ ÀÌ¾îÁØ´Ù.
	#. »ğÀÔ : Æ¯Á¤ÇÑ ¿ø¼Ò µÚ¿¡ »ı¼ºÇÏ°í ¿¬°á°í¸®¸¦ ÀÌ¾îÁØ´Ù.
	#. < ÁØºñ¹° >
		=> head : ¸®½ºÆ®ÀÇ ½ÃÀÛ
		=> tail : ¸®½ºÆ®ÀÇ ³¡
		=> next : ´ÙÀ½ ¿ø¼Ò¸¦ °¡¸®Å´

< ÀÌÁß ¿¬°á ¸®½ºÆ®( Double Linked List ) > : ÀÏ·Ä·Î ³ª¿­µÈ ÀÚ·á±¸Á¶·Î ¾ç ¹æÇâÀ¸·Î ¿¬°á
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
//			std::cout << "Àß¸øµÈ ÀÔ·ÂÀÔ´Ï´Ù." << std::endl;
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

/* ----- < °´Ã¼ ÁöÇâÀû ÇÁ·Î±×·¡¹Ö > ----- */
//
//
//
//
//
/* --- < ÀıÂ÷Àû ÇÁ·Î±×·¡¹Ö( Procedural Programming ) > --- */

/*
< ÀıÂ÷Àû ÇÁ·Î±×·¡¹Ö > : ÇÁ·Î±×·¥ÀÇ ±â´ÉÀ» ÇÔ¼ö´ÜÀ§¸¦ ¹ÙÅÁÀ¸·Î ÀÛ¼ºÇÏ´Â °Í
	#. ÇÔ¼ö´Â ´Ù¸¥ ¸»·Î ÇÁ·Î½ÃÁ®( Procedure )¶ó°íµµ ºÎ¸¥´Ù.
*/



/* --- < °´Ã¼ ÁöÇâ ÇÁ·Î±×·¡¹Ö( Object Oriented Programming ) > --- */

/*
< °´Ã¼( Object ) > : Çö½Ç »ıÈ°À» µÑ·¯½Ñ ´ë»óÀ» ÇÏ³ªÀÇ °´Ã¼¶ó°í º¼ ¼ö ÀÖ´Ù.
	#. »óÅÂ( STATE )¿Í Çàµ¿( BEHAVIOR )À» °¡Áö°í ÀÖ´Ù.
< °´Ã¼ ÁöÇâ ÇÁ·Î±×·¡¹Ö( OOP ) > : Çö½Ç ¼¼°è¸¦ ¸ğµ¨¸µ ÇÏµíÀÌ ÇÁ·Î±×·¡¹ÖÀ» ÇÏ´Â ¹æ¹ı

< Å¬·¡½º( Class ) > : °´Ã¼¸¦ Ç¥ÇöÇÏ±â À§ÇÑ ¼³°èµµ, ¶Ç´Â Æ²
	#. Å¬·¡½º´Â Ãß»óÀûÀÎ Á¤º¸¶ó ÇÒ ¼ö ÀÖ°í, Å¬·¡½º¸¦ ÅëÇØ »ı¼ºµÈ °´Ã¼°¡ ±¸Ã¼ÀûÀÎ ½ÇÃ¼ÀÌ´Ù.

< ÀÎ½ºÅÏ½ºÈ­( Instantiate ) > : Ãß»óÀûÀÎ Å¬·¡½º¿¡¼­ ±¸Ã¼ÀûÀÎ °´Ã¼¸¦ »ı¼ºÇÏ´Â °Í
	#. ÀÎ½ºÅÏ½º( Instance ) : ÀÎ½ºÅÏ½ºÈ­¸¦ ÅëÇØ ¸¸µé¾îÁø °´Ã¼
	#. Å¬·¡½º´Â ´Ü¼øÇÑ Ã»»çÁø¿ëµµ·Î Å¸ÀÔÀ» ¸¸µå´Â °Í »ÓÀÌ¸ç, ½ÇÁ¦ °ªÀº ¸Ş¸ğ¸®¿¡ ÀÌ¸§À» ºÙ¿© ÇÒ´çµÈ ÀÎ½ºÅÏ½º( °´Ã¼ )°¡ µé°í ÀÖ´Ù.
*/

/* < OOPÀÇ Æ¯Â¡ > */

/*
< Ä¸½¶È­( Encapsulation ) > : ³»ºÎ¿¡ ¹«¾ùÀÌ µé¾î ÀÖ´ÂÁö ¸ğ¸£°Ô ÇÏ´Â °Í
	#. ºÒÇÊ¿äÇÑ Á¤º¸¸¦ ³ëÃâ½ÃÅ°Áö ¾Ê°í ¹Î°¨ÇÑ ±â´ÉÀ» ¼û°ÜµÎ´Â, Á¤º¸ Àº´ĞÀÇ °³³äÀ¸·Î »ç¿ëµÇ±âµµ ÇÑ´Ù.

< »ó¼Ó( Inheritance ) > : °¢ °´Ã¼µéÀº »ó°ü°ü°è¸¦ °¡Áö°í ÀÖ´Ù.
	#. °í¾çÀÌ¶ó´Â Å¬·¡½º´Â µ¿¹°ÀÌ¶ó´Â »óÀ§ Å¬·¡½º( °³³ä )À» °¡Áö°í ÀÖ´Ù.
	#. ÀÌ·¯ÇÑ °èÃş ±¸Á¶¸¦ »ó¼Ó( ÆÄ»ı )ÀÌ¶ó ºÎ¸¥´Ù.

< ´ÙÇü¼º( Polymorphism ) > : ÇÏ³ªÀÇ °´Ã¼°¡ °æ¿ì¿¡ µû¶ó ´Ù¸¥ ÇüÅÂ·Î Ãë±ŞµÉ ¼ö ÀÖ´Ù.
	#. ³ªºñ´Â °í¾çÀÌ ÀÌ¸é¼­ µ¿½Ã¿¡ µ¿¹°ÀÌ´Ù. »óÈ²¿¡ µû¶ó ³ªºñ¶ó°í ºÒ¸®±âµµ ÇÏ°í °í¾çÀÌ¶ó°í ºÒ¸®±âµµ ÇÏ°í, µ¿¹°ÀÌ¶ó°í ºÒ¸®±âµµ ÇÑ´Ù.
	#. Æ÷ÀÎÅÍ¸¦ ÅëÇØ °´Ã¼°¡ Á¸ÀçÇÏ´Â ¸Ş¸ğ¸®¸¦ °¡¸®Å°±â ¶§¹®¿¡ ´Ù¾çÇÏ°Ô ÇØ¼®ÇÒ ¼ö ÀÖ´Ù.
*/

//#include <iostream>
//
//class Dog {	// #. Dog¶ó´Â Ãß»óÀûÀÎ ¼³°èµµ, Æ²
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
//{	// #. Dog¼³°èµµ¸¦ ÅëÇØ ¸¸µé¾îÁø ±¸Ã¼ÀûÀÎ ½ÇÃ¼ puppy
//	Dog puppy;
//
//	puppy.mKind = "°ñµç ¸®Æ®¸®¹ö";
//	puppy.mAge = 3;
//	puppy.mColor = "±İ";
//}

//#include <iostream>
//
//class Animal {	// #. AnimalÀÌ¶ó´Â »óÀ§ °³³ä( Parent Class )
//public:
//	int mAge;
//	int mWeight;
//	int mHeight;
//
//	void Eat();
//	void Walk();
//	void Sleep();
//};
//class Dog : public Animal {	// #. AnimalÀÇ °³³äÀ» »ó¼Ó¹ŞÀº Dog¶ó´Â ÇÏÀ§ °³³ä( Child Class )
//public:
//	std::string mKind;
//
//	void Bark();
//	void Rolling();
//};
//
//int main()
//{	// #. DogÅ¬·¡½º´Â AnimalÅ¬·¡½ºÀÇ ¸â¹ö¸¦ »ç¿ëÇÒ ¼ö ÀÖ´Ù.
//	Dog marry;
//	marry.mAge = 3;
//	marry.mKind = "µµ¹è¸£¸¸";
//// #. marryÀÇ ÀÎ½ºÅÏ½ºÈ­°¡ ÁøÇàµÇ¸é ¸ÕÀú DogÅ¬·¡½º°¡ ºÒ¸°´Ù.
//// #. DogÅ¬·¡½º´Â ÀÚ½ÅÀÇ ¸â¹ö¸¦ ±¸¼ºÇÏ±â À§ÇØ AnimalÅ¬·¡½º¸¦ ºÎ¸¥´Ù.
//// #. AnimalÅ¬·¡½º°¡ ¸ÕÀú ¸Ş¸ğ¸® °ø°£¿¡ ±¸¼ºµÇ°í ±× ´ÙÀ½ DogÅ¬·¡½º°¡ ¸Ş¸ğ¸® °ø°£¿¡ ±¸¼ºµÈ´Ù.
//// #. ±×·¯¹Ç·Î marryÀÌ¸§Ç¥°¡ ºÙÀº ¸Ş¸ğ¸® °ø°£¿¡´Â Animal°ú DogÀÇ ¸â¹ö°¡ ¸ğµÎ ±¸¼ºµÇ¾î ÀÖ´Ù.
//}

//#include <iostream>
//
//class Animal {	// #. AnimalÀÌ¶ó´Â »óÀ§ °³³ä( Parent Class )
//public:
//	int mAge;
//	int mWeight;
//	int mHeight;
//
//	void Eat();
//	void Walk();
//	void Sleep();
//};
//class Dog : public Animal {	// #. AnimalÀÇ °³³äÀ» »ó¼Ó¹ŞÀº Dog¶ó´Â ÇÏÀ§ °³³ä( Child Class )
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
//	happy->mKind = "Æ÷¸Ş¶ó´Ï¾È";
//// #. happy°¡ °¡¸®Å°´Â ¸Ş¸ğ¸® °ø°£Àº Dog¿Í AnimalÅ¬·¡½ºÀÇ ¸â¹ö°¡ ±¸¼ºµÈ °ø°£ÀÌ´Ù.
//// #. dragonÀÌ¶ó´Â Æ÷ÀÎÅÍ´Â AnimalÅ¸ÀÔÀÌ±â ¶§¹®¿¡ AnimalÅ¬·¡½ºÀÇ ¸â¹ö¸¸ °¡¸®Å°°ÔµÈ´Ù.
//	Animal* dragon = happy;
//	dragon->Eat();
//
//	delete happy;
//}

/* < ±âÅ¸ ¿ë¾î > */

/*
< »ı¼ºÀÚ( Constructor ) > : °´Ã¼°¡ »ı¼ºµÉ ¶§ ºÒ¸®´Â Æ¯¼ö ÇÔ¼ö
< ¼Ò¸êÀÚ( Destructor ) > : °´Ã¼°¡ »ç¶óÁú ¶§ ºÒ¸®´Â Æ¯¼ö ÇÔ¼ö

< Á¤Àû ¸â¹ö( Static Member ) > : Å¬·¡½º¸¦ ÀÎÅÍ½ºÅÏ½ºÈ­ ÇØ¼­ °´Ã¼·Î ¸¸µéÁö ¾Ê¾Æµµ ¹Ù·Î Å¬·¡½º¿¡¼­ ¹Ù·Î »ç¿ëÇÒ ¼ö ÀÖ´Ù.
	#. »óÅÂ¿Í Çàµ¿Àº °¢ °´Ã¼( ÀÎ½ºÅÏ½º )ÀÇ °íÀ¯ÇÑ °ªÀ¸·Î ¸¸µé¾îÁø´Ù.
	#. DogÅ¬·¡½º·Î 'happy'¸¦ °´Ã¼È­ ÇÏ¸é »óÅÂ¿Í Çàµ¿Àº 'happy'¶ó´Â °´Ã¼¿¡ Á¾¼ÓµÈ´Ù.
	#. ÀÌ·¯ÇÑ Æ¯¼º°ú ¹İ´ëµÇ´Â °ÍÀÌ Á¤Àû ¸â¹ö·Î staticÀÌ¶ó´Â Å°¿öµå°¡ ºÙ´Â´Ù.

< Ãß»ó Å¬·¡½º( Abstract Class ) > : Ãß»óÀûÀÎ °³³äÀ» ´ã°í ÀÖ´Â Å¬·¡½º·Î ½º½º·Î¸¦ ÀÎ½ºÅÏ½ºÈ­ ÇÒ ¼ö ¾ø´Ù.
	#. Ãß»ó Å¬·¡½º¸¦ ÀÎ½ºÅÏ½ºÈ­ ÇÏ·Á¸é Ãß»ó Å¬·¡½º·ÎºÎÅÍ »ó¼ÓÀ» ¹Ş¾Æ ÀÚ½Ä Å¬·¡½º¿¡¼­ ÀÎ½ºÅÏ½ºÈ­ ÇØ¾ß ÇÑ´Ù.
	#. Ãß»ó Å¬·¡½º´Â ¿©·¯ ÀÚ½Ä Å¬·¡½º¿¡¼­ °øÀ¯ÇÒ ¼ö ÀÖ´Â °øÅëÀûÀÎ Á¤ÀÇ¸¦ Á¦°øÇÑ´Ù.
		#. Ãß»ó Å¬·¡½º´Â Ãß»ó »óÅÂ¿Í Ãß»ó Çàµ¿À» °¡Áú ¼ö ÀÖ´Âµ¥ ÀÌ Ãß»ó ¸Ş¼­µå´Â ±¸ÇöÀÌ ¾øÀÌ Á¤ÀÇ¸¸ µé¾îÀÖ´Ù.
			#. Ãß»ó Å¬·¡½º·ÎºÎÅÍ »ó¼ÓÀ» ¹ŞÀº ÀÚ½Ä Å¬·¡½º´Â ¹«Á¶°Ç ÀÌ Ãß»ó ¸Ş¼­µå¸¦ ±¸ÇöÇØÁà¾ß ÇÑ´Ù.

< ÀÎÅÍÆäÀÌ½º( Interface ) > : ¼­·Î ´Ù¸¥ µÎ ÀåÄ¡¸¦ Á¢¼Ó½ÃÄÑÁÖ´Â ºÎºĞ
	#. A»ç Å°º¸µå¸¦ USB·Î ÄÄÇ»ÅÍ¿¡ ²ÅÀ¸³ª B»ç Å°º¸µå¸¦ ²ÅÀ¸³ª Å¸ÀÌÇÎÀº Á¤»óÀûÀ¸·Î ÀÛµ¿ÇÑ´Ù.
		#. Ç¥ÁØ ÀÔ·Â ¹æ½ÄÀ» Á¤ÇØ³õ°í ÀÌ¸¦ °¢ Å°º¸µå»ç°¡ ±Ô°İÀ» ÁöÅ°µµ·Ï °¢°¢ÀÇ ¹æ½ÄÀ¸·Î ¼³°èÇÑ´Ù.
			#. ÀÌ·¯ÇÑ ±Ô°İÀ» ÀÎÅÍÆäÀÌ½º¶ó°í ÇÏ¸ç C++¿¡¼­´Â Ãß»ó Å¬·¡½º¸¦ »ç¿ëÇÏ¿© ¼³°èÇÑ´Ù.
		#. ÀÎÅÍÆäÀÌ½º´Â »óÅÂ´Â ¾ø°í Çàµ¿¸¸ ÀÖÀ¸¸ç, ½ÇÁ¦ Çàµ¿À» ±¸ÇöÇÏÁö´Â ¾Ê´Â´Ù.
			#. Áï ºó ²®µ¥±â¸¸ ÀÖÀ¸¸ç ½ÇÁ¦ ±¸ÇöÀº »ó¼Ó¹ŞÀº Å¬·¡½º¿¡¼­ ±¸ÇöÇØ ÁØ´Ù.

< ¿À¹ö·Îµù( Overloading ) > : ÇÏ³ªÀÇ Çàµ¿À» ¸Å°³º¯¼ö¸¸ ´Ù¸£°Ô ÁöÁ¤ÇÏ¿© ¿©·¯ °³ÀÇ Çàµ¿À» Á¤ÀÇÇÏ´Â °Í

< ¿À¹ö¶óÀÌµù( Overriding ) > : ºÎ¸ğ Å¬·¡½ºÀÇ Çàµ¿À» ÀÚ½Ä Å¬·¡½º¿¡¼­ ÀçÁ¤ÀÇ ÇØ¼­ ºÎ¸ğ Å¬·¡½ºÀÇ Çàµ¿À» ¹«½ÃÇÑ´Ù´Â ¶æ

< ¿¬»êÀÚ ¿À¹ö·Îµù( Operator Overloading ) > : ÇÇ¿¬»êÀÚ¸¦ ¼­·Î ´Ù¸£°Ô ÁöÁ¤ÇØ¼­ °¢ °³Ã¼¿¡ ¸Â´Â ¿¬»êÀÚ¸¦ ¸¸µç´Ù´Â ¶æ
*/

/* --- < POD( Plain Old Data ) > --- */

/*
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
| C¾ğ¾î¿¡¼­ Á¦°øµÇ´Â Å¸ÀÔµéÀ» POD¶ó°í ºÎ¸¥´Ù. °£´ÜÇÏ°í ¿À·¡µÈ µ¥ÀÌÅÍ, ´Ü¼øÇÑ ¸Ş¸ğ¸® ±¸Á¶¸¦	 |
| °¡Áö´Â °´Ã¼¸¦ ¸»ÇÑ´Ù. PODÀÇ ÀåÁ¡Àº ¿øº» ¸Ş¸ğ¸®¿¡¼­ ´Ù¸¥ ¸Ş¸ğ¸®·Î º¹»ç³ª ÀÌµ¿ÀÌ ¸Å¿ì ½¬¿ö¼­ |
| ÄÄÇ»ÅÍ ¼º´É¿¡ Å« ºÎ´ãÀÌ ¾ø´Ù´Â °ÍÀÌ´Ù.													 |
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
< C++ÀÇ POD >
	#. Standard Layout Type( Ç¥ÁØ ·¹ÀÌ¾Æ¿ô Å¸ÀÔ ) : C¾ğ¾î¿Í °°Àº ·¹ÀÌ¾Æ¿ô
	#. Trivial Type( °£´ÜÇÑ Å¸ÀÔ ) : »ç¿ëÀÚ°¡ Á¤ÀÇÇÑ ¸Å¿ì °£´ÜÇÑ ÀÚ·á ±¸Á¶
*/

//#include <iostream>
//// #. POD¿Í Trivial TypeÀº ¼º´É¿¡ °ü·ÃÀÌ ÀÖ´Ù.
//class ClassA
//{
//// #. ±×·±µ¥ »ç¿ëÀÚ°¡ Å¬·¡½º¿¡ »ı¼ºÀÚ¸¦ ºÙÀÌ¸é Trivial TypeÀÌ ¾Æ´Ï°Ô µÈ´Ù.
//public:
//	ClassA() {}
//};
//class ClassB
//{
//public:
//	// #. POD°¡ µÇ°Ô À§ÇØ¼­´Â ( = default )Å°¿öµå·Î ¾Ï½ÃÀû ±âº» »ı¼ºÀÚ¸¦ ¸í½ÃÇØ¾ßÇÑ´Ù.
//	ClassB() = default;
//};
//
//int main()
//{
//	std::cout << std::is_trivial<ClassA>::value << std::is_pod<ClassA>::value << std::endl;
//	std::cout << std::is_trivial<ClassB>::value << std::is_pod<ClassB>::value << std::endl;
//}

/* --- < ¹«¸í °´Ã¼( Anonymous Object ) > --- */

//#include <iostream>
//
//int Square(int x)
//{
//	return x * x;
//// $2. ÀÏ¹İ Å¸ÀÔ ¿ª½Ã °´Ã¼¶ó°í ÇÑ´Ù¸é, x * x ¸¦ ´ã¾Æ µÑ ¼ö ÀÖ´Â ÀÓ½Ã °´Ã¼°¡ ÇÊ¿äÇÏ´Ù.
//// $3. ¿¹¸¦ µé¾î int temp = x * x;  return temp;
//// $4. ÄÄÆÄÀÏ·¯ ³»ºÎ¿¡¼­´Â ÀÌ ÀÛ¾÷ÀÌ ÀÌ·ç¾îÁø´Ù. ´Ù¸¸, ÀÓ½Ã·Î »ç¿ëÇÏ´Â °´Ã¼·Î ÇØ´ç ÄÚµå ÀÌ¿Ü¿¡´Â »ç¿ëÇÒ ÇÊ¿ä°¡ ¾øÀ¸¹Ç·Î, ±»ÀÌ º¯¼ö¸íÀ» ºÙÀÌÁö ¾Ê°í »ç¿ëÇÑ´Ù.
//// $5. ÀÌ¸¦ ÀÌ¸§¾ø´Â °´Ã¼( anonymous object )¶ó°í ºÎ¸¥´Ù.
//}
//
//int main()
//{
//	int x{ 2 };
//// $1. < int x(1); > : Áö±İ±îÁö »ç¿ëÇÑ ÀÏ¹İ Å¸ÀÔµé( int, float... ) ¿ª½Ã ³»ºÎ¿¡¼­´Â °´Ã¼( x ¶ó´Â ÀÌ¸§ÀÇ °´Ã¼ )·Î Ã³¸®µÈ´Ù.
//
//	std::cout << Square(x) << std::endl;
//	// #1. Square(x)ÇÔ¼ö¸¦ È£ÃâÇÑ´Ù.
//	// #2. Square(x)¿¡¼­ x°¡ ¸®ÅÍ·² 2·Î Ä¡È¯µÈ´Ù. ÀÌ °úÁ¤¿¡¼­ ¸®ÅÍ·² 2°¡ ¹«¸íÀÇ °´Ã¼¿¡ ÀúÀåµÈ´Ù.
//	// #3. ¹«¸íÀÇ °´Ã¼¿¡ ÀúÀåµÈ 2°¡ Square(int x)ÀÇ ¸Å°³º¯¼ö x¿¡ º¹»çµÈ´Ù. ÀÌ °úÁ¤¿¡¼­ [¸Å°³º¯¼ö x]¿Í [ÀÎÀÚ x]´Â ¼­·Î ´Ù¸¥ °´Ã¼·Î ºĞ·ùµÈ´Ù.
//	// #4. x * x ¸¦ ¹«¸íÀÇ °´Ã¼¿¡ ÀúÀåÇÑ´Ù.
//	// #5. ¹«¸í °´Ã¼¸¦ ¹İÈ¯ÇÏ°í ÇÔ¼ö°¡ Á¾·áµÇ¸ç ¹«¸í °´Ã¼µµ ¼Ò¸êµÈ´Ù. 
//}

//#include <iostream>
//
//int main()
//{
//	int x{ 2 };
//	int y{};
//
//	// 1. x + x¸¦ ¸®ÅÍ·² 2 + 2·Î Ä¡È¯ÇÑ´Ù.
//	// 2. ´õÇÑ °ª( 4 )¸¦ ¹«¸í °´Ã¼¿¡ ÀúÀåÇÑ´Ù.
//	// 3. ¹«¸í °´Ã¼¸¦ ¹İÈ¯( Ãâ·Â )ÇÏ°í ÇØ´ç ¶óÀÎÀÌ ³¡³ª¸é ¼Ò¸êµÈ´Ù.
//	std::cout << x + x << std::endl << std::endl;
//
//	// 1. x + x¸¦ ¸®ÅÍ·² 2 + 2·Î Ä¡È¯ÇÑ´Ù.
//	// 2. ´õÇÑ °ª( 4 )¸¦ ¹«¸í °´Ã¼¿¡ ÀúÀåÇÑ´Ù.
//	// 3. ¹«¸í °´Ã¼¸¦ y¿¡ ´ëÀÔÇÏ°í ÇØ´ç ¶óÀÎÀÌ ³¡³ª¸é ¼Ò¸êµÈ´Ù.
//	y = x + x;
//}

//#include <iostream>
//
//// #2. ¸Å°³º¯¼ö x´Â mainÀÇ x¿Í °°´Ù°í º¼ ¼ö ÀÖ´Ù.
//const int& Square(int& x)
//{
//	return x * x;
//// #3. x * x´Â Ç¥Çö½ÄÀ¸·Î µû·Î ÀúÀåÇÒ °´Ã¼¸¦ ÁöÁ¤ÇØÁÖÁö ¾ÊÀ» °æ¿ì ¹«¸íÀÇ °´Ã¼¿¡ ÀÚµ¿ÀûÀ¸·Î ÀúÀåµÈ´Ù.
//// #4. Áï ¹İÈ¯µÇ´Â °ªÀº ÂüÁ¶ÇüÀ¸·Î ¹ŞÀº ¸Å°³º¯¼ö x¿Í °ü·Ã ¾ø´Â °´Ã¼´Ù.
//// #5. ÀÌ ÇÔ¼öÀÇ ¹İÈ¯ Å¸ÀÔÀº ÂüÁ¶ÇüÀÌ´Ù. ÁÖ¼Ò °ªÀÇ ÇüÅÂ·Î ¹İÈ¯ ÇÑ´Ù´Â ¸»ÀÎµ¥ ÀÌ ÁÖ¼Ò °ªÀÌ ÇÔ¼ö°¡ Á¾·áµÇ¸é »ç¶óÁø´Ù.
//// #6. ÂüÁ¶ÇüÀº ¹«¸íÀÇ °´Ã¼¸¦ ¹Ş¾ÆµéÀÏ ¼ö ¾ø±â ¶§¹®¿¡ constÂüÁ¶ÇüÀ» ¹İÈ¯ÇØ¾ß ÇÑ´Ù.
//}
//
//int main()
//{
//	int x = 2;
//	std::cout << Square(x) << std::endl;
//// #1. Square()ÇÔ¼ö¸¦ È£ÃâÇÏ´Âµ¥ ÀÎÀÚ·Î º¸³»Áö´Â °ÍÀº x¶ó´Â °´Ã¼ÀÇ ÁÖ¼Ò °ªÀÌ´Ù.
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
//// #. ¸Å°³º¯¼ö c´Â ÂüÁ¶ÇüÀÎµ¥ ÂüÁ¶ÇüÀº R_Value¸¦ ¹ŞÁö ¸øÇÑ´Ù´Â Æ¯¼ºÀÌ ÀÖ´Ù. Áï ¹«¸íÀÇ °´Ã¼¸¦ ¹ŞÁö ¸øÇÑ´Ù.
//// #. ±×·¯¹Ç·Î ¸Å°³º¯¼ö c¸¦ »ó¼ö ÂüÁ¶ÇüÀ¸·Î ¹Ù²Ù¾îÁØ´Ù.
//	MyClass operator+(const MyClass& c)
//	{	// mValue = c1, c.mValue = c2
//		// ¹İÈ¯°ªÀ¸·Î MyClassÅ¸ÀÔÀÇ ¹«¸í °´Ã¼( ÀÎ½ºÅÏ½º )°¡ »ı¼ºµÇ¾ú´Ù.
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
//// #. c1ÀÌ ¿¬»êÀÚ ÇÔ¼ö¸¦ È£ÃâÇÏ°í c2´Â ¸®ÅÍ·² 2·Î Ä¡È¯ÇÑ µÚ ¹«¸í °´Ã¼¿¡ ÀúÀåÇÏ¿© ÀÎÀÚ·Î º¸³½´Ù.
//
//	std::cout << "------ * ------" << std::endl << std::endl;
//	std::cout << "       " << (c1 + c2).mValue << std::endl;
//
//	std::cout << "------ * ------" << std::endl << std::endl;
//	MyClass c3{ c1 + c2 };
//}

/* ----- * ----- < °´Ã¼¶õ? > ----- * ----- */

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
//// animalº¯¼ö¸¦ ¸¸µé¾î¼­ ÀÌ¸¦ ÇÊ¿ä·Î ÇÏ´Â ÇÔ¼öµé¿¡°Ô
//	Animal cat{ "ring", 2, 10, 10, 10 };
//	play(cat);
//// ÀÌ¿Í °°ÀÌ Àü´ŞÇØ ÁÖ¾ú½À´Ï´Ù.
//// ±×·±µ¥, °õ°õÈ÷ »ı°¢ÇØ º¸¸é playÇÔ¼ö¿¡ ÀÎÀÚ·Î Àü´ŞÇÏ´Â °ÍÀÌ ¸Å¿ì ºÒÇÊÇØº¸ÀÔ´Ï´Ù.
//// ¸¶Ä¡ ·¯½Ã¾Æ½Ä À¯¸Ó Ã³·³ "Play°¡ AnimalÀ» ÇÕ´Ï´Ù!" ¶ó°í º¼ ¼ö ÀÖ´Âµ¥,
//// »ç½ÇÀº "AnimalÀÌ Play¸¦ ÇÑ´Ù" °¡ ´õ ¸Â±â ¶§¹®ÀÌÁö¿ä.
//// ´Ù½Ã ¸»ÇØ¼­ AnimalÀÚÃ¼°¡ Play¸¦ ÇÏ´Â °ÍÀÌÁö, Play°¡ AnimalÀ» ÇØÁÖ´Â °ÍÀÌ ¾Æ´Õ´Ï´Ù.
//}

//#include <iostream>
//// ¸¸ÀÏ Animal ÀÚÃ¼°¡ Play¸¦ ÇÑ´Ù ¶ó´Â °³³äÀ» »ı°¢ÇÏ°Ô µÈ´Ù¸é, 
//// ´ÙÀ½°ú °°ÀÌ »ı°¢ÇÒ ¼ö ÀÖÀ» °ÍÀÔ´Ï´Ù.
//class Animal {
//public:
//	void play() {
//		std::cout << "dog";
//	}
//};
//
//int main()
//{
//// ÀÌ·¸°Ô ÇÏ¸é playÇÔ¼ö¿¡ animalÀ» ÀÎÀÚ·Î ÁÖÁö ¾Ê¾Æµµ µË´Ï´Ù.
//// ¿Ö³ÄÇÏ¸é ³»°¡ playÇÏ´Â °ÍÀÌ±â ¶§¹®¿¡ ³» Á¤º¸´Â ÀÌ¹Ì playÇÔ¼ö°¡ ´Ù ¾Ë°í ÀÖ±â ¶§¹®ÀÔ´Ï´Ù.
//// playÇÔ¼ö´Â ³ªÀÇ »óÅÂµé, ¿¹¸¦ µé¾î¼­ Ã¼·ÂÀÌ³ª, ¹è°íÇÄ Á¤µµ³ª ÇÇ°ïÇÑ Á¤µµ µîÀ» 
//// ¸ğµÎ ¾Ë ¼ö ÀÖ±â ¶§¹®¿¡ ³ª¿¡ ´ëÇÑ ÀûÀıÇÑ Ã³¸®¸¦ ÇÒ ¼ö ÀÖ°Ô µÇ´Â °ÍÀÔ´Ï´Ù.
//	Animal cat;
//	cat.play();
//// Áï, animalÀº ÀÚ½ÅÀÇ »óÅÂ¸¦ ¾Ë·ÁÁÖ´Â º¯¼ö(variable)¿Í, ÀÚ½ÅÀÌ ÇÏ´Â Çàµ¿µé(play,sleepµîµî)
//// À» ¼öÇàÇÏ´Â ÇÔ¼ö(method)µé·Î ÀÌ·ç¾îÁ³´Ù°í º¼ ¼ö ÀÖ½À´Ï´Ù.
//}

/*
°á°úÀûÀ¸·Î °´Ã¼´Â ´ÙÀ½°ú °°ÀÌ Á¤ÀÇµË´Ï´Ù.

°´Ã¼¶õ, º¯¼öµé°ú Âü°í ÀÚ·áµé·Î ÀÌ·ç¾îÁø ¼ÒÇÁÆ®¿ş¾î µ¢¾î¸® ÀÌ´Ù.
ÀÌ ¶§ °´Ã¼°¡ Çö½Ç ¼¼°è¿¡¼­ÀÇ Á¸ÀçÇÏ´Â °ÍµéÀ» ³ªÅ¸³»±â À§ÇØ¼­´Â
Ãß»óÈ­(abstraction)¶ó´Â °úÁ¤ÀÌ ÇÊ¿äÇÕ´Ï´Ù.
ÄÄÇ»ÅÍ »ó¿¡¼­ Çö½Ç ¼¼°è¸¦ 100% ³ªÅ¸³¾ ¼ö ¾ø´Â °ÍÀÌ±â ¶§¹®¿¡,
ÀûÀıÇÏ°Ô ÄÄÇ»ÅÍ¿¡¼­ Ã³¸®ÇÒ ¼ö ÀÖµµ·Ï ¹Ù²Ù´Â °ÍÀÎµ¥,

¿¹¸¦ µé¾î¼­ ÇÚµåÆùÀÇ °æ¿ì 'ÀüÈ­¸¦ ÇÑ´Ù', '¹®ÀÚ¸¦ º¸³½´Ù' ¿Í °°Àº °ÍµéÀº
'ÇÚµåÆùÀÌ ÇÏ´Â °Í' ÀÌ¹Ç·Î ÇÔ¼ö·Î Ãß»óÈ­½ÃÅ³ ¼ö ÀÖ°í,

ÇÚµåÆùÀÇ »óÅÂ¸¦ ³ªÅ¸³»´Â °Íµé,
¿¹¸¦ µé¾î¼­ ÀÚ±â ÀÚ½ÅÀÇ ÀüÈ­ ¹øÈ£³ª ¹èÅÍ¸® ÀÜ·® °°Àº °ÍÀº º¯¼ö·Î Ãß»óÈ­½ÃÅ³ ¼ö ÀÖ½À´Ï´Ù.

ÀÌ¿Í °°ÀÌ ¾î¶°ÇÑ °´Ã¼´Â ÀÚ±â ¸¸ÀÇ Á¤º¸¸¦ ³ªÅ¸³»´Â º¯¼öµé°ú,
ÀÌ¸¦ °¡Áö°í ¾î¶°ÇÑ ÀÛ¾÷À» ÇÏ´Â ÇÔ¼öµé·Î µÑ·¯½Î°í ÀÖ´Ù°í º¸½Ã¸é µË´Ï´Ù.

Âü°í·Î, ÀÌ·¯ÇÑ °´Ã¼ÀÇ º¯¼ö³ª ÇÔ¼öµéÀ» º¸Åë ÀÎ½ºÅÏ½º º¯¼ö(instance variable)¿Í
ÀÎ½ºÅÏ½º ¸Ş¼Òµå(instance method)¶ó°í ºÎ¸£°Ô µÇ´Âµ¥,
±×³É ¾Ë°í °è½Ã´Â º¯¼ö¿Í ÇÔ¼ö¿Í µ¿ÀÏÇÑ °ÍÀ¸·Î »ı°¢ÇÏ½Ã¸é µË´Ï´Ù.

´©±º°¡ ÀÎ½ºÅÏ½º ¸Ş¼Òµå¶ó°í ÇÏ¸é"¾Æ ±×³É °´Ã¼¿¡ Á¤ÀÇµÇ¾î ÀÖ´Â ÇÔ¼ö±¸³ª"¶ó°í »ı°¢ÇÏ½Ã¸é µË´Ï´Ù.
*/

//#include <iostream>
//// ¿ÜºÎ¿¡¼­ ¾î¶°ÇÑ °´Ã¼ÀÇ ÀÎ½ºÅÏ½º º¯¼öÀÇ °ªÀ» ¹Ù²ÙÁö ¸øÇÏ°í 
//// ¿ÀÁ÷ °´Ã¼ÀÇ ÀÎ½ºÅÏ½º ÇÔ¼ö¸¦ ÅëÇØ¼­¸¸ °¡´ÉÇÏ´Ù´Â °ÍÀÌÁö¿ä
//// (¹°·Ğ Ç×»ó ÀÌ·¸°Ô ±Ø´ÜÀûÀ¸·Î ºÒ°¡´É ÇÑ °ÍÀº ¾Æ´Ï°í »ç½Ç »ç¿ëÀÚ°¡ Á¶ÀıÇÒ ¼ö ÀÖ½À´Ï´Ù) 
//// ÀÌ¸¦ ´Ü¼øÈ÷ ÄÚµå·Î Ç¥ÇöÇÑ´Ù¸é, ¿¹ÄÁ´ë AnimalÀÇ food¸¦ ¹Ù²Û´Ù°í ÇÒ ¶§
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
//// ÀÌ·¸°Ô µÈ´Ù´Â °ÍÀÔ´Ï´Ù.
//// ÀÏ´Ü animal.food += 100; ÀÚÃ¼´Â ¿ÜºÎ¿¡¼­ animalÀÌ¶ó´Â '°´Ã¼'ÀÇ 'ÀÎ½ºÅÏ½º º¯¼ö'¿¡
//// 'Á÷Á¢'Á¢±ÙÇÏ´Â °ÍÀÌ±â ¶§¹®¿¡ ºÒ°¡´ÉÇÑ °ÍÀÌ°í, 
//// ¾Æ·¡ÀÇ animal.increase_food(100); ÀÇ °æ¿ì animal°´Ã¼ÀÇ 'ÀÎ½ºÅÏ½º ÇÔ¼ö'¸¦ ÅëÇØ¼­ 
//// °ªÀ» ¼öÁ¤ÇÏ´Â °ÍÀÌ±â ¶§¹®¿¡ °¡´ÉÇÑ °ÍÀÌÁö¿ä.
//// ÀÌ¿Í °°ÀÌ ¿ÜºÎ¿¡¼­ Á÷Á¢ ÀÎ½ºÅÏ½º º¯¼öÀÇ °ªÀ» ¹Ù²Ü ¼ö ¾ø°í 
//// Ç×»ó ÀÎ½ºÅÏ½º ¸Ş¼Òµå¸¦ ÅëÇØ¼­ °£Á¢ÀûÀ¸·Î Á¶ÀıÇÏ´Â °ÍÀ» 
//// Ä¸½¶È­(Encapsulation)¶ó°í ºÎ¸¨´Ï´Ù.
//}

/*
ÀÌ °³³äÀ» Ã³À½ µé¾úÀ» ¶§ ÀÌ°Ô ¿Ö ÇÊ¿äÇÏ³Ä°í »ı°¢ÇÏ½Ã´Â ºĞµéÀÌ ¸¹½À´Ï´Ù.

Àúµµ Ä¸½¶È­¸¦ ±»ÀÌ ÇØ¾ßµÉ ÀÌÀ¯¸¦ ¸øÃ¡¾ú°Åµç¿ä.
±×³É, animal.food += 100; ÇÏ³ª animal.increase_food(100); ÇÏ³ª
°Å±â¼­ °Å±âÀÌÁö ¶ó´Â »ı°¢À» ¸»ÀÌÁÒ.

ÀÏ´Ü ¿©±â¼­´Â Ä¸½¶È­ÀÇ ÀåÁ¡¿¡ ´ëÇØ¼­´Â ³ªÁß¿¡ ¼³¸íÇÏ°ÚÁö¸¸ °£´ÜÇÏ°Ô ¸»ÇÏÀÚ¸é,
"°´Ã¼°¡ ³»ºÎÀûÀ¸·Î ¾î¶»°Ô ÀÛµ¿ÇÏ´ÂÁö ¸ô¶óµµ »ç¿ëÇÒ ÁÙ ¾Ë°Ô µÈ´Ù"
¶ó°í º¼ ¼ö ÀÖ½À´Ï´Ù.

¿¹ÄÁ´ë animal.increase_food(100); À» ÇÏ¸é
³»ºÎÀûÀ¸·Î foodº¯¼ö °ªÀÌ 100Áõ°¡ÇÏ´Â°Í »Ó¸¸ÀÌ ¾Æ´Ï¶ó
¸ö¹«°Ôµµ ¹Ù²ğ ¼ö ÀÖ°í, Çàº¹µµµµ ¿Ã¶ó°¥ ¼ö ÀÖ°í µîµî ¿©·¯°¡Áö ÀÛ¾÷µéÀÌ ÀÏ¾î³ª°ÚÁö¿ä.

¸¸ÀÏ increase_foodÇÔ¼ö¸¦ »ç¿ëÇÏÁö ¾Ê¾Ò´Ù¸é ¿©·¯°¡Áö Ã³¸®¸¦ ÇÁ·Î±×·¡¸Ó°¡ Á÷Á¢ ÇØÁÖ¾î¾ß ÇÕ´Ï´Ù.
*/

/* ----- < Å¬·¡½º ±âº»±â > ----- */
//
//
//
//
//
/* --- < Å¬·¡½ºÀÇ Á¤ÀÇ > --- */

/*
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
| Å¬·¡½ºÀÇ Å©±â´Â ±¸Á¶Ã¼¿Í ¸¶Âù°¡Áö·Î ¸â¹ö¿¡ µû¶ó º¯ÇÑ´Ù. ÇÏÁö¸¸ Å¬·¡½ºÀÇ Å©±â¿¡ ¸â¹ö ÇÔ¼ö |
| ´Â ¿µÇâÀ» ÁÖÁö ¾Ê´Â´Ù. ¸â¹ö ÇÔ¼ö´Â ½Ã±×´ÏÃÄ Á¤º¸·Î °³º° Ã³¸®µÇ¾î ´Ù¸¥ ÇÔ¼öµé°ú ÇÔ²² Æ¯Á¤ |
| °ø°£( ÇÔ¼ö Å×ÀÌºí, function table )¿¡ ÀÏ°ı ÀúÀåµÈ´Ù.									   |
| ¸â¹ö ÇÔ¼ö¸¦ Á¦¿ÜÇÏ¸é °ÅÀÇ ±¸Á¶Ã¼¿Í ºñ½ÁÇÑ ÇüÅÂ·Î º¸ÀÌ´Âµ¥, »ç½Ç ±¸Á¶Ã¼´Â ¸ğµç ¸â¹ö°¡     |
| publicÀÎ Å¬·¡½ºÀÇ ÀÏºÎºĞÀÌ¶ó°í º¸¾Æµµ ¹«¹æÇÏ´Ù.										   |
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
< ±¸Á¶Ã¼ > : ¸â¹ö º¯¼öµé¸¸ Á¸ÀçÇÏ´Â ÀÚ·á±¸Á¶
< Å¬·¡½º > : ¸â¹ö ÇÔ¼ö°¡ ÇÊ¿äÇÑ ÀÚ·á±¸Á¶

< ¸â¹ö ÇÔ¼öÀÇ Á¤ÀÇ > : ¹İÈ¯Çü Å¬·¡½ºÀÌ¸§::ÇÔ¼ö¸í(¸Å°³ º¯¼ö ¸ñ·Ï) { return ¹İÈ¯°ª; }
	#. Á¢±Ù Á¦ÇÑÀÚ´Â ¸â¹ö ÇÔ¼öÀÇ ¼±¾ğ¿¡ ÀÌ¹Ì Á¸ÀçÇÏ¹Ç·Î Á¤ÀÇ¿¡´Â »ı·«ÇÑ´Ù.

< ¹üÀ§ ÇØ°á ¿¬»êÀÚ > : 'Å¬·¡½ºÀÌ¸§::ÇÔ¼ö¸í'ÇüÅÂ·Î ¸â¹ö ÇÔ¼öÀÇ ¼Ò¼Ó Å¬·¡½º¸¦ ¸í½ÃÇÑ´Ù.
	#. ÀÌ·¯ÇÑ '::'À» ¹üÀ§ ÇØ°á ¿¬»êÀÚ( scope resolution operator )¶ó ÇÑ´Ù.

< ¸â¹ö ÇÔ¼öÀÇ ¼±¾ğ ¼ø¼­ > : ÄÄÆÄÀÏ·¯´Â À§¿¡¼­ ºÎÅÍ ¾Æ·¡·Î ÄÄÆÄÀÏÀ» ÁøÇàÇÑ´Ù.
	#. Àü¿ª ÇÔ¼öÀÇ °æ¿ì Àü¹æ ¼±¾ğÀ» ÅëÇØ¼­ ÇÔ¼öµé °£ÀÇ È£Ãâ ¼øÈ¯À» ÇØ°áÇÑ´Ù.
	#. ±×·¯³ª ÇÏ³ªÀÇ Å¬·¡½º¿¡ ¹­ÀÎ ¸â¹ö ÇÔ¼öµéÀº ÀÌ·¯ÇÑ Á¦¾àÀÌ ¾ø´Ù.
	#. Å¬·¡½ºÀÇ ¼±¾ğÀº ¸ğµç ³»¿ëÀÌ ¸¶¹«¸®µÇ´Â ';'À» ¸¸³ª´Â ¼ø°£ ÀÌ·ïÁø´Ù.
	#. ±×·¯¹Ç·Î ¸â¹ö ÇÔ¼öµéÀº ±× Á¸Àç¸¦ ¼­·Î ¾Ë°í ÀÖ´Ù.

< this Å°¿öµå > : ¸â¹ö ÇÔ¼ö¸¦ È£ÃâÇÑ ÀÎ½ºÅÏ½º( °´Ã¼ )°¡ ¾Ï½ÃÀûÀ¸·Î ¸â¹ö ÇÔ¼ö ¾È¿¡ ÀÖ´Ù.
	#. ¸â¹ö ÇÔ¼ö´Â ¿ÀÁ÷ ÇØ´ç Å¬·¡½ºÀÇ ÀÎ½ºÅÏ½º¸¸ÀÌ È£ÃâÇÒ ¼ö ÀÖ´Ù.
	#. ¶§¹®¿¡ ¸â¹ö ÇÔ¼ö´Â Ç×»ó ¾î¶² °´Ã¼¿¡¼­ È£ÃâµÈ °ÍÀÎÁö ¾Ë°íÀÖ´Ù.
*/

/* --- < Á¢±Ù Á¦ÇÑÀÚ( Access Modifiers ) > --- */

/*
< public > : Å¬·¡½º ³»ºÎ/¿ÜºÎ¿¡¼­ ¸ğµÎ »ç¿ëÀÌ °¡´É
	#. ¸â¹öÇÔ¼ö´Â ¹°·ĞÀÌ°í, °´Ã¼·Î ¸¸µç ÈÄ °´Ã¼¸¦ ÅëÇØ¼­µµ ÀĞ°í/¾µ ¼ö ÀÖ´Ù.

< protected > : ÀÚ½Å°ú ÀÚ½ÅÀ» ±â¹İÀ¸·Î ÇÏ´Â ÆÄ»ı Å¬·¡½º¿¡¼­ »ç¿ëÀÌ °¡´É
	#. ÀÚ½ÅÀÇ ¸â¹ö ÇÔ¼ö ¹× ÆÄ»ıµÈ ¸â¹ö ÇÔ¼ö¿¡¼­ ÀĞ°í/¾µ ¼ö ÀÖ´Ù.

< private > : Å¬·¡½º ³»ºÎ¿¡¼­¸¸ »ç¿ëÀÌ °¡´É
	#. ±âº» °ªÀ¸·Î, Á¢±Ù Á¦ÇÑÀÚ¸¦ »ı·«ÇÏ¸é privateÀÌ´Ù.
	#. ¸â¹ö ÇÔ¼ö¿¡¼­¸¸ ÇØ´ç º¯¼ö¸¦ ÀĞ°í/¾µ ¼ö ÀÖ´Ù.
*/

/* --- < »ó¼ö( Const ) ¸â¹ö ÇÔ¼ö > --- */

/*
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
| const ¸â¹ö ÇÔ¼ö´Â Getter/Setter¶ó ºÒ¸®´Â Æ¯¼öÇÑ ÇüÅÂÀÇ ¸â¹ö ÇÔ¼ö »ç¿ë¿¡ ¸Å¿ì À¯¿ëÇÏ´Ù.   |
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
< ¼Ó¼º( Property ) > : ÇÑ °´Ã¼¿¡ ´ëÇØ ¾î¶² °´Ã¼¸¦ ÁÖ°í ¹ŞÀ» ¼ö ÀÖ´Â ÇàÀ§
	#. »óÅÂ°¡ ¾Æ´Ñ Çàµ¿¿¡ ÁßÁ¡À» µÎ°í ÀÖ´Ù.
	#. ¸â¹ö º¯¼ö¸¦ Á÷Á¢ Á¢±ÙÇÏ´Â °ÍÀ» ¸·°í ¸â¹ö ÇÔ¼ö·Î Á¢±ÙÇÏ°Ô ÇÏ·Á´Â °ÍÀÌ ¸ñÀûÀÌ´Ù.

< const º¯¼ö > : °ªÀ» º¯°æÇÒ ¼ö ¾ø´Â »ó¼ö º¯¼ö·Î ¸®ÅÍ·²·Î »ç¿ëÇÒ ¶§ ÁÖ·Î »ç¿ëµÈ´Ù.
	#. ÀÌ¶§ »ó¼ö´Â ´Ù¸¥ º¯¼ö¿Í ±¸ºĞÇÏ±â À§ÇØ ÀüÃ¼ ´ë¹®ÀÚ·Î ¸í½ÃÇÑ´Ù.
		=> const int NAME_LENGTH = 16;

< const ¸Å°³ º¯¼ö > : ÇÔ¼ö ³»ºÎ¿¡¼­ ¸Å°³ º¯¼öÀÇ °ªÀ» º¯°æÇÏÁö ¾Ê´Â´Ù´Â ÀÇ¹Ì´Ù.
	#. Call By Value¿¡¼­´Â º¹»ç°¡ ÀÏ¾î³ª¹Ç·Î Å« ÀÇ¹Ì´Â ¾ø´Ù.
	#. Call By Reference¿Í °°ÀÌ ¸Å°³ º¯¼ö°¡ º¯°æµÉ °¡´É¼ºÀÌ ÀÖ´Â °÷¿¡¼­ »ç¿ëÇÑ´Ù.
		=> void PrintInfo(const Stack& stack);

< const ¹İÈ¯Çü ÇÔ¼ö > : ¹İÈ¯ °ªÀ» º¯°æÇÒ ¼ö ¾ø´Ù´Â »ç½ÇÀ» ¸íÈ®ÇÏ°Ô Ç¥ÇöÇÒ ¶§ »ç¿ëÇÑ´Ù.
	#. ¹İÈ¯ÇüÀÌ ÂüÁ¶ÇüÀÏ ¶§ »ç¿ëÇÑ´Ù.

< const ¸â¹ö ÇÔ¼ö > : ¸â¹ö ÇÔ¼ö ³»ºÎ¿¡¼­ Å¬·¡½ºÀÇ °ª( ¸â¹ö º¯¼ö )À» ¼öÁ¤ÇÏÁö ¾Ê´Â´Ù´Â ÀÇ¹Ì
*/

//#include <iostream>
//
//class Calendar {
//private:
//	int mMonth;
//
//public:
//	void SetMonth(std::string month) {
//		// ¹®ÀÚ¿­À» ÆÇ´ÜÇØ¼­ mMonth¿¡ °ªÀ» ÁöÁ¤
//	}
//	std::string GetMonth() const {
//		// mMonth¿¡ µû¶ó ¹®ÀÚ¿­ ¹İÈ¯
//	}
//// #. ³»ºÎ¿¡¼­´Â ¿¬»êÀ» À§ÇØ ¿ù( mMonth )À» Á¤¼ö·Î °ü¸®ÇÏ°ÚÁö¸¸
//// #. ½ÇÁ¦ »ç¿ëÀÚ°¡ ´Ş·ÂÀ» º¼¶§´Â January¿Í °°ÀÌ ¹®ÀÚ¿­À» º¸°Ô µÈ´Ù.
//};

//#include <iostream>
//// ÀÚ ±×·¯¸é °´Ã¼´Â C++»ó¿¡¼­ ¾î¶»°Ô ¸¸µé¾î³¾±î¿ä.
//// ÀÌ¸¦ À§ÇØ C++¿¡¼­ °´Ã¼¸¦ ¸¸µé ¼ö ÀÖ´Â ÀåÄ¡¸¦ ÁØºñÇÏ¿´½À´Ï´Ù.
//// ½±°Ô ¸»ÇÏ¸é °´Ã¼ÀÇ '¼³°èµµ'¶ó°í º¼ ¼ö ÀÖÁö¿ä.
//// ¹Ù·Î Å¬·¡½º(class)ÀÔ´Ï´Ù.
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
//		std::cout << "ÀÌ µ¿¹°ÀÇ food : " << food << std::endl;
//		std::cout << "ÀÌ µ¿¹°ÀÇ weight : " << weight << std::endl;
//	}
//};
//// ¿ì¸®´Â ÀÌ °´Ã¼ÀÇ ¼³°èµµ¸¦ ÅëÇØ¼­ ½ÇÁ¦ °´Ã¼¸¦ ¸¸µé°Ô µÇÁö¿ä.
//// C++¿¡¼­ ÀÌ¿Í °°ÀÌ Å¬·¡½º¸¦ ÀÌ¿ëÇØ¼­ ¸¸µé¾îÁø °´Ã¼¸¦ ÀÎ½ºÅÏ½º(instance)¶ó°í ºÎ¸¨´Ï´Ù.
//// ¾Õ¼­ °´Ã¼ÀÇ º¯¼ö¿Í ¸Ş¼Òµå¸¦ ¿Ö ÀÎ½ºÅÏ½º º¯¼ö¿Í ÀÎ½ºÅÏ½º ¸Ş¼Òµå¶ó°í Çß´ÂÁö ¾Æ½Ã°ÚÁÒ?
//int main()
//{
//// ¸ÕÀú mainÇÔ¼ö¿¡¼­ AnimalÅ¬·¡½ºÀÇ ÀÎ½ºÅÏ½º¸¦ ¾î¶»°Ô »ı¼ºÇÏ¿´´ÂÁö »ìÆì º¾½Ã´Ù.
//// ±âÁ¸ÀÇ ±¸Á¶Ã¼¿¡¼­ ±¸Á¶Ã¼ º¯¼ö¸¦ »ı¼ºÇÒ ¶§¿Í µ¿ÀÏÇÑµ¥, 
//// ±×³É int³ª charÃ³·³ AnimalÀÌ¶ó°í ½áÁÖ¸é µË´Ï´Ù.
//// ÀÌ¿Í °°ÀÌ Animal cat; À» ÇßÀ¸¸é AnimalÅ¬·¡½ºÀÇ ÀÎ½ºÅÏ½º catÀ» ¸¸µé°Ô µÈ °ÍÀÌÁö¿ä.
//// ÀÌÁ¦ º»°İÀûÀ¸·Î Å¬·¡½º°¡ ¾î¶»°Ô µÇ¾î ÀÖ´ÂÁö »ìÆìº¾½Ã´Ù.
//	Animal cat;
//	cat.set_animal(100, 50);
//	cat.increase_food(30);
//
//	cat.view_stat();
//// À§´Â AnimalÀÌ¶ó´Â Å¬·¡½º¸¦ ³ªÅ¸³½ °ÍÀ¸·Î AnimalÅ¬·¡½º¸¦ ÅëÇØ¼­ »ı¼ºµÉ 
//// ÀÓÀÇÀÇ °´Ã¼¿¡ ´ëÇÑ ¼³°èµµ¶ó°í º¼ ¼ö ÀÖ½À´Ï´Ù.
//// Áï, AnimalÅ¬·¡½º¸¦ ÅëÇØ¼­ »ı¼ºµÉ °´Ã¼´Â food, weight¶ó´Â º¯¼ö°¡ ÀÖ°í, 
//// set_animal, increase_food, view_statÀÌ¶ó´Â ÇÔ¼öµéÀÌ ÀÖ´Âµ¥, AnimalÅ¬·¡½º »ó¿¡¼­ 
//// ÀÌµéÀ» ÁöÄªÇÒ ¶§ °¢°¢ ¸â¹ö º¯¼ö(member variable)¿Í ¸â¹ö ÇÔ¼ö(member function)¶ó°í ºÎ¸¨´Ï´Ù.
//}

/*
ÀÎ½ºÅÏ½º·Î »ı¼ºµÈ °´Ã¼¿¡¼­´Â ÀÎ½ºÅÏ½º º¯¼ö, ÀÎ½ºÅÏ½º ÇÔ¼ö,
±×¸®°í ±×³É Å¬·¡½º »ó¿¡¼­´Â ¸â¹ö º¯¼ö, ¸â¹ö ÇÔ¼ö¶ó°í ºÎ¸£´Â °ÍÀÔ´Ï´Ù.

¸â¹ö º¯¼ö¿Í ¸â¹ö ÇÔ¼ö´Â ½ÇÀç ÇÏ´Â °ÍÀÌ ¾Æ´ÏÁö¿ä.
ÀÎ½ºÅÏ½º°¡ ¸¸µé¾îÁ®¾ß ºñ·Î¼Ò ¼¼»ó¿¡ ³ªÅ¸³ª´Â °ÍÀÔ´Ï´Ù.
Áï, ¼³°èµµ »ó¿¡ ÀÖ´Ù°í ÇØ¼­ ¾ÆÆÄÆ®°¡ ½ÇÁ¦·Î Á¸ÀçÇÏ´Â °ÍÀÌ ¾Æ´Ñ °Í Ã³·³ ¸»ÀÌÁö¿ä.

private Ã³À½ º¸´Â Å°¿öµå°¡ ÀÖÁö¿ä?

ÀÌ·¯ÇÑ Å°¿öµå¸¦ 'Á¢±Ù Áö½ÃÀÚ'¶ó°í ÇÏ´Âµ¥,
¿ÜºÎ¿¡¼­ ÀÌ·¯ÇÑ ¸â¹öµé¿¡ Á¢±ÙÀ» ÇÒ ¼ö ÀÖ³Ä ¾ø³Ä¸¦ Áö½ÃÇØÁÖ´Â °ÍÀÔ´Ï´Ù.
private Å°¿öµåÀÇ °æ¿ì, ¾Æ·¡¿¡ ¾²¿©Áø °ÍµéÀº ¸ğµÎ °´Ã¼ ³»¿¡¼­ º¸È£µÇ°í ÀÖ´Ù ¶ó´Â ÀÇ¹ÌÀÌÁö¿ä.

Áï, ¸â¹ö º¯¼öµéÀÌ ¾È¿¡¼­ º¸È£ ¹Ş°í ÀÖ´ø °Í ±â¾ïÇÏ½ÃÁÒ?
privateµÇ°í ÀÖ´Â ¸ğµç °ÍµéÀº ÀÚ±â °´Ã¼ ¾È¿¡¼­¸¸ Á¢±ÙÇÒ ¼ö ÀÖÀ» »Ó
°´Ã¼ ¿ÜºÎ¿¡¼­´Â Á¢±ÙÇÒ ¼ö ¾ø°Ô µË´Ï´Ù.

¹İ¸é¿¡ public Å°¿öµåÀÇ °æ¿ì,
¸â¹ö ÇÔ¼öµéÀ» publicÀ¸·Î ÁöÁ¤ÇÏ¿´½À´Ï´Ù.
publicÀÌ¶ó´Â °ÍÀº ¸» ±×´ë·Î °ø°³µÈ °ÍÀ¸·Î ¿ÜºÎ¿¡¼­ ¸¶À½²¯ ÀÌ¿ëÇÒ ¼ö ÀÖ°Ô µË´Ï´Ù.
±×·¡¼­ mainÇÔ¼ö¿¡¼­µµ ÀÌµéÀ» ¸¶À½²¯ Á¢±ÙÇÒ ¼ö ÀÖ¾ú½À´Ï´Ù.
¸¸ÀÏ ¸â¹ö ÇÔ¼öµéÀ» private ·Î ¼³Á¤ÇØ¹ö·È´Ù¸é ¾î¶³±î¿ä. public Å°¿öµå¸¦ Áö¿öº¾½Ã´Ù.
¿À·ù°¡ 3°³ Á¤µµ µîÀåÇÏ°Ô µË´Ï´Ù.
´Ù½Ã ¸»ÇØ, AnimalÀÇ private¸â¹ö ÇÔ¼ö¿¡ Á¢±ÙÇÒ ¼ö ¾ø´Ù´Â ÀÇ¹Ì°ÚÁö¿ä.
°á°úÀûÀ¸·Î ¿ÜºÎ¿¡¼­ Á¢±ÙÀ» ÇÒ ¼ö ¾ø´Â °´Ã¼´Â ±×³É ¾Æ¹«Â¦¿¡µµ ¾µ¸ğ ¾ø´Â µ¢¾î¸®·Î ³²°Ô µË´Ï´Ù.
*/

/* --- < »ı¼ºÀÚ¿Í ¼Ò¸êÀÚ > --- */

/*
< ¼±¾ğ°ú Á¤ÀÇ > : º¯¼ö³ª ÇÔ¼ö¸¦ »ı¼ºÇÒ ¶§ ¼±¾ğ°ú Á¤ÀÇ°¡ ÇÊ¿äÇÏ´Ù.
	#. ÀÌ¶§ ÀÏ¹İ Å¸ÀÔÀÇ º¯¼ö´Â ±âº»°ªÀ¸·Î ÃÊ±âÈ­ÇÏ°Å³ª °£´ÜÇÏ°Ô ÃÊ±â°ªÀ» ÁöÁ¤ÇÒ ¼ö ÀÖ´Ù.
		#. < ¼±¾ğ( int x; ) > : Å¸ÀÔ°ú °´Ã¼ÀÌ¸§À» ¸Ş¸ğ¸® °ø°£¿¡ ÁöÁ¤ÇØ ÁØ´Ù.
		#. < Á¤ÀÇ( x = 2; ) > : ÀÌ¸§Ç¥°¡ ºÙÀº ¸Ş¸ğ¸® °ø°£¿¡ °ªÀ» Áı¾î ³Ö¾îÁØ´Ù.
		#. < ÃÊ±âÈ­( int x = 2; ) > : ¼±¾ğ°ú Á¤ÀÇÀÇ ±â´ÉÀ» ÇÑ ¹ø¿¡ ½ÇÇà ÇÑ´Ù.
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
| Å¬·¡½º °´Ã¼´Â ¾î¶»°Ô ÃÊ±âÈ­ÇÒ ¼ö ÀÖ³ª? ¸â¹ö°¡ ¿©·¯ °³°¡ Á¸ÀçÇÏ¹Ç·Î ´ÜÀÏ Ç¥Çö½ÄÀ¸·Î´Â Ã³¸®°¡ |
| ¾î·Æ´Ù. Æ¯È÷³ª µ¿Àû °´Ã¼µéÀ» ¸â¹ö·Î °¡Áö°í ÀÖ´Ù¸é ¸Ş¸ğ¸® ÇÒ´ç¿¡ ´ëÇÑ º¹ÀâÇÑ ±â´ÉÀÌ Ãß°¡µÇ¾î |
| ¾ß ÇÏ¹Ç·Î ÀÏ¹İ Å¸ÀÔ°ú °°Àº Á¤ÀÇ³ª ÃÊ±âÈ­°¡ ºÒ°¡´É ÇÏ´Ù.									  |
| C++ÀÇ Å¬·¡½º´Â ÀÌ·¯ÇÑ »óÈ²À» À§ÇØ »ı¼ºÀÚ( Constructor )¿Í ¼Ò¸êÀÚ( Destructor )¶ó´Â °³³äÀÌ   |
| Ãß°¡µÇ¾ú´Ù.																				  |
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
< »ı¼ºÀÚ > : Å¬·¡½ºÀÇ °´Ã¼°¡ ÀÎ½ºÅÏ½ºÈ­µÉ ¶§ ÀÚµ¿ÀûÀ¸·Î È£ÃâµÇ´Â Æ¯º°ÇÑ ¸â¹ö ÇÔ¼ö
	#. »ı¼ºÀÚ´Â Å¬·¡½ºÀÇ À¯È¿ÇÑ ÀÎ½ºÅÏ½º¸¦ »ı¼ºÇÏ´Â °ÍÀ» ´ã´çÇÏ´Âµ¥, ¸â¹öµéÀ» ÀûÀıÈ÷ ÃÊ±âÈ­ÇÏ´Â °ÍÀ» Ã¥ÀÓÁø´Ù.
< ¼Ò¸êÀÚ > : Å¬·¡½º °´Ã¼°¡ ¼Ò¸êµÉ ¶§ °´Ã¼°¡ »ç¿ëÇÏ´ø ÀÚ·á¸¦ Áö¿ì´Â °ÍÀ» ´ã´çÇÏ´Â Æ¯º°ÇÑ ¸â¹ö ÇÔ¼ö
*/

//#include <iostream>
//
//class MyClass {
//// #2. ÀÎ½ºÅÏ½º¸¦ ¸¸µé±â À§ÇØ MyClassÅ¬·¡½ºÀÇ ¸â¹ö¸¦ ±¸¼ºÇÑ´Ù.
//public:
//// #3. RAM¿¡ MyClassÅ¸ÀÔÀÇ °ø°£À» ÇÒ´çÇÏ°í, ÇØ´ç °ø°£¿¡ »ı¼ºÀÚ¸¦ È£ÃâÇÑ´Ù.
//	MyClass() { std::cout << "[»ı¼ºÀÚ] : MyClass" << std::endl; }
//// #6. MyClassÅ¬·¡½ºÀÇ ÀÎ½ºÅÏ½º°¡ ¼Ò¸êµÇ¸é¼­ ¼Ò¸êÀÚ°¡ È£ÃâµÈ´Ù.
//	~MyClass() { std::cout << "[¼Ò¸êÀÚ] : ~MyClass" << std::endl; }
//};
//
//int main()
//{
//	{
//// #1. MyClassÅ¬·¡½ºÀÇ ÀÎ½ºÅÏ½ºÈ­¸¦ ÁøÇàÇÑ´Ù.
//// #4. »ı¼ºÀÚ°¡ È£ÃâµÈ MyClassÅ¸ÀÔÀÇ °ø°£¿¡ c¶ó´Â ÀÌ¸§Ç¥¸¦ ºÙ¿© ÀÎ½ºÅÏ½º¸¦ ¸¸µç´Ù.
//		MyClass c;
//		std::cout << "--* 1 *--" << std::endl;
//	}
//// #5. {}ºí·°ÀÌ ³¡³ª¸é Áö¿ª º¯¼ö·Î ¸¸µç c°¡ ¼Ò¸êµÈ´Ù.
//	std::cout << "--* 2 *--" << std::endl;
//}

//#include <iostream>
//
//class MyClass
//{
//public:
//	int mValue;
//// #2. ´Ù¸¸ »ç¿ëÀÚ°¡ ÀÔ·ÂÇÑ »ı¼ºÀÚ°¡ ÀÖÀ» °æ¿ì À¯´ÏÆû ÃÊ±âÈ­´Â ¹«½ÃµÇ°í »ı¼ºÀÚ°¡ È£ÃâµÈ´Ù.
//};
//
//int main()
//{
//	MyClass c{};
//	std::cout << c.mValue;
//// #1. public °ø°£¿¡ ¸â¹öº¯¼ö°¡ ÀÖÀ» °æ¿ì À¯´ÏÆû ÃÊ±âÈ­¸¦ ÇÒ ¼ö ÀÖ´Ù.
//}

//#include <iostream>
//
//// #4. ÀÎ½ºÅÏ½º¸¦ ¸¸µé±â À§ÇØ KnightÅ¬·¡½ºÀÇ ¸â¹ö¸¦ ±¸¼ºÇÑ´Ù.
//class Knight
//{
//public:
//// #5. RAM¿¡ KinghtÅ¬·¡½º ¸â¹ö°¡ ±¸¼ºµÇ°í »ı¼ºÀÚ°¡ È£ÃâµÈ´Ù.
//	Knight() { std::cout << "±â»ç°¡ ÆÄÆ¼¿¡ ÇÕ·ùÇÏ¿´´Ù." << std::endl; }
//
//	void Nothing() {}
//};
//
//// #2. ÀÎ½ºÅÏ½º¸¦ ¸¸µé±â À§ÇØ PartyÅ¬·¡½ºÀÇ ¸â¹ö¸¦ ±¸¼ºÇÑ´Ù.
//class Party
//{
//private:
//// #3. KnightÅ¸ÀÔÀÇ ÀÎ½ºÅÏ½ºÈ­¸¦ ÁøÇàÇÑ´Ù.
//	Knight mUltraMarine;
//// #6. »ı¼ºÀÚ°¡ È£ÃâµÈ ¸Ş¸ğ¸® °ø°£¿¡ mUltraMarineÀÌ¶ó´Â ÀÌ¸§Ç¥¸¦ ºÙÀÎ´Ù.
//
//public:
//// #7. RAM¿¡ PartyÅ¬·¡½º ¸â¹ö°¡ ±¸¼ºµÇ°í »ı¼ºÀÚ°¡ È£ÃâµÈ´Ù.
//	Party(){ std::cout << "¸¶¿ÕÅä¹ú ÆÄÆ¼°¡ °á¼ºµÇ¾ú´Ù!!!" << std::endl; }
//};
//
//int main()
//{
//// #1. Party Å¸ÀÔÀÇ ÀÎ½ºÅÏ½ºÈ­¸¦ ÁøÇàÇÑ´Ù.
//	Party Hero;
//// #8. »ı¼ºÀÚ°¡ È£ÃâµÈ ¸Ş¸ğ¸® °ø°£¿¡ Hero¶ó´Â ÀÌ¸§Ç¥¸¦ ºÙÀÎ´Ù.
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
//// #. MyArrayÅ¸ÀÔÀ¸·Î ÀÎ½ºÅÏ½º¸¦ »ı¼ºÇÏ¸é ÀÚµ¿À¸·Î ¹è¿­ ÇüÅÂÀÇ ¸Ş¸ğ¸® °ø°£ÀÌ µ¿Àû ÇÒ´çµÈ´Ù.
//// #. {}ºí·°ÀÌ ³¡³ª°í Áö¿ª º¯¼öÀÎ array°¡ ¼Ò¸êµÇ¸é ¼Ò¸êÀÚ°¡ ÀÚµ¿À¸·Î È£ÃâµÇ¾î µ¿Àû ÇØÁ¦ÇÑ´Ù.
//}

/* < ±âº» »ı¼ºÀÚ( Default Constructor ) > */

//#include <iostream>
//
//class MyClass {
//private:
//	int mValue;
//	std::string mName;
//
//public:
//	MyClass() {	// #. ¸Å°³ º¯¼ö°¡ ¾ø´Â »ı¼ºÀÚÀÇ ÇüÅÂ·Î ¸â¹öµéÀ» ±âº»°ªÀ¸·Î ÃÊ±âÈ­ÇÑ´Ù.
//		mValue = 0;
//		mName = "UnNamed";
//	}
//};
//
//int main()
//{
//	MyClass c;
//}

/* < ¾Ï½ÃÀû ±âº» »ı¼ºÀÚ > */

/*
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
| ÇÁ·Î±×·¡¸Ó°¡ »ı¼ºÀÚ¸¦ Á¦°øÇÏÁö ¾ÊÀ¸¸é C++ÄÄÆÄÀÏ·¯´Â ÀÚµ¿ÀûÀ¸·Î ¾Ï½ÃÀû ±âº» »ı¼ºÀÚ¸¦ ¸¸ |
| µé¾î ÁØ´Ù. ¾Ï½ÃÀû ±âº» »ı¼ºÀÚ´Â ÄÚµåÀÇ ÆíÀÇ¸¦ À§ÇØ Á¦°øÇÏ´Â ±â´ÉÀÌ±â ¶§¹®¿¡ ¸â¹ö ÃÊ±âÈ­|
| ´Â ÀüÇô ÇÏÁö ¾Ê´Â´Ù. ±×Àú ÅÖ ºñ¾î ÀÖ´Â ÇÔ¼öÀÌ´Ù.										 |
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
*/

//#include <iostream>		// < Title : POD >
//
//class MyClass {
//private:
//	int mValue;
//
//public:
//	MyClass(int a) { mValue = a; }
//// #. ÇÁ·Î±×·¡¸Ó°¡ ÀÓÀÇÀÇ »ı¼ºÀÚ¸¦ »ı¼ºÇÏ¿´±â ¶§¹®¿¡ ¾Ï½ÃÀû ±âº» »ı¼ºÀÚ´Â »ç¶óÁø »óÅÂ´Ù.
//};
//
//int main()
//{
//	MyClass c;
//// #. ¶§¿¡ µû¶ó ¾Ï½ÃÀû ±âº» »ı¼ºÀÚ¿Í °°ÀÌ ¾Æ¹«°Íµµ ÇÏÁö ¾Ê´Â ±âº» »ı¼ºÀÚ°¡ ÇÊ¿äÇÑ °æ¿ì°¡ ÀÖ´Ù.
//// #. ±×·²¶§  '= default;'¸¦ ÅëÇØ ¸í½ÃÀûÀ¸·Î PODÇüÅÂÀÇ ±âº» »ı¼ºÀÚ¸¦ ¸¸µé ¼ö ÀÖ´Ù.
//}

//#include <iostreaM>
//// »ı¼ºÀÚ´Â ±âº»ÀûÀ¸·Î "°´Ã¼ »ı¼º½Ã ÀÚµ¿À¸·Î È£ÃâµÇ´Â ÇÔ¼ö"¶ó°í º¼ ¼ö ÀÖ½À´Ï´Ù.
//// ÀÌ ¶§ ÀÚµ¿À¸·Î È£Ãâ µÇ¸é¼­ °´Ã¼¸¦ ÃÊ±âÈ­ ÇØÁÖ´Â ¿ªÇÒÀ» ´ã´çÇÏ°Ô µË´Ï´Ù.
//// »ı¼ºÀÚ´Â ¾Æ·¡¿Í °°ÀÌ Á¤ÀÇÇÕ´Ï´Ù.
//class MyClass
//{
//private:
//	int mValue;
//
//public:
//	MyClass() : mValue{ 0 } {}
//// ÀÌ·¸°Ô Á¤ÀÇ°¡ µÈ »ı¼ºÀÚ´Â °´Ã¼¸¦ »ı¼ºÇÒ ¶§ ´ÙÀ½°ú °°ÀÌ À§ ÇÔ¼ö¿¡¼­
//// Á¤ÀÇÇÑ ÀÎÀÚ¿¡ ¸Â°Ô¸¶Ä¡ ÇÔ¼ö¸¦ È£ÃâÇÏµíÀÌ ½áÁØ´Ù¸é À§ »ı¼ºÀÚ¸¦ È£ÃâÇÏ¸ç 
//// °´Ã¼¸¦ »ı¼ºÇÒ ¼ö ÀÖ°Ô µË´Ï´Ù.
//};

/*
µğÆúÆ® »ı¼ºÀÚ´Â ÀÎÀÚ¸¦ ÇÏ³ªµµ °¡ÁöÁö ¾Ê´Â »ı¼ºÀÚÀÎµ¥,
Å¬·¡½º¿¡¼­ »ç¿ëÀÚ°¡ ¾î¶°ÇÑ »ı¼ºÀÚµµ ¸í½ÃÀûÀ¸·Î Á¤ÀÇÇÏÁö ¾Ê¾ÒÀ» °æ¿ì¿¡
ÄÄÆÄÀÏ·¯°¡ ÀÚµ¿À¸·Î Ãß°¡ÇØÁÖ´Â »ı¼ºÀÚÀÔ´Ï´Ù.
*/

//#include <iostream>
//// ¾Õ¼­ ÇÔ¼öÀÇ ¿À¹ö·Îµù¿¡ ´ëÇØ Àá±ñ Â¤°í ³Ñ¾î°¬´Âµ¥, 
//// »ı¼ºÀÚ ¿ª½Ã ÇÔ¼öÀÌ±â ¶§¹®¿¡ ¸¶Âù°¡Áö·Î ÇÔ¼öÀÇ ¿À¹ö·ÎµùÀÌ Àû¿ëµÉ ¼ö ÀÖ½À´Ï´Ù.
//// ½±°Ô ¸»ÇØ ÇØ´ç Å¬·¡½ºÀÇ °´Ã¼¸¦ ¿©·¯°¡Áö ¹æ½ÄÀ¸·Î »ı¼ºÇÒ ¼ö ÀÖ°Ô µÇ°ÚÁö¿ä.
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

/* --- < ÃÊ±âÈ­ > --- */

/*
< º¹»ç ÃÊ±âÈ­( Copy Initialization ) > : int a = 2;
	#. ¸®ÅÍ·² 2°¡ ¹«¸íÀÇ intÅ¸ÀÔ °´Ã¼¿¡ ÀúÀåµÇ°í ¹èÁ¤¹®À» ÅëÇØ °ªÀÌ ´ëÀÔµÇ´Â ¹æ½Ä
	#. ÄÄÆÄÀÏ·¯´Â ÀÌ °úÁ¤À» ÀÚµ¿À¸·Î °£¼ÒÈ­ ÇØÁÖ´Âµ¥ 2°¡ ÀúÀåµÈ ¹«¸í °´Ã¼¿¡ a¶ó´Â ÀÌ¸§À» ºÙ¿© ¹ö¸°´Ù.

< Á÷Á¢ ÃÊ±âÈ­( Direct Initialization ) > : int a ( 2 );
	#. int, float, charµîÀÇ Å¸ÀÔ¿¡´Â ÀÌ¹Ì ³»ºÎÀûÀ¸·Î »ı¼ºÀÚ°¡ Á¸ÀçÇÑ´Ù.
	#. ÇÔ¼ö ÇüÅÂ·Î ÃÊ±âÈ­¸¦ ¼öÇàÇÏ´Â °ÍÀ¸·Î »ı¼ºÀÚ°¡ È£ÃâµÇ¾î °ªÀ» ÃÊ±âÈ­ ÇÑ´Ù.

< À¯´ÏÆû ÃÊ±âÈ­( Uniform Initialization ) > : int a { 2 };
	#. º¹»ç/Á÷Á¢ ÃÊ±âÈ­´Â ÀÏºÎ Å¸ÀÔ¿¡¼­¸¸ ÀÛµ¿ÇÏ´Â ÃÊ±âÈ­ ¹æ½ÄÀÌ´Ù.
	#. C++¿¡¼­´Â ¸ğµç °´Ã¼¿¡ µ¿ÀÏÇÏ°Ô ÀÛµ¿ÇÏ´Â ´ÜÀÏÇÑ ¹æ¹ıÀÎ À¯´ÏÆû ÃÊ±âÈ­¶ó´Â °³³äÀÌ ÀÖ´Ù.
	#. ¾î¶² °´Ã¼µç ÃÊ±âÈ­ ½ÃÅ³ ¼ö ÀÖÀ¸¸ç Çüº¯È¯ÀÌ Çã¿ëµÇÁö ¾Ê±â ¶§¹®¿¡ ¾ÈÀüÇÏ°í ºü¸£´Ù.

< À¯´ÏÆû º¹»ç ÃÊ±âÈ­( Uniform Copy Initialization ) > : int a = { 2 };
	#. ¸®ÅÍ·² 2¸¦ ¹«¸íÀÇ intÅ¸ÀÔ °´Ã¼¿¡ À¯´ÏÆû ÃÊ±âÈ­¸¦ ÇÏ°í ¹èÁ¤¹®À» ÅëÇØ °ªÀ» ´ëÀÔÇÑ´Ù.
*/

/* < Å¬·¡½º ÃÊ±âÈ­ > */

/*
< º¹»ç ÃÊ±âÈ­( Copy Initialization ) > : MyClass c = MyClass();
	#. ¹«¸íÀÇ °´Ã¼¸¦ ±âº» »ı¼ºÀÚ·Î ¸¸µé°í ¹èÁ¤¹®À» ÅëÇØ ¸â¹ö¸¦ ´ëÀÔÇÑ´Ù.

< Á÷Á¢ ÃÊ±âÈ­( Direct Initialization ) > : MyClass c(2, 1.0f);
	#. °´Ã¼°¡ »ı¼ºÀÚ¸¦ Á÷Á¢ È£ÃâÇÏ¿© ÃÊ±âÈ­ ÇÑ´Ù.

< À¯´ÏÆû ÃÊ±âÈ­( Uniform Initialization ) > : MyClass c{2, 1.0f};
	#. public º¯¼öµéÀ» ÃÊ±âÈ­ ÇÑ´Ù.
	#. ¸¸¾à µ¿ÀÏÇÑ Å¸ÀÔÀÇ ¸Å°³ º¯¼ö¸¦ ¹Ş´Â »ı¼ºÀÚ°¡ ÀÖ´Ù¸é »ı¼ºÀÚ°¡ È£ÃâµÈ´Ù.

< À¯´ÏÆû º¹»ç ÃÊ±âÈ­( Uniform Copy Initialization ) > : MyClass c = {2, 1.0f};
	#. ¹«¸íÀÇ °´Ã¼¸¦ À¯´ÏÆû ÃÊ±âÈ­·Î ¸¸µé°í ¹èÁ¤¹®À» ÅëÇØ ¸â¹ö¸¦ ´ëÀÔÇÑ´Ù.
*/

/* --- < ´ë¸® »ı¼ºÀÚ( Delegating Constructor ) > --- */

//#include <iostream>
//
//class MyClass
//{
//private:
//	int mOne;
//	int mTwo;
//
//public:
//// #. ±âº» »ı¼ºÀÚ°¡ ¸Å°³ º¯¼ö¸¦ ¹Ş´Â ÀÓÀÇÀÇ »ı¼ºÀÚ¸¦ È£ÃâÇÑ´Ù.
//// #. »ı¼ºÀÚ°¡ ´Ù¸¥ »ı¼ºÀÚ¸¦ È£ÃâÇÏ´Â °ÍÀ» »ı¼ºÀÚ À§ÀÓÀÌ¶ó°í ÇÑ´Ù.
//	MyClass() : MyClass(1, 2){}
//	MyClass(int a, int b) : mOne{ a }, mTwo{ b }{}
//// #. Å¬·¡½ºÀÇ ¸â¹ö¸¦ ÃÊ±âÈ­ ÇÑ´Ù.
//// ( : )»ı¼ºÀÚÀÇ ÃÊ±âÈ­ ½ÄÀº »ı¼ºÀÚÀÇ ºí·°{}º¸´Ù ¸ÕÀú ½ÇÇà µÈ´Ù.
//};
//
//int main()
//{
//	MyClass c;
//// #. ¸Å°³ º¯¼ö¸¦ ¹ŞÁö ¾Ê´Â ±âº» »ı¼ºÀÚ¸¦ È£ÃâÇÑ´Ù.
//}

/* < ±âº» »ı¼ºÀÚ( Default Constructor ) > */

//#include <iostream>
//
//class MyClass
//{
//private:
//	int mValue;
//
//public:	
//	MyClass() : mValue{ 1 } {}
//// #. Å¬·¡½º¸í() : ¸â¹ö º¯¼ö{ °ª } {}
//// #. À¯´ÏÆû ÃÊ±âÈ­½ÄÀ» ÀÌ¿ëÇÏ¿© ±âº» »ı¼ºÀÚ¿¡¼­ ¸â¹öº¯¼ö¸¦ ÃÊ±âÈ­ ÇÒ ¼ö ÀÖ´Ù.
//};
//
//int main()
//{
//// #. ÀÎ½ºÅÏ½º¸¦ ¸¸µé¶§ Àü´ŞÇÏ´Â ÀÎÀÚ°¡ ¾ø´Ù¸é ±âº» »ı¼ºÀÚ°¡ È£ÃâµÈ´Ù.
//	MyClass c1;
//}

/* < ´ë¸® »ı¼ºÀÚ( Delegating Constructor ) > */

//#include <iostream>
//
//class MyClass
//{
//private:
//	int mValue;
//
//public:
//// #. »ı¼ºÀÚ´Â Å¬·¡½º¸¦ ¸¸µé ¶§ °ªÀ» ÃÊ±âÈ­ÇÏ°Å³ª Æ¯Á¤ ÀÛ¾÷À» ¼öÇàÇÏ´Â °ÍÀÌ´Ù.
//// #. »ı¼ºÀÚ´Â Æ¯º°ÇÑ ÇÔ¼ö·Î ÇØ´ç Å¬·¡½ºÀÇ Á¤º¸·Î ¹«¸íÀÇ °´Ã¼¸¦ ¸¸µé¾î ¹İÈ¯ÇÏ´Â °ÍÀÌ ¸ñÀûÀÌ´Ù.
//	MyClass() : mValue{ 1 }
//	{
//		std::cout << "´Ù¾çÇÑ ¸Å°³º¯¼ö¸¦ °®´Â »ı¼ºÀÚ¸¦ ¸¸µç´Ù°í ÇØµµ ¼öÇàÇÏ´Â ÀÛ¾÷Àº µ¿ÀÏÇÏ´Ù." << std::endl;
//	}
//
//// #. µ¿ÀÏÇÑ ±â´ÉÀ» »ç¿ëÇÏ´Â °æ¿ì, Áßº¹ ÄÚµå¸¦ ¹æÁöÇÏ±â À§ÇØ ´ë¸® »ı¼ºÀÚ¸¦ »ç¿ëÇÏ´Â °ÍÀÌ ÁÁ´Ù.
//	MyClass(std::string name) : MyClass()
//	{
//		std::cout << "main ÇÔ¼ö¿¡¼­ MyClass Å¸ÀÔÀÇ °´Ã¼¸¦ »ı¼ºÇÑ´Ù." << name << std::endl;
//	}
//};
//
//int main()
//{	// #1. MyClass Å¸ÀÔÀÇ ÀÎ½ºÅÏ½ºÈ­°¡ ÁøÇàµÈ´Ù.
//	// #2. ¹®ÀÚ¿­À» ¸Å°³º¯¼ö·Î ¹Ş´Â ÀÓÀÇ »ı¼ºÀÚ°¡ È£ÃâµÈ´Ù.
//	// #3. ÀÓÀÇ »ı¼ºÀÚÀÇ ÃÊ±âÈ­½ÄÀÌ ½ÇÇàµÇ¸ç ±âº» »ı¼ºÀÚ°¡ È£ÃâµÈ´Ù.
//	// #4. ±âº» »ı¼ºÀÚÀÇ ÃÊ±âÈ­½ÄÀÌ ½ÇÇàµÇ¸ç mValue ÀÇ °ªÀÌ ÃÊ±âÈ­µÈ´Ù.
//	// #5. ±âº» »ı¼ºÀÚÀÇ {} ºí·Ï¾ÈÀÇ ³»¿ëÀÌ ½ÇÇàµÇ°í ÇÔ¼ö°¡ ¹İÈ¯µÈ´Ù.
//	// #6. ÀÓÀÇ »ı¼ºÀÚÀÇ {} ºí·Ï¾ÈÀÇ ³»¿ëÀÌ ½ÇÇàµÇ°í ÇÔ¼ö°¡ ¹İÈ¯µÈ´Ù.
//	// #7. ¸Ş¸ğ¸® °ø°£¿¡ Å¬·¡½º Å¸ÀÔÀÇ ¹«¸í °´Ã¼°¡ »ı¼ºµÇ°í ÀÌ °÷¿¡ c1 ÀÌ¶ó´Â ÀÌ¸§Ç¥¸¦ ºÙÀÎ´Ù.
//	MyClass c("River");
//}

/* < º¹»ç »ı¼ºÀÚ( Copy Constructor ) > */

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
//		std::cout << "ÀÏ¹İÀûÀÌ±â Â¦ÀÌ ¾ø´Â ÀÏ¹İ »ı¼ºÀÚ°¡ È£ÃâµÇ¾ú´Ù..." << std::endl;
//	}
//	MyClass(const MyClass& from)
//	{
//		mValue = from.mValue;
//		std::cout << "Çã°Æ! º¹»ç »ı¼ºÀÚ°¡ È£Ãâ‰çµû!!!!!" << std::endl;
//	}
//};
//
//int main()
//{	// #1. MyClassÅ¸ÀÔÀÇ ÀÎ½ºÅÏ½ºÈ­°¡ ÁøÇàµÈ´Ù.
//	// #2. ¸Å°³ º¯¼ö MyClass{1}À» Àü´ŞÇÏ±â À§ÇØ MyClass{1}ÀÇ ÀÎ½ºÅÏ½ºÈ­¸¦ ÁøÇàÇÑ´Ù.
//	// #3. ±âº» »ı¼ºÀÚ°¡ È£ÃâµÇ°í MyClass{1}ÀÇ ¸â¹ö°¡ ±¸¼ºµÇ¸ç ¹«¸íÀÇ °´Ã¼°¡ »ı¼ºµÈ´Ù.
//	// #4. ¹«¸íÀÇ °´Ã¼°¡ ¸Å°³º¯¼ö·Î Àü´ŞµÇ°í º¹»ç »ı¼ºÀÚ°¡ È£ÃâµÈ´Ù.
//	MyClass c1{ MyClass{1} };
//	std::cout << "----- * ----- * ----- * ----- * ----- * ----- * -----" << std::endl;
//
//	// #1. MyClassÅ¸ÀÔÀÇ ÀÎ½ºÅÏ½ºÈ­°¡ ÁøÇàµÈ´Ù.
//	// #2. ¸Å°³ º¯¼ö c1À» Àü´ŞÇÏ¿© c1ÀÇ ³»¿ëÀ» ±×´ë·Î º¹»çÇÏ¿© c2ÀÇ ¸â¹ö¿¡ ´ëÀÔÇÑ´Ù.
//	MyClass c2{ c1 };
//}

/* --- < »ó¼ö Å¬·¡½º( Const Class ) > --- */

/*
< const MyClass c; > : ±âº» »ı¼ºÀÚ·Î ÃÊ±âÈ­ÇÑ »ó¼ö °´Ã¼
< const MyClass c( 2, 2 ); > : ¸Å°³ º¯¼ö 2°³ÀÎ »ı¼ºÀÚ·Î ÃÊ±âÈ­ÇÑ »ó¼ö °´Ã¼
< const MyClass c{ 3, 3 }; > : À¯´ÏÆû ÃÊ±âÈ­¸¦ »ç¿ëÇÑ »ó¼ö °´Ã¼
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
| Å¬·¡½º ¿ª½Ã Å¸ÀÔÀ¸·Î »ı¼ºµÇ´Â °´Ã¼ÀÌ¹Ç·Î »ó¼ö °´Ã¼¸¦ ¸¸µé ¼ö ÀÖ´Ù. Å¬·¡½º Å¸ÀÔÀ¸·Î ¸¸µé |
| ¾îÁø °´Ã¼¸¦ »ó¼öÇüÅÂ·Î ¸¸µé ¼ö ÀÖ´Ù. »ó¼öÇü °´Ã¼´Â ¸â¹öÀÇ °ªÀ» ¹Ù²Ü ¼ö ¾ø´Ù.			  |
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
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
//// #. DoNothing()ÇÔ¼ö´Â Å¬·¡½ºÀÇ ¸â¹ö º¯¼ö °ªÀ» ¹Ù²ÙÁö ¾Ê´Â ÇÔ¼öÀÌ´Ù.
//// #. ±×·¯³ª ÀÎ½ºÅÏ½º°¡ ÇÔ¼ö¸¦ È£ÃâÇÒ ¼ö ¾ø°í, È£ÃâÇÒ °æ¿ì ¿¡·¯°¡ ¹ß»ıÇÑ´Ù.
//// #. ÇÔ¼ö º»Ã¼´Â ¾ğÁ¦µç ÇÁ·Î±×·¡¸Ó°¡ ¼öÁ¤ÇÒ ¼ö ÀÖ±â ¶§¹®¿¡ À§ÇèÀ» ¹Ì¸® ¸·¾Æ³õ´Â´Ù.
//
//	void RealyDoNothing() const {}
//// #. ¸â¹ö ÇÔ¼ö¸¦ »ó¼ö·Î ÁöÁ¤ÇÒ °æ¿ì »ó¼ö Å¬·¡½º °´Ã¼°¡ È£ÃâÇÒ ¼ö ÀÖ´Ù.
//};
//
//int main()
//{
//	const MyClass c(0, 0);
//	c.RealyDoNothing();
//}

/* --- < Á¤Àû ¸â¹ö( static member ) > --- */

/*
< Á¤Àû ¸â¹ö > : °°Àº Å¬·¡½º·Î ¸¸µé¾îÁø ¸ğµç ÀÎ½ºÅÏ½º °´Ã¼¿¡ °ÉÃÄ ´Ü ÇÏ³ª¸¸ Á¸ÀçÇÏ´Â °ª
	#. ÀÎ½ºÅÏ½º°¡ ¾Æ´Ñ Å¬·¡½º¿¡¸¸ Á¸ÀçÇÑ´Ù°í ÇØ¼­ 'Å¬·¡½º º¯¼ö( class variable )¶ó°íµµ ÇÑ´Ù.
	#. Á¤Àû ¸â¹ö º¯¼ö´Â ´Ù¸¥ ¸â¹ö º¯¼ö¿Í ´Ù¸£°Ô ¹İµå½Ã ¿ÜºÎ¿¡ º¯¼ö¸¦ ´Ù½Ã Á¤ÀÇÇØ¾ß ÇÑ´Ù.
*/

//#include <iostream>
//
//class MyClass
//{
//public:
//// #. ÀÎ½ºÅÏ½º´Â »ı¼ºµÉ ¶§¸¶´Ù ¸â¹öµéÀÌ »õ·Î ±¸¼ºµÈ´Ù.
//// #. staticÀº ±×·² ¼ö ¾ø±â ¶§¹®¿¡ static¸â¹öº¯¼ö´Â ÀÎ½ºÅÏ½º°¡ ¾Æ´Ñ Å¬·¡½º°¡ ¼ÒÀ¯ÇÑ´Ù.
//	static int mValue;
//
//	MyClass() { mValue++; }
//	~MyClass() { mValue--; }
//};
//// #. static¸â¹öº¯¼ö´Â Å¬·¡½º ¼ÒÀ¯ÀÌ±â ¶§¹®¿¡ Å¬·¡½º ¿ÜºÎ¿¡¼­ ¸â¹ö º¯¼ö¸¦ µû·Î Á¤ÀÇÇØ Áà¾ßÇÑ´Ù.
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
//// #. MyClass¼ÒÀ¯ÀÇ static¸â¹ö º¯¼ö ¼±¾ğ
//	static int mValue1;
//	// ÀÎ½ºÅÏ½º ¼ÒÀ¯ÀÇ ¸â¹ö º¯¼ö ¼±¾ğ
//	int mValue2;
//
//public:
//// #. MyClass¼ÒÀ¯ÀÇ static¸â¹ö ÇÔ¼ö ¼±¾ğ
//	static void DoSomething();
//};
//
//// #. Å¬·¡½º ¿ÜºÎ¿¡¼­ static¸â¹ö º¯¼ö, ¸â¹ö ÇÔ¼ö Á¤ÀÇ
//int MyClass::mValue1{ 0 };
//
//void MyClass::DoSomething()
//{
//	std::cout << mValue1;
//// #. ÀÎ½ºÅÏ½º ¼ÒÀ¯ÀÇ ¸â¹öÇÔ¼ö´Â ¸Å°³Ã¼ÀÎ this°¡ ¾Ï½ÃÀûÀ¸·Î Á¸ÀçÇÏ¿´´Ù.
//// #. MyClass¼ÒÀ¯ÀÇ static¸â¹ö ÇÔ¼ö´Â this°¡ ¾ø´Ù.
//}
//
//int main()
//{
//	MyClass c1;
//
//	MyClass::mValue1 = 1;
//	MyClass::DoSomething();
//// #. static¸â¹ö º¯¼ö/ÇÔ¼ö´Â Å¬·¡½º¿¡ Á¾¼ÓµÇ¾î ÀÖ´Ù´Â °ÍÀ» ¹üÀ§ ÇØ°á ¿¬»êÀÚ·Î Ç¥±âÇØÁÖ¾î¾ß ÇÑ´Ù.
//}

/* --- < Ä£±¸( Friend ) > --- */

/*
< Ä£±¸ > : ³»°¡ ³Ê¸¦ Ä£±¸¶ó°í ÁöÁ¤ÇÏ¸é ³Ê´Â ³» ¸ğµç °ÍÀ» ¾Ë ¼ö ÀÖ´Ù.
	#. Ä£±¸·Î ÁöÁ¤µÈ Å¬·¡½º/ÇÔ¼ö´Â private, protected¸â¹ö¿¡ Á¢±ÙÇÒ ¼ö ÀÖ´Ù.
	#. Ä£±¸°ü°è´Â ÀÏ¹æÇâ¼º °ü°èÀÌ´Ù.
		=> A°¡ B¸¦ Ä£±¸·Î ÁöÁ¤ÇÏ¸é B´Â AÀÇ ¸ğµç °ÍÀ» ¾Ë ¼ö ÀÖ´Ù.
		=> ±×·¯³ª A´Â BÀÇ ¸ğµç °ÍÀ» ¾Ë ¼ö ¾ø´Ù.
*/

//#include <iostream>
//
//class Sword
//{
//	friend class Warrior;
//// #1. WarriorÅ¬·¡½º¸¦ friend·Î ÁöÁ¤ÇÏ¿© º»ÀÎÀÇ ¸ğµç Á¤º¸¸¦ Warrior¿¡°Ô °ø°³ÇÑ´Ù.
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
//		std::cout << "Ä®À» ÈÖµÑ·¯ " << sword.mAttackDamage << "¸¸Å­ ÇÇÇØ¸¦ ÁÖ¾ú´Ù!!!" << std::endl;
//// #2. mAttackDamage´Â SwordÅ¬·¡½ºÀÇ private¸â¹ö º¯¼öÁö¸¸ friend·Î ÁöÁ¤µÇ¾ú±â ¶§¹®¿¡ WarriorÅ¬·¡½º¿¡¼­ »ç¿ëÇÒ ¼ö ÀÖ´Ù.
//	}
//};
//
//int main()
//{
//	Sword shortSword{ 10 };
//	Warrior w;
//// #3. SwordÅ¬·¡½º°¡ friend·Î WarriorÀ» ÁöÁ¤ÇÑ °ÍÀº WarriorÅ¬·¡½º ±× ÀÚÃ¼¿¡°Ô Á¤º¸¸¦ °ø°³ÇÑ °ÍÀÌ ¾Æ´Ï´Ù.
//// #4. WarriorÅ¸ÀÔÀ¸·Î »ı¼ºµÈ ÀÎ½ºÅÏ½º( °´Ã¼ )¿¡°Ô °ø°³ÇÑ °ÍÀÌ´Ù.
//
//	w.AttackWith(shortSword);
//// #5. ÀÎ½ºÅÏ½º w´Â ¸â¹ö ÇÔ¼ö¸¦ ÅëÇØ SwordÅ¬·¡½ºÀÇ privateÁ¤º¸¸¦ Ãâ·ÂÇÑ´Ù.
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
//// #1. Àü¿ªÇÔ¼ö DamageBuff() ÇÔ¼ö¿¡°Ô SwordÅ¬·¡½ºÀÇ ¸ğµç Á¤º¸¸¦ °ø°³ÇÑ´Ù.
//};
//void DamageBuff(Sword& sword)
//{
//	int oldDamage = sword.mAttackDamage;
//	sword.mAttackDamage = oldDamage * 2;
//	std::cout << "°ËÀ» °­È­Çß´Ù. " << oldDamage << "=>" << sword.mAttackDamage << std::endl;
//// #2. mAttackDamage´Â private¸â¹ö º¯¼öÁö¸¸ friend·Î ÁöÁ¤µÇ¾ú±â ¶§¹®¿¡ »ç¿ëÇÒ ¼ö ÀÖ´Ù.
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
//// #3. Å¬·¡½º¸¦ Àü¹æ ¼±¾ğÇØÁØ´Ù.
//
//class Warrior
//{
//public:
//	void AttackWith(Sword& sword);
//// #2. ¸â¹ö ÇÔ¼ö¸¦ Àü¹æ ¼±¾ğÇØÁØ´Ù.
//};
//class Sword
//{
//private:
//	int mAttackDamage;
//
//public:
//	Sword(int damage) : mAttackDamage{ damage } {}
//	friend void Warrior::AttackWith(Sword& sword);
//// #1. Á¤º¸¸¦ °ø°³ÇÒ Å¬·¡½º¸¦ Á¤º¸¸¦ ¹ŞÀ» ¸â¹ö ÇÔ¼öº¸´Ù ¾Æ·¡¿¡ ¼±¾ğÇÑ´Ù.
//};
//void Warrior::AttackWith(Sword& sword)
//{
//	std::cout << "Ä®À» ÈÖµÑ·¯ " << sword.mAttackDamage << "¸¸Å­ ÇÇÇØ¸¦ ÁÖ¾ú´Ù!!!" << std::endl;
//// #4. friend·Î ÁöÁ¤µÈ ¸â¹ö ÇÔ¼ö¸¦ ¼±¾ğ°ú ºĞ¸®ÇÏ¿© Á¤ÀÇ¸¦ ÇÑ´Ù.
//}
//
//int main()
//{
//	Sword shortSword{ 10 };
//	Warrior player;
//
//	player.AttackWith(shortSword);
//}

/* --- < ¿¬»êÀÚ ¿À¹ö·Îµù( Operator Overloading ) > --- */

/*
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
| int, double, char°ú °°Àº Çü½ÄµéÀ» ´Ù·ç¸é¼­ +, -¿Í °°Àº ¿¬»êÀÚµéÀ» ´Ù·ç¾î º¸¾Ò´Ù.   |
| ÀÌ·¯ÇÑ ¿¬»êÀÚ´Â ÄÄÆÄÀÏ·¯ ³»ºÎÀûÀ¸·Î ÇÔ¼öÃ³·³ ÀÛµ¿ÇÑ´Ù.							 |
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
< °´Ã¼ÀÇ ¿¬»ê > : ¿¬»êÀÚ ÇÔ¼ö¸¦ ¸¸µé¾î¼­ °´Ã¼ÀÇ ¸â¹ö¸¦ ÀÏ°ıÀûÀ¸·Î ¿¬»êÇÒ ¼ö ÀÖ´Ù.
	#. ÄÄÆÄÀÏ·¯°¡ ¿¬»êÀÚ¸¦ È£ÃâÇÏ¿© ÀÏ¹İ Å¸ÀÔÀÇ ¿¬»êÀ» ÁøÇàÇÏµíÀÌ
	#. »ç¿ëÀÚ°¡ ¿¬»êÀÚ ÇÔ¼ö¸¦ Á÷Á¢ ¸¸µé¾î ÀÔ¸À´ë·Î ¿¬»êÀ» ½ÇÇàÇÒ ¼ö ÀÖ´Ù.
*/

//#include <iostream>		// < Title : ¿¬»êÀÚÀÇ ÄÄÆÄÀÏ ÇüÅÂ >
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
//// #. x + y¶ó´Â ¸í·É¾î¸¦ ½ÇÇàÇÏ¸é ÄÄÆÄÀÏ·¯´Â ÇØ´ç Å¸ÀÔ°ú ÀÏÄ¡ÇÑ ¿¬»êÀÚ ÇÔ¼ö¸¦ È£ÃâÇÑ´Ù.
//// #. ÇØ´ç ÇÔ¼ö¿¡¼­ ¿¬»êÀÌ ÁøÇàµÇ°í ±× °á°ú¸¦ ¹İÈ¯ÇØ ÁØ´Ù.
//}

//#include <iostream>		// < Title : °´Ã¼ÀÇ ¿¬»ê ÀÌ·Ğ >
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
//// #. ¸¸¾à »ç¿ëÀÚ°¡ ¿¬»êÀÚ ÇÔ¼ö¸¦ Á÷Á¢ ¸¸µç´Ù¸é?
//// #. a.x + b.x¶ó´øÁö a.x + b.y¶ó´øÁö, ´Ù¾çÇÑ ¹æ½ÄÀ¸·Î °´Ã¼ÀÇ ¿¬»êµé ½ÇÇàÇÒ ¼ö ÀÖ´Ù.
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
//// #. ¸Å°³ º¯¼ö°¡ »ó¼ö ÂüÁ¶ÇüÀÌ´Ù. 
//// #. Áï »ó¼ö ÂüÁ¶ÇüÀ¸·Î ¹«¸íÀÇ °´Ã¼ ¶ÇÇÑ ÀÎÀÚ·Î ¹ŞÀ» ¼ö ÀÖ°Ô ÇÑ´Ù.
//Point2D operator+(const Point2D& p1, const Point2D& p2)
//{
//	Point2D result;
//	result.mX = p1.mX + p2.mX;
//	result.mY = p1.mY + p2.mY;
//
//	return result;
//// #. ¹İÈ¯µÇ´Â result°´Ã¼´Â ÇÔ¼ö°¡ Á¾·áµÇ¸é ÇÔ²² »ç¶óÁø´Ù.
//// #. ¶§¹®¿¡ ÀÌ ÇÔ¼öÀÇ ¹İÈ¯ Å¸ÀÔÀº ÂüÁ¶°¡ ¾Æ´Ñ °ª¿¡ ÀÇÇÑ º¹»ç·Î ÁöÁ¤ÇÑ´Ù.
//}
//
//int main()
//{
//	Point2D pt1{ 2,3 }, pt2{ 4,5 };
//	Point2D pt3, pt4;
//
//	pt3 = pt1 + pt2;		
//// #. pt3À» »©°í º¸¸é, [pt1 + pt2]´Â R_Value·Î ±×Àú Ç¥Çö½Ä¿¡ ºÒ°úÇÏ´Ù.
//// #. ¸Å°³ º¯¼ö·Î º¸³½ ÇüÅÂ°¡ (pt1, pt2)ÄŞ¸¶·Î ÀÌ·ç¾îÁø ÇüÅÂ°¡ ¾Æ´Ï¶ó´Â °ÍÀ» ÁÖÀÇ ±í°Ô ºÁ¾ßÇÑ´Ù.
//
//	pt3.Print();
//	pt4 = (pt1 + pt2) + pt3;
//	pt4.Print();
//}

//#include <iostream>		// < Title : Àü¿ª ÇÔ¼ö >
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
//// #. °´Ã¼ÀÇ + ¿¬»êÀÌ ÁøÇàµÉ ¶§¸¶´Ù È£ÃâµÇ´Â Àü¿ªÇÔ¼ö
//MyClass operator+(MyClass operand1, MyClass operand2)
//{
//	return MyClass{ operand1.mValue + operand2.mValue };
//// #. ¹İÈ¯°ª¿¡ ÀÌ¸§À» ºÙÀÌÁö ¾Ê¾Ò±â ¶§¹®¿¡ ¹«¸íÀÇ °´Ã¼°¡ »ı¼ºµÇ¾ú´Ù°¡ ¼Ò¸êµÈ´Ù.
//}
//
//int Square(const MyClass& c)
//{
//	return c.mValue * c.mValue;
//}
//
//int main()
//{
//	MyClass c1{ 1 }, c2{ 2 };	// »ı¼ºÀÚ x : 1, x :2
//
//	std::cout << "     " << Square(c1 + c2) << std::endl;	//	»ı¼ºÀÚ x : 3
//
//	std::cout << "     " << (c1 + c2).mValue << std::endl;	//	»ı¼ºÀÚ x : 3
//
//	MyClass c3 = c1 + c2;		// »ı¼ºÀÚ x : 3
//}

//#include <iostream>		// < Title : ¸â¹ö ÇÔ¼ö >
//
//class Point2D
//{
//private:
//	int mX, mY;
//
//public:
//	Point2D() = default;
//	Point2D(int x, int y) : mX{ x }, mY{ y }{}
//// #. ¸Å°³ º¯¼ö¸¦ ¹Ş´Â »ı¼ºÀÚ°¡ ÀÖ¾î¾ß ÇØ´ç ¿¬»êÀÚ ÇÔ¼ö¿¡¼­ ¹«¸íÀÇ °´Ã¼¸¦ ¸¸µé ¼ö ÀÖ´Ù.
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
//// #. [pt1 + pt2]´Â pt1.operator+(pt2);¿Í °°´Ù.
//	pt3 = pt1 + pt2;
//	pt3.Print();
//	pt4 = (pt1 + pt2) + pt3;
//	pt4.Print();
//}

//#include <iostream>		// < Title : ´ÜÇ× ¿¬»êÀÚ >
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
//// #. ¹İÈ¯ °ªÀ» »ó¼ö ÂüÁ¶ÇüÀ¸·Î ÁöÁ¤ÇÏ¿© È£ÃâÇÑ °´Ã¼¸¦ ±×´ë·Î ¹İÈ¯ÇÑ´Ù.
//// #. ÀüÀ§ ¿¬»ê ÇÔ¼ö
//	const Point2D& operator++()
//	{
//		++mX;
//		++mY;
//		// this´Â Æ÷ÀÎÅÍÀÌ±â ¶§¹®¿¡ ¿ªÂüÁ¶°¡ ÇÊ¿äÇÏ´Ù.
//		return *this;
//	}
//
//// #. ÈÄÀ§ ¿¬»ê ÇÔ¼ö´Â ¾Æ¹« ÀÇ¹Ì ¾ø´Â ¸Å°³º¯¼ö¸¦ ÁöÁ¤ÇØ ÁØ´Ù.
//	Point2D operator++(int x)
//	{	// #. °ªÀ» ¸ÕÀú µ¹·ÁÁÖ°í ÀÌ ÈÄ¿¡ Áõ°¡½ÃÄÑ¾ß ÇÏ±â ¶§¹®¿¡ ±âÁ¸ °ªÀ» ÀúÀåÇÒ °´Ã¼¸¦ »ı¼ºÇÑ´Ù.
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

//#include <iostream>		// < Title : ¹è¿­ Ã·ÀÚ >
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
//// #. ¹İÈ¯ Å¸ÀÔÀ» int·Î ÁöÁ¤ÇÒ °æ¿ì ¿ø¼ÒÀÇ °ªÀ» °¡Á®¿Ã ¼ø ÀÖÁö¸¸
//// #. ´ëÀÔÇÏ´Â ¿ëµµ·Î´Â »ç¿ëÀÌ ºÒ°¡´É ÇÏ´Ù.
//	int& operator[] (const int& index)
//	{
//		return mArray[index];
//	}
//};
//int main()
//{
//	MyClass arr;
//	arr[0] = 1;
//// #1. < array[0] = 1; > Áß '=' ÀÇ ÁÂÃø°ª( array[0] )ÀÌ ¹è¿­ ¿¬»êÀÚ¸¦ È£ÃâÇÑ´Ù.
//// #3. ¸Å°³ º¯¼ö´Â ÀÎµ¦½º¸¦ ¹Ş±â ¶§¹®¿¡ ¸®ÅÍ·²À» ¹ŞÀ» ¼ö ÀÖ°Ô const ÂüÁ¶ÇüÀ¸·Î ÁöÁ¤ÇÑ´Ù.
//// #4. ¹İÈ¯Å¸ÀÔ º¹»ç¸¦ ÅëÇØ ¹İÈ¯ÇÑ´Ù¸é ÇÔ¼ö ¾È¿¡ this¿Í ÇÔ¼ö¸¦ È£ÃâÇÑ °´Ã¼´Â ¼­·Î ´Ù¸¥ °´Ã¼°¡ µÈ´Ù.
//// #6. ±×·³ ¹è¿­ ¿ä¼Ò¿¡ °ªÀ» ´ëÀÔÇÒ ¼ö ¾ø±â ¶§¹®¿¡ ÂüÁ¶ÇüÀ» ¹İÈ¯ÇÑ´Ù.
//
//	std::cout << arr[0] << " : " << arr[1] << std::endl;
//// ¿¬»êÀÚ ÇÔ¼ö´Â ¹İÈ¯µÇ´Â °ªÀÌ È£ÃâÇÑ °´Ã¼ ±× ÀÚÃ¼¶ó´Â °ÍÀ» ÁÖÀÇÇØ¾ß ÇÑ´Ù.
//// ¹İÈ¯ Å¸ÀÔÀ» Àß ÁöÁ¤ÇØ ÁÖÀÚ.
//}

//#include <iostream>		// < Title : Çüº¯È¯ >
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
//// #. Çüº¯È¯ ¿¬»êÀÚ ÇÔ¼ö´Â ¹İÈ¯°ªÀ» »ı·«ÇÏµµ·Ï µÇ¾îÀÖ´Ù.
//	operator const float()
//	{	// #. »ó¼ö¸¦ ¹İÈ¯ÇÏ¿© ¹İÈ¯µÈ °ªÀ» ¹Ù²ÙÁö ¸øÇÏ°Ô ÇÑ´Ù.
//		return float(sqrt(mX * mX + mY * mY));
//// sqrt °ø½ÄÀº double À» ¹İÈ¯ÇÏ´Â ÇÔ¼öÀÌ¹Ç·Î float Çüº¯È¯À» ÇØÁØ´Ù.
//	}
//};
//
//int main()
//{
//	Point2D pt1{ 2,3 };
//
//// #. Çüº¯È¯ ¿¬»êÀÚ ¶ÇÇÑ ÇÔ¼ö·Î Àü´ŞµÇ´Â °ÍÀº Ç¥Çö½ÄÀÌ±â ¶§¹®¿¡ ¹«¸íÀÇ °´Ã¼°¡ Àü´ŞµÈ´Ù.
//	float dist{ pt1 };
//	std::cout << pt1 << std::endl;
//}

//#include <iostream>		// < Title : ÇÔ¼ö ¿¬»êÀÚ >
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
//// #. ÇÔ¼ö ¿¬»êÀÚ´Â operator()°¡ ÀÌ¸§ÀÌ°í ()°¡ ¸Å°³ º¯¼ö°¡ µé¾î°¥ °ø°£ÀÌ´Ù.
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
//// pt1(); ÀÌ operator()¸¦ È£ÃâÇÏ¿³´Ù.
//// ÇÔ¼ö ¿¬»êÀÚ È£Ãâ½Ä : Function Object ÇÔ¼ö °´Ã¼ : Functor
//	pt1();
//	pt1.Print();
//
//// pt1(1, 2); ÀÌ ¿À¹ö·ÎµùµÈ operator()¸¦ È£ÃâÇÏ¿´´Ù.
//	pt1(1, 2);
//	pt1.Print();
//}

//#include <iostream>		// < Title : ½ºÆ®¸² ¿¬»êÀÚ >
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
//// std::coutÀÇ cout¶ÇÇÑ °´Ã¼ÀÌ´Ù. ÀÌ °´Ã¼´Â ostreamÀÌ¶ó´Â Å¬·¡½ºÀÇ °´Ã¼ÀÌ´Ù.
//};
//
//std::istream& operator >> (std::istream& is, Point2D pt)
//{
//	return is;
//}
//
//// std::coutÀº ostreamÅ¸ÀÔÀÌ´Ù.
//// #2. ÇÔ¼ö°¡ ½ÇÇàµÇ°í ¹İÈ¯µÈ´Ù.
//// #4. ÀÌ ÇÔ¼öÀÇ ¸Å°³ º¯¼ö ¿ª½Ã °ª¿¡ º¹»ç°¡ ÁøÇàµÇ±â ¶§¹®¿¡ ÂüÁ¶ÇüÀ¸·Î ¹Ù²ãÁÖ¾î¾ß ÇÑ´Ù.
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
//// #1. [std::cout << pt1] ±îÁö ¸ÕÀú ÇÔ¼ö¸¦ È£ÃâÇÑ´Ù.
//// #3. ¹İÈ¯ °ªÀÌ Ã¹¹øÂ° ¸Å°³ º¯¼ö°¡ µÇ°í <<std::endl; °¡ µÎ¹øÂ° ¸Å°³ º¯¼ö°¡ µÈ´Ù.
//	std::cout << pt1 << std::endl;
//}

//#include <iostream>		< Title : Á¡ ¿¬»êÀÚ >
//
//class Character
//{
//public:
//// #. ¹İÈ¯ Å¸ÀÔÀ» ÂüÁ¶ÇüÀ¸·Î ÁöÁ¤ÇÒ °æ¿ì ¿¬»êÀÚ¸¦ È£ÃâÇÑ °´Ã¼°¡ ±×´ë·Î µÇµ¹¾Æ ¿Â´Ù´Â ¶æÀÌ´Ù.
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
//// #. °´Ã¼°¡ ¸â¹öÇÔ¼ö¸¦ È£ÃâÇÒ ¶§´Â ÀÌ¹Ì ÇØ´ç ¸â¹ö ÇÔ¼ö¿¡ this¶ó´Â Å°¿öµå·Î °´Ã¼ ÀÚ½ÅÀ» °¡¸®Å°´Â Æ÷ÀÎÅÍ°¡ ÀÖ´Ù.
//	player.MoveForward()
//		.TurnLeft()
//		.TurnRight()
//		.Swing();
//}

/* ----- * ----- < »ê¼ú ¿¬»êÀÚ ¿À¹ö·Îµù > ----- * ----- */

/*
¾È³çÇÏ¼¼¿ä ¿©·¯ºĞ!
Áö³­ °­ÁÂ¿¡¼­ ¸¸µé¾ú´ø MyStringÀ» ¼Õ Á» ºÁÁÖ¾ú³ª¿ä?
¾Æ¸¶µµ MyStringÀ» ÀÌ¿ëÇÏ¿© ¿©·¯°¡Áö ÀÛ¾÷À» ÇÏ¸é¼­ ´ÙÀ½°ú °°Àº »ı°¢À» ÇÏ¼ÌÀ» ¼öµµ ÀÖ¾úÀ» °ÍÀÔ´Ï´Ù.

#. [if(str1.compare(str2) == 0)]ÇÏÁö ¸»°í [if(str1 == str2)]ÇÏ¸é ¾î¶³±î?

#. [str1.insert(str1.length(), str2)]ÇÏÁö ¸»°í [str1 = str1 + str2;]ÇÏ¸é ¾î¶³±î?

#. [str1[10] = 'c';]¿Í °°Àº °Íµµ ÇÒ ¼ö ÀÖÀ»±î?

¹°·Ğ C¾ğ¾î¿¡¼­´Â ÀÌ·¯ÇÑ °ÍÀ» »ó»óÁ¶Â÷ ÇÒ ¼ö ¾ø¾ú½À´Ï´Ù.
+, -, ==, [] ¿Í °°Àº ±âº» ¿¬»êÀÚµéÀº ¸ğµÎ C¾ğ¾î¿¡ ±âº»ÀûÀ¸·Î Á¤ÀÇµÇ¾î ÀÖ´Â
µ¥ÀÌÅÍ Å¸ÀÔ(int, float µî)¿¡¸¸ »ç¿ë °¡´ÉÇÑ °Íµé ÀÌ¿´±â ¶§¹®ÀÌÁÒ.
ÀÌµéÀ» ±¸Á¶Ã¼ º¯¼ö¿¡ »ç¿ëÇÑ´Ù´Â °ÍÀº ºÒ°¡´ÉÇÏ¿´½À´Ï´Ù.

ÇÏÁö¸¸ ³î¶ø°Ôµµ C++ ¿¡¼­´Â »ç¿ëÀÚ Á¤ÀÇ ¿¬»êÀÚ¸¦ »ç¿ëÇÒ ¼ö ÀÖ½À´Ï´Ù.
¾î¶°ÇÑ ¿¬»êÀÚµéÀÌ °¡´ÉÇÏ³ª¸é,
:: (¹üÀ§ ÁöÁ¤), . (¸â¹ö ÁöÁ¤), .* (¸â¹ö Æ÷ÀÎÅÍ·Î ¸â¹ö ÁöÁ¤) À» Á¦¿ÜÇÑ
¿©·¯ºĞÀÌ »ó»óÇÏ´Â ¸ğµç ¿¬»êÀÚ¸¦ »ç¿ëÇÒ ¼ö ÀÖ´Ù´Â °ÍÀÔ´Ï´Ù.

´ëÇ¥ÀûÀ¸·Î
#. [+, -, *] ¿Í °°Àº »ê¼ú ¿¬»êÀÚ

#. [+=, -=] ¿Í °°Àº Ãà¾àÇü ¿¬»êÀÚ

#. [>=, ==] ¿Í °°Àº ºñ±³ ¿¬»êÀÚ

#. [&&, ||] ¿Í °°Àº ³í¸® ¿¬»êÀÚ

#. [-> ³ª *] ¿Í °°Àº ¸â¹ö ¼±ÅÃ ¿¬»êÀÚ (¿©±â¼­ * ´Â ¿ªÂüÁ¶ ¿¬»êÀÚ ÀÔ´Ï´Ù. Æ÷ÀÎÅÍ¿¡¼­ *p ÇÒ ¶§ Ã³·³)

#. [++, --] Áõ°¨ ¿¬»êÀÚ

#. [] (¹è¿­ ¿¬»êÀÚ) ¿Í ½ÉÁö¾î () ±îÁö (ÇÔ¼ö È£Ãâ ¿¬»êÀÚ)
±îÁö ¸ğµÎ ¿©·¯ºĞÀÌ Á÷Á¢ ¸¸µé ¼ö ÀÖ½À´Ï´Ù.

ÀÌ ¶§ ÀÌ·¯ÇÑ ±âº» ¿¬»êÀÚµéÀ» Á÷Á¢ »ç¿ëÀÚ°¡ Á¤ÀÇÇÏ´Â °ÍÀ» ¿¬»êÀÚ¸¦ ¿À¹ö·Îµù(overloading)ÇÑ´Ù°í ºÎ¸¨´Ï´Ù.
ÀÌÀü¿¡ °°Àº ÀÌ¸§ÀÇ ÇÔ¼ö¸¦ ÀÎÀÚ¸¸ ´Ù¸£°Ô »ç¿ëÇÏ´Â °ÍÀ» 'ÇÔ¼ö¸¦ ¿À¹ö·Îµù Çß´Ù'¶ó°í ºÒ·¶´ø °Í Ã³·³,
±âº» ¿¬»êÀÚ¸¦ ¿©·¯ºĞÀÌ ¼³°èÇÑ Å¬·¡½º¿¡ ¸Â°Ô Á÷Á¢ »ç¿ëÇÏ´Â °ÍÀ» '¿¬»êÀÚ¸¦ ¿À¹ö·Îµù Çß´Ù'¶ó°í ºÎ¸¨´Ï´Ù.

ÀÏ´Ü ¿¬»êÀÚ ¿À¹ö·ÎµùÀ» »ç¿ëÇÏ±â À§ÇØ¼­´Â, ´ÙÀ½°ú °°ÀÌ ¿À¹ö·ÎµùÀ» ¿øÇÏ´Â ¿¬»êÀÚ ÇÔ¼ö¸¦ Á¦ÀÛÇÏ¸é µË´Ï´Ù.
(¸®ÅÏ Å¸ÀÔ) operator(¿¬»êÀÚ) (¿¬»êÀÚ°¡ ¹Ş´Â ÀÎÀÚ)

(¡Ø Âü°íÀûÀ¸·Î À§ ¹æ¹ı ¿Ü¿¡´Â ÇÔ¼ö ÀÌ¸§À¸·Î ¿¬»êÀÚ¸¦ Àı´ë ³ÖÀ» ¼ö ¾ø½À´Ï´Ù)
¿¹¸¦ µé¾î¼­ ¿ì¸®°¡ ==¸¦ ¿À¹ö·Îµù ÇÏ°í ½Í´Ù¸é, ==¿¬»êÀÚ´Â ±× °á°ú°ªÀÌ ¾ğÁ¦³ª boolÀÌ°í,
ÀÎÀÚ·Î´Â ==·Î ºñ±³ÇÏ´Â °Í ÇÏ³ª¸¸ ¹Ş°Ô µË´Ï´Ù. µû¶ó¼­ ´ÙÀ½°ú °°ÀÌ ÇÔ¼ö¸¦ Á¤ÀÇÇÏ¸é µË´Ï´Ù.

#. bool operator==(MyString& str);
ÀÌÁ¦, ¿ì¸®°¡ [str1 == str2]¶ó´Â ¸í·ÉÀ» ÇÑ´Ù¸é ÀÌ´Â [str1.operator==(str2)]·Î ³»ºÎÀûÀ¸·Î º¯È¯µÇ¼­ Ã³¸®µË´Ï´Ù.
±×¸®°í ±× °á°ú°ªÀ» ¸®ÅÏÇÏ°Ô µÇ°ÚÁö¿ä.

»ç½Ç [operator==]¸¦ ¸¸µå´Â °Í ÀÚÃ¼´Â º°·Î ¾î·Á¿î ÀÏÀº ¾Æ´Õ´Ï´Ù.
¿Ö³ÄÇÏ¸é ÀÌ¹Ì MyString¿¡¼­ compare¶ó´Â ÁÁÀº ÇÔ¼ö¸¦ Á¦°øÇÏ°í ÀÖ±â ¶§¹®ÀÌÁö¿ä. °£´ÜÇÏ°Ô ¸¸µé¾î º¸¸é ´ÙÀ½°ú °°½À´Ï´Ù.
#. bool MyString::operator==(MyString& str) {
	   return !compare(str);  // str°ú °°À¸¸é compare¿¡¼­ 0À» ¸®ÅÏÇÑ´Ù.
   }
¿©±â¼­ [!compare(str)]À» ¸®ÅÏÇÏ´Â ÀÌÀ¯´Â compareÇÔ¼ö¿¡¼­ str°ú *this°¡ °°À¸¸é 0À» ¸®ÅÏÇÏµµ·Ï ÇÏ¿´´Âµ¥,
[operator==]Àº µÑÀÌ °°À¸¸é true¸¦ ¸®ÅÏÇØ¾ß µÇ±â ¶§¹®ÀÔ´Ï´Ù.
µû¶ó¼­ NOT¿¬»êÀÚÀÎ !¸¦ ¾Õ¿¡ ºÙ¿©¼­ ¸®ÅÏÇÏ¸é ¿Ã¹Ù¸£°Ô ÀÛµ¿ÇÒ ¼ö ÀÖ½À´Ï´Ù.
*/

/* ----- < º¹¼Ò¼ö( Complex Number ) > ----- */

/*
< Çã¼ö( Imaginary number ) > : À½¼öÀÇ Á¦°ö±ÙÀ» ³ªÅ¸³»±â À§ÇÑ Á¤ÀÇ

< º¹¼Ò¼ö > : Çã¼ö¿Í ½Ç¼ö¸¦ ¸ğµÎ Æ÷ÇÔÇÏ´Â ¼ö Ã¼°è·Î, Çã¼ö¿Í ½Ç¼öÀÇ ÇÕÀ¸·Î Ç¥ÇöÇÒ ¼ö ÀÖ´Ù.
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

/* --- < ¾èÀº º¹»ç& ±íÀº º¹»ç > --- */

/*
< ÃÊ±âÈ­ °úÁ¤ >
	< ÀÏ¹İ Å¸ÀÔ >
		#. int x = 5; : º¹»ç(´ëÀÔ) ÃÊ±âÈ­
			=> x¸¦ ¼±¾ğÇÏ°í 5¸¦ ´ëÀÔÇÑ´Ù.
		#. int x(5); : Á÷Á¢ ÃÊ±âÈ­
			=> Å¬·¡½º »ı¼ºÀÚ¿Í °°Àº °³³äÀ¸·Î »ı¼ºÀÚ¸¦ È£ÃâÇÏ¿© ÃÊ±âÈ­ ÇÑ´Ù.
		#. int x{ 5 }; : À¯´ÏÆû ÃÊ±âÈ­
			=> À¯´ÏÆû ÃÊ±âÈ­½Ä ¹®¹ıÀ¸·Î ÃÊ±âÈ­ÇÑ´Ù.

	< Å¬·¡½º Å¸ÀÔ >
		#. MyClass c = MyClass(5); : º¹»ç(´ëÀÔ) ÃÊ±âÈ­
			=> c¸¦ ¼±¾ğÇÏ°í MyClass(5)·Î ÀÔ½Ã °´Ã¼¸¦ ¸¸µé¾î¼­ º¹»çÇÑ´Ù.
		#. MyClass c = 5; : º¹»ç(´ëÀÔ) ÃÊ±âÈ­
			=> 5¶ó´Â °ªÀ» Å¬·¡½º Å¸ÀÔÀ¸·Î ¾Ï½ÃÀû º¯È¯À» ¼öÇàÇÑ´Ù.
		#. MyClass c(5); : Á÷Á¢ ÃÊ±âÈ­
			=> »ı¼ºÀÚ¸¦ »ç¿ëÇÑ ÃÊ±âÈ­´Ù.
		#. MyClass c{ 5 }; : À¯´ÏÆû ÃÊ±âÈ­
			=> À¯´ÏÆû ÃÊ±âÈ­½Ä ¹®¹ıÀ¸·Î ÃÊ±âÈ­ÇÑ´Ù.

< º¹»ç »ı¼ºÀÚ > : »õ·Î¿î °´Ã¼¸¦ ÃÊ±âÈ­ÇÒ ¶§ ±âÁ¸¿¡ ÀÖ´ø °´Ã¼¸¦ ³Ñ°ÜÁÖ¾î ÇØ´ç ÀÚ·á·Î »ı¼ºÇÒ ¼ö ÀÖ´Ù.
	#. MyClass(const MyClass& from) {}
		=> »õ·Î ¸¸µé¾îÁø °´Ã¼¿¡ ÀÎÀÚ·Î ¹ŞÀº °´Ã¼ÀÇ ¸â¹ö º¯¼ö¸¦ ±×´ë·Î º¹»çÇÑ´Ù.
		=> Áï, ÇØ´ç °´Ã¼¸¦ º¹»çº»À» ¸¸µå´Â °ÍÀÌ ¸ñÇ¥ÀÌ¹Ç·Î ÀÎÀÚ¸¦ º¯°æÇÒ ÀÌÀ¯°¡ ¾ø±â ¶§¹®¿¡ const¸¦ ºÙÀÎ´Ù.
*/

//#include <iostream>		// < Title : ÃÊ±âÈ­ ¹æ½Ä >
//
//class MyClass
//{
//private:
//	int mValue;
//
//public:
//	// ÃÊ±âÈ­½ÄÀ» ÀÔ·ÂÇÑ ÀÓÀÇ »ı¼ºÀÚ
//	MyClass(int value) : mValue{ value }
//	{
//		std::cout << "[MyClass] : " << mValue << std::endl;
//	}
//};
//
//int main()
//{	
//// #. ÀÌ·Ğ»ó »ı¼ºÀÚ°¡ µÎ ¹ø ºÒ·Á¾ß¸¸ ÇÑ´Ù.
//// #. c1ÀÌ¶ó´Â °´Ã¼ÀÇ »ı¼ºÀÚ¿Í º¹»ç¸¦ À§ÇØ »ı¼ºµÈ ¹«¸í °´Ã¼ÀÇ »ı¼ºÀÚ°¡ °¢°¢ È£ÃâµÈ´Ù´Â ÀÌ·Ğ
//// #. ±×·±µ¥ ÄÄÆÄÀÏ·¯°¡ ÃÖÀûÈ­¸¦ ÅëÇØ °ª 5°¡ ÀÖ´Â ¹«¸í °´Ã¼ÀÇ »ı¼ºÀÚ¸¦ È£ÃâÇÏ°í ÀÌ °´Ã¼¿¡ ÀÌ¸§ c1À» ºÙÀÎ´Ù.
//// #. ±×·ÎÀÎÇØ ¹«¸í °´Ã¼°¡ È£ÃâÇÑ »ı¼ºÀÚ, ÇÑ ¹ø¸¸ ºÒ¸°´Ù.
//	MyClass c1 = 5;				// º¹»ç ÃÊ±âÈ­
//	MyClass c2 = MyClass(5);	// º¹»ç ÃÊ±âÈ­
//
//	MyClass c3(5);				// Á÷Á¢ ÃÊ±âÈ­
//	MyClass c4{ 5 };			// À¯´ÏÆû ÃÊ±âÈ­
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
//	// ¾Ï½ÃÀûÀ¸·Î º¹»ç »ı¼ºÀÚ°¡ Å¬·¡½º ³»ºÎ¿¡ ÀÖ´Ù.
//	MyClass(const MyClass& from)
//	{
//		mValue = from.mValue;
//		std::cout << "[MyClass Copy] : " << mValue << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass c1 = 5;		// º¹»ç ÃÊ±âÈ­
//	MyClass c2(c1);		// º¹»ç »ı¼ºÀÚ : ´Ù¸¥ °´Ã¼·ÎºÎÅÍ ³ª¸¦ Âü°íÇÏ¿© »ı¼º
//// #. Áï c1ÀÇ Ä«ÇÇº»À» c2¶ó´Â ÀÌ¸§À¸·Î ¸¸µç´Ù.
//
//// #. ¸®ÅÍ·²À» ¸Å°³ º¯¼ö·Î º¸³»¾î ¹«¸í °´Ã¼¸¦ »ı¼ºÇÏ°í ÀÌ ¹«¸í °´Ã¼¸¦ Âü°íÇÏ¿© c3°¡ »ı¼ºµÈ´Ù.
//// #. ±×·¯³ª ÀÌ°Ç MyClass c3(5);¿Í ¿ÏÀüÈ÷ µ¿ÀÏÇÑ »ç¿ë¹ıÀÌ´Ù.
//// #. µû¶ó¼­ ÄÄÆÄÀÏ·¯´Â ÀÚµ¿À¸·Î ÃÖÀûÈ­¸¦ ¼öÇàÇØ¼­ ÇÏ³ªÀÇ °´Ã¼¸¸ »ı¼ºÇÑ´Ù.
//	MyClass c3(MyClass(5));
//}

//#include <iostream>		// < Title : ¾èÀº º¹»ç >
//						// #. ÁÖ¾îÁø °´Ã¼ÀÇ °¢ ¸â¹ö º¯¼ö¸¦ »õ °´Ã¼ÀÇ ¸â¹ö º¯¼ö¿¡ ¹èÁ¤ÇÏ±â¸¸ ÇÑ´Ù.
//
//class Dog {};
//class DogHouse
//{
//	Dog* owner;
//// #. ¸â¹ö º¯¼ö¿¡ Æ÷ÀÎÅÍ°¡ ÀÖÀ» °æ¿ì ¹®Á¦°¡ ¹ß»ıÇÒ ¼ö ÀÖ´Ù.
//};
//DogHouse house1;			// #. house1.owner°¡ HEAP¿¡ ÇÒ´çµÈ ¸Ş¸ğ¸® °ø°£À» °¡¸®Å²´Ù.
//DogHouse house2(house1);	// #. house2.owner°¡ house1.owner°¡ °¡¸®Å°´Â ¸Ş¸ğ¸® °ø°£À» °¡¸®Å²´Ù.
//// #. ÀÌ ¶§ house1ÀÌ ¼Ò¸êµÈ´Ù¸é house2.owner´Â ¾Ë ¼ö ¾ø´Â °ø°£À» °¡¸®Å°´Â »óÈ²ÀÌ µÈ´Ù.

//#include <iostream>		// < Title : ±íÀº º¹»ç >
//						// #. ½ÇÁ¦·Î »õ·Î¿î ¸Ş¸ğ¸®¸¦ ÇÒ´çÇØ ÁØ´Ù.
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
//// #. °°Àº HEAP°ø°£À» °¡¸®Å°Áö ¾Ê°í »õ·Î¿î ¸Ş¸ğ¸® °ø°£À» °¡¸®Å²´Ù.
//// #. ¾èÀº º¹»ç¿Í ºñ±³ÇÏ¿© ¾ÈÀüÇÏÁö¸¸ Ãß°¡ÀûÀÎ ¸Ş¸ğ¸®°¡ ÇÊ¿äÇÏ´Ù.
//	}
//};

/* --- < Relationship > --- */

/*
< OOP Relationship >
	#. ÇÑ ¸íÀÇ Ä£±¸¸¦ Á¤ÀÇÇÏ·Á¸é ±× Ä£±¸ °³ÀÎÀÇ Æ¯¼ºÀÌ³ª ´É·ÂÀ» ¹¦»çÇØ¾ß ÇÒ »Ó ¾Æ´Ï¶ó
	#. ´Ù¸¥ »ç¶÷°úÀÇ °ü°è ¿ª½Ã ¸Å¿ì Áß¿äÇÏ´Ù.
	#. OOP´Â Çö½Ç ¼¼°èÀÇ ¿ÀºêÁ§Æ®¸¦ ÇÁ·Î±×·¥¿¡ µµÀÔÇÑ °³³äÀÌ¹Ç·Î ¸¶Âù°¡Áö·Î ¿ÀºêÁ§Æ®µéÀÇ °ü°è¸¦ Ç¥ÇöÇÒ ¼ö ÀÖ´Ù.

< ¿ÀºêÁ§Æ®µéÀÇ »ó°ü °ü°è > : È¿À²ÀûÀÌ°í ±ò²ûÇÑ Å¬·¡½º ¼³°è¸¦ À§ÇÑ ÀÌÇØ
	#. < is-part-of : Composition( °áÇÕ¼º ) >
		#. engine is part of car : ~ÀÇ ±¸¼º ¿ä¼Ò
			=> º¹ÀâÇÑ °´Ã¼( ÀÚµ¿Â÷ )´Â Á¶±İ ´õ °£´ÜÇÑ °´Ã¼( ¿£Áø )·Î ±¸¼ºµÇ¾î ÀÖ´Ù.
		#. < A is part of B > : A´Â BÀÇ ÀÏºÎ ±¸¼º ¿ä¼Ò´Ù.
			=> A´Â ÇÑ ¹ø¿¡ ÇÏ³ªÀÇ °´Ã¼¿¡¸¸ Á¸ÀçÇÑ´Ù.
			=> A´Â B¿¡ ÀÇÇØ °ü¸®µÈ´Ù.
			=> A´Â BÀÇ Á¸Àç¸¦ ¸ğ¸¥´Ù.

	#. < has-a : Aggregation( Áı´ÜÈ­ ) >
		#. car has tire : ~À» °¡Áö°í ÀÖ´Ù.
			=> º¹ÀâÇÑ °´Ã¼( ÀÚµ¿Â÷ )´Â º°µµ·Î °ü¸®µÈ´Â ´Ù¸¥ °£´ÜÇÑ °´Ã¼( Å¸ÀÌ¾î )·Î ±¸¼ºµÇ¾î ÀÖ´Ù.
		#. < A has a B > : B´Â AÀÇ ÀÏºÎ ±¸¼º ¿ä¼Ò´Ù.
			=> B´Â ÇÑ ¹ø¿¡ ¿©·¯ ¿ÀºêÁ§Æ®¿¡ ¼Ò¼ÓµÉ ¼ö ÀÖ´Ù.
			=> B´Â A¿¡ ÀÇÇØ °ü¸®µÇÁö ¾Ê´Â´Ù.
			=> B´Â AÀÇ Á¸Àç¸¦ ¸ğ¸¥´Ù.

	#. < use-a : Association( ¿¬°üÈ­ ) >
		#. father use a car : ~À» »ç¿ëÇÒ ¼ö ÀÖ´Ù.
		#. < A use a B > : B´Â A¿Í °ü·ÃÀÌ ¾ø´Ù.
			=> B´Â ¿©·¯ ¿ÀºêÁ§Æ®¿¡ ¼Ò¼ÓµÉ ¼ö ÀÖ´Ù.
			=> B´Â A¿¡ ÀÇÇØ °ü¸®µÇÁö ¾Ê´Â´Ù.
			=> B´Â AÀÇ Á¸Àç¸¦ ¾Ë ¼öµµ ÀÖ°í ¸ğ¸¦ ¼öµµ ÀÖ´Ù.

	#. < is-a : Generalization( ÀÏ¹İÈ­ ) È¤Àº Specialication( Æ¯¼öÈ­ ) >
		#. Car <- Suv <- Jeep <- Rubicon : »ó¼Ó °ü°è
			#. <- ¹æÇâÀ¸·Î °¥ ¼ö·Ï ÀÏ¹İÈ­ / -> ¹æÇâÀ¸·Î °¥ ¼ö·Ï Æ¯¼öÈ­
			#. < ÀÏ¹İÈ­ > : °øÅëÀûÀ¸·Î °¡Áö´Â Æ¯¼ºÀ» ¹­¾î¼­ »óÀ§ °³³äÀ» ¸¸µå´Â °Í
			#. < Æ¯¼öÈ­ > : ÀÏ¹İÈ­ °³³äÀ¸·Î ºÎÅÍ °íÀ¯ ±â´É¸¸ Ãß°¡ÇÏ´Â °Í
*/

//#include <iostream>		// < Title : is-part-of >
//// ÇÃ·¹ÀÌ¾î Å¬·¡½º´Â ¸Å¿ì ´Ù¾çÇÑ ¼Ó¼ºÀ» °¡Áö°í ÀÖÁö¸¸ ±× Áß ´É·ÂÄ¡ ¿ª½Ã ¸Å¿ì º¹ÀâÇÑ ±¸Á¶ÀÏ °ÍÀÌ´Ù.
//// µû¶ó¼­ ´É·ÂÄ¡¸¦ ´Ù¸¥ Å¬·¡½º·Î ¸¸µé¾î [¸â¹ö]·Î °¡Áö°í ÀÖ´Â °ÍÀÌ È¿À²ÀûÀÌ´Ù.
//
//class Status	// #. A : PlayerÀÇ ±¸¼º ¿ä¼Ò
//{
//	int mHP, mMP;
//};
//
//// Player´Â ´É·ÂÄ¡, ¾ÆÀÌÅÛ, Àåºñ, ½ºÅ³ µî ´Ù¾çÇÑ ¼Ó¼ºÀ» °¡Áö°í ÀÖÀ¸¸é Status´Â ¼Ó¼º Áß ÇÏ³ªÀÌ´Ù.
//class Player	// #. B : A( Status ) is part of B( Player )
//{
//	Status mStatus;		
//// mStatus´Â PlayerÀÇ °´Ã¼¿¡ ÀÇÇØ °ü¸®µÈ´Ù.
//// Player´Â ÀÚ½ÅÀÇ ¼Ó¼º Áß ÇÑ °³ÀÎ Status¸¦ ¸â¹ö·Î °®´Â´Ù.
//// Player´Â mStatus¸â¹ö¸¦ ÅëÇØ StatusÁ¤º¸¸¦ ¾ËÁö¸¸ Status´Â PlayerÀÇ Á¤º¸¸¦ ¸ğ¸¥´Ù.
//};
//
//int main()
//{
//	Player warrior;	// PlayerÀÇ °´Ã¼ º°·Î mStatus´Â °¢°¢ µ¶¸³ÀûÀ¸·Î Á¸ÀçÇÑ´Ù.
//	Player wizard;	// warriorÀÇ mStatus¿Í wizardÀÇ mStatus´Â ¼­·Î º°°³ÀÌ´Ù.
//}

//#include <iostream>		// < Title : has-a >
//
//class Player	// #. B : AuctionÀÇ ±¸¼º¿ä¼Ò°¡ µÉ ¼ö ÀÖ´Ù.
//{	// Player ´Â Auction ÀÇ Á¤º¸¸¦ ¸ğ¸¥´Ù.
//};
//
//class Auction	// #. A : A( Auction ) has a B( Player )
//{
//	Player* mPlayers;
//// AuctionÀÌ Player¸¦ °ü¸®ÇÒ ¼ö ¾ø´Ù.
//// Æ÷ÀÎÅÍ·Î ¼³°èÇÏ¿© ¸Ş¸ğ¸® °ø°£Àº ´Ù¸¥ °÷¿¡¼­ °ü¸®µÈ´Ù.
//// Auction¼³°èµµÀÇ °´Ã¼°¡ »ç¶óÁø´Ù°í ÇØ¼­ mPlayers°¡ °¡¸®Å°´Â ¸Ş¸ğ¸® °ø°£ÀÌ »ç¶óÁö´Â °ÍÀº ¾Æ´Ï´Ù.
//};

//#include <iostream>		// < Title : use-a >
//
//class Potion	// #. B : Player ¿¡ ¼Ò¼ÓµÉ ¼ö ÀÖ´Ù.
//{
//	int mRecovery;
//// PotionÀº Player¿Í °ü·ÃÀÌ ¾ø´Ù. ´ÜÁö Ã¼·Â¸¸ È¸º¹ÇØÁÙ »Ó, PlayerÀÇ ¼Ó¼º°ú »ó°ü °ü°è°¡ ÀÖÁö´Â ¾Ê´Ù.
//};
//
//class Player	// #. A : A( Player ) use a B( Potion )
//{
//	Potion* mPotion;
//// Player°´Ã¼°¡ Á×´Â´Ù°í PotionÀÌ »ç¶óÁöÁö´Â ¾Ê´Â´Ù.
//// °íÁ¤ È¸º¹·®À» °¡Áö´Â ¹°¾àÀº PlayerÀÇ Á¤º¸¸¦ ¸ô¶óµµ µÇÁö¸¸, ÃÖ´ë Ã¼·Â ºñÀ²·Î È¸º¹ÇØÁÖ´Â ¹°¾àÀº PlayerÃÖ´ë Ã¼·Â Á¤º¸¸¦ ¾Ë¾Æ¾ß ÇÑ´Ù.
//};

/* --- < ÆÄ»ı ±¸¹® > --- */

/*
< class ÆÄ»ıÅ¬·¡½º : [virtual] [Á¢±ÙÁ¦ÇÑÀÚ] ±â¹İ Å¬·¡½º1, ±â¹İ Å¬·¡½º2, ... >
	#. < class Dog : public Animal >

°³³ä	| ÆÄ»ı( Derivation ) | »ó¼Ó( Inheritence ) |
		|					 |					   |
ÀÏ¹İÈ­	| ±â¹İ Å¬·¡½º		 | ºÎ¸ğ Å¬·¡½º		   | »óÀ§ Å¬·¡½º
		| ( Base Class )	 | ( Parent Class )    | ( Super Class )
Æ¯¼öÈ­	| ÆÄ»ı Å¬·¡½º		 | ÀÚ½Ä Å¬·¡½º		   | ÇÏÀ§ Å¬·¡½º
		| ( Derived Class )	 | ( Child Class )	   | ( Sub Class )


< Á¢±Ù Á¦ÇÑÀÚ >
	BASE	  |	public»ó¼Ó | protected»ó¼Ó | private»ó¼Ó
	public	  |	public	   | protected	   | private
	protected |	protected  | protected	   | private
	private	  |	X		   | X			   | X
*/

//#include <iostream>
//
//class GameDeveloper		// #. °³¹ßÀÚ¶ó´Â °³³äÀÇ Å¬·¡½º
//{
//public:		// ¸ğµç Á÷±º¿¡ °øÅëÀ¸·Î ÇÊ¿äÇÑ Á¤º¸·Î´Â ÀÌ¸§°ú ³ªÀÌ°¡ ÀÖ´Ù.
//	std::string mName;
//	int mAge;
//};
//
//// °³¹ßÀÚ¶ó´Â ±â¹İ Å¬·¡½ºÀÇ »ó¼ÓÀ» ¹ŞÀº ÆÄ»ı Å¬·¡½º
//class Programmer : public GameDeveloper		// #. ÇÁ·Î±×·¡¸Ó¶ó´Â °³³äÀÇ Å¬·¡½º
//{
//public:
//	void Coding();
//	void Debugging();
//// #. ÇÁ·Î±×·¡¸Ó¸¸ÀÇ Æ¯¼öÇÑ °íÀ¯ ±â´É
//};
//
//// °³¹ßÀÚ¶ó´Â ±â¹İ Å¬·¡½ºÀÇ »ó¼ÓÀ» ¹ŞÀº ÆÄ»ı Å¬·¡½º
//class Designer : public GameDeveloper		// #. ±âÈ¹ÀÚ¶ó´Â °³³äÀÇ Å¬·¡½º
//{
//public:
//	void Documentation();
//	void Presentation();
//// #. ±âÈ¹ÀÚ¸¸ÀÇ Æ¯¼öÇÑ °íÀ¯ ±â´É
//};
//
//// °³¹ßÀÚ¶ó´Â ±â¹İ Å¬·¡½ºÀÇ »ó¼ÓÀ» ¹ŞÀº ÆÄ»ı Å¬·¡½ºÀÇ »ó¼ÓÀ» ¹ŞÀº ÆÄ»ı Å¬·¡½º
//class ChiefProgrammer : public Programmer		// #. ÇÁ·Î±×·¥ ÆÀÀåÀÌ¶ó´Â °³³äÀÇ Å¬·¡½º
//{
//public:
//	void Architecture();
//	void Scheduling();
//// #. ÇÁ·Î±×·¥ ÆÀÀå¸¸ÀÇ Æ¯¼öÇÑ °íÀ¯ ±â´É
//};

/* < Protected Á¢±Ù Á¦ÇÑÀÚ > */

/*
»ó¼Ó°ú Ä¸½¶È­¸¦ ¸ğµÎ ¸¸Á·ÇÏ´Â Á¢±Ù Á¦ÇÑÀÚ
[Å¬·¡½º ¿ÜºÎ¿¡¼­´Â º¸ÀÌÁö ¾ÊÀ¸³ª] [»ó¼ÓµÈ Å¬·¡½º¿¡¼­´Â Á¢±ÙÀÌ °¡´ÉÇÏ´Ù.]
*/

//#include <iostream>
//
//class Animal
//{
//private:		// #. Å¬·¡½º ¿ÜºÎ + »ó¼ÓµÈ Å¬·¡½º¿¡¼­ ¸ğµÎ »ç¿ë ºÒ°¡´É
//	int mAge;
//protected:		// #. Å¬·¡½º ¿ÜºÎ¿¡¼­´Â »ç¿ë ºÒ°¡´É, »ó¼ÓµÈ Å¬·¡½º ³»ºÎ¿¡¼­´Â »ç¿ë °¡´É
//	int mWeight;
//public:			// #. Free
//	int mColor;
//};
//
//class Dog : public Animal
//{
//	// mWeight, mColor »ç¿ë °¡´É
//};
//
//int main()
//{
//	Animal a;
//	a.mAgae; a.mWeight;		// ¿ÜºÎ¿¡¼­´Â »ç¿ëÀÌ ºÒ°¡´É
//	a.mColor;
//	Dog d;
//	d.mAge;		// Á¸ÀçÇÏ´ÂÁöµµ ¸ğ¸§
//	d.mWeight;	// Á¸ÀçÇÏ´ÂÁö´Â ¾Æ´Âµ¥ ¿ÜºÎ¿¡¼­´Â Á¢±Ù ºÒ°¡´É
//	d.mColor;
//}

/* --- < ¸â¹ö ÇÔ¼ö ¿À¹ö¶óÀÌµù( Overriding ) > --- */

/*
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
| RPG°ÔÀÓÀÇ Á÷¾÷À» Å¬·¡½ºÈ­ ÇÑ´Ù°í °¡Á¤ÇØº¸ÀÚ. Character¶ó´Â ±â¹İ Å¬·¡½º°¡ Attack()ÇÔ¼ö¸¦ Á¤ÀÇÇÏ¿´´Ù.	 |
| ÀÌ¶§ Warrior, Archer¶ó´Â ÆÄ»ı Å¬·¡½º°¡ ÀÖ°í, Warrior´Â ±ÙÁ¢ °ø°İÀ», Archer´Â ¿ø°Å¸® °ø°İÀ» ÇÑ´Ù°í Á¤ÀÇ |
| ÇÑ´Ù¸é °¢°¢ AttackMelee(), AttackRange()¸¦ ¸¸µé¾î µÑ °ÍÀÎ°¡? ÇÇ°İ ÆÇÁ¤ÀÌ³ª µ¥¹ÌÁö °è»ê µî °ø°İ¿¡ Ã³¸®µÇ|
| ´Â °øÅë ·çÆ¾ÀÌ ÀÖÀ» °ÍÀÌ´Ù. ÀÌ·± °ÍµéÀ» Áßº¹ ÀÛ¼ºÇÏ´Â °ÍÀº ÁÁÁö ¾Ê´Ù.									 |
| WarriorÀÇ AttackÀº ±Ù°Å¸®¸¦, ArcherÀÇ AttackÀº ¿ø°Å¸®¸¦ Ã³¸®ÇØ ÁØ´Ù¸é ±ò²ûÇÒ °ÍÀÌ´Ù.					 |
| ±â¹İ Å¬·¡½ºÀÇ Attack()À» °¢ ÆÄ»ı Å¬·¡½º°¡ ¼­·Î ´Ù¸£°Ô ÇØ¼®ÇÏ´Â °ÍÀ» ¸â¹ö ÇÔ¼ö ¿À¹ö¶óÀÌµùÀÌ¶ó ÇÑ´Ù.	 |
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
< ¸â¹ö ÇÔ¼ö ¿À¹ö¶óÀÌµù > : µ¿ÀÏÇÑ ¹İÈ¯°ª, µ¿ÀÏÇÑ ÀÌ¸§, µ¿ÀÏÇÑ ¸Å°³ º¯¼öÀÇ ÇÔ¼ö¸¦ ÆÄ»ı Å¬·¡½º°¡ ´Ù¸¥ ±â´ÉÀ¸·Î ÀçÁ¤ÀÇ ÇÏ´Â °Í
*/

//#include <iostream>		// < Title : default >
//
//class Character
//{
//public:
//	void Attack() { std::cout << "¸Ç¼Õ °ø°İ : 1" << std::endl; }
//// #. ±â¹İ Å¬·¡½º¿¡¼­ Attack()ÇÔ¼ö¸¦ ¸¸µé°í ÆÄ»ı Å¬·¡½º¿¡¼­µµ Attack()ÇÔ¼ö¸¦ ¸¸µé¾î ÁØ´Ù.
//};
//class Warrior : public Character
//{
//public:
//	void Attack() { std::cout << "°Å´ë µµ³¢ °ø°İ! : 999" << std::endl; }
//// #. µ¿ÀÏÇÑ °ª, ÀÌ¸§, ¸Å°³ º¯¼öÀÇ ÇÔ¼ö¸¦ ÆÄ»ı Å¬·¡½º°¡ ´Ù¸¥ ±â´ÉÀ¸·Î ÀçÁ¤ÀÇ ÇÏ´Â °ÍÀ» ¸»ÇÑ´Ù.
//};
//class Archer : public Character
//{
//public:
//	void Attack() { std::cout << "ÆÄ¶ó¼Ö È­»ì ¹ß½Î! : 10000" << std::endl; }
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
//// #. »ı¼ºµÈ °´Ã¼ÀÇ Å¬·¡½º¿¡ µû¶ó¼­ ¿À¹ö¶óÀÌµù µÈ ¸â¹öÇÔ¼ö°¡ È£ÃâµÈ´Ù.
//
//	hero.Character::Attack();
//// #. ¸¸¾à ÆÄ»ı Å¬·¡½ºÀÇ °´Ã¼·Î ±â¹İ Å¬·¡½ºÀÇ ¿À¹ö¶óÀÌµù ÇÔ¼ö¸¦ È£ÃâÇÏ°íÀÚ ÇÒ¶§´Â ¹üÀ§ ÇØ°á ¿¬»êÀÚ¸¦ »ç¿ëÇÏ¸é µÈ´Ù.
//}

//#include <iostream>		// < Title : Error >
//
//class Car
//{
//public:
//	void Mover(int km) { std::cout << "¾Æ±â ÀÚµ¿Â÷·Î " << km << " °Å¸®¸¦ °¬´Ù" << std::endl; }
//	void Mover(int km, float l) { std::cout << "¿¬·á"<<l<<"À» »ç¿ëÇØ¼­ ¾Æ±â ÀÚµ¿Â÷·Î " << km << " °Å¸®¸¦ °¬´Ù" << std::endl; }
//};
//class Jeep : public Car
//{
//public:
//	void Mover(int km) { std::cout << "**[JEEP]** ÀÚµ¿Â÷·Î " << km << " °Å¸®¸¦ °¬´Ù" << std::endl; }
//	//void Mover(int km, float l) { std::cout << "¿¬·á" << l << "À» »ç¿ëÇØ¼­ **[JEEP]** ÀÚµ¿Â÷·Î " << km << " °Å¸®¸¦ °¬´Ù" << std::endl; }
//// #. ¿À¹ö¶óÀÌµùÀ» ÇÒ²¨¶ó¸é ÇØ´ç ÇÔ¼öÀÇ ¿À¹ö·ÎµùµÈ ¸ğµç ÇÔ¼ö¸¦ ¿À¹ö¶óÀÌµù ÇØÁÖ¾î¾ß ÇÑ´Ù.
//};
//
//int main()
//{	
//	Jeep rubicon;
//	rubicon.Mover(10, 5);
//// #. CarÅ¬·¡½ºÀÇ Mover(int km, float l)¸â¹öÇÔ¼ö¸¦ È£­ŒÇÏ·Á°í ÇÏÁö¸¸ Mover(int km)ÀÌ ÀÌ¹Ì ¿À¹ö¶óÀÌµù µÈ »óÈ²¿¡¼­´Â È£ÃâÀÇ ¸ÅÄªÀÌ µÇÁö ¾Ê´Â´Ù.
//// #. ÀÌ °æ¿ì CarÅ¬·¡½ºÀÇ ¿À¹ö·ÎµùµÈ ¸â¹öÇÔ¼ö¸¦ JeepÅ¬·¡½º¿¡¼­ ¸ğµÎ ¿À¹ö¶óÀÌµù ÇØÁÖ¾î¾ß¸¸ ÇÑ´Ù.
//}

/* --- < ´ÙÇü¼º > --- */

/*
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
| ÆÄ»ı Å¬·¡½º¸¦ ±â¹İ Å¬·¡½º·Î Ã³¸®ÇÒ ¼ö ÀÖ´Â °ÍÀ» ´ÙÇü¼ºÀÌ¶ó ÇÑ´Ù. ´Ù¾çÇÑ ÇüÅÂ°¡ µÈ´Ù´Â ¶æÀ¸·Î »ó¼Ó°ú  |
| ÇÔ²² OOPÀÇ ÇÙ½É °³³ä Áß ÇÏ³ªÀÌ´Ù. ´ÙÇü¼ºÀº Æ÷ÀÎÅÍ¿¡ ÀÇÇØ ±¸ÇöµÈ´Ù.								   |
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
< ´ÙÇü¼º > : Æ÷ÀÎÅÍ¿Í °¡»ó ÇÔ¼ö·Î ±¸ÇöÇÒ ¼ö ÀÖ´Ù.
*/

//#include <iostream>
//
//// #. RPG °ÔÀÓ¿¡¼­ ÇÃ·¹ÀÌ¾îµé °£ÀÇ Ãæµ¹À» Ã³¸®ÇÏ´Â ÇÔ¼ö¸¦ ¸¸µé°íÀÚ ÇÑ´Ù.
//// #. ±â¹İ Å¬·¡½º( Character )¸¦ ¸¸µé°í ÆÄ»ı Å¬·¡½º( Á÷¾÷µé... )¸¦ ¸¸µç´Ù.
//class Character {};
//class Warrior : public Character {};
//class Archer : public Character {};
//class Healer : public Character {};
//
//// #. ¸Å°³º¯¼ö´Â 2°³¸¦ ¹Ş´Â´Ù. ´©°¡ ´©±¸¶û Ãæµ¹Çß´ÂÁö ¾Ë¾Æ¾ß ÇÏ´Ï±î...
//// #. ±×·±µ¥ ¸¸¾à ÇÃ·¹ÀÌ¾îµéÀÇ Á÷¾÷ÀÌ 6Á¾·ù°¡ µÇ°í CharacterÅ¬·¡½º¿¡¼­ ÆÄ»ıÇÑ ¸ó½ºÅÍ Á¾·ù°¡ 100Á¾·ù°¡ µÈ´Ù¸é? 
//// #. ¿À¹ö·Îµù ÇÔ¼ö¸¦ ±²ÀåÈ÷ ¸¹ÀÌ ¸¸µé¾î¾ß ÇÒ °ÍÀÌ´Ù.
//bool CheckCollision(Warrior w, Archer a);
//bool CheckCollision(Warrior w, Healer h);
//bool CheckCollision(Healer w, Archer a);
//// #. ÀÌ¶§ C++¿¡¼­´Â ÆÄ»ı Å¬·¡½º¸¦ ±â¹İ Å¬·¡½º·Î Ã³¸®ÇÏ´Â ±â´ÉÀÌ ÀÖ´Ù. 
//// #. °³³ä»ó ÆÄ»ıÅ¬·¡½º´Â ±â¹İ Å¬·¡½ºÀÇ ¸ğµç Æ¯¼ºÀ» °¡Áö°í ÀÖÀ¸´Ï±î.
//
//bool CheckCollision(Character* c1, Character* c2);
//// #. °ª¿¡ ÀÇÇÑ º¹»ç·Î ÀÎÀÚ¸¦ ¹ŞÀ» °æ¿ì Character c1, Character c2ÀÇ ÆÄ»ı Å¬·¡½º Á¤º¸°¡ »ç¶óÁø´Ù.
//// #. ¶§¹®¿¡ Æ÷ÀÎÅÍ·Î ÁÖ¼Ò°ªÀ» ¹Ş¾Æ¾ß ÇÑ´Ù.
//
//int main()
//{
//	Warrior babarian;
//	Archer legolas;
//// #. ÆÄ»ı Å¬·¡½ºÀÇ °´Ã¼¸¦ ¸¸µé¶§´Â Ç×»ó ±â¹İ Å¬·¡½ºÀÇ Á¤º¸ ¶ÇÇÑ °´Ã¼ ¸Ş¸ğ¸® °ø°£¿¡ ±¸¼ºµÈ´Ù´Â °ÍÀ» ±â¾ïÇÏ¶ó.
//
//	CheckCollision(&babarian, &legolas);
//}

/* < °¡»ó ÇÔ¼ö( virtual function ) > */

/*
< °¡»ó ÇÔ¼ö > : ÆÄ»ı Å¬·¡½º¿¡¼­ ÀçÁ¤ÀÇ ÇÒ °ÍÀ¸·Î ±â´ëÇÏ´Â ¸â¹ö ÇÔ¼ö
	#. ±â´ëÇÑ´Ù´Â ÀÇ¹Ì´Â ÄÄÆÄÀÏ µÉ ¶§ ÇØ´ç ÇÔ¼ö°¡ »ç¿ëµÉÁö °áÁ¤µÇ´Â °ÍÀÌ ¾Æ´Ï¶ó
	#. ½ÇÇà½Ã°£( runtime )¿¡ ¾î¶² ÇÔ¼ö¸¦ »ç¿ëÇÒ Áö¸¦ °áÁ¤ÇÑ´Ù´Â ÀÇ¹ÌÀÌ´Ù.
	#. Áï, ÇÔ¼ö¸¦ È£ÃâÇÏ´Â ½ÃÁ¡¿¡¼­ ¾î¶² ÇÔ¼ö¸¦ ¿¬°á( bind )ÇÒ Áö °áÁ¤ÇÏ°Ô µÈ´Ù.
*/

//#include <iostream>
//
//class Animal { public: void Sound() { std::cout << "µ¿¹° ¼Ò¸®´Â ¹«¾ùÀÎ°¡?" << std::endl; } };
//class Dog : public Animal { public: void Sound() { std::cout << "°­¾ÆÁö´Â ¸Û¸Û¸Û!!!" << std::endl; } };
//
//int main()
//{
//	Animal* pAnimal = new Dog;
//// #. Dog°´Ã¼¸¦ heap¸Ş¸ğ¸® °ø°£¿¡ ÀúÀåÇÏ°í AnimalÅ¸ÀÔÀ» °¡¸®Å°´Â Æ÷ÀÎÅÍ pAnimal·Î ÇØ´ç ¸Ş¸ğ¸® °ø°£À» °¡¸®Å²´Ù.
//// #. AnimalÀÌ¶ó´Â Æ²·Î Dog°´Ã¼ÀÇ ¸Ş¸ğ¸® °ø°£À» °¡¸®Å°±â ¶§¹®¿¡ Sound¸â¹öÇÔ¼ö´Â AnimalÀÇ Sound¸â¹ö ÇÔ¼ö¸¦ ½ÇÇàÇÑ´Ù.
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
//// #. < virtual > : ÆÄ»ı Å¬·¡½º( ClassB )¿¡¼­ ¿À¹ö¶óÀÌµùµÈ ¸â¹öÇÔ¼ö¸¦ ÀçÁ¤ÀÇ ÇÒ °ÍÀ» ±â´ëÇÑ´Ù´Â ÀÇ¹Ì
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
//	ClassA* a = new ClassA;		// ClassA°´Ã¼¸¦ heap¸Ş¸ğ¸® °ø°£¿¡ ÇÒ´çÇÏ°í Æ÷ÀÎÅÍ a°¡ ÇØ´ç °ø°£À» °¡¸®Å²´Ù.
//	ClassB* b = new ClassB;		// ClassB°´Ã¼¸¦ heap¸Ş¸ğ¸® °ø°£¿¡ ÇÒ´çÇÏ°í Æ÷ÀÎÅÍ b°¡ ÇØ´ç °ø°£À» °¡¸®Å²´Ù.
//	a->func1(); a->func2(); b->func1(); b->func2();
//
//	std::cout << std::endl << "----------------------" << std::endl;
//
//	ClassA* c = b;				// ClassA¸¦ °¡¸®Å°´Â Æ÷ÀÎÅÍ c°¡ ClassB¸Ş¸ğ¸® °ø°£À» °¡¸®Å²´Ù.
//
//	c->func1(); c->func2();
//// #. ClassA¶ó´Â Æ²·Î ClassB°´Ã¼ÀÇ ¸Ş¸ğ¸® °ø°£À» °¡¸®Å°±â ¶§¹®¿¡ func2¸â¹öÇÔ¼ö´Â ClassAÀÇ func2¸â¹öÇÔ¼ö°¡ È£ÃâµÇ¾î¾ß ÇÑ´Ù.
//// #. ±×·±µ¥ virtualÅ°¿öµå¸¦ »ç¿ëÇÏ¿´±â ¶§¹®¿¡ ÆÄ»ı Å¬·¡½º¿¡¼­ ÀçÁ¤ÀÇµÈ ¸â¹öÇÔ¼ö°¡ È£ÃâµÈ´Ù.
//}

//#include <iostream>
//
//// #. ±â¹İ Å¬·¡½º¿¡ °¡»ó ÇÔ¼ö·Î Attack()À» ¸¸µé¾ú´Ù.
//class Character { public: virtual void Attack(); };
//
//// #. ÀÌ¸¦ »ó¼Ó¹ŞÀº 5°³ÀÇ Á÷¾÷±º Å¬·¡½º°¡ ÀÖ°í, °¢ Æ¯¼º¿¡ ¸Â´Â °ø°İÀ» ¼öÇàÇÒ ¿¹Á¤ÀÌ´Ù.
//class Warrior : public Character { public: void Attack(); };
//class Archer : public Character { public: void Attack(); };
//class Wizard : public Character { public: void Attack(); };
//class Priest : public Character { public: void Attack(); };
//class Thief : public Character { public: void Attack(); };
//
//int main()
//{	// 5°³ÀÇ Á÷¾÷À¸·Î ÀÌ·ç¾îÁø ÆÄÆ¼¸¦ ¸¸µé°í, ´ÙÇü¼ºÀ» ÀÌ¿ëÇÏ¿© ¸ğµÎ CharacterÆ÷ÀÎÅÍ·Î ÇÑ¹ø¿¡ ¹­¾î¼­ °ü¸®ÇÒ ¼ö ÀÖ´Ù.
//	Character* party[5] = {
//		new Warrior,	// ÀÏ´Ü ¸Ş¸ğ¸® °ø°£¿¡´Â ÆÄ»ıµÈ Å¬·¡½º °´Ã¼¸¦ ÀúÀåÇÑ´Ù.
//		new Archer,
//		new Wizard,
//		new Priest,
//		new Thief
//	};
//
//	for (int i = 0; i < 5; i++)
//	{	// #. ÆÄÆ¼ Àü¿øÀÌ °ø°İÇÏ·Á¸é °£´ÜÈ÷ for¹®À¸·Î Attack¸¸ È£ÃâÇØÁÖ¸é µÈ´Ù.
//		party[i]->Attack();
//// #. ±â¹İ Å¬·¡½º¿¡ Attack¸â¹ö ÇÔ¼ö°¡ °¡»ó ÇÔ¼öÀÌ¹Ç·Î °¢ ¿ø¼Ò°¡ ½ÇÁ¦ ¾î¶² Á÷¾÷ÀÎÁö ÆÄ¾ÇÇÑ ÈÄ ÇØ´ç Á÷¾÷ÀÇ °ø°İÀ» ¼öÇàÇÑ´Ù.
//	}
//}

/* --- < ¹ÙÀÎµù( Binding ) > --- */

/*
< ¹ÙÀÎµù > : ÇÁ·Î±×·¥¿¡¼­ »ç¿ëÇÏ´Â º¯¼ö/ÇÔ¼öµîÀÇ ÀÌ¸§( ½Äº°ÀÚ )À» °ªÀ¸·Î ¿¬°áÇØ ÁÖ´Â °úÁ¤

< virtual ÇÔ¼ö ¹ÙÀÎµù ¼ø¼­ >
	#1. ÆÄ»ı Å¬·¡½ºÀÇ ÀÎ½ºÅÏ½º°¡ ¸¸µé¾îÁø´Ù.
	#2. ÀÌ¶§ ¸Ş¸ğ¸® °ø°£¿¡´Â ±â¹İ Å¬·¡½º¿Í ÆÄ»ı Å¬·¡½ºÀÇ ¸â¹ö°¡ ±¸¼ºµÈ´Ù.
	#3. ¸Ş¸ğ¸® °ø°£¿¡ ¸â¹ö¸¦ ±¸¼ºÇÒ ¶§ ±â¹İ Å¬·¡½ºÀÇ ¸â¹ö°¡ ¸ÕÀú ±¸¼ºµÇ´Âµ¥
	#4. ÀÌ °úÁ¤¿¡¼­ ±â¹İ Å¬·¡½º¿¡ °¡»ó ÇÔ¼ö°¡ ÀÖÀ» °æ¿ì ÀÌ °¡»ó ÇÔ¼ö¸¦ °¡»ó ÇÔ¼ö Å×ÀÌºí¿¡ ¿Å°Ü µĞ´Ù.
	#5. ÀÌÈÄ ÀÚµ¿ÀûÀ¸·Î ÀÎ½ºÅÏ½º¿¡ °¡»ó ÇÔ¼ö Å×ÀÌºíÀ» °¡¸®Å°´Â Æ÷ÀÎÅÍ¸¦ ¸¸µé¾î¼­ ¿¬°áÇØ µĞ´Ù.
	#6. ±â¹İ Å¬·¡½º°¡ ´Ù ±¸¼ºµÈ µÚ ÆÄ»ı Å¬·¡½ºÀÇ ±¸¼ºÀÌ ÁøÇà µÇ¸é¼­ ¿À¹ö¶óÀÌµù µÈ ¸â¹ö ÇÔ¼ö°¡ ÀÖÀ¸¸é
	#7. °¡»ó ÇÔ¼ö Å×ÀÌºí¿¡ ÆÄ»ı Å¬·¡½ºÀÇ ¸â¹ö ÇÔ¼ö¸¦ µ¤¾î ¾º¿öÁØ´Ù.
	#8. ÀÌ °úÁ¤À» °ÅÃÄ ±â¹İ Å¬·¡½º¸¦ °¡¸®Å°´Â Æ÷ÀÎÅÍ¸¦ ¸¸µé¾îµµ °¡¸®Å°´Â ¸Ş¸ğ¸® °ø°£ÀÌ
	#9. ÆÄ»ı Å¬·¡½ºÀÇ ¸Ş¸ğ¸® °ø°£ÀÏ °æ¿ì ÆÄ»ı Å¬·¡½ºÀÇ ¸â¹ö ÇÔ¼ö¸¦ È£ÃâÇÒ ¼ö ÀÖ°ÔµÈ´Ù.
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
//// #. Á¤¼öÇü º¯¼ö °ø°£¿¡ a¶ó°í ÀÌ¸§À» ºÙ¿©ÁÖ´Â ¹ÙÀÎµù
//// #. ÀÌ °æ¿ì ÀÌ¸¥ ¹ÙÀÎµù( Early binding )ÀÌ ¹ß»ıÇÑ´Ù.
//
//	A* p = new C;
//	p->func();
//// #. °¡»ó ÇÔ¼ö È£ÃâÀº ´ÊÀº ¹ÙÀÎµù( Late binding )ÀÌ ¹ß»ıÇÑ´Ù.
//// #. pÀÇ °´Ã¼°¡ ½ÇÁ¦·Î ¹«¾ùÀÎÁö ¾Ë¾Æ¾ß ÇÏ±â ¶§¹®ÀÌ´Ù.
//
//	delete p;
//}

/* < ÀÌ¸¥ ¹ÙÀÎµù( early binding ) & ´ÊÀº ¹ÙÀÎµù( late binding ) > */

//#include <iostream>
//
//class Animal
//{
//public:
//	Animal() { std::cout << "Animal Å¬·¡½ºÀÇ »ı¼ºÀÚ°¡ ºÒ¸°´Ù." << std::endl; }
//	virtual ~Animal() { std::cout << "Animal Å¬·¡½ºÀÇ ¼Ò¸êÀÚ°¡ ºÒ¸°´Ù." << std::endl; }
//// #. ±â¹İ Å¬·¡½ºÀÇ ¼Ò¸êÀÚ´Â °¡»ó ÇÔ¼ö·Î ÁöÁ¤ÇÏÁö ¾ÊÀ» °æ¿ì ÆÄ»ı Å¬·¡½ºÀÇ ¼Ò¸êÀÚ°¡ È£ÃâµÇÁö ¾Ê´Â´Ù.
//};
//class Dog : public Animal
//{
//public:
//	Dog() { std::cout << "Dog °¡ ÁıÀ» ³ª¿Ô´Ù!" << std::endl; }
//	~Dog() { std::cout << "Dog °¡ Áı¿¡ µé¾î¿Ô´Ù!" << std::endl; }
//// #. ±â¹İ°ú ÆÄ»ıÀ¸·Î Å¬·¡½º¸¦ ±¸¼ºÇÏ¿´À» °æ¿ì ¹İµå½Ã ±â¹İ Å¬·¡½ºÀÇ ¼Ò¸êÀÚ¸¦ °¡»ó ÇÔ¼ö·Î ÁöÁ¤ÇØ ÁÖ¾î¾ß ÇÑ´Ù.
//};
//
//int main()
//{	// »ı¼ºÀÚ´Â ±â¹İ Å¬·¡½º => ÆÄ»ı Å¬·¡½º ¼øÀ¸·Î È£ÃâµÈ´Ù.
//	Animal * p = new Dog;
//	delete p;
//	// ¼Ò¸êÀÚ´Â ÆÄ»ı Å¬·¡½º => ±â¹İ Å¬·¡½º ¼øÀ¸·Î È£ÃâµÈ´Ù.
//}

/* --- < »ó¼Ó°ú º¹»ç »ı¼ºÀÚ > --- */

/*
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
| º¹»ç »ı¼ºÀÚ´Â Æ¯Á¤ÇÑ °´Ã¼¸¦ ³Ñ°ÜÁÖ°í ±× °´Ã¼ÀÇ º¹»çº»À» »ı¼ºÇÏ´Â °ÍÀÌ¶ó Çß´Ù.							|
| ±×·±µ¥ »ó¼Ó°ü°è¿¡¼­´Â º¹»ç »ı¼ºÀÚ°¡ ¹®Á¦°¡µÉ ¼ö ÀÖ´Ù. ÀÎ½ºÅÏ½º »ı¼º ±¸Á¶¸¦ º¸¸é °¡»ó »ı¼ºÀÚ¸¦ ¸¸µé ¼ö |
| ¾ø´Ù. ±â¹İ Å¬·¡½º¸¦ ¸¸µé ¶§ ÀÌ¹Ì »ı¼ºÀ» ÇØ¾ß ÆÄ»ı Å¬·¡½º¸¦ ¸¸µé±â ¶§¹®¿¡ ¼ø¼­»ó ±â¹İ Å¬·¡½º »ı¼ºÀÚ¸¦  |
| ¸¸µé ¼ö ¾ø´Ù. C++¿¡¼­´Â °¡»ó »ı¼ºÀÚ¸¦ Çã¿ëÇÏÁö ¾Ê±â ¶§¹®¿¡ °¡»ó º¹»ç ÇÔ¼ö¸¦ ¸¸µé¾î¼­ ÀÚ±â ÀÚ½ÅÀ» º¹»ç |
| ÇÏµµ·Ï ¸¸µé¸é µÈ´Ù.																					|
¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ¤Ñ
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
//// #. º¹»ç »ı¼ºÀÚ´Â Æ¯Á¤ÇÑ °´Ã¼¸¦ ³Ñ°ÜÁÖ°í ±× °´Ã¼ÀÇ º¹»çº»À» »ı¼ºÇÏ´Â °ÍÀÌ´Ù.
//// #. C++¿¡¼­´Â °¡»ó »ı¼ºÀÚ¸¦ Çã¿ëÇÏÁö ¾Ê±â ¶§¹®¿¡ °¡»ó º¹»ç ÇÔ¼ö¸¦ ¸¸µé¾î¼­ ÀÚ±â ÀÚ½ÅÀ» º¹»çÇÏµµ·Ï ÇØ¾ß ÇÑ´Ù.
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
//// #. DogÇì´õÆÄÀÏ ¾È¿¡ ÀÌ¹Ì AniamlÇì´õÆÄÀÏÀÌ ÀÖ±â ¶§¹®¿¡ main¿¡¼­´Â DogÇì´õÆÄÀÏ¸¸ µî·ÏÇØµµ µÈ´Ù.
//
//int main()
//{
//	// #1. DogÅ¬·¡½ºÀÇ °´Ã¼¸¦ ¸¸µå·Á¸é ¿ì¼± AnimalÅ¬·¡½ºÀÇ Á¤º¸°¡ ÇÊ¿äÇÏ´Ù.
//	// #2. AnimalÅ¬·¡½ºÀÇ ¸â¹ö°¡ ¸ğµÎ ±¸¼ºµÈ µÚ¿¡ DogÅ¬·¡½ºÀÇ ¸â¹ö°¡ ±¸¼ºµÈ´Ù.
//	Dog happy;	// #3. ÀÚ½ÄÀ» ¸¸µé ¶§´Â ºÎ¸ğµµ ÇÔ²² ¸¸µé¾î Áø´Ù.
//
//	happy.Sound();	// Animal ÀÇ Sound ÀÌÁö¸¸ Dog °¡ »ó¼ÓÀ» ¹Ş¾Ñ°í ¶ÇÇÑ public ¸â¹öÇÔ¼öÀÌ±â ¶§¹®¿¡ ¿ÜºÎ¿¡¼­ »ç¿ëÀÌ °¡´ÉÀ.
//	happy.Roll();
//
//	// #. BREED´Â Dog¿¡ Á¾¼ÓµÇ¾î ÀÖ´Â ¿­°ÅÇü Å¸ÀÔÀÌ´Ù.
//	// #. publicÀÌ±â ¶§¹®¿¡ ¿ÜºÎ¿¡¼­ »ç¿ëÀ» °¡´ÉÇÏÁö¸¸ ¾îµğ¿¡ Á¾¼ÓµÇ¾î ÀÖ´ÂÁö ¹İµå½Ä ÀÔ·ÂÇØ Áà¾ß ÇÑ´Ù.
//	Dog merry(5, 2, Dog::BREED::CHIHUAHUA);
//}

//#include <iostream>
//#include "Warrior.h"
//
//int main()
//{
//	Character* pHero = new Warrior;
//	pHero->Attack();
//// ÆÄ»ı Å¬·¡½ºÀÇ ¸Ş¸ğ¸® °ø°£À» ÇÒ´ç ¹ŞÀ» ¶§´Â ±â¹İ Å¬·¡½ºµµ ¸Ş¸ğ¸® °ø°£¿¡ ±¸¼ºµÈ´Ù.
//// ´ÙÇü¼ºÀ» »ç¿ëÇÏ¿© °¡»ó( virtul )ÇÔ¼ö AttackÀ» È£ÃâÇß´Ù.
//
//	((Warrior*)(pHero))->DoubleSlash();
//// #. ÇöÀç ¸ŞÀÎ ÇÔ¼ö¿¡ »ı¼ºµÈ °´Ã¼ pHero´Â CharacterÆ÷ÀÎÅÍ ÀÌ±â ¶§¹®¿¡ WarriorÅ¬·¡½ºÀÇ Æ¯¼ö ÇÔ¼öÀÎ DoubleSlash¸¦ È£ÃâÇÒ ¼ö ¾ø´Ù.
//// #. pHero°¡ WarriorÅ¬·¡½ºÀÇ DoubleShash¸¦ È£ÃâÇÏ±â À§ÇØ Çü º¯È¯À» ½ÇÇàÇÒ °ÍÀÌ´Ù.
//// #. Èü( heap )°ø°£¿¡ »ı¼ºµÈ °´Ã¼´Â WarriorÀÌ¹Ç·Î À§¿Í °°Àº Çüº¯È¯ÀÌ °¡´ÉÇÏ´Ù.
//// #. ÇöÀç ÄÚµå´Â ´Ü¼øÇÏ±â ¶§¹®¿¡ ¾Æ¹«·± ÀÇ½É ¾øÀÌ Çüº¯È¯À» ÁøÇàÇÏ°í ½ÇÇàÇÒ ¼ö ÀÖ´Ù. 
//// #. ±×·±µ¥ ¸¸¾à ÄÚµå°¡ º¹ÀâÇÏ´Ù¸é?
//
//	Warrior* pWarrior = static_cast<Warrior*>(pHero);
//// #. ¾î¶² Å¸ÀÔÀ» ¾î¶² Å¸ÀÔÀ¸·Î º¯È¯ÇÏ¿´´ÂÁö ¸íÈ®ÇÏ°Ô ÇÏ°í ½Í´Ù¸é Á¤Àûº¯È¯À» »ç¿ëÇÏ¸é µÈ´Ù.
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
//// °´Ã¼( ÀÎ½ºÅÏ½º )ÀÇ »ı¼ºÀº 1. ±â¹İ 2. ÆÄ»ı ¼ø¼­·Î ¸Ş¸ğ¸® °ø°£¿¡ ±¸¼ºµÈ´Ù.
//// °´Ã¼( ÀÎ½ºÅÏ½º )ÀÇ ¼Ò¸êÀº 1. ÆÄ»ı 2. ±â¹İ ¼ø¼­·Î ¸Ş¸ğ¸® °ø°£¿¡¼­ ¼Ò¸êµÈ´Ù.
//}

/* --- < Çü º¯È¯ > --- */

/*
< »óÇâ º¯È¯( up-cast ) > : ÆÄ»ı Å¬·¡½º -> ±â¹İ Å¬·¡½º
	#. ¾ÈÀüÇÑ º¯È¯ÀÌ¶ó ¾Ï½ÃÀû º¯È¯À¸·Î ÃæºĞÈ÷ °¡´ÉÇÏ´Ù.
		=> Character* pHero = new Warrior;

< ÇÏÇâ º¯È¯( down-cast ) > : ±â¹İ Å¬·¡½º -> ÆÄ»ı Å¬·¡½º
	#. ·±Å¸ÀÓ¿¡ Ã¼Å©ÇÏÁö ¾ÊÀ¸¸é °á°ú¸¦ ¾Ë ¼ö ¾ø´Ù.
		=> (Warrior*)pHero

< static_cast > : ÄÄÆÄÀÏÅ¸ÀÓ¿¡ Çüº¯È¯À» °áÁ¤ÇÏ´Â ¿¬»êÀÚ
	#. static_cast <new_type> ( expression ) : Á¤ÀûÀ¸·Î º¯È¯À» ÇØÁØ´Ù.
$. early-binding = static-binding = compile-time-binding

< dynamic_cast > : ·±Å¸ÀÓ¿¡ µ¿ÀûÀ¸·Î Å¸ÀÔÀ» º¯È¯ÇÏ´Â ¿¬»êÀÚ
	#. dynamic_cast < new_type > ( expression ) : µ¿ÀûÀ¸·Î º¯È¯À» ÇØÁØ´Ù.
	#. Å¬·¡½ºÀÇ Æ÷ÀÎÅÍ ¹× ÂüÁ¶Çü¿¡¼­¸¸ »ç¿ëÀÌ °¡´ÉÇÏ´Ù.
		#. ÁÖ¾îÁø Æ÷ÀÎÅÍ¸¦ ´ë»ó Å¸ÀÔÀÇ ¿ÏÀüÈ÷ À¯È¿ÇÑ °´Ã¼¿¡ ´ëÇÑ Æ÷ÀÎÅÍ·Î º¯È¯ÇÏ´Â °ÍÀ» º¸ÀåÇÑ´Ù.
$. late-binding = dynamic-binding = run-time=binding

< reinterpret_cast > : ¾î¶°ÇÑ Çü º¯È¯µµ °­Á¦·Î ¼öÇàÇÏ´Â À§ÇèÇÏÁö¸¸ À¯¿ëÇÑ Çü º¯È¯ ¿¬»êÀÚ
	#. °´Ã¼ÀÇ ÀÚ·á¸¦ ¹ÙÀÌ³Ê¸® µ¥ÀÌÅÍ·Î ÇØ¼®ÇÑ ´ÙÀ½ ÇØ´ç Å¸ÀÔÀ¸·Î º¯È¯À» ½ÃµµÇÑ´Ù.
	#. ÁÖ·Î µ¥ÀÌÅÍ¸¦ ÆÄÀÏ·Î º¯È¯ÇÏ°Å³ª ÇÒ¶§ »ç¿ëÇÏ´Â Ç¥±â¹ıÀÌ´Ù.

< const_cast > : »ó¼ö¸¦ º¯È¯ÇØ ÁØ´Ù.
	#. const ±âÈ£¸¦ Ãß°¡/Á¦°Å°¡ °¡´ÉÇÏ´Ù.
	#. ´Ü, Æ÷ÀÎÅÍ ¹× ÂüÁ¶Çü¸¸ °¡´ÉÇÏ´Ù.
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
//// #. ºÎµ¿ ¼Ò¼öÁ¡ Ç¥ÇöÀ» À§ÇØ ¸Ş¸ğ¸® °ø°£À» 2Áø¼ö·Î º¯È¯ÇÑ ´ÙÀ½ Á¤¼ö·Î º¯È¯ÇÏ±â ¶§¹®¿¡ ¿¹»óÄ¡ ¸øÇÑ °ªÀÌ ³ª¿Â´Ù.
//
//	ClassA* a = new ClassA;
//	ClassB* b;
//	b = reinterpret_cast<ClassB*>(a);
//// #. ½ÉÁö¾î ¾Æ¹«·± »ó°ü ¾ø´Â Å¬·¡½ºµµ °­Á¦·Î º¯È¯ÇÑ´Ù.
//// #. ¹°·Ğ ¾ÈÀüÀº º¸ÀåÇÏÁö ¾Ê´Â´Ù.
//}

//#include <iostream>		// < Title : const_cast >
//
//void Print(char* text)
//{	// ÇÔ¼öÀÇ ¸Å°³ º¯¼ö´Â charÆ÷ÀÎÅÍ ÀÚ·áÇüÀ» ¹Ş¾Æ¾ß ÇÑ´Ù.
//	std::cout << text << std::endl;
//}
//
//int main()
//{	
//	char myString[]{ "Hello" };
//	
//	Print(const_cast<char*>("Hello"));
//// #. ÇÔ¼ö·Î ³Ñ°ÜÁÖ´Â ÀÎÀÚ´Â const charÆ÷ÀÎÅÍ ÀÚ·áÇüÀÌ´Ù.
//// #. "Hello"´Â ¹®ÀÚ¿­¿¡ ´ëÇÑ ¸®ÅÍ·²ÀÌ¶ó°í ºÎ¸¥´Ù.
//
//	Print(myString);
//}