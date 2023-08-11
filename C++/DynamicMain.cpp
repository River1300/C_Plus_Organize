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