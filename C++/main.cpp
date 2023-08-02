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

//#include <iostream>
//#include <map>
//
//using fib_history = std::map<int, int64_t>;
//
//int64_t Fibo(int N, fib_history& h)
//{
//	if (h.count(N) == 1)return h[N];
//	if (N <= 2)return 1;
//
//	h[N] = Fibo(N - 1, h) + Fibo(N - 2, h);
//	return h[N];
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

//#include <iostream>
//#include <map>
//
//using fib_history = std::map<int, int64_t>;
//
//int64_t Fibo(int N, fib_history& h)
//{
//	if (h.count(N) == 1) return h[N];
//
//	if (N <= 2) return 1;
//
//	h[N] = Fibo(N - 1, h) + Fibo(N - 2, h);
//	return h[N];
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

//#include <iostream>
//#include <map>
//#include <string>
//
//using way_history = std::map<std::string, int>;
//
//int FindWays(int chng, int ho, way_history& h)
//{
//	const std::string key = std::to_string(chng) + ',' + std::to_string(ho);
//	const std::string rkey = std::to_string(ho) + ',' + std::to_string(chng);
//	if (h.count(key) == 1)return h[key];
//	if (h.count(rkey) == 1)return h[rkey];
//
//	if (chng == 0 || ho == 0)return 0;
//	if (chng == 1 || ho == 1)return 1;
//
//	h[key] = FindWays(chng - 1, ho, h) + FindWays(chng, ho, h);
//
//	return h[key];
//}

//#include <iostream>
//#include <map>
//#include <string>
//
//using way_history = std::map<std::string, int>;
//
//int FindWays(int Floor, int RoomNumber, way_history& h)
//{
//	const std::string key = std::to_string(Floor) + ',' + std::to_string(RoomNumber);
//	const std::string rkey = std::to_string(RoomNumber) + ',' + std::to_string(Floor);
//	if (h.count(key) == 1) return h[key];
//	if (h.count(rkey) == 1) return h[rkey];
//
//	if (Floor == 0 || RoomNumber == 0) return 0;
//	if (Floor == 1 || RoomNumber == 1) return 1;
//
//	h[key] = FindWays(Floor - 1, RoomNumber, h) + FindWays(Floor, RoomNumber - 1, h);
//
//	return h[key];
//}

//#include <iostream>
//#include <string>
//#include <map>
//
//using way_history = std::map<std::string, int>;
//
//int FindWays(int Floor, int RoomNumber, way_history& h)
//{
//	const std::string key = std::to_string(Floor) + ',' + std::to_string(RoomNumber);
//	const std::string rkey = std::to_string(RoomNumber) + ',' + std::to_string(Floor);
//	if (h.count(key) == 1) return h[key];
//	if (h.count(rkey) == 1) return h[rkey];
//
//	if (Floor == 0 || RoomNumber == 0) return 0;
//	if (Floor == 1 || RoomNumber == 1) return 1;
//
//	h[key] = FindWays(Floor - 1, RoomNumber, h) + FindWays(Floor, RoomNumber - 1, h);
//	return h[key];
//}

/* < 정수 배열 > */

/*
< 서술 > : 주어진 동전들로 720원을 만들기 위해서는 최소 몇 개의 동전을 사용해야 하나요.

< 입력 >
	#. sum : 정수
	#. numbers : 정수 배열
< 출력 > : 참 or 거진

< 설명 > : sum 을 만들기 위해 numbers 의 동일한 원소를 여러번 사용해도 된다.
	=> CanAccumulate(8, { 2, 3, 5 }); : true
	=> CanAccumulate(8, { 5, 6 });	  : false
*/

