/* < Fibo > */

/*
0, 1, 1, 2, 3, 5, 8, 13 ...
Fibo(0) = 0
Fibo(1) = 1
Fibo(2) = 1
Fibo(3) = 2
Fibo(4) = 3
�Ǻ���ġ ������ ���� : �� �ڽ��� ���� �� ���� ���� ���̴�. [1]+[2]=[3]
�ٲ� ������ ���� �� �ڽ��� �� �� �� ���� ���� ������ ��. [3] += [1], [2] += [1]
�迭 �������� ������ Ǯ���� �Է� ���� �� N���� +1�� ���־�� �Ѵ�.(0_base)�̱� ������
*/

//#include <iostream>
//#include <vector>
//
//int64_t Fibo_one(const int N)
//{
//	if (N == 0) return 0;
//// 1. N ũ�� ��ŭ�� �迭�� �����.
//	std::vector<int64_t> table(N + 1);
//// 2. �Ǻ���ġ�� ���� 1�� 1�� ĭ�� �ְ� �ڿ��� ���Ѵ�.
//	table[1] = 1;
//
//	for (int i = 0; i <= N; i++)
//	{	// 3. table[i]�� i + 1, i + 2�� ������ ���̴�.
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
//	{	// ���� �ݴ�� i - 1, i - 2 �� ���� i�� ���� ����.
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

/* < ��ã�� > */

/*
���� ��� ������ ���� �� ���̴�. ���⼭ ���������� �� ĭ �̵��ϸ�
������ ���� �ִ� �� ���� ���� ���� �ָ� �ȴ�.
�Ʒ��� �� ĭ �̵��ϴ� �͵� ����������.

���� ��ġ�� ���� ��ġ�� +1��ŭ�� ���� �����Ѵ�.
���� ���� ���� �ݺ����� ���� +1�� ������ ���� H,W�� ���� ��� �濡 �� ���� �ȴ�.
�� ���� �迭 �����̱� ������ �Է� ���� �迭 ���̿� +1�� ���־�� �Ѵ�.
*/

//#include <iostream>
//#include <vector>
//
//int FindWays(int H, int W)
//{
//// 1. ���� �迭�� 2���� �迭�� �ʱ�ȭ
//	std::vector<std::vector<int>> table(H + 1, std::vector<int>(W + 1, 0));
//// 2. [1][1] �迭�� ���Ҵ� �� ���� ���̱� ������ 1�� ����
//	table[1][1] = 1;
//// 3. �迭�� ��ȸ�Ͽ� �ڽ��� ���� �� ���� ���Ѵ�.
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
< �迭 ��� >
	1. ȿ�������� �����
		��. ������ Tree������ ǥ���� ����.
		��. �Է¿� �ش��ϴ� �迭�� �����.
			��. ���� �������� �ذ��ϱ� ���ؼ��� ũ�Ⱑ �ϳ��� Ŀ�� �Ѵ�.
				=> 0 ~ N ������ ������ �ذ��ϱ� ���ؼ��� array[N + 1]
		��. �迭�� �⺻������ �ʱ�ȭ �Ѵ�.
		��. ���� ���� ���� ������ ���� ä���.
		��. ǥ�� ��ȸ�ϸ鼭 ���� ���� ������ ���� ���� ��Ʈ����.
			��. ���� ��ġ�� �������� ���� ������ ���� ä�� �ִ´�.
*/

/* < ���� ���� ã�� > */

/*
�⺻ ���� ��� false�� �ϴ� ü���
[0] sum�� 0�� �Ǹ� ���� �����̴� [0]���� true�� �����Ѵ�.

numbers�� �ִ� ���� �ϳ��� ���� ���� �ش� �ε����� true�� �����Ѵ�.
�׸��� [sum]���� true�� ���� �Ǿ����� �ƴϸ� �״�� false������ ��� ���ָ� �ȴ�.
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
//	{	// table[i]�� 0 ~ sum���� �ݺ��ϴµ� true�� ��쿡�� �����Ѵ�.
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

/* < ���� ���� ��� > */

