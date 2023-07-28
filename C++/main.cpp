/* ----- < 동적 프로그래밍( Dynamic Programming ) > ----- */



/* --- < 재활용 기법 > --- */

/*
1. 문제를 푼다.( Brute Force )
	a. 트리 구조로 그려본다.
	b. 트리 구조로 그려진다는 것은 재귀 호출이 가능하다는 뜻이다.

2. 최적화( Dynamic Programming )
	a. 반복되는 패턴을 찾는다.
	b. 저장하고 재활용한다.

3. 테스트
	a. 1 과 2 의 테스트 결과는 같아야 한다.
	b. 1 을 만들 때 사용한 TestCase 를 저장해 두는 것이 좋다.
*/

/* < 피보나치 수열 > */

/*
< 서술 >
	#1. 첫 달에는 새로 태어난 토끼 한 쌍만이 존재한다.
	#2. 두 달 이상이 된 토끼는 번식 가능하다.
	#3. 번식 가능한 토끼 한 쌍은 매달 암수 토끼 한 쌍을 낳는다.
	#4. 토끼는 죽지 않는다.
	#5. 일 년 뒤 토끼는 모두 몇 쌍이 될까?

< 입력 > : 정수 N
< 출력 > : 피보나치 수열의 N번째 수

< 설명 > : 피보나치 수열이란?
	#. 첫 번째와 두 번째는 항상 1
	#. 그 이후 부터는 앞의 숫자 두 개를 더해서 다음 숫자를 생성
	#. 따라서 우리가 만든 함수는 다음과 같이 반환한다.
		=> Fibonacci(1) = 1
		=> Fibonacci(2) = 1
		=> Fibonacci(3) = 2
		=> Fibonacci(4) = 3
		...
*/

//#include <iostream>
//
//int64_t Fibonacci(int n)
//{
//	// Base-Case
//	if (n <= 2) { return 1; }
//
//	// Recursive-Case
//	return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	std::cout << Fibonacci(3) << std::endl;
//}

//#include <iostream>
//#include <map>			// #. 재귀는 트리 형태로 풀어진다. 이 때 중복되는 나뭇 가지가 만들어지기 마련이다.
//						// #. 나뭇 가지의 값을 저장해 두고 이후 중복되는 나뭇 가지가 나오면 가지치기를 하지 말고 저장한 값을 반환해준다.
//						// #. 이러면 쓸때 없는 계산을 줄일 수 있다. 즉 중복되는 계산은 한 번만 하자는 것이다.
//
//// #. 'N 번째 피보나치 수열의 값은 M 이다' 라는 값을 저장하기 위해 key/value 를 저장할 수 있는 map 을 활용한다.
//// #. Key( N )는 int 타입으로, Value( M )는 int64_t 로 지정해 준다. 
//using fib_history = std::map<int, int64_t>;
//
//// #. 재귀 호출이기 때문에 매개변수 map 을 값으로 받을 경우 호출될 때마다 계산된 값이 각각 다른 곳에 저장된다.
//// #. 따라서 참조형으로 map 을 받아서 재귀 호출되는 것과 별개로 하나의 메모리 공간에 값이 저장되도록 한다.
//int64_t Fibonacci(int n, fib_history& h)
//{	// 현재 나뭇가지가 이미 계산된 부분인지 확인
//	if (h.count(n) == 1) { return h[n]; }
//// #. map h 에 n 번째( key ) 피보나치 수열의 값이 있을 경우 더 이상 가지치기를 하지 않고 그 값을 반환한다.
//
//	// Base-Case
//	if (n <= 2) { return 1; }
//
//	// Recursive-Case
//	h[n] = Fibonacci(n - 1, h) + Fibonacci(n - 2, h);
//// #. 계산된 값을 반환 하지 말고 h[n]( key )에 value 로 저장해준다.
//
//	return h[n];
//}
//int main()
//{	// #. 계산된 값을 저장할 map 객체 생성
//	fib_history h;
//	std::cout << Fibonacci(50, h) << std::endl;
//}

//#include <iostream>
//#include <map>
//
//using fib_history = std::map<int, int64_t>;
//
//int64_t Fibo(int N, fib_history& h)
//{
//	if (h.count(N) == 1) return h[N];
//	if (N <= 2) return 1;
//
//	h[N] = Fibo(N - 1, h) + Fibo(N - 2, h);
//	return h[N];
//}
//
//int main()
//{
//	fib_history h;
//	std::cout << Fibo(10, h) << '\n';
//}