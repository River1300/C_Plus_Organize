/* ----- < ���� ���α׷���( Dynamic Programming ) > ----- */



/* --- < ��Ȱ�� ��� > --- */

/*
1. ������ Ǭ��.( Brute Force )
	a. Ʈ�� ������ �׷�����.
	b. Ʈ�� ������ �׷����ٴ� ���� ��� ȣ���� �����ϴٴ� ���̴�.

2. ����ȭ( Dynamic Programming )
	a. �ݺ��Ǵ� ������ ã�´�.
	b. �����ϰ� ��Ȱ���Ѵ�.

3. �׽�Ʈ
	a. 1 �� 2 �� �׽�Ʈ ����� ���ƾ� �Ѵ�.
	b. 1 �� ���� �� ����� TestCase �� ������ �δ� ���� ����.
*/

/* < �Ǻ���ġ ���� =========================================================================================================================> */

/*
< ���� >
	#1. ù �޿��� ���� �¾ �䳢 �� �ָ��� �����Ѵ�.
	#2. �� �� �̻��� �� �䳢�� ���� �����ϴ�.
	#3. ���� ������ �䳢 �� ���� �Ŵ� �ϼ� �䳢 �� ���� ���´�.
	#4. �䳢�� ���� �ʴ´�.
	#5. �� �� �� �䳢�� ��� �� ���� �ɱ�?

< �Է� > : ���� N
< ��� > : �Ǻ���ġ ������ N��° ��

< ���� > : �Ǻ���ġ �����̶�?
	#. ù ��°�� �� ��°�� �׻� 1
	#. �� ���� ���ʹ� ���� ���� �� ���� ���ؼ� ���� ���ڸ� ����
	#. ���� �츮�� ���� �Լ��� ������ ���� ��ȯ�Ѵ�.
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
//#include <map>			// #. ��ʹ� Ʈ�� ���·� Ǯ������. �� �� �ߺ��Ǵ� ���� ������ ��������� �����̴�.
//						// #. ���� ������ ���� ������ �ΰ� ���� �ߺ��Ǵ� ���� ������ ������ ����ġ�⸦ ���� ���� ������ ���� ��ȯ���ش�.
//						// #. �̷��� ���� ���� ����� ���� �� �ִ�. �� �ߺ��Ǵ� ����� �� ���� ���ڴ� ���̴�.
//
//// #. 'N ��° �Ǻ���ġ ������ ���� M �̴�' ��� ���� �����ϱ� ���� key/value �� ������ �� �ִ� map �� Ȱ���Ѵ�.
//// #. Key( N )�� int Ÿ������, Value( M )�� int64_t �� ������ �ش�. 
//using fib_history = std::map<int, int64_t>;
//
//// #. ��� ȣ���̱� ������ �Ű����� map �� ������ ���� ��� ȣ��� ������ ���� ���� ���� �ٸ� ���� ����ȴ�.
//// #. ���� ���������� map �� �޾Ƽ� ��� ȣ��Ǵ� �Ͱ� ������ �ϳ��� �޸� ������ ���� ����ǵ��� �Ѵ�.
//int64_t Fibonacci(int n, fib_history& h)
//{	// ���� ���������� �̹� ���� �κ����� Ȯ��
//	if (h.count(n) == 1) { return h[n]; }
//// #. map h �� n ��°( key ) �Ǻ���ġ ������ ���� ���� ��� �� �̻� ����ġ�⸦ ���� �ʰ� �� ���� ��ȯ�Ѵ�.
//
//	// Base-Case
//	if (n <= 2) { return 1; }
//
//	// Recursive-Case
//	h[n] = Fibonacci(n - 1, h) + Fibonacci(n - 2, h);
//// #. ���� ���� ��ȯ ���� ���� h[n]( key )�� value �� �������ش�.
//
//	return h[n];
//}
//int main()
//{	// #. ���� ���� ������ map ��ü ����
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

/* < �� ���� ===========================================================================================================================> */