/*
[0]��� ���� ���� �迭�� �����Ѵ�. �׸��� ��ȯ�� [sum]���� �ϸ�
[sum]�� �迭�� �޾��� ���� �ϼ��� ������ ã�� �Ű� [sum]�� nullptr�� ��ȯ�ϸ�
�ϼ��� ������ ã�� ���� ���̴�.
*/

//#include <iostream>
//#include <vector>
//
//using int_vector = std::vector<int>;
//
//std::shared_ptr<int_vector> HowAccumulate(int sum, const int_vector& numbers)
//{
//// 1. ���� �����͸� ���� ���� �迭�� �ʱ�ȭ
//	std::vector<std::shared_ptr<int_vector>> table(sum + 1, nullptr);
//// 2. 0�� �ε����� ���� 0���� ������ ���ҷ� �����ϰ� ���� �����͸� �Ҵ�
//	table[0] = std::make_shared<int_vector>(0);
//
//// 3. ��� ������ �迭�� ��ȸ�ϸ� ���� �����͸� �迭�� ����
//	for (int i = 0; i <= sum; i++)
//	{	// table[i]�� nullptr�� ���� ���� �������� �������� �迭 ������ ���� ���� ���� �����̴�.
//		if (table[i] != nullptr) {
//			for (auto e : numbers)
//			{
//				if (i + e <= sum) {	// numbers�� ���� ��[i + e]�� �迭�� ���޹ް�, ���Ӱ� �߰��� e�� �߰��Ѵ�.
//					table[i + e] = std::make_shared<int_vector>(*table[i]);
//					table[i + e]->push_back(e);
//// ������ ���� ��ȸ�ϸ鼭 �迭�� ������ �� �迭�� �״�� �����ؼ� ���ο� �迭�� ������ �Ѵ�.
//// �츮�� ���ϴ� ������� ���͸� ����Ű�� ����Ʈ�������̴�.
//// #1. ����Ʈ ������ ����
//// #2. �������� �Ű������� ����
////		i)	����Ʈ �����Ͱ� ����Ű�� ���� ���ʹ�.
////		ii)	������ ������ �߿� �ٸ� ���Ϳ��� ���� ������ �� �ִ� ����� �ִ�.
////		iii)��, table[i]�� ����Ʈ�������̹Ƿ� �� ����(*)�� �����ؾ߸� ���簡 �̷�� ����.
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

/* < �ּ� ũ�� ���� ���� ��� > */

/*
(7, {2, 3, 5})��� ������ �־����� �� ������ ���� ���� �ش�.
(0, {2, 3, 5})���� ���� ������ ������.
�ߺ��Ǵ� �ε���[i + e]�� ����� �ʰ� ���� size()�� ���Ͽ� ª�� ���� �����.
*/

//#include <iostream>
//#include <vector>
//
//using int_vector = std::vector<int>;
//// int_vector : {N, N, N}, �� ���� ������ ������ ����
//
//std::shared_ptr<int_vector> OptimaizeAccumulate(int sum, const int_vector& numbers)
//{	// std::vector<std::shared_ptr<int_vector>> : [{N, N, N},{A, A, A},{G, G, G}], �� ������ ���յ��� ������ ����
//	std::vector<std::shared_ptr<int_vector>> table(sum + 1, nullptr);
//	table[0] = std::make_shared<int_vector>(0);
//// [0]{},[1]null,[2]null,[3]null...[N]null
//// 0�� �ε����� �� �迭�� ����� ���ĸ� �����Ѵ�.
//
//	for (int i = 0; i <= sum; i++)
//	{	// != nullptr : [0]�� �ε����� �� �迭�̱� ������ i = 0�� ���� ������ �� �ִ�.
//		// ���� [i + e]�� �ε����� nullptr���� �迭�� �ٲ�� ������ ���ĵ� �ε����� if���� ������ �� �ִ�.
//		if (table[i] != nullptr)
//		{
//			for (auto e : numbers)
//			{
//				if (i + e <= sum)
//				{
//// [i + e]�� �ε����� nullptr�� ��� �翬�� int_vector�� �����Ͽ� �޸𸮸� �Ҵ��Ѵ�.
//// [i + e]�� �ε����� �̹� ����� �迭�� �ִٸ� �̹��� ���Ӱ� �ö� �迭�� ����� �� ���� ��� int_vector�� �����Ͽ� �޸𸮸� �Ҵ��Ѵ�.
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

