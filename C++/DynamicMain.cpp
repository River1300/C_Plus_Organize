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