//#include <iostream>
//#include <vector>
//
//// #. 결과 값에서 부터 조합할 값들을 하나씩 '빼기' 연산을 하면서 트리를 만들 수 있다.
//// #. 만들어야 하는 결과 값을 sum 으로 지정하고, 조합할 값들을 동적 배열로 지정한다.
//bool CanAccumulate(int sum, const std::vector<int>& numbers)
//{
//	// Base-Case
//	if (sum == 0) { return true; }
//// #. '빼기' 연산을 통해 내려가다가 값이 0 이 된다면 풀 수 있는 문제이다.
//
//	if (sum < 0) { return false; }
//// #. '빼기' 연산을 통해 내려가다가 값이 0 이하가 된다면 풀 수 없는 문제이다.
//
//	// Recursive-Case
//	for (auto e : numbers)
//	{	// #. 동적 배열의 원소( 조합할 값들 )를 하나씩 '빼기' 연산한다.
//		int remain = sum - e;
//
//		// #. 빼고 남은 값을 결과 값으로 보내어 재귀 호출한다.
//		// #. 이 때 최종적으로 연산 결과 값이 0 인 나뭇가지가 생긴다면 추가적인 연산을 하지말고 반환한다.
//		if (CanAccumulate(remain, numbers) == true)
//		{
//			return true;
//		}
//	}
//	// #. 어떤 제어문에서도 걸리지 않은 나뭇가지는 풀 수 없는 문제이다.
//	return false;
//}
//int main()
//{
//	std::cout << CanAccumulate(8, { 2,3,5 }) << std::endl << std::endl;
//	std::cout << CanAccumulate(8, { 5,6 }) << std::endl << std::endl;
//	std::cout << CanAccumulate(720, { 10,50,100,500 }) << std::endl << std::endl;
//}

//#include <iostream>
//#include <vector>
//#include <map>			// #. 빼기를 하다보면 동일한 나뭇가지가 나올 수 있다.
//						// #. 이 때, 역시 계산한 값을 저장해 두었다가 중복되는 값이 나올 때 값을 반환해 준다.
//
//// #. Parent 노드의 값, 즉 빼고 남은 값을 key 값으로 지정하고 반환 값을 value 값으로 지정해 준다.
//using accum_history = std::map<int, bool>;
//
//bool CanAccumulate(int sum, const std::vector<int>& numbers, accum_history& h)
//{	// 이미 풀어본 문제는 저장된 값을 돌려준다.
//	if (h.count(sum) == 1) { return h[sum]; }
//	
//	// Base-Case
//	if (sum == 0) { return true; }
//	if (sum < 0) { return false; }
//
//	// Recursive-Case
//	for (auto e : numbers)
//	{
//		int remain = sum - e;
//		if (CanAccumulate(remain, numbers, h) == true)
//		{	// #. 반환값이 true 일 경우 map 에 저장해 준다.
//			h[sum] = true;
//			return h[sum];
//		}
//	}
//	// #. 모든 원소를 한 번씩 빼면서 내려 같는데 0 의 값이 나오지 못한 경우는 false 를 저장해 준다.
//	h[sum] = false;
//	return h[sum];
//}
//int main()
//{
//	accum_history h;
//
//	std::cout << CanAccumulate(8, { 2,3,5 }, h) << std::endl << std::endl;
//	h.clear();
//	std::cout << CanAccumulate(900, { 7,14 }, h) << std::endl << std::endl;
//	h.clear();
//	std::cout << CanAccumulate(720, { 10,50,100,500 }, h) << std::endl << std::endl;
//}

//#include <iostream>
//#include <vector>
//#include <map>
//
//using accum_history = std::map<int, bool>;
//
//bool Accum(int sum, const std::vector<int>& numbers, accum_history& h)
//{
//	if (h.count(sum) == 1) return h[sum];
//
//	if (sum == 0) return true;
//	if (sum < 0) return false;
//
//	for (auto e : numbers)
//	{
//		int remain = sum - e;
//		if (Accum(remain, numbers, h))
//		{
//			h[sum] = true;
//			return h[sum];
//		}
//	}
//	h[sum] = false;
//	return false;
//}

//#include <iostream>
//#include <vector>
//#include <map>
//
//using accum_history = std::map<int, bool>;
//
//bool Accum(int sum, const std::vector<int>& numbers, accum_history& h)
//{
//	if (h.count(sum) == 1) return h[sum];
//
//	if (sum == 0) return true;
//	if (sum < 0) return false;
//
//	for (auto e : numbers)
//	{
//		int remain = sum - e;
//		if (Accum(remain, numbers, h))
//		{
//			h[sum] = true;
//			return h[sum];
//		}
//	}
//	h[sum] = false;
//	return h[sum];
//}