/*
< ���� >
	#1. M x N ũ���� �簢�� ������ �־�����.
	#2. ������, �Ʒ������θ� �̵��� �����ϴ�.
	#3. �»�ܿ��� �����ؼ� ���ϴ����� �̵��ϴ� ��� ��δ� ��� �ɱ�?

< �Է� > : ����( M ), ����( N )
< ��� > : ��� ��( X )

< ���� > : �׸��� �׷����� ���� �� �ִ� ����� ���� ���� �ľ��Ѵ�.
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
//// #. ����, ���ο��� 0 ĭ�̶�� ���� ����. Ǯ�� ���� ������ 0�� ��ȯ�Ѵ�.
//	if (m == 1 || n == 1) { return 1; }
//// #. �߰� �ɰ��� 1 x 1 �� �Ǹ� �� �ϳ��� �游 �����ϰ� �ȴ�.
//// #. (&&)�� �ƴ�(||)�� ����ϴ� ���� ������ �ٷ� �� ������� 0ĭ�� �� 0�� ��ȯ�ϱ� ������
////		=> 1 X 3 -> 1 X 2 -> 1 X 1�̳� �ᱹ 1�� ��ȯ �Ǳ⿡ ���� ������ ����ġ���� �ʿ䰡 ����.
//	// Recursive-Case
//	return FindWays(m - 1, n) + FindWays(m, n - 1);
//// #. ���θ� �� ĭ�� �ٿ����� ��ο� ���θ� �� ĭ�� �ٿ����� ��θ� �����ָ� �� ��� ���� ���´�.
//}
//
//int main()
//{
//	std::cout << FindWays(5, 5) << std::endl;
//}

//#include <iostream>
//#include <map>			// #. ���������� �ߺ��Ǵ� ������ ���� �����Ѵ�.
//#include <string>		// #. ����� ���� ���ϴ� ������ � ��η� �����ĸ� ���ϴ� ���� �ƴϴ�.
//						// #. �� ��/���� ����� ���� ����� ���� ���ϰ� �ȴ�.
//						// #. �׷��Ƿ� f(m,n) �� f(n,m)�� ���� ����� ���� ���´�.
//
//// #. key �� [pair �Ǵ� string]���� ������ �ָ� �ȴ�. value �� ����� ���� �����ϱ� ���� int �� ������ �ش�.
//using way_history = std::map<std::string, int>;
//
//int FindWays(int m, int n, way_history& h)
//{	// #. map �� key ���� key ��� �̸��� ���ڿ� ����� ����� �ش�.
//	const std::string key{ std::to_string(m) + "," + std::to_string(n) };
//
//	// #. �̹� ��ΰ� ������ MxN �迭( key )�� ����� ��( value )�� �����ش�.
//	if (h.count(key) == 1) { return h[key]; }
//
//	// #. NxM �迭�� key ���� �����ϱ� ���� ���ڿ� ����� ����� �ش�.
//	const std::string rkey{ std::to_string(n) + "," + std::to_string(m) };
//	if (h.count(rkey) == 1) { return h[rkey]; }
//
//	// Base-Case
//	if (m == 0 || n == 0) { return 0; }
//	if (m == 1 && n == 1) { return 1; }
//
//	// Recursive-Case
//	h[key] = FindWays(m - 1, n, h) + FindWays(m, n - 1, h);
//// #. �Ʒ��� ����� ���ư��� m - 1 �� ���������� ����� ���ư��� n - 1 ������ ��θ� ��� ���ϸ� ���� ��� ���� ���´�.
//// #. ��� ���� ���� �Լ��� ȣ���� key �� �����ϰ� ��ȯ�Ѵ�.
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

//#include <iostream>
//#include <string>
//#include <map>
//
//using way_history = std::map<std::string, int>;
//
//int FindWays(int m, int n, way_history& h)
//{
//	const std::string key = std::to_string(m) + ',' + std::to_string(n);
//	const std::string rkey = std::to_string(n) + ',' + std::to_string(m);
//	if (h.count(key) == 1) return h[key];
//	if (h.count(rkey) == 1) return h[rkey];
//
//	if (m == 0 || n == 0) return 0;
//	if (m == 1 || n == 1) return 1;
//
//	h[key] = FindWays(m - 1, n, h) + FindWays(m, n - 1, h);
//	return h[key];
//}

//#include <iostream>
//#include <string>
//#include <map>
//
//using way_history = std::map<std::string, int>;
//
//int FindWays(int m, int n, way_history& h)
//{
//	const std::string key = std::to_string(m) + ',' + std::to_string(n);
//	const std::string rkey = std::to_string(n) + ',' + std::to_string(m);
//	if (h.count(key) == 1) return h[key];
//	if (h.count(rkey) == 1) return h[rkey];
//
//	if (m == 0 || n == 0) return 0;
//	if (m == 1 || n == 1) return 1;
//
//	h[key] = FindWays(m - 1, n, h) + FindWays(m, n - 1, h);
//	return h[key];
//}

//#include <iostream>
//#include <map>
//#include <string>
//
//using way = std::map<std::string, int>;
//
//int FindWays(int m, int n, way& h)
//{
//	const std::string key = std::to_string(m) + ',' + std::to_string(n);
//	const std::string rkey = std::to_string(n) + ',' + std::to_string(m);
//	if (h.count(key) == 1) return h[key];
//	if (h.count(rkey) == 1) return h[rkey];
//
//	if (m == 0 || n == 0) return 0;
//	if (m == 1 || n == 1) return 1;
//
//	h[key] = FindWays(m - 1, n, h) + FindWays(m, n - 1, h);
//	return h[key];
//}

/* < ���� �迭 ==========================================================================================================================> */

