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

/* < 모눈 종이 > */

/*
< 서술 >
	#1. M x N 크기의 사각형 영역이 주어졌다.
	#2. 오른쪽, 아래쪽으로만 이동이 가능하다.
	#3. 좌상단에서 시작해서 우하단으로 이동하는 모든 경로는 몇개나 될까?

< 입력 > : 가로( M ), 세로( N )
< 출력 > : 경로 수( X )

< 설명 > : 그림을 그려보며 나올 수 있는 경우의 수를 먼저 파악한다.
	=> 2(M) x 2(N) = 2
	=> 2(M) x 3(N) = 3
	=> 2(M) x 4(N) = 4
	=> 3(M) x 3(N) = 6
	...
*/

//#include <iostream>
//
//int FindWays(int m, int n)
//{
//	// Base-Case
//	if (m == 0 || n == 0) { return 0; }
//// #. 가로, 세로에서 0 칸이라는 것은 없다. 풀수 없는 문제는 0을 반환한다.
//	if (m == 1 || n == 1) { return 1; }
//// #. 잘개 쪼개져 1 x 1 이 되면 단 하나의 길만 존재하게 된다.
//// #. (&&)가 아닌(||)를 사용하는 것은 어차피 바로 위 제어문에서 0칸일 때 0을 반환하기 때문에
////		=> 1 X 3 -> 1 X 2 -> 1 X 1이나 결국 1로 반환 되기에 굳지 밑으로 가지치기할 필요가 없다.
//	// Recursive-Case
//	return FindWays(m - 1, n) + FindWays(m, n - 1);
//// #. 가로를 한 칸씩 줄여나간 경로와 세로를 한 칸씩 줄여나간 경로를 더해주면 총 경로 수가 나온다.
//}
//
//int main()
//{
//	std::cout << FindWays(5, 5) << std::endl;
//}

//#include <iostream>
//#include <map>			// #. 나뭇가지가 중복되는 과정이 역시 존재한다.
//#include <string>		// #. 경우의 수를 구하는 것이지 어떤 경로로 가느냐를 구하는 것이 아니다.
//						// #. 즉 열/행을 뒤집어도 같은 경우의 수를 구하게 된다.
//						// #. 그러므로 f(m,n) 은 f(n,m)과 같은 경우의 수를 갖는다.
//
//// #. key 는 [pair 또는 string]으로 지정해 주면 된다. value 는 경로의 수를 저장하기 위해 int 로 지정해 준다.
//using way_history = std::map<std::string, int>;
//
//int FindWays(int m, int n, way_history& h)
//{	// #. map 의 key 값을 key 라는 이름의 문자열 상수로 만들어 준다.
//	const std::string key{ std::to_string(m) + "," + std::to_string(n) };
//
//	// #. 이미 경로가 구해진 MxN 배열( key )은 저장된 값( value )을 돌려준다.
//	if (h.count(key) == 1) { return h[key]; }
//
//	// #. NxM 배열의 key 값을 구분하기 위한 문자열 상수도 만들어 준다.
//	const std::string rkey{ std::to_string(n) + "," + std::to_string(m) };
//	if (h.count(rkey) == 1) { return h[rkey]; }
//
//	// Base-Case
//	if (m == 0 || n == 0) { return 0; }
//	if (m == 1 && n == 1) { return 1; }
//
//	// Recursive-Case
//	h[key] = FindWays(m - 1, n, h) + FindWays(m, n - 1, h);
//// #. 아래로 축소해 낳아가는 m - 1 과 오른쪽으로 축소해 낳아가는 n - 1 에서의 경로를 모두 합하면 최종 경로 수가 나온다.
//// #. 경로 수를 현재 함수를 호출한 key 에 저장하고 반환한다.
//
//	return h[key];
//}
//
//int main()
//{
//	way_history h;
//	std::cout << FindWays(15, 15, h) << std::endl;
//}

//#include <iostream>
//#include <map>
//#include <string>
//
//using way_history = std::map<std::string, int>;
//
//int FindWays(int m, int n, way_history& h)
//{
//	const std::string key = std::to_string(m) + ',' + std::to_string(n);
//	const std::string rkey = std::to_string(n) + ',' + std::to_string(m);
//	if (h.count(key) == 1) return h[key];
//	if (h.count(rkey) == 1)return h[rkey];
//
//	if (m == 0 || n == 0) return 0;
//	if (m == 1 || n == 1) return 1;
//
//	h[key] = FindWays(m - 1, n, h) + FindWays(m, n - 1, h);
//
//	return h[key];
//}
//
//int main()
//{
//	way_history h;
//	std::cout << FindWays(5, 5, h) << '\n';
//}