//#include <iostream>
//#include <vector>
//#include <map>
//
//using accum_history = std::map<int, bool>;
//
//bool Accum(int sum, const std::vector<int>& numbers, accum_history& h)
//{
//	if (h.count(sum) == 1) return h[sum];
//
//	if (sum == 0) return true;
//	if (sum < 0) return false;
//
//	for (auto e : numbers)
//	{
//		int remain = sum - e;
//		if (Accum(remain, numbers, h))
//		{
//			h[sum] = true;
//			return h[sum];
//		}
//	}
//	h[sum] = false;
//	return h[sum];
//}

/* < 정수 배열 > */

/*
< 서술 > : 주어진 동전들로 720원을 만들기 위해서는 최소 몇 개의 동전을 사용해야 하나요.

< 입력 >
	#. sum : 정수
	#. numbers : 정수 배열
< 출력 > : 조합된 값의 배열

< 설명 > : sum 을 만들기 위해 numbers 의 동일한 원소를 여러번 사용해도 된다.
	=> CanAccumulate(8, { 2, 3, 5 }); : { 2, 2, 2, 2 }
	=> CanAccumulate(8, { 5, 6 });	  : { }
*/

//#include <iostream>
//#include <vector>
//#include <map>
//
//// #. key 값은 '빼기'연산을 통해 나온 결과 값을 지정한다.
//// #. value 값은 0 이라는 값까지 내려간 값들을 배열로 나열해야 하기 때문에 동적 배열로 지정한다.
//using int_vector = std::vector<int>;
//using how_accum_history = std::map<int, std::shared_ptr<int_vector>>;
//// #. 반환 값 중 풀 수 없는 문제는 아무것도 반환해서는 않된다. 때문에 nullptr 을 반환해야 하는데
//// #. nullptr 을 받기 위해서는 배열이 포인터 형태여야만 한다. 즉 value 는 포인터로 지정한다.
//
//// #. 재귀 호출로 여러 개의 함수의 반환 값을 하나의 메모리 공간에 저장하려면 shared_ptr 스마트 포인터를 사용해야 한다.
//std::shared_ptr<int_vector> HowAccumulate(int sum, const int_vector& numbers, how_accum_history& h)
//{	// 이미 풀은 문제는 저장된 값을 돌려준다.
//	if (h.count(sum) == 1) { return h[sum]; }
//
//	// Base-Case
//	if (sum == 0) { return std::make_shared<int_vector>(); }
//// #. 풀 수 있는 문제는 배열 공간을 할당해 준다.
//// #. 소유권이 shared 에 있기 때문에 make 로 할당한 메모리 공간은 if 문 가로 밖으로 나가도 유지되어 있다.
//
//	if (sum < 0) { return nullptr; }
//// #. 풀 수 없는 문제는 nullptr 을 반환한다.
//
//	// Recursive-Case
//	int remain{};
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		// #. shared 포인터로 반환된 값을 ret 이 받는다.
//		auto ret = HowAccumulate(remain, numbers, h);
//		if (ret != nullptr)
//		{	// #. 풀 수 있는 문제의 값은 배열에 저장한다.
//			ret->push_back(e);
//			// #. 값을 나뭇가지 key 에 저장해 둔다.
//			h[sum] = ret;
//			return h[sum];
//		}
//	}
//	// #. 값이 0 에 도달하지 못한 조합들은 nullptr 로 반환해 준다.
//	h[sum] = nullptr;
//	return h[sum];
//}
//void Print(const int_vector* r)
//{
//	std::cout << "{ ";
//	if (r != nullptr)
//	{
//		for (auto e : *r) { std::cout << e << ", "; }
//	}	std::cout << " }" << std::endl << std::endl;
//}
//int main()
//{
//	how_accum_history h;
//
//	Print(HowAccumulate(8, { 2,3,5 }, h).get());
//	h.clear();
//	Print(HowAccumulate(720, { 500,100,50,10 }, h).get());
//	h.clear();
//	Print(HowAccumulate(720, { 10,50,100,500 }, h).get());
//	h.clear();
//	Print(HowAccumulate(900, { 7,14 }, h).get());
//}