/* < ���� ���� ã�� > */

/*
stringŬ������ length()�Լ��� substr�Լ��� �̿��� ���ڿ��� �ϳ��� ���߾� ����.
[0]�� �ε������� true�� ������ ������.
*/

//#include <iostream>
//#include <vector>
//#include <string>
//
//bool CanGenerate(const std::string target, const std::vector<std::string>& stringlist)
//{	// [0]�� �ε����� �� �迭�� ����, ���� target���ڿ��� ���̸�ŭ �迭�� �����.
//	std::vector<bool> table(target.length() + 1, false);
//	table[0] = true;
//
//	for (unsigned int i = 0; i <= target.length(); i++)
//	{
//		if (table[i] == true)
//		{
//			for (auto e : stringlist)
//			{	// ���ڿ��� �պκ��� e���ڿ��� �������� Ȯ���Ѵ�.
//				if (target.substr(i, e.length()) == e)
//				{	// target���ڿ� ���̸� �Ѿ�� �ʾҴٸ� true�� �����Ѵ�.
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

/* < ���� ���� ����� �� ��� > */

/*
[0]�� �ε����� 1�� �ְ� �ڽ��� ���� �ڷ� �����Ѵ�.
length() �Լ��� Ȱ���Ͽ� ���ڿ��� ���̸� �ε����� �ٲپ� ǥ���ϸ� ������ ���� �߰��� �ش�.
*/

//#include <iostream>
//#include <vector>
//#include <string>
//
//int HowManyGenerate(const std::string target, const std::vector<std::string>& stringlist)
//{
//	std::vector<int> table(target.length() + 1, 0);	// ��� �迭�� 0���� �ʱ�ȭ ���ְ�
//	table[0] = 1;	// ���۸� 1�� ����
//
//	for (unsigned int i = 0; i <= target.length(); i++)
//	{
//		if (table[i] > 0)
//		{
//			for (auto e : stringlist)
//			{	// ������ ���ڿ� e�� target�� �տ� ��ġ�� �ִ��� Ȯ��
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

/* < ��� ���� ���� ��� > */

/*
�ּ� ������ ��� ������ �� �������� �����Ѵ�.
������ ���� �� �ִ� ������ ����� ū ������ �ϼ��� ������ �����ϰ�
���� ������ target�� �ϼ��� �� �ִ� ���ڿ����� �����Ѵ�.
*/

//#include <iostream>
//#include <vector>
//#include <list>
//#include <string>
//
//using string_list = std::list<std::string>;
//
//string_list : {"He","ll","ow"}... �̿� ���� ���ڿ��� ��Ƶδ� ����
//	{
//		{"He","ll","ow"},	// ū �밡�� �ȿ� �ִ� ���� �밡��
//		{"Hell","ow"},		// target�� �ϼ��� �� �ִ� ���ڿ��� ����� ����
//		{"Hel","low"}
//	}
//
//
//using result = std::list<string_list>;
//
//result : {"","",""},{""...},{""...}... �̿� ���� �ϼ��� target���� ��Ƶδ� ����
//	{	ū �밡��
//		{"He","ll","ow"},
//		{"Hell","ow"},
//		{"Hel","low"}
//	}	�Ʒ� target ������ ������ ���� ����
//
//
//result FindGenerate(const std::string target, const string_list& stringlist)
//{
//	std::vector<result> table(target.length() + 1);
//	// target���ڿ��� ���� �ϳ��� �迭 �� ĭ�� �Ҵ��Ѵ�.
//	// �� [0]�� �ε����� ��� �����̱� ������ �� �迭�� �Ҵ��Ѵ�.
//	// resultŸ���� vector�� �� []�ε��� ���� ū �밡�ο� ���� �밡�θ� ���� �ִٴ� ��
//
//	table[0] = result{ {} };
//
//	for (unsigned int i = 0; i <= target.length(); i++)
//	{	// table�� ��� �ε����� ��ȸ�� vector<result>�� �ݺ���
//		for (auto e : stringlist)
//		{	// stringlist(string_list)�� ��ȸ�ϸ� target���� ����� ������ Ȯ��
//			if (target.substr(i, e.length()) == e)
//			{
//				if (i + e.length() <= target.length())
//				{
//					for (auto e2 : table[i])
//					{	// table[i]�� vector�� ����Ǿ� �ִ� resultŸ���� �ǹ��Ѵ�.
//						// result�� ū �밡�η� ���ο� ���� �밡�� ���� �ִ�.
//						// e2�� �� ���� �밡�ε��� ��ȸ�ϸ� e���ڿ��� ������ �ش�.
//						e2.push_back(e);
//
//						// ū �밡�ο� ���� �밡�θ� �����Ѵ�.
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