/*
< ���� > : �־��� ������� 720���� ����� ���ؼ��� �ּ� �� ���� ������ ����ؾ� �ϳ���.

< �Է� >
	#. sum : ����
	#. numbers : ���� �迭
< ��� > : �� or ����

< ���� > : sum �� ����� ���� numbers �� ������ ���Ҹ� ������ ����ص� �ȴ�.
	=> CanAccumulate(8, { 2, 3, 5 }); : true
	=> CanAccumulate(8, { 5, 6 });	  : false
*/

//#include <iostream>
//#include <vector>
//
//// #. ��� ������ ���� ������ ������ �ϳ��� '����' ������ �ϸ鼭 Ʈ���� ���� �� �ִ�.
//// #. ������ �ϴ� ��� ���� sum ���� �����ϰ�, ������ ������ ���� �迭�� �����Ѵ�.
//bool CanAccumulate(int sum, const std::vector<int>& numbers)
//{
//	// Base-Case
//	if (sum == 0) { return true; }
//// #. '����' ������ ���� �������ٰ� ���� 0 �� �ȴٸ� Ǯ �� �ִ� �����̴�.
//
//	if (sum < 0) { return false; }
//// #. '����' ������ ���� �������ٰ� ���� 0 ���ϰ� �ȴٸ� Ǯ �� ���� �����̴�.
//
//	// Recursive-Case
//	for (auto e : numbers)
//	{	// #. ���� �迭�� ����( ������ ���� )�� �ϳ��� '����' �����Ѵ�.
//		int remain = sum - e;
//
//		// #. ���� ���� ���� ��� ������ ������ ��� ȣ���Ѵ�.
//		// #. �� �� ���������� ���� ��� ���� 0 �� ���������� ����ٸ� �߰����� ������ �������� ��ȯ�Ѵ�.
//		if (CanAccumulate(remain, numbers) == true)
//		{
//			return true;
//		}
//	}
//	// #. � ��������� �ɸ��� ���� ���������� Ǯ �� ���� �����̴�.
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
//#include <map>			// #. ���⸦ �ϴٺ��� ������ ���������� ���� �� �ִ�.
//						// #. �� ��, ���� ����� ���� ������ �ξ��ٰ� �ߺ��Ǵ� ���� ���� �� ���� ��ȯ�� �ش�.
//
//// #. Parent ����� ��, �� ���� ���� ���� key ������ �����ϰ� ��ȯ ���� value ������ ������ �ش�.
//using accum_history = std::map<int, bool>;
//
//bool CanAccumulate(int sum, const std::vector<int>& numbers, accum_history& h)
//{	// �̹� Ǯ� ������ ����� ���� �����ش�.
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
//		{	// #. ��ȯ���� true �� ��� map �� ������ �ش�.
//			h[sum] = true;
//			return h[sum];
//		}
//	}
//	// #. ��� ���Ҹ� �� ���� ���鼭 ���� ���µ� 0 �� ���� ������ ���� ���� false �� ������ �ش�.
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