//#include <iostream>
//#include <vector>
//#include <map>
//
//using int_vec = std::vector<int>;
//using how_accum = std::map<int, std::shared_ptr<int_vec>>;
//
//std::shared_ptr<int_vec> HowAccum(int sum, const int_vec& numbers, how_accum& h)
//{
//	if (h.count(sum) == 1) return h[sum];
//
//	if (sum == 0) return std::make_shared<int_vec>();
//	if (sum < 0) return nullptr;
//
//	int remain{};
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		auto ret = HowAccum(remain, numbers, h);
//		if (ret != nullptr)
//		{
//			ret->push_back(e);
//			h[sum] = ret;
//			return h[sum];
//		}
//	}
//	h[sum] = nullptr;
//	return h[sum];
//}
//
//void Print(const int_vec* r)
//{
//	for (auto e : *r)
//	{
//		std::cout << e << '\n';
//	}
//}
//
//int main()
//{
//	how_accum h;
//	Print(HowAccum(30, { 3,5,10 }, h).get());
//	h.clear();
//}

//#include <iostream>
//#include <vector>
//#include <map>
//
//using int_vec = std::vector<int>;
//using how_accum = std::map<int, std::shared_ptr<int_vec>>;
//
//std::shared_ptr<int_vec> HowAccum(int sum, const int_vec& numbers, how_accum& h)
//{
//	if (h.count(sum) == 1) return h[sum];
//
//	if (sum == 0) return std::make_shared<int_vec>();
//	if (sum < 0) return nullptr;
//
//	int remain{};
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		auto ret = HowAccum(remain, numbers, h);
//		if (ret != nullptr)
//		{
//			ret->push_back(e);
//			h[sum] = ret;
//			return h[sum];
//		}
//	}
//	h[sum] = nullptr;
//	return h[sum];
//}
//void Print(const int_vec* r)
//{
//	for (auto e : *r)
//	{
//		std::cout << e << '\n';
//	}
//}
//int main()
//{
//	how_accum h;
//	Print(HowAccum(10, { 3,4,5 }, h).get());
//	h.clear();
//}

/* ----- < 동적 프로그래밍( Dynamic Programming ) > ----- */



/* --- < 테이블 기법 > --- */

/*
1. 최적화( Dynamic Programming )
	a. 문제를 Tree 구조로 표현
	b. Tree 구조로 표현된다면 테이블 기법으로 문제 풀이가 가능
		i. n + 1 배열을 만든다.
		ii.	기본값으로 초기화한다.
		iii. base case 를 채운다.
		iv. 표를 순회하면서 영향을 주는 셀에 퍼트린다.

2. 테스트
	a. 다양한 테스트 필요( 비교 대상이 없으므로 )
*/

/* < fib_table > */

//#include <iostream>
//#include <vector>
//
//int64_t Fibonacci(const int N)
//{	// 매개 변수 N 이 0 일 경우 0 을 반환한다.
//	if (N == 0) { return 0; }
//	std::vector<int64_t> table(N + 1);					// #1. N + 1 배열을 준비한다.
//	table[0] = 0;										// #2. 배열의 값을 기본 값으로 채운다.
//	table[1] = 1;										// #3. base case 를 채운다.( 0 과 1 )
//	for (int i = 0; i <= N; i++)						// #4. 영향을 주는 원소로 전파한다.
//	{	// 자신의 값을 다음, 그 다음 인덱스에 '+' 해준다.
//		if (i + 1 <= N) { table[i + 1] += table[i]; }
//		if (i + 2 <= N) { table[i + 2] += table[i]; }
//	}
//	return table[N];
//}
//int main()
//{
//	std::cout << Fibonacci(50) << std::endl;
//}

//#include <iostream>
//#include <vector>
//
//int64_t Fibo(int N)
//{
//	if (N == 0) return 0;
//
//	std::vector<int64_t> table(N + 1);
//	table[0] = 0;
//	table[1] = 1;
//
//	for (int i = 0; i <= N; i++)
//	{
//		if (i + 1 <= N) table[i + 1] += table[i];
//		if (i + 2 <= N) table[i + 2] += table[i];
//	}
//	return table[N];
//}