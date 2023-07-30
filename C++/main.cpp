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

/* < �Ǻ���ġ ���� > */

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

/* < �� ���� > */

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