//#include <iostream>
//#include <map>
//#include <vector>
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

//#include <iostream>
//#include <vector>
//#include <map>
//
//using accum = std::map<int, bool>;
//
//bool Accum(int sum, const std::vector<int>& numbers, accum& h)
//{
//	if (h.count(sum) == 1) return h[sum];
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

/* < ���� �迭 ==========================================================================================================================> */

/*
< ���� > : �־��� ������� 720���� ����� ���ؼ��� �ּ� �� ���� ������ ����ؾ� �ϳ���.

< �Է� >
	#. sum : ����
	#. numbers : ���� �迭
< ��� > : ���յ� ���� �迭

< ���� > : sum �� ����� ���� numbers �� ������ ���Ҹ� ������ ����ص� �ȴ�.
	=> CanAccumulate(8, { 2, 3, 5 }); : { 2, 2, 2, 2 }
	=> CanAccumulate(8, { 5, 6 });	  : { }
*/

//#include <iostream>
//#include <vector>
//#include <map>
//
//// #. key ���� '����'������ ���� ���� ��� ���� �����Ѵ�.
//// #. value ���� 0 �̶�� ������ ������ ������ �迭�� �����ؾ� �ϱ� ������ ���� �迭�� �����Ѵ�.
//using int_vector = std::vector<int>;
//using how_accum_history = std::map<int, std::shared_ptr<int_vector>>;
//// #. ��ȯ �� �� Ǯ �� ���� ������ �ƹ��͵� ��ȯ�ؼ��� �ʵȴ�. ������ nullptr �� ��ȯ�ؾ� �ϴµ�
//// #. nullptr �� �ޱ� ���ؼ��� �迭�� ������ ���¿��߸� �Ѵ�. �� value �� �����ͷ� �����Ѵ�.
//
//// #. ��� ȣ��� ���� ���� �Լ��� ��ȯ ���� �ϳ��� �޸� ������ �����Ϸ��� shared_ptr ����Ʈ �����͸� ����ؾ� �Ѵ�.
//std::shared_ptr<int_vector> HowAccumulate(int sum, const int_vector& numbers, how_accum_history& h)
//{	// �̹� Ǯ�� ������ ����� ���� �����ش�.
//	if (h.count(sum) == 1) { return h[sum]; }
//
//	// Base-Case
//	if (sum == 0) { return std::make_shared<int_vector>(); }
//// #. Ǯ �� �ִ� ������ �迭 ������ �Ҵ��� �ش�.
//// #. �������� shared �� �ֱ� ������ make �� �Ҵ��� �޸� ������ if �� ���� ������ ������ �����Ǿ� �ִ�.
//
//	if (sum < 0) { return nullptr; }
//// #. Ǯ �� ���� ������ nullptr �� ��ȯ�Ѵ�.
//
//	// Recursive-Case
//	int remain{};
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		// #. shared �����ͷ� ��ȯ�� ���� ret �� �޴´�.
//		auto ret = HowAccumulate(remain, numbers, h);
//		if (ret != nullptr)
//		{	// #. Ǯ �� �ִ� ������ ���� �迭�� �����Ѵ�.
//			ret->push_back(e);
//			// #. ���� �������� key �� ������ �д�.
//			h[sum] = ret;
//			return h[sum];
//		}
//	}
//	// #. ���� 0 �� �������� ���� ���յ��� nullptr �� ��ȯ�� �ش�.
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

