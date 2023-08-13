/* < Fibo > */

/*
0, 1, 1, 2, 3, 5, 8, 13 ...
Fibo(0) = 0
Fibo(1) = 1
Fibo(2) = 1
Fibo(3) = 2
Fibo(4) = 3
피보나치 수열의 공식 : 나 자신은 이전 두 개의 값의 합이다. [1]+[2]=[3]
바꿔 생각해 보면 나 자신은 이 후 두 개의 값에 더해질 값. [3] += [1], [2] += [1]
배열 형식으로 문제를 풀때는 입력 받은 값 N보다 +1을 해주어야 한다.(0_base)이기 때문에
*/

//#include <iostream>
//#include <vector>
//
//int64_t Fibo_one(const int N)
//{
//	if (N == 0) return 0;
//// 1. N 크기 만큼의 배열을 만든다.
//	std::vector<int64_t> table(N + 1);
//// 2. 피보나치의 시작 1을 1번 칸에 넣고서 뒤에서 더한다.
//	table[1] = 1;
//
//	for (int i = 0; i <= N; i++)
//	{	// 3. table[i]는 i + 1, i + 2에 더해질 값이다.
//		if (i + 2 <= N) table[i + 2] += table[i];
//		if (i + 1 <= N) table[i + 1] += table[i];
//	}
//	return table[N];
//}
//int64_t Fibo_two(const int N)
//{
//	if (N == 0) return 0;
//
//	std::vector<int64_t> table(N + 1);
//	table[1] = 1;
//
//	for (int i = 2; i <= N; i++)
//	{	// 위와 반대로 i - 1, i - 2 의 값이 i에 더해 진다.
//		table[i] = table[i - 1] + table[i - 2];
//	}
//	return table[N];
//}
//int main()
//{
//	std::cout << Fibo_one(2) << '\n';
//	std::cout << Fibo_one(10) << '\n';
//
//	std::cout << Fibo_two(2) << '\n';
//	std::cout << Fibo_two(10) << '\n';
//}

/* < 길찾기 > */

/*
최초 출발 지점은 길이 한 개이다. 여기서 오른쪽으로 한 칸 이동하면
본인이 갖고 있는 한 개의 길을 더해 주면 된다.
아래로 한 칸 이동하는 것도 마찬가지다.

현재 위치는 다음 위치에 +1만큼의 길을 제공한다.
가로 세로 각각 반복문을 통해 +1씩 증가해 보면 H,W의 값은 모든 길에 총 합이 된다.
이 또한 배열 형식이기 때문에 입력 받은 배열 길이에 +1을 해주어야 한다.
*/

//#include <iostream>
//#include <vector>
//
//int FindWays(int H, int W)
//{
//// 1. 동적 배열로 2차원 배열을 초기화
//	std::vector<std::vector<int>> table(H + 1, std::vector<int>(W + 1, 0));
//// 2. [1][1] 배열의 원소는 한 개의 길이기 때문에 1을 저장
//	table[1][1] = 1;
//// 3. 배열을 순회하여 자신의 값을 양 옆에 더한다.
//	for (int row = 0; row <= H; row++)
//	{
//		for (int col = 0; col <= W; col++)
//		{
//			if (row + 1 <= H) table[row + 1][col] += table[row][col];
//			if (col + 1 <= W) table[row][col + 1] += table[row][col];
//		}
//	}
//	return table[H][W];
//}
//int main()
//{
//	std::cout << FindWays(2, 3) << '\n';
//	std::cout << FindWays(10, 10) << '\n';
//}

/*
< 배열 사용 >
	1. 효율적으로 만든다
		ㅁ. 문제를 Tree구조로 표현해 본다.
		ㅠ. 입력에 해당하는 배열을 만든다.
			ㅑ. 현재 문제까지 해결하기 위해서는 크기가 하나씩 커야 한다.
				=> 0 ~ N 까지의 문제를 해결하기 위해서는 array[N + 1]
		ㅊ. 배열을 기본값으로 초기화 한다.
		ㅇ. 가장 작은 단위 문제의 값을 채운다.
		ㄷ. 표를 순회하면서 현재 값을 영향을 받은 셀에 퍼트린다.
			ㅑ. 현재 위치를 기준으로 다음 문제에 값을 채워 넣는다.
*/

/* < 숫자 조합 찾기 > */