/* ---------- < �Ǻ���ġ ���� > ---------- */

//#include <iostream>	// ��ǥ : �Էµ� ���� �Ǻ���ġ ������ ���
//#include <map>
//
//int Fibonacci(int N)								// (���Ʈ����) �Ǻ���ġ ���� �Լ�
//{	// Base Case : �Ǻ���ġ ������ ù ��°�� �� ��° ���� 1�̴�.
//	if (N <= 2) { return 1; }
//	// Recursive Case : ���� �� = ������ �� + ������ ������ ��
//	return Fibonacci(N - 1) + Fibonacci(N - 2);
//}
//using fibo_map = std::map<int, int64_t>;		// key�� : �ڸ� ��, value�� : ���� ��
//int64_t Dynamic_Fibo(int N, fibo_map& h)
//{	// map h�� key�� N�� �ִ��� Ȯ���ϰ� �ִٸ� h[N]���� value���� ��ȯ�Ѵ�.
//	if (h.count(N) == 1) { return h[N]; }
//	if (N <= 2) { return 1; }
//	// ����� ���� �ٷ� ��ȯ�ϴ� ���� �ƴ϶� map�� ���� ������ �Ѵ�.
//	h[N] = Dynamic_Fibo(N - 1, h) + Dynamic_Fibo(N - 2, h);
//
//	return h[N];
//}
//
//
//int main()
//{
//	std::cout << Fibonacci(15) << '\n';
//	//std::cout << Fibonacci(50) << '\n'; �� ���� ��� ȣ��� ���� ���� �ӵ��� ������ ������.
//
//	fibo_map h;
//	std::cout << Dynamic_Fibo(50, h) << '\n';
//}

/* ---------- < ��� ã�� > ---------- */

//#include <iostream>	// ��ǥ : ����, ���η� �� 2���� �迭�� �־����� ���� ��ܿ��� ������ �ϴ����� ���� ���� ���
//#include <map>
//#include <string>
//
//int FindWays(int W, int H)				// (���Ʈ����) ��ã��
//{	// Base Case : ����, ���� ���̰� 0�� ��� �������� ���� ���� ����.
//	//		=> ����, ���� ���̰� 1�� ��� �������� ���� ���� ���� �� �� ���̴�.
//	if (W == 0 || H == 0) { return 0; }
//	if (W == 1 || H == 1) { return 1; }
//	// Recursive Case : ���θ� �� ĭ�� ���� ��� ���θ� �� ĭ�� ���� ���� ���Ѵ�.
//	return FindWays(W - 1, H) + FindWays(W, H - 1);
//}
//using road_map = std::map<std::string, int>;	// key�� : ����, ���� ����, value�� : �ش� ������ �� ��
////		=> ����, ���� �� ���� ������ �ϳ��� key������ �ޱ� ���� ���ڿ��� Ȱ���Ѵ�.
//int FindRoads(int W, int H, road_map& h)
//{	// ���� key���� ���ڿ��� ����� �ְ�, ����, ���ΰ� �������� rkey���� ����� �ش�.
//	const std::string key = std::to_string(W) + "," + std::to_string(H);
//	if (h.count(key) == 1) { return h[key]; }
//	const std::string rkey = std::to_string(H) + "," + std::to_string(W);
//	if (h.count(rkey) == 1) { return h[rkey]; }
//
//	if (W == 0 || H == 0) { return 0; }
//	if (W == 1 || H == 1) { return 1; }
//// �ٷ� ��ȯ���� ���� ���� map�� key������ �����Ѵ�.
//	h[key] = FindRoads(W - 1, H, h) + FindRoads(W, H - 1, h);
//
//	return h[key];
//}
//
//
//int main()
//{
//	std::cout << FindWays(5, 5) << '\n';
//	//std::cout << FindWays(30, 30) << '\n';	�ʹ� ���� ��� ȣ��� ���� ������ ������.
//
//	road_map h;
//	std::cout << FindRoads(30, 30, h) << '\n';
//}