//#include <iostream>
//#include <map>
//#include <vector>
//
//using int_vec = std::vector<int>;
//using how_accum = std::map<int, std::shared_ptr<int_vec>>;
//
//std::shared_ptr<int_vec> HowAccum(int sum, const int_vec& numbers, how_accum& h)
//{
//	if (h.count(sum) == 1) return h[sum];
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
//	if (sum == 0) return std::shared_ptr<int_vec>();
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

/* ----- < ���� ���α׷���( Dynamic Programming ) > ----- */



/* --- < ���̺� ��� > --- */

/*
1. ����ȭ( Dynamic Programming )
	a. ������ Tree ������ ǥ��
	b. Tree ������ ǥ���ȴٸ� ���̺� ������� ���� Ǯ�̰� ����
		i. n + 1 �迭�� �����.
		ii.	�⺻������ �ʱ�ȭ�Ѵ�.
		iii. base case �� ä���.
		iv. ǥ�� ��ȸ�ϸ鼭 ������ �ִ� ���� ��Ʈ����.

2. �׽�Ʈ
	a. �پ��� �׽�Ʈ �ʿ�( �� ����� �����Ƿ� )
*/

/* < fib_table =========================================================================================================================> */

//#include <iostream>
//#include <vector>
//
//int64_t Fibonacci(const int N)
//{	// �Ű� ���� N �� 0 �� ��� 0 �� ��ȯ�Ѵ�.
//	if (N == 0) { return 0; }
//	std::vector<int64_t> table(N + 1);					// #1. N + 1 �迭�� �غ��Ѵ�.
//	table[0] = 0;										// #2. �迭�� ���� �⺻ ������ ä���.
//	table[1] = 1;										// #3. base case �� ä���.( 0 �� 1 )
//	for (int i = 0; i <= N; i++)						// #4. ������ �ִ� ���ҷ� �����Ѵ�.
//	{	// �ڽ��� ���� ����, �� ���� �ε����� '+' ���ش�.
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

//#include <iostream>
//#include <vector>
//
//int Fibo(int N)
//{
//	std::vector<int> table(N + 1);
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

//#include <iostream>
//#include <vector>
//
//int Fibo(int N)
//{
//	std::vector<int> table(N + 1);
//	table[0] = 0;
//	table[1] = 1;
//	for (int i = 0; i <= N; i++)
//	{
//		if (i + 1 <= N) table[i + 1] += table[i];
//		if (i + 2 <= N) table[i + 2] += table[i];
//	}
//	return table[N];
//}

/* < road trip =========================================================================================================================> */

//#include <iostream>
//#include <vector>
//
//// M �� N �� �Է¹޾� �� ���� ���¸� �׸��� ���ؼ��� 2���� �迭�� ������ �Ѵ�.
//// vector Ŭ������ �����ڴ� �⺻������ 2 ���� ���ڸ� ���� �� �ִ�. (10, 0) �̶�� �ϸ� 10���� ĭ�� 0�̶�� ���� �־� �Ҵ��Ѵ�.
//// (10, std::vector<int>(10)) �̶�� �ϸ� 10���� ĭ�� std::vector<int> Ÿ���� ���� �ִµ� �� ���� (10)�� ���̴�.
//// �� ĭ��, �迭�� ������ ����Ǵ� 2���� �迭 ���°� ����� ����.
//// std::vector<std::vector<int>> table(M + 1, std::vector<int>(N + 1)); �� Ǯ���غ��ڸ�
//// ���� �迭�� ���� �迭 Ÿ��(int)���� ����� M + 1 ĭ�� �Ҵ��ϴµ� �� ĭ���� �����迭(int)�� �����Ǿ� �ִ�.
//
//int FindWays(int M, int N)
//{																			// #1. M + 1, N + 1 ���� �迭�� �����.
//	std::vector<std::vector<int>> table(M + 1, std::vector<int>(N + 1));	// #2. �⺻ ������ ä���.
//	table[1][1] = 1;														// #3. base case �� ä���.( [1][1] = 1 )
//	for (int row = 0; row <= M; row++)										// #4. ������ �ִ� ���ҷ� ����
//	{
//		for (int col = 0; col <= N; col++)
//		{	// �ڽ��� �Ʒ��ʰ� �����ʿ� �ڽ��� ���� ���Ѵ�.
//			if (row + 1 <= M) { table[row + 1][col] += table[row][col]; }
//			if (col + 1 <= N) { table[row][col + 1] += table[row][col]; }
//		}
//	}
//	return table[M][N];
//}
//int main()
//{
//	std::cout << FindWays(20, 20) << std::endl;
//}

