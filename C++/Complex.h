#pragma once
#include <iostream>
// 우리가 만들고자 하는 것은 이 복소수를 나타내는 클래스를 구성하겠다는 이야기 입니다.
// 임의의 복소수 하나를 표현하기 위해서 두 개의 값(실수부, 허수부)이 필요하기 때문에 
// 반드시 클래스로 구현을 해야 하겠죠.
// 따라서, 기본적으로 복소수 클래스 Complex 는 다음과 같이 간단하게 만들 수 있습니다.
class Complex
{
private:
	double real, img;	// 하나의 복소수를 표현하기 위해 두 개의 값( 실수부, 허수부 )이 필요

public:
	Complex(double real, double img) : real(real), img(img) {}
	// 복소수는 언제나 실수부와 허수부로 나뉘어지므로, Complex클래스 역시 실수부의 값과 허수부의 값을 나타내는 real과 img변수가 있습니다.
	// 여기서 문제는 이전에 만들었던 MyString과는 다르게, 사칙 연산이 엄청나게 자주 쓰인다는 것입니다.
	// 당연하게도 문자열의 덧셈(+연산)까지는 생각할 수 있었다 해도, 곱셈이나 나눗셈 연산 자체는 고려할 필요가 없는데, 
	// 복소수의 경우 당연히 클래스 인터페이스 차원에서 곱셈과 나눗셈을 지원해주어야만 합니다.

	Complex(const Complex& c) { real = c.real, img = c.img; }

	// 여기서 가장 중요하게 봐야 할 부분은 바로, 사칙연산 연산자 함수들의 리턴 타입 입니다.
	Complex operator+(const Complex& c) const;
	Complex operator-(const Complex& c) const;
	Complex operator*(const Complex& c) const;
	Complex operator/(const Complex& c) const;
	/*
		 위 4개의 연산자 함수 모두 Complex&가 아닌 Complex를 리턴하고 있습니다. 간혹가다,
		 #. Complex& operator+(const Comlex& c) {
				 real += c.real;
				 img += c.img;
				 return *this;
			  }
		 로 잘못 생각하는 경우도 있습니다.

		 물론 이렇게 설계하였을 경우, Complex를 리턴하는 연산자 함수는 값의 복사가 일어나기 때문에 속도 저하가 발생하지만
		 위 처럼 레퍼런스를 리턴하게 되면 값의 복사 대신 레퍼런스만 복사하는 것이므로 큰 속도의 저하는 나타나지 않습니다.
		 하지만, 위와 같이 operator+를 정의할 경우 다음과 같은 문장이 어떻게 처리되는지 생각해봅시다.

		 #. Complex a = b + c + b;
		 아마도 위 문장을 쓴 사람 입장에서는 결과적으로 a = 2 * b + c; 를 의도하였을 것입니다.

		 하지만, 실제로 처리되는 것을 보자면, (b.plus(c)).plus(b)가 되는데, b.plus(c)를 하면서 b에는(b + c)가 들어가고,
		 거기에 다시 plus(b)를 하게 된다면 값 자체만 보자면(b + c) + (b + c)가 되서
		 (왜냐하면 현재 b에는 b + c가 들어가 있으니까)
		 a = 2 * b + 2 * c 가 되기 때문입니다.

		 이러한 문제를 막기 위해서는 사칙 연산의 경우 반드시 값을 리턴해야 만 합니다.

		 또한 함수 내부에서 읽기만 수행되고 값이 바뀌지 않는 인자들에 대해서는 const키워드를 붙여주는 것이 바람직합니다.
		 operator+의 경우, c의 값을 읽기만 하지 c의 값에 어떠한 변화도 주지 않으므로 const Complex&타입으로 인자를 받았습니다.
	*/

	Complex& operator=(const Complex& c);
	/*
		기본적으로 대입 연산자 함수는, 기존의 사칙연산 연산자 함수와 다르게, 자기 자신을 가리키는 레퍼런스(Complex&)을 리턴합니다.
		왜 굳이 대입 연산자가 자기 자신을 리턴해야 되냐면,

		#. a = b = c;
		위와 같은 코드에서 b = c;가 b를 리턴해야지, a = b;가 성공적으로 수행될 수 있기 때문이죠.
		이 때 Complex타입을 리턴하지 않고 굳이 Complex&타입을 리턴하냐면, 대입 연산 이후에 불필요한 복사를 방지하기 위해서 입니다.
	*/

	// #. 위에서 사칙연산자 오버로딩과 대입연산자 오버로딩을 하였다고 해서 +=,-=... 이 자동으로 연동되는 것이 아니다.
	// #. 때문에 오버로딩된 연산자를 +=,-=... 등으로 연동하고자 한다면 추가로 정의를 해주어야 한다.
	Complex& operator+=(const Complex& c);
	Complex& operator-=(const Complex& c);
	Complex& operator*=(const Complex& c);
	Complex& operator/=(const Complex& c);
	// #. 사칙연산이 포함되어 있지만 대입 연산자가 있다면 참조형으로 반환한다.
	// #. operator+=의 경우 operator+와는 다르게 객체 내부의 상태를 변경하기 때문에 상수 함수로 선언할 수 없습니다.

	void Print() { std::cout << "( " << real << " , " << img << " ) " << std::endl; }
};