/*
기본 값을 모두 false로 일단 체우고
[0] sum이 0이 되면 조합 성공이니 [0]에는 true를 배정한다.

numbers에 있는 값을 하나씩 더해 보도 해당 인덱스에 true를 전파한다.
그리고 [sum]에도 true가 전파 되었는지 아니면 그대로 false인지를 출력 해주면 된다.
*/

//#include <iostream>
//#include <vector>
//
//bool CanAccumulate(int sum, const std::vector<int>& numbers)
//{
//	std::vector<bool> table(sum + 1);
//	table[0] = true;
//
//	for (int i = 0; i <= sum; i++)
//	{	// table[i]가 0 ~ sum까지 반복하는데 true일 경우에만 진입한다.
//		if (table[i] == true) {
//			for (auto e : numbers)
//			{
//				if (i + e <= sum) {
//					table[i + e] = true;
//				}
//			}
//		}
//	}
//	return table[sum];
//}

/* < 숫자 조합 출력 > */

/*
[0]출발 지점 부터 배열을 전파한다. 그리고 반환을 [sum]으로 하면
[sum]이 배열을 받았을 때는 완성된 조합을 찾은 거고 [sum]이 nullptr을 반환하면
완성된 조합을 찾지 못한 것이다.
*/

//#include <iostream>
//#include <vector>
//
//using int_vector = std::vector<int>;
//
//std::shared_ptr<int_vector> HowAccumulate(int sum, const int_vector& numbers)
//{
//// 1. 공유 포인터를 담을 동적 배열을 초기화
//	std::vector<std::shared_ptr<int_vector>> table(sum + 1, nullptr);
//// 2. 0번 인덱스를 값이 0으로 떨어진 원소로 가정하고 공유 포인터를 할당
//	table[0] = std::make_shared<int_vector>(0);
//
//// 3. 결과 값까지 배열을 순회하며 공유 포인터를 배열로 전달
//	for (int i = 0; i <= sum; i++)
//	{	// table[i]가 nullptr일 경우는 시작 지점에서 연산으로 배열 공간을 전달 받지 못한 공간이다.
//		if (table[i] != nullptr) {
//			for (auto e : numbers)
//			{
//				if (i + e <= sum) {	// numbers와 더한 값[i + e]는 배열을 전달받고, 새롭게 추가된 e도 추가한다.
//					table[i + e] = std::make_shared<int_vector>(*table[i]);
//					table[i + e]->push_back(e);
//// 주의할 점은 순회하면서 배열을 전파할 때 배열을 그대로 복사해서 새로운 배열을 만들어야 한다.
//// 우리가 원하는 결과물은 벡터를 가리키는 스마트포인터이다.
//// #1. 스마트 포인터 생성
//// #2. 생성자의 매개변수를 지정
////		i)	스마트 포인터가 가리키는 것은 벡터다.
////		ii)	벡터의 생성자 중에 다른 벡터에서 복사 생성할 수 있는 기능이 있다.
////		iii)단, table[i]는 스마트포인터이므로 그 내용(*)을 지정해야만 복사가 이루어 진다.
//				}
//			}
//		}
//	}
//	return table[sum];
//}
//
//int main()
//{
//	auto ret = HowAccumulate(8, { 5,3,2 });
//
//	std::cout << "[ ";
//	if (ret != nullptr)
//	{
//		for (auto e : *ret)
//		{
//			std::cout << e << ", ";
//		}
//	}
//	std::cout << "]\n";
//}

/* < 최소 크기 숫자 조합 출력 > */

/*
(7, {2, 3, 5})라고 조합이 주어졌을 때 시작을 먼저 정해 준다.
(0, {2, 3, 5})에서 부터 전파해 나간다.
중복되는 인덱스[i + e]는 덮어쓰지 않고 먼저 size()를 비교하여 짧은 것을 남긴다.
*/