/* ---------- < ���� ���� ã�� > ---------- */

//#include <iostream>	// ��ǥ : �־��� ���� �迭�� ���ؼ� N�̶�� ���� ���� �� �ִ��� ��, �������� ���
//#include <vector>
//#include <map>
//// ���� �迭�� ���ͷ��� ���޵� �����̱� ������ const�� ���δ�.
//// �׸��� ��� ȣ���� ���� �迭�� ��� ����Ǵ� ���� �����ϱ� ���� �������� ���δ�.
//bool CanAccumulate(int sum, const std::vector<int>& numbers)	// (���Ʈ����) ���� ã��
//{	// Base Case : N�̶�� ������ ���� �迭�� �ϳ��� ���� �����̴�.
//	//		=> �׷��Ƿ� N�� 0�� �ȴٴ� ���� ���� �迭�� ���� �������� �ش� ���� ��������ٴ� ��
//	//		=> 0���� �۾����ٸ� ���� �迭�� ���� �������� �ش� ���� ������ ���Ѵٴ� ��
//	if (sum == 0) { return true; }
//	if (sum < 0) { return false; }
//
//	int remain{};			// N�̶�� ���� �����Ǹ� �ʵȴ�.
//	//		=> ��� ȣ��� ������ ���� �迭�� �ϳ��� ������ �����Ͽ� ���� ���� �����ؾ� �Ѵ�.
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		// Recursive Case : true�� false�� ���ö� ���� ��� ȣ���� �Ѵ�.
//		if (CanAccumulate(remain, numbers) == true)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//using coin_map = std::map<int, bool>;	// key�� : ������ sum, value�� : ��, ����
//bool CanCoin(int sum, const std::vector<int>& numbers, coin_map& h)
//{	// ��� ȣ���� �ϴٰ� ������ ���Դ� sum���� �� ���´ٸ� ����� ���� ��ȯ
//	if (h.count(sum) == 1) { return h[sum]; }
//	if (sum == 0) { return true; }
//	if (sum < 0) { return false; }
//
//	int remain{};
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		if (CanCoin(remain, numbers, h) == true)
//		{	// �ٷ� �������� ���� ���� key������ ����
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

/* ---------- < ���� ���� ��� > ---------- */