//#include <iostream>
//#include <vector>
//
//int FindWays(int m, int n)
//{
//	std::vector<std::vector<int>> table(m + 1, std::vector<int>(n + 1));
//	table[1][1] = 1;
//	for (int i = 0; i <= m; i++)
//	{
//		for (int j = 0; j <= n; j++)
//		{
//			if (i + 1 <= m) table[i + 1][j] += table[i][j];
//			if (j + 1 <= n) table[i][j + 1] += table[i][j];
//		}
//	}
//	return table[m][n];
//}

//#include <iostream>
//#include <vector>
//
//int FindWays(int m, int n)
//{
//	std::vector<std::vector<int>> table(m + 1, std::vector<int>(n + 1));
//	table[1][1] = 1;
//
//	for (int i = 0; i <= m; i++)
//	{
//		for (int j = 0; j <= n; j++)
//		{
//			if (i + 1 <= m) table[i + 1][j] += table[i][j];
//			if (j + 1 <= n) table[i][j + 1] += table[i][j];
//		}
//	}
//	return table[m][n];
//}

//#include <iostream>
//#include <vector>
//
//int FindWays(int m, int n)
//{
//	std::vector<std::vector<int>> table(m + 1, std::vector<int>(n + 1));
//	table[0][0] = 0;
//	table[1][1] = 1;
//	for (int i = 0; i <= m; i++)
//	{
//		for (int j = 0; j <= n; j++)
//		{
//			if (i + 1 <= m) table[i + 1][j] += table[i][j];
//			if (j + 1 <= n) table[i][j + 1] += table[i][j];
//		}
//	}
//	return table[m][n];
//}

/* < can accum ======================================================================================================================> */

//#include <iostream>
//#include <vector>
//
//// A ��� ���� B ��� �������� ���� �� �ִ��� �������� �˾ƺ��� �Լ��̴�.
//// ������ bool Ÿ���� ���� �迭�� ����� B ������ ���� True �� �����Ѵ�.
//
//bool CanAccumulate(int sum, const std::vector<int>& numbers)
//{															// #1. sum + 1 ���� �迭�� �����.
//	std::vector<bool> table(sum + 1, false);				// #2. �⺻������ �ʱ�ȭ �Ѵ�.
//	table[0] = true;										// #3. base case �� ä���.( true )
//	for (int i = 0; i <= sum; i++)							// #4. ��� ���Ҹ� ��ȸ�ϸ鼭 �����Ѵ�.
//	{	// ���� ���� �����Ѵ�.
//		if (table[i] == true)
//		{	// numbers �� ���Ҹ� �ϳ��� �����´�.
//			for (auto e : numbers)
//			{	// i + e �ε����� true �� �����Ѵ�.
//				if (i + e <= sum) { table[i + e] = true; }
//			}
//		}
//	}
//	return table[sum];
//}
//int main()
//{
//	std::cout << CanAccumulate(8, { 2,3,5 }) << std::endl;
//	std::cout << CanAccumulate(8, { 5,6 }) << std::endl;
//}

//#include <iostream>
//#include <vector>
//
//bool Accum(int sum, const std::vector<int>& numbers)
//{
//	std::vector<bool> table(sum + 1);
//	table[0] = true;
//
//	for (int i = 0; i <= sum; i++)
//	{
//		if (table[i])
//		{
//			for (auto e : numbers)
//			{
//				if (i + e <= sum) table[i + e] = true;
//			}
//		}
//	}
//	return table[sum];
//}

//#include <iostream>
//#include <vector>
//
//bool Accum(int sum, const std::vector<int>& numbers)
//{
//	std::vector<bool> table(sum + 1);
//	table[0] = true;
//
//	for (int i = 0; i <= sum; i++)
//	{
//		if (table[i])
//		{
//			for (auto e : numbers)
//			{
//				if (i + e <= sum)
//				{
//					table[i + e] = true;
//				}
//			}
//		}
//	}
//	return table[sum];
//}

/* < how accum ====================================================================================================================> */

//#include <iostream>
//#include <vector>
//
//// A ��� ���� B ��� �������� ���� �� �ִٸ� � ����� ���� �� �ִ��� �˷���
//// ����� �������� �̷������ �Ѵ�.
//// �� �� A ��� ������ ��������� �ʴ� ���� ������ ��� ����ؼ��� �ʵǴµ� �̸� ���� nullptr �� Ȱ���� ���̴�.
//// �׷��Ƿ� ��µǴ� ������ ������ �����̰� ����� ������ ���� ����Ǿ� �ְ� shared_ptr �� Ȱ���Ѵ�.
//
//std::shared_ptr<std::vector<int>> HowAccumulate(int sum, const std::vector<int>& numbers)
//{																					// #1. sum + 1 �迭�� �����.
//	std::vector<std::shared_ptr<std::vector<int>>> table(sum + 1, nullptr);			// #2. �⺻���� ä���.( nullptr )
//	table[0] = std::make_shared<std::vector<int>>(0);								// #3. base case �� ä���.( �� ���� )
//	for (int i = 0; i <= sum; i++)													// #4. ��ȸ�� �ϸ� ������ �ִ� ������ �����Ѵ�.
//	{
//		if (table[i] != nullptr)
//		{
//			for (auto e : numbers)
//			{
//				if (i + e <= sum)
//				{
//// [i + e] �ε����� �̹� �Ҵ�� �޸� ������ ���� ��� �Ʒ����� �ö���� [i] �ε����� ���� ��ġ�� ��Ȳ�� �߻��Ѵ�.
//// �׷��Ƿ� �̹� �Ҵ�� �޸� ������ ����� �ö�� �ε��� ���Ҹ� �����Ͽ� ���ο� �޸� ������ �Ҵ��Ѵ�.
//// �� �� ������ ���� ����� ���� �迭�� �� ���Ҵ� ����Ʈ �������̱� ������ �������� �ؾ� �������� ���� ���簡 �̷������.
//// �׸��� [i] �ε��� ���Ұ� ����� [i + e] �� e �� ������ �߰����ش�.
//					table[i + e] = std::make_shared<std::vector<int>>(*table[i]);
//					table[i + e]->push_back(e);
//				}}}}
//	return table[sum];
//}
//void Print(std::vector<int>* r)
//{
//	if (r == nullptr) { std::cout << "nullptr" << std::endl; }
//	else
//	{
//		std::cout << "{";
//		for (auto e : *r)
//		{
//			std::cout << e << ", ";
//		}	std::cout << "}" << std::endl;
//	}
//}
//int main()
//{
//	Print(HowAccumulate(8, { 2,3,5 }).get());
//}

//#include <iostream>
//#include <vector>
//
//std::shared_ptr<std::vector<int>> HowAccum(int sum, const std::vector<int>& numbers)
//{
//	std::vector<std::shared_ptr<std::vector<int>>> table(sum + 1, nullptr);
//	table[0] = std::make_shared<std::vector<int>>(0);
//	for (int i = 0; i <= sum; i++)
//	{
//		if (table[i] != nullptr) {
//			for (auto e : numbers)
//			{
//				if (i + e <= sum) {
//					table[i + e] = std::make_shared<std::vector<int>>(*table[i]);
//					table[i + e]->push_back(e);
//				}
//			}
//		}
//	}
//	return table[sum];
//}