//#include <iostream>
//#include <vector>
//
//using int_vector = std::vector<int>;
//// int_vector : {N, N, N}, 즉 숫자 조합을 저장할 공간
//
//std::shared_ptr<int_vector> OptimaizeAccumulate(int sum, const int_vector& numbers)
//{	// std::vector<std::shared_ptr<int_vector>> : [{N, N, N},{A, A, A},{G, G, G}], 즉 각각의 조합들을 저장할 공간
//	std::vector<std::shared_ptr<int_vector>> table(sum + 1, nullptr);
//	table[0] = std::make_shared<int_vector>(0);
//// [0]{},[1]null,[2]null,[3]null...[N]null
//// 0번 인덱스에 빈 배열을 만들고 전파를 시작한다.
//
//	for (int i = 0; i <= sum; i++)
//	{	// != nullptr : [0]번 인덱스는 빈 배열이기 때문에 i = 0일 때는 진입할 수 있다.
//		// 이후 [i + e]번 인덱스는 nullptr에서 배열로 바뀌기 때문에 전파된 인덱스만 if문에 진입할 수 있다.
//		if (table[i] != nullptr)
//		{
//			for (auto e : numbers)
//			{
//				if (i + e <= sum)
//				{
//// [i + e]번 인덱스가 nullptr일 경우 당연히 int_vector를 복사하여 메모리를 할당한다.
//// [i + e]번 인덱스에 이미 저장된 배열이 있다면 이번에 새롭게 올라간 배열의 사이즈가 더 작을 경우 int_vector을 복사하여 메모리를 할당한다.
//					if (table[i + e] == nullptr || (table[i + e]->size() - 1 > table[i]->size()))
//					{
//						table[i + e] = std::make_shared<int_vector>(*table[i]);
//						table[i + e]->push_back(e);
//					}
//				}
//			}
//		}
//	}
//	return table[sum];
//}
//
//
//int main()
//{
//	auto ret = OptimaizeAccumulate(7, { 2,3,5 });
//	std::cout << "[ ";
//	if (ret != nullptr)
//	{
//		for (auto e : *ret)
//		{
//			std::cout << e << " ";
//		}
//	}
//	std::cout << "] \n";
//}

/* < 문자 조합 찾기 > */

/*
string클래스의 length()함수와 substr함수를 이용해 문자열을 하나씩 맞추어 본다.
[0]번 인덱스부터 true를 전파해 나간다.
*/

//#include <iostream>
//#include <vector>
//#include <string>
//
//bool CanGenerate(const std::string target, const std::vector<std::string>& stringlist)
//{	// [0]번 인덱스는 빈 배열이 들어가고, 이후 target문자열의 길이만큼 배열을 만든다.
//	std::vector<bool> table(target.length() + 1, false);
//	table[0] = true;
//
//	for (unsigned int i = 0; i <= target.length(); i++)
//	{
//		if (table[i] == true)
//		{
//			for (auto e : stringlist)
//			{	// 문자열의 앞부분이 e문자열과 동일한지 확인한다.
//				if (target.substr(i, e.length()) == e)
//				{	// target문자열 길이를 넘어가지 않았다면 true를 배정한다.
//					if (i + e.length() <= target.length())
//					{
//						table[i + e.length()] = true;
//					}
//				}
//			}
//		}
//	}
//	return table[target.length()];
//}
//
//
//int main()
//{
//	std::cout << CanGenerate("HelloWorld",
//		{ "ld","hello","World","Hel","H","lo","Hello","He","ll","Wor","o" }) << '\n';
//	std::cout << CanGenerate("Good", { "G","oo","d" }) << '\n';
//}

/* < 문자 조합 경우의 수 출력 > */

/*
[0]번 인덱스에 1을 넣고 자신의 값을 뒤로 전파한다.
length() 함수를 활용하여 문자열의 길이를 인덱스로 바꾸어 표현하며 원소의 값을 추가해 준다.
*/

//#include <iostream>
//#include <vector>
//#include <string>
//
//int HowManyGenerate(const std::string target, const std::vector<std::string>& stringlist)
//{
//	std::vector<int> table(target.length() + 1, 0);	// 모든 배열을 0으로 초기화 해주고
//	table[0] = 1;	// 시작만 1로 배정
//
//	for (unsigned int i = 0; i <= target.length(); i++)
//	{
//		if (table[i] > 0)
//		{
//			for (auto e : stringlist)
//			{	// 선택한 문자열 e가 target의 앞에 위치해 있는지 확인
//				if (target.substr(i, e.length()) == e)
//				{
//					if (i + e.length() <= target.length())
//					{
//						table[i + e.length()] += table[i];
//					}
//				}
//			}
//		}
//	}
//	return table[target.length()];
//}
//
//int main()
//{
//	std::cout << HowManyGenerate("World", { "W","o","r","l","d" }) << '\n';
//	std::cout << HowManyGenerate("Hello", { "He","ll","o","Hell","Hel","l" }) << '\n';
//}

/* < 모든 문자 조합 출력 > */

/*
최소 단위의 출발 지점은 빈 집합으로 시작한다.
집합을 담을 수 있는 집합을 만들고 큰 집합이 완성된 조합을 저장하고
작은 집합은 target을 완성할 수 있는 문자열들을 저장한다.
*/