//#include <iostream>	// ��ǥ : N�̶�� ���� ����� ���� ���� �迭�� ���
//#include <vector>
//#include <map>
//
//using int_vector = std::vector<int>;
//using accum_history = std::map<int, std::shared_ptr<int_vector>>;
//// shared_ptr : ������ ����Ϸ��� �迭 ��ü�� ����ؾ߸� �Ѵ�.
////	=> �̶� ��� ȣ���� �ϴ� �������� ���� �Լ����� ����� �迭�� ���� ���� �Լ����� ������
////		=> ���� �߰��ؾ� �Ѵ�. ��� ȣ���� �� ������ �迭�� ���� ��� ���� �޸𸮰� ���ǰ�
////		=> �̷��� ���� ���̱� ���� �����͸� Ȱ���ϴ� ���� ����.
////		=> Ư�� �������� �����Ͱ� �ϳ��� �޸� ������ ����ų �� �ִ� shared_ptr�� ����ϴ� ���� ȿ�����̴�.
////	=> ���� ������ ������ ���� ��� �� �迭 ������ ����ؾ� �ϴµ�,
////		=> �̶� nullptr�� ����� �ָ� �ȴ�.
//
//std::shared_ptr<int_vector> HowAccumulate(int sum,
//	const int_vector& numbers, std::shared_ptr<accum_history> h)
//{	// h�� map�� shared_ptr�� �޴´�. �׷��� map�� ���� ���縦 ���� �ϳ��� �޸� ������ Ȱ���� �� �ִ�.
//	if (h->count(sum) == 1) { return (*h)[sum]; }	// h�� �ּҰ��� ���� �������̱� ������ map�� key,value���� �������� �������� �ʿ��ϴ�.
//	if (sum == 0) { return std::make_shared<int_vector>(); }	// ��ͷ� �����ذ��� �迭 ���� ä�� ���� ����
//	if (sum < 0) { return nullptr; }
//
//	int remain{};
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		auto ret = HowAccumulate(remain, numbers, h);
//
//		if (ret != nullptr)	// ���� 0���� ������ �迭 ������ �޾� �ö�� ���
//		{	// ������ ������ ���ʷ� �迭�� �ְ�
//			ret->push_back(e);
//			(*h)[sum] = ret;	// �� �迭�� ����Ų��.
//			return (*h)[sum];	// ����ġ�� �ϸ� �����Դ� ���� �Ž��� �ö󰣴�.
//		}
//	}
//	(*h)[sum] = nullptr;
//	return nullptr;
//}
//void Print(int_vector* r)
//{
//	std::cout << "[ ";
//	if (r != nullptr)
//	{	// ����ϴ� ���� �������̱� ������ �������� �ʿ��ϴ�.
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
//{	// �Ű� ������ ���� ���ڸ� make_shared�� ����� main�Լ����� �� ���� �޸� ������ Ȯ���ϰ�
//	//	=> �� �޸� ������ ���� ��� ȣ�⿡�� ����Ѵ�.
//	Print(HowAccumulate(7, { 5,3,4,7 }, std::make_shared<accum_history>()).get());
//	Print(HowAccumulate(7, { 1,4 }, std::make_shared<accum_history>()).get());
//	Print(HowAccumulate(900, { 7,14 }, std::make_shared<accum_history>()).get());
//}

/* ---------- < �ּ� ũ�� ���� ���� ��� > ---------- */

//#include <iostream>		// ��ǥ : N�� ���� �� �ִ� ���� ���� �� ���� ũ��(size())�� ���� ������ ����Ѵ�.
//#include <vector>
//#include <map>			// ���� ���� �� �ִ���?(Decision) : ���� ���� ã��
//						// ��� ���� ���ߴ���?(Combination) : ���� ���� ���
//						// ���� ª�� �迭��?(Optimization) : �ּ� ũ�� ���� ���� ���
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
//// optimaize���� : int_vectorŸ���� ����Ű�� ������, �ϳ��� �޸� ������ ����
////		=> ��ǥ�� ���� ũ�Ⱑ ���� ������ ã������ N�� ���� �� �ִ� ���յ��� ũ�⸦ ���ؾ� �Ѵ�.
////		=> �ݺ��� �ۿ� optimaize������ ����� �ΰ� N�� ���� �� �ִ� ���յ��� ���Ѵ�.
////		=> �׸��� ���� ũ���� ������ �����Ѵ�.
//
//	for (auto e : numbers)
//	{
//		remain = sum - e;
//		auto ret = OptimizeAccumulate(remain, numbers, h);
//
//		if (ret != nullptr)		// ret�� N�� ���� �� �ִ� ������ ���� �ִ�.
//		{
//			std::shared_ptr<int_vector> v = std::make_shared<int_vector>();
//			v->resize(ret->size());
//			std::copy(ret->begin(), ret->end(), v->begin());
//// v���� : make_shared�� ���� �޸� ������ �и��� �ٸ� ������ �Ҵ�޴´�.
////		=> ��� �� ����ġ�⸦ �ϰ� ���ƿ� ret�� ������ copy�Ѵ�.
//
//			v->push_back(e);
//			if (optimize == nullptr || v->size() < optimize->size())
//			{
//// ���� ������ �����ϰ� �ִ� optimize�� ���ο� ������ ������ v�� ����� ���Ѵ�.
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