//#include <iostream>
//#include <vector>
//#include <list>
//#include <string>
//
//using string_list = std::list<std::string>;
//
//string_list : {"He","ll","ow"}... 이와 같이 문자열을 모아두는 공간
//	{
//		{"He","ll","ow"},	// 큰 대가로 안에 있는 작은 대가로
//		{"Hell","ow"},		// target을 완성할 수 있는 문자열이 저장된 공간
//		{"Hel","low"}
//	}
//
//
//using result = std::list<string_list>;
//
//result : {"","",""},{""...},{""...}... 이와 같이 완성된 target들을 모아두는 공간
//	{	큰 대가로
//		{"He","ll","ow"},
//		{"Hell","ow"},
//		{"Hel","low"}
//	}	아래 target 집합을 모으는 저장 공간
//
//
//result FindGenerate(const std::string target, const string_list& stringlist)
//{
//	std::vector<result> table(target.length() + 1);
//	// target문자열의 문자 하나당 배열 한 칸을 할당한다.
//	// 단 [0]번 인덱스는 출발 지점이기 때문에 빈 배열을 할당한다.
//	// result타입의 vector란 각 []인덱스 별로 큰 대가로와 작은 대가로를 갖고 있다는 뜻
//
//	table[0] = result{ {} };
//
//	for (unsigned int i = 0; i <= target.length(); i++)
//	{	// table의 모든 인덱스를 순회할 vector<result>의 반복문
//		for (auto e : stringlist)
//		{	// stringlist(string_list)를 순회하며 target으로 만들어 지는지 확인
//			if (target.substr(i, e.length()) == e)
//			{
//				if (i + e.length() <= target.length())
//				{
//					for (auto e2 : table[i])
//					{	// table[i]란 vector에 저장되어 있는 result타입을 의미한다.
//						// result는 큰 대가로로 내부에 작은 대가로 들이 있다.
//						// e2는 이 작은 대가로들을 순회하며 e문자열을 저장해 준다.
//						e2.push_back(e);
//
//						// 큰 대가로에 작은 대가로를 저장한다.
//						table[i + e.length()].push_back(e2);
//					}
//				}
//			}
//		}
//	}
//	return table[target.length()];
//}
//void Print(const result& r)
//{
//	std::cout << "[ \n";
//	for (auto e1 : r)
//	{
//		std::cout << "\t[ ";
//		for (auto e2 : e1)
//		{
//			std::cout << e2 << ", ";
//		}
//		std::cout << "],\n";
//	}
//	std::cout << " ]\n\n";
//}
//
//int main()
//{
//	Print(FindGenerate("Hello", { "He","ll","o","Hell","llo" }));
//}

/* ---------- < 피보나치 수열 > ---------- */

//#include <iostream>	// 목표 : 입력된 수의 피보나치 수열을 출력
//#include <map>
//
//int Fibonacci(int N)								// (브루트포스) 피보나치 수열 함수
//{	// Base Case : 피보나치 수열의 첫 번째와 두 번째 값은 1이다.
//	if (N <= 2) { return 1; }
//	// Recursive Case : 현재 값 = 이전의 값 + 이전의 이전의 값
//	return Fibonacci(N - 1) + Fibonacci(N - 2);
//}
//using fibo_map = std::map<int, int64_t>;		// key값 : 자릿 수, value값 : 합한 값
//int64_t Dynamic_Fibo(int N, fibo_map& h)
//{	// map h에 key값 N이 있는지 확인하고 있다면 h[N]으로 value값을 반환한다.
//	if (h.count(N) == 1) { return h[N]; }
//	if (N <= 2) { return 1; }
//	// 계산한 값을 바로 반환하는 것이 아니라 map에 먼저 저장을 한다.
//	h[N] = Dynamic_Fibo(N - 1, h) + Dynamic_Fibo(N - 2, h);
//
//	return h[N];
//}
//
//
//int main()
//{
//	std::cout << Fibonacci(15) << '\n';
//	//std::cout << Fibonacci(50) << '\n'; 수 많은 재귀 호출로 인해 연산 속도가 굉장히 느리다.
//
//	fibo_map h;
//	std::cout << Dynamic_Fibo(50, h) << '\n';
//}

/* ---------- < 경로 찾기 > ---------- */

//#include <iostream>	// 목표 : 가로, 세로로 된 2차원 배열이 주어지면 왼쪽 상단에서 오른쪽 하단으로 가는 길을 출력
//#include <map>
//#include <string>
//
//int FindWays(int W, int H)				// (브루트포스) 길찾기
//{	// Base Case : 가로, 세로 길이가 0일 경우 목적지로 가는 길은 없다.
//	//		=> 가로, 세로 길이가 1일 경우 목적지로 가는 길은 오직 한 개 뿐이다.
//	if (W == 0 || H == 0) { return 0; }
//	if (W == 1 || H == 1) { return 1; }
//	// Recursive Case : 가로를 한 칸씩 줄인 길과 세로를 한 칸씩 줄인 길을 합한다.
//	return FindWays(W - 1, H) + FindWays(W, H - 1);
//}
//using road_map = std::map<std::string, int>;	// key값 : 가로, 세로 길이, value값 : 해당 길이의 길 수
////		=> 가로, 세로 두 개의 정수를 하나의 key값으로 받기 위해 문자열을 활용한다.
//int FindRoads(int W, int H, road_map& h)
//{	// 먼저 key값을 문자열로 만들어 주고, 가로, 세로가 뒤집어진 rkey값도 만들어 준다.
//	const std::string key = std::to_string(W) + "," + std::to_string(H);
//	if (h.count(key) == 1) { return h[key]; }
//	const std::string rkey = std::to_string(H) + "," + std::to_string(W);
//	if (h.count(rkey) == 1) { return h[rkey]; }
//
//	if (W == 0 || H == 0) { return 0; }
//	if (W == 1 || H == 1) { return 1; }
//// 바로 반환하지 말고 먼저 map의 key값으로 저장한다.
//	h[key] = FindRoads(W - 1, H, h) + FindRoads(W, H - 1, h);
//
//	return h[key];
//}
//
//
//int main()
//{
//	std::cout << FindWays(5, 5) << '\n';
//	//std::cout << FindWays(30, 30) << '\n';	너무 많은 재귀 호출로 인해 연산이 느리다.
//
//	road_map h;
//	std::cout << FindRoads(30, 30, h) << '\n';
//}

/* ---------- < 정수 조합 찾기 > ---------- */

//#include <iostream>	// 목표 : 주어진 정수 배열을 합해서 N이라는 값을 만들 수 있는지 참, 거짓으로 출력
//#include <vector>
//#include <map>
//// 정수 배열을 리터럴로 전달될 예정이기 때문에 const를 붙인다.
//// 그리고 재귀 호출을 통해 배열이 계속 복사되는 것을 방지하기 위해 참조형을 붙인다.
//bool CanAccumulate(int sum, const std::vector<int>& numbers)	// (브루트포스) 조합 찾기
//{	// Base Case : N이라는 값에서 정수 배열을 하나씩 빼줄 예정이다.
//	//		=> 그러므로 N이 0이 된다는 것은 정수 배열을 통한 연산으로 해당 값이 만들어진다는 뜻
//	//		=> 0보다 작아진다면 정수 배열을 통한 연산으로 해당 값을 만들지 못한다는 뜻
//	if (sum == 0) { return true; }
//	if (sum < 0) { return false; }
//
//	int remain{};			// N이라는 값은 고정되면 않된다.
//	//		=> 재귀 호출될 때마다 정수 배열과 하나씩 뺄쎔을 진행하여 남은 값을 전달해야 한다.
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		// Recursive Case : true나 false가 나올때 까지 재귀 호출을 한다.
//		if (CanAccumulate(remain, numbers) == true)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//using coin_map = std::map<int, bool>;	// key값 : 연산할 sum, value값 : 참, 거짓
//bool CanCoin(int sum, const std::vector<int>& numbers, coin_map& h)
//{	// 재귀 호출을 하다가 이전에 나왔던 sum값이 또 나온다면 저장된 값을 반환
//	if (h.count(sum) == 1) { return h[sum]; }
//	if (sum == 0) { return true; }
//	if (sum < 0) { return false; }
//
//	int remain{};
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		if (CanCoin(remain, numbers, h) == true)
//		{	// 바로 리던하지 말고 먼저 key값으로 저장
//			h[sum] = true;
//			return h[sum];
//		}
//	}
//	h[sum] = false;
//	return h[sum];
//}
//
//
//int main()
//{
//	std::cout << CanAccumulate(7, { 5,3,4,7 }) << '\n';
//	std::cout << CanAccumulate(15, { 7,3,9,2 }) << '\n';
//
//	coin_map h;
//	std::cout << CanCoin(900, { 7,14 }, h) << '\n';
//}

/* ---------- < 정수 조합 출력 > ---------- */

//#include <iostream>	// 목표 : N이라는 값을 만들기 위한 정수 배열을 출력
//#include <vector>
//#include <map>
//
//using int_vector = std::vector<int>;
//using accum_history = std::map<int, std::shared_ptr<int_vector>>;
//// shared_ptr : 정답을 출력하려면 배열 자체를 출력해야만 한다.
////	=> 이때 재귀 호출을 하는 과정에서 이전 함수에서 저장된 배열의 값에 연재 함수에서 연산한
////		=> 값을 추가해야 한다. 재귀 호출을 할 때마다 배열을 만들 경우 많은 메모리가 사용되고
////		=> 이러한 낭비를 줄이기 위해 포인터를 활용하는 것이 좋다.
////		=> 특히 여러개의 포인터가 하나의 메모리 공간을 가리킬 수 있는 shared_ptr을 사용하는 것이 효율적이다.
////	=> 또한 정답이 나오지 않을 경우 빈 배열 공간을 출력해야 하는데,
////		=> 이때 nullptr을 출력해 주면 된다.
//
//std::shared_ptr<int_vector> HowAccumulate(int sum,
//	const int_vector& numbers, std::shared_ptr<accum_history> h)
//{	// h는 map을 shared_ptr로 받는다. 그래야 map의 많은 복사를 맊고 하나의 메모리 공간만 활용할 수 있다.
//	if (h->count(sum) == 1) { return (*h)[sum]; }	// h는 주소값을 갖는 포인터이기 때문에 map의 key,value값을 꺼내려면 역참조가 필요하다.
//	if (sum == 0) { return std::make_shared<int_vector>(); }	// 재귀로 리턴해가며 배열 값을 채워 넣을 예정
//	if (sum < 0) { return nullptr; }
//
//	int remain{};
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		auto ret = HowAccumulate(remain, numbers, h);
//
//		if (ret != nullptr)	// 값이 0으로 떨어저 배열 공간을 받아 올라온 경우
//		{	// 마지막 값부터 차례로 배열에 넣고
//			ret->push_back(e);
//			(*h)[sum] = ret;	// 그 배열을 가리킨다.
//			return (*h)[sum];	// 가지치기 하며 내려왔던 길을 거슬로 올라간다.
//		}
//	}
//	(*h)[sum] = nullptr;
//	return nullptr;
//}
//void Print(int_vector* r)
//{
//	std::cout << "[ ";
//	if (r != nullptr)
//	{	// 출력하는 것은 포인터이기 때문에 역참조가 필요하다.
//		for (auto e : *r)
//		{
//			std::cout << e << " ";
//		}
//	}
//	std::cout << "]\n";
//}
//
//
//int main()
//{	// 매개 변수로 보낼 인자를 make_shared로 만들어 main함수에서 한 개의 메모리 공간을 확보하고
//	//	=> 이 메모리 공간을 여러 재귀 호출에서 사용한다.
//	Print(HowAccumulate(7, { 5,3,4,7 }, std::make_shared<accum_history>()).get());
//	Print(HowAccumulate(7, { 1,4 }, std::make_shared<accum_history>()).get());
//	Print(HowAccumulate(900, { 7,14 }, std::make_shared<accum_history>()).get());
//}

/* ---------- < 최소 크기 정수 조합 출력 > ---------- */

//#include <iostream>		// 목표 : N을 만들 수 있는 정수 조합 중 가장 크기(size())가 작은 조합을 출력한다.
//#include <vector>
//#include <map>			// 합을 구할 수 있느냐?(Decision) : 정수 조합 찾기
//						// 어떻게 합을 구했느냐?(Combination) : 정수 조합 출력
//						// 가장 짧은 배열은?(Optimization) : 최소 크기 정수 조합 출력
//
//using int_vector = std::vector<int>;
//using accum_history = std::map<int, std::shared_ptr<int_vector>>;
//
//std::shared_ptr<int_vector> OptimizeAccumulate(int sum,
//	const int_vector& numbers, std::shared_ptr<accum_history> h)
//{
//	if (h->count(sum) == 1) { return (*h)[sum]; }
//	if (sum == 0) { return std::make_shared<int_vector>(); }
//	if (sum < 0) { return nullptr; }
//
//	int remain{};
//	std::shared_ptr<int_vector> optimize = nullptr;
//// optimaize변수 : int_vector타입을 가리키는 포인터, 하나의 메모리 공간을 공유
////		=> 목표인 가장 크기가 작은 조합을 찾으려면 N을 만들 수 있는 조합들의 크기를 비교해야 한다.
////		=> 반복문 밖에 optimaize변수를 만들어 두고 N을 만들 수 있는 조합들을 비교한다.
////		=> 그리고 작은 크기의 조합을 저장한다.
//
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		auto ret = OptimizeAccumulate(remain, numbers, h);
//
//		if (ret != nullptr)		// ret은 N을 만들 수 있는 조합을 갖고 있다.
//		{
//			std::shared_ptr<int_vector> v = std::make_shared<int_vector>();
//			v->resize(ret->size());
//			std::copy(ret->begin(), ret->end(), v->begin());
//// v변수 : make_shared로 기존 메모리 공간과 분리된 다른 공간을 할당받는다.
////		=> 방금 맊 가지치기를 하고 돌아온 ret을 고스란히 copy한다.
//
//			v->push_back(e);
//			if (optimize == nullptr || v->size() < optimize->size())
//			{
//// 기존 조합을 저장하고 있던 optimize와 새로운 조합을 저장한 v의 사이즈를 비교한다.
//				optimize = v;
//			}
//		}
//	}
//	(*h)[sum] = optimize;
//	return (*h)[sum];
//}
//void Print(int_vector* r)
//{
//	std::cout << "[ ";
//	if (r != nullptr)
//	{
//		for (auto e : *r) { std::cout << e << " "; }
//	}
//	std::cout << "]\n";
//}
//
//
//int main()
//{
//	Print(OptimizeAccumulate(7, { 1,4 }, std::make_shared<accum_history>()).get());
//	Print(OptimizeAccumulate(900, { 7,14 }, std::make_shared<accum_history>()).get());
//	Print(OptimizeAccumulate(1750, { 10,50,100,500,1000 }, std::make_shared<accum_history>()).get());
//}

/* ---------- < 문자 조합 찾기 > ---------- */

//#include <iostream>		// 목표 : target문자열을 주어진 문자열 조합으로 만들 수 있는지 참/거짓으로 출력한다.
//#include <string>
//#include <vector>
//#include <map>
//
//bool CanGenerate(std::string target, const std::vector<std::string>& stringlist)
//{	// 문자도 정수와 마찬가지로 조합을 하나씩 빼면서 성공 여부를 판단할 것이다.
//	// 그러므로 가지치기 마지막에 빈 문자열이 남는다면 그 조합은 성공이라고 판단할 수 있다.
//	// Base Case
//	if (target == "") { return true; }
//
//	// Recursive Case : target에 stringlist중 한 개를 빼고 나머지로 재귀 호출
//	for (auto e : stringlist)
//	{	// string클래스의 find()함수는 해당 문자가 처음 등장한 인덱스를 반환한다.
//		if (target.find(e) == 0)
//		{
//			const std::string subs = target.substr(e.length());
//// subs변수 : 뺄 문자열(e)이 가장 앞에 있다면 그 문자열을 빼고 나머지 문자열을 subs에 저장
////		=> string클래스의 substr()함수는 지정된 인덱스 영역의 문자열을 반환한다.
//
//			if (CanGenerate(subs, stringlist)) { return true; }
//		}
//	}
//	return false;
//}
//using gen_history = std::map<std::string, bool>;
//bool Generation(std::string target, const std::vector<std::string>& stringlist,
//	gen_history& h)
//{
//	if (h.count(target) == 1) { return h[target]; }
//	if (target == "") { return true; }
//
//	for (auto e : stringlist)
//	{
//		if (target.find(e) == 0)
//		{
//			const std::string subs = target.substr(e.length());
//			if (Generation(subs, stringlist, h))
//			{
//				h[target] = true;
//				return h[target];
//			}
//		}
//	}
//	h[target] = false;
//	return h[target];
//}
//
//int main()
//{
//	std::cout << CanGenerate("abcdef", { "ab","abc","cd","def","abcd" });
//
//	gen_history h;
//	std::cout << Generation("HelloWorld", { "Hell","Wor","oW","ld","Hello","World","or" }, h);
//}

/* ---------- < 문자 조합 경우의 수 > ---------- */

//#include <iostream>		// 목표 : target을 만들 수 있는 문자열 조합의 수를 출력한다.
//#include <string>
//#include <vector>
//#include <map>
//
//int CanGenerate(std::string target, const std::vector<std::string>& stringlist)
//{	// Base Case : 빈 문자열이 남으면 1을 반환한다.
//	if (target == "") { return 1; }
//
//	int count{};
//	for (auto e : stringlist)
//	{	// Recursive Case : 문자열을 하나씩 빼가며 재귀 호출
//		if (target.find(e) == 0)
//		{
//			const std::string subs = target.substr(e.length());
//			count += CanGenerate(subs, stringlist);
//		}
//	}
//	return count;
//}
//using gen_history = std::map<std::string, int>;
//int HowManyGenerate(std::string target, const std::vector<std::string>& stringlist,
//	gen_history& h)
//{
//	if (h.count(target) == 1) { return h[target]; }
//	if (target == "") { return 1; }
//
//	int count{};
//	for (auto e : stringlist)
//	{
//		if (target.find(e) == 0)
//		{
//			const std::string subs = target.substr(e.length());
//			count += HowManyGenerate(subs, stringlist, h);
//		}
//	}
//	h[target] = count;
//	return count;
//}
//
//int main()
//{
//	std::cout << CanGenerate("abcdef", { "ab","abc","cd","def","abcd","cdef" });
//
//	gen_history h;
//	std::cout << HowManyGenerate("ZooZooClub",
//		{ "Zoo","Club","Zo","oo","Z","o","C","ub","Cl","ZooZ","H","World","lu","d","llo","b" }, h);
//}

/* ---------- < 문자 조합 출력 > ---------- */

//#include <iostream>		// 목표 : target이 완선되는 모든 문자 조합을 출력한다.
//#include <string>
//#include <list>
//#include <vector>
//#include <map>
//
//using result = std::list<std::list<std::string>>;
//// 안쪽 list : std::string타입을 저장할 수 있는 컨테이너 공간, 즉 문자 조합을 모을 공간
//// 바깥쪽 list : string을 저장한 list를 모아둔 컨테이너, 즉 완성된 문자 조합을 모을 공간
//
//result FindGenerate(std::string target, const std::vector<std::string>& stringlist)
//{	// 가지치기 맨 마지막에는 빈 공간을 내어준다.
//	if (target == "") { return result{ {} }; }
//
//	result r;
//	for (auto e : stringlist)
//	{
//		if (target.find(e) == 0)
//		{
//			const std::string subs = target.substr(e.length());
//			auto ret = FindGenerate(subs, stringlist);
//// ret은 재귀호출에서 반환된 result타입의 { {"ㅁ","ㅁㅁ",...},{"ㅇ","ㅇㅇ",...},... } 컨테이너다.
////		=> 즉 완성 가능성이 있는 문자 조합들(list)을 모아둔 list이다.
//
//			for (auto e2 : ret)
//			{
//				e2.push_front(e);	// e2는 안쪽 list들을 순회 한다.
//				r.push_front(e2);	// r은 바깥쪽 list에 e2(안쪽 list 한 개)를 추가한다.
//// push_back으로 문자 조합을 넣을 경우 재귀 호출이 반환되는 규칙으로 인해 거꾸로 저장된다.
//// 그러므로 push_front를 사용하고 push_front를 사용하기 위해 Vector가 아닌 List컨테이너를 사용한다.
//			}
//		}
//	}
//	return r;
//}
//void Print(const result& r)
//{
//	std::cout << "{ \n";
//	for (auto e1 : r)
//	{
//		std::cout << "\t[ ";
//		for (auto e2 : e1)
//		{
//			std::cout << e2 << ", ";
//		}
//		std::cout << "], \n";
//	}
//	std::cout << " }\n";
//}
//using gen_history = std::map<std::string, result>;	
//// 현재까지 완성된 target을 key값으로 하고 list<list>를 value값으로 한다.
//
//result Generation(std::string target, const std::vector<std::string>& stringlist,
//	gen_history& h)
//{
//	if (h.count(target) == 1) { return h[target]; }
//	if (target == "") { return result{ {} }; }
//
//	result r;
//
//	for (auto e : stringlist)
//	{
//		if (target.find(e) == 0)
//		{
//			const std::string subs = target.substr(e.length());
//			auto ret = Generation(subs, stringlist, h);
//
//			for (auto e2 : ret)
//			{
//				e2.push_front(e);
//				r.push_front(e2);
//			}
//		}
//	}
//	h[target] = r;
//	return h[target];
//}
//
//
//int main()
//{
//	Print(FindGenerate("GirlsGeneration",
//		{ "G","tion","zoo","ne","irls","oop","ir","ls","Gen","enera,","ot","ra","e","n" }));
//
//	gen_history h;
//	Print(Generation("GirlsGeneration",
//		{ "G","tion","zoo","ne","irls","oop","ir","ls","Gen","enera,","ot","ra","e","n" }, h));
//}