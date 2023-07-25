/* ----- < ǥ�� ���̺귯��( Standard Library : STL ) > ----- */

/*
< STL > : ǥ�� ���ø� ���̺귯��( Standard Template Library )
	#. � �ڷ������� ����� �� �ִ� �ڷᱸ����� �˰������� �̷���� ���̺귯��

< �����̳�( Container ) > : �ڷ� ������ ���� ���ø� Ŭ����
	#. ���Ҹ� �����ϴ� ���հ� ���� �����̸� �ٸ� ���� �÷���( Collection )�̶�� �Ѵ�.

< �ݺ���( Iterator ) > : �����̳� ���ҵ��� ��ȸ( Traverse )�ϱ� ���� �Ϲ�ȭ�� ����� ���Ѵ�.
	#. �ݺ��ڴ� �����̳ʿ� ���������� �ʱ� ������ �������� �и�/�����Ͽ� ����� �����ϴ�.
		#. ������ ���� : ���Ҹ� ����Ų��.
		#. ���� ��ȸ : ++, --, --, != ���� �����ڸ� �����Ѵ�.
		#. ���۰� ���� �����Ѵ�. : .begin(), .end()
	#. � �����̳ʵ� ���� ������ ������� ��ȸ�� �����ϴ�.

< �˰���( Algorithm ) > : ���� ������ �� �ִ� ����, �˻�, ������� �����ϱ� ����� ��ɱ��� ���� �ְ��� ���α׷��ӵ��� �̸� �غ��ص� �˰��� ���մϴ�.
*/

/* --- < std::string > --- */

//#include <iostream>
//#include <string>	// #. ���ڸ� ���ҷ� ������ �����̳��̴�.
//					// #. ��� ������ ���� string �� basic_string ���ø��� char �ν��Ͻ����� �� �� �ִ�.
//int main()
//{	// #. container �� string �� ����� ���� ���ڴ�.
//	std::string s1{ "Hello" }, s2{ "World!" };
//
//	s1 = s2;		// #1. ���ڿ��� ���� ������ ������ �� �ִ�.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	s1 += s2;		// #2. ���ڿ��� �̾� ���� �� �ִ�.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	s1[0] = 'Z';	// #3. ���ڿ��� ÷�� ������ ���� Ư�� ���ڸ� �ٲ� �� �ִ�.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	if (s1 == s2) {}	// #4. �� ���ڿ��� ������ �ƴ����� �Ǵ��ϴ� ����� ���� �� �ִ�.
//
//	std::cout << s1.size() << std::endl;	// #5. ���ڿ��� ũ�⸦ �� �� �ִ�.
//	std::cout << s1.length() << std::endl;	// #6. ���ڿ��� ���̸� �� �� �ִ�.
//
//	const char* pStr = s1.c_str();	// #7. ���ڿ��� ���� �ּҸ� C ��Ÿ�Ϸ� ��ȯ�ϴ� �Լ��̴�.
//
//	s1.insert(3, s2);	// #8. ���ڿ� �߰��� ���ڸ� �߰��� �� �ִ�.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	s1.append(s2);		// #9. ���� �ڿ� ���� Ȥ�� ���ڿ��� �߰��� �ش�.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	s1.erase(0, 3);		// #10. ������ ����( �̻� )�ε��� ���� n ���� ���ڸ� �����.
//	std::cout << s1 << std::endl;		s1 = "Hello";
//
//	std::cout << s1.find('e') << std::endl;	// #11. ���ڸ� �˻��ؼ� ���������� ��ȯ�Ѵ�.
//	std::cout << s1.find("ell") << std::endl;	// #12. ���ڿ��� �˻��ؼ� ���������� ��ȯ�Ѵ�.
//}

//#include <iostream>
//
//void TestPrint(std::string& str)
//{
//	std::cout << str.length() << " : " << str << std::endl;
//}
//
//int main()
//{
//	std::string empty;	// #. string ��ü�� ������ ����
//	TestPrint(empty);
//
//	std::string sized(10, '\0');	// #. Ŭ���� ũ������ �����ڸ� �̿��Ͽ� ũ��� �⺻ ���ڸ� ������
//	TestPrint(sized);
//
//	std::string s1("test");
//	std::cout << s1[0] << s1[1] << s1[2] << s1[3] << std::endl;
//
//	std::string s2(s1);		// #. Ŭ������ ���� �����ڸ� �̿��Ͽ� ������ ���ڿ� ��ü�� ����
//	std::string s3 = s1 + s2;
//	TestPrint(s3);
//
//	empty = s3;
//	TestPrint(empty);
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	int number{ 123 };
//	std::string str{};
//
//	str = std::to_string(number);	// �ٸ� Ÿ���� ���� ���ڿ��� ��ȯ�Ͽ� �����ϴ� �Լ�
//// int, float, double �� �⺻ Ÿ������ �����ε��Ǿ� �ִ�.
//
//	number = std::stoi(str);		// string_to_integer ���ڿ��� ������ ������ ��ȯ�Ͽ� �����ϴ� �Լ�
//// �Ǽ��� �����ϴ� std::stof �� �ִ�.
//
//	std::cout << str << "<->" << number << std::endl;
//}

//#include <iostream>
//#include <string>
//#include <sstream>
//
//int main()
//{	// �־��� ��Ŀ� �°� ���ڿ��� ����ϴ� �Լ��� �ִ�.
//	int number{ 1 };
//	char name[]{ "River" };
//	float average{ 11.1f };
//
//	char output[128]{};	// C Style
//	sprintf_s(output, sizeof(output), "%d�� �л� %s�� ��� %.1f �Դϴ�.", number, name, average);
//	printf(output);
//
//	std::ostringstream oss;	// C++ Style - string stream
//	oss << number << "�� �л� " << name << "�� ��� " << average << " �Դϴ�.";
//	std::cout << oss.str();
//}

//#include <iostream>
//#include <string>
//#include <sstream>
//
//int main()
//{
//	int myInt{ 123 };
//	float myFloat{ 3.141592f };
//	bool myBool{ true };
//
//	// < boolalpha class > : bool Ÿ���� ������ ( 0/1 )�� �ƴ�( false/true )���·� ��� �����ش�.
//	std::cout << myBool << std::endl;
//	std::cout << std::boolalpha << myBool << std::endl;
//
//	// 10���� : dec / 16���� : hex / 8���� : oct
//	std::cout << std::dec << myInt << std::endl;
//	std::cout << std::hex << myInt << std::endl;
//	std::cout << std::oct << myInt << std::endl;
//
//	// ���е�( precision ) : �Ҽ��� ���� ��� ������ �ڸ���
//	std::cout.precision(3);	// �ν��Ͻ��� ����Լ� ���·� ȣ�����־�� �Ѵ�.
//	std::cout << myFloat << std::endl;
//
//	std::cout.fill('0');	// �迭�� �� ������ ������ ���ڷ� ä���ش�.
//	std::cout.width(10);	// ���� ������ �������ش�.
//	std::cout << myInt << std::endl;
//}

/* < #7. c_str() > */

//#include <iostream>
//#include <string>	// #. c_str() �Լ��� const char* �ڷ����� ��ȯ�Ѵ�. ( ������ ������ �� ����, char �� ������ )
//
//int main()
//{	// #. string Ŭ���� ���ο��� char Ÿ���� �迭�� ����ִ�.
//	char str[30];
//	std::string s1{ "abcd" };
//// #. string Ŭ������ �ִ� char Ÿ���� �迭�� ũ�Ⱑ �������� ���� �� �ִ�.
//
//	const char* pch = s1.c_str();	// #. pch �� c_str() �Լ��� ��ȯ�� ���ڿ� ���ͷ��� ����Ų��.
//// #. �� ��, �����Ͱ� ����Ű�� ���� �ش� ���ڿ��� ù ��° �����̴�.
//
//	char* tar = (char*)pch;	// #. char Ÿ���� ������ tar �� pch �� ��( ���ڿ� �ּҰ� )�� ������ �ش�.
//	tar[3] = 'B';			// #. ��� �����Ͱ� �ƴ� tar �� ���ڿ��� �ٲ� �� �ְ� �ȴ�.
//
//	strcpy_s(str, s1.c_str());	// #. c_str() �Լ��� ��ȯ�� ���ڿ� ���ͷ�( ��Ȯ���� ���ڿ��� ���� �ּ� )�� NULL ���ڸ� ���� �� ���� str �� ����ȴ�.
//
//	std::cout << str << std::endl;
//	std::cout << s1 << std::endl;
//// < const char* c_str() const; > : ����, string �� �ִ� ���� ���ڿ��� ���� �ּҸ� �������� ���� �Լ��̴�.
//}

/* < #8. insert() > */

//#include <iostream>
//#include <string>
//
//int main()
//{	// insert �Լ��� ���ڿ� �߰��� ���ڸ� �߰��� �ִ� �Լ��̴�.
//	std::string s = "xmple";
//
//	// #1. insert(size_type index, size_type count, char ch)
//	s.insert(0, 1, 'E');	// #1. �־��� �ε��� ��ȣ�� �� ���� ���ڸ� �߰��Ѵ�.
//	std::cout << s << std::endl;
//	// #2. insert(size_type index, const char* s)
//	s.insert(2, "AAA");		// #2. �־��� �ε��� ��ȣ�� ���ڿ��� �߰��Ѵ�.
//	std::cout << s << std::endl;
//}

/* --- < std::wstring > --- */

//#include <iostream>
//// #. �����ڵ� ���ڸ� ���ҷ� ������ �����̳��̴�.
//// #. ��������� ���� wstring �� basic_string ���ø��� wchar_t �ν��Ͻ����� �� �� �ִ�.
//
//int main()
//{
//	char ch = 'a';
//	wchar_t wch = '��';	// #. < wchar_t > : �����ڵ� ���� ���� Ÿ��
//// ���� �̿��� ���� �����ڵ�� �����Ǿ� �ִ�.
//
//	std::wstring myName = L"���ֿ�";
//// �����ڵ带 �Է��� �� ���ڿ� �տ� L Ű���带 �Է��Ѵ�.
//}

/* --- < iterator > --- */

//#include <iostream>
//
//int main()
//{
//	std::string s{ "Hello World!" };
//
//// #1. < const_iterator begin() const; > : ���ڿ��� ù ��° ���ڸ� ����Ű�� iterator �� ��ȯ�Ѵ�.
//	s.begin();
//// #2. < const_iterator end() const; > : ���ڿ��� �������� �ٷ� ������ ����Ű�� iterator �� ��ȯ�Ѵ�.
//	s.end();
//
//	for (std::string::iterator itr = s.begin(); itr != s.end(); itr)
//	{	// #3. iterator �� ������ �����̱� ������ ( * )������ �����ڸ� ���ؼ� ���� ���� ������ �� �ִ�.
//		std::cout << *itr;
//	}
//}

/* ----- < std::array > ----- */

/*
< std::array( Random Access ) > : ���� �迭
	#. ������( Sequence ) : ������ ������ �ְ�, �� ������� �����Ѵ�.
	#. ���ӵ� �������( Contiguaous ) : �����ͷ� �̵��� �����ϴ�.
	#. ���� : ��������� ũ�Ⱑ �����Ǿ� �ִ�.
	#. ���� : algorithm �� ���ǵ� �Լ����� ����� �� �ִ�.
	#. ������ : Ŭ������ �����ڸ� ȣ���Ͽ� �ʱ�ȭ �� �� �ִ�.
	#. �Ҹ��� : �迭 �Ҹ� �ÿ� ��� ���ҵ��� �Ҹ��ڸ� ȣ���Ѵ�.
*/

//#include <iostream>
//#include <array>
//
//int main()
//{
//	int arr[3]{ 1,2,3 };
//	int b[3];
//	b = arr;
//// #. �Ϲ� �迭�� ��� ���� �����ڸ� ���� ���� ���� ������ �� �� ����.
//
//	std::array<int, 3> x{ 1,2,3 };
//	std::array<int, 3> y;
//	y = x;
//// #. std::array �� �迭�� ������ ���ҵ鿡 ���� ���� �����ڸ� ȣ���� �� �ִ�.
//}

//#include <iostream>
//#include <array>
//
//int main()
//{
//	std::array<int, 6> data = { 1,2,4,5,5,6 };
//
//	data.at(1) = 88;	// #. �迭�� �ε��� 1�� ã�ư� ���� �ٲپ� �ش�.
//	// #. �迭�� �ε��� 2�� ã�ư� ���� ���������� ��ȯ�Ѵ�.
//	std::cout << "�ε��� 2 �� ��ġ�� ���� : " << data.at(2) << "\n";
//	std::cout << "data �迭�� ũ�� = " << data.size() << "\n";
//
//	try {	//#. ũ�Ⱑ �����Ǿ� �ֱ� ������ �迭�� ũ�⸦ �Ѿ�� ���Ҹ� ������ ��� ������ �߻��Ѵ�.
//		data.at(6) = 666;
//	}
//	catch (std::out_of_range const& exc) {
//		std::cout << "���� �߻� : " << exc.what() << "\n";
//	}
//
//	std::cout << "data : ";
//	for (auto e : data)
//	{
//		std::cout << " " << e;
//	}	std::cout << std::endl;
//}

//#include <iostream>
//#include <array>
//
//int main()
//{
//	std::array<int, 3> x = { 1,2,3 };
//	std::array<int, 0> y;
//	// #. ���� ù ��°�� ������ ���Ҹ� ���������� ��ȯ���ش�.
//	std::cout << x.front() << " : " << x.back() << std::endl;
//	std::cout << y.front() << " : " << y.back() << std::endl;
//// #. �迭�� ũ�Ⱑ 0 �� ���, front �� back �Լ��� ȣ���� �� ����.
//}

//#include <iostream>
//#include <array>
//#include <cstddef>
//
//void pointer_func(const int* p, std::size_t size)
//{
//	std::cout << "data = ";
//	for (std::size_t i = 0; i < size; i++)
//	{
//		std::cout << p[i] << " ";
//	}	std::cout << std::endl;
//}
//
//int main()
//{
//	std::array<int, 4>container{ 1,2,3,4 };
//	pointer_func(container.data(), container.size());
//// #. data() �Լ��� std::array �� �����ϰ� �ִ� �迭�� ���� �ּҰ��� ��ȯ�Ѵ�.
//}

//#include <iostream>
//#include <array>
//
//int main()
//{
//	std::array<int, 3> x{ 1,2,3 };
//
//	std::cout << "�������� ��Ÿ���� iterator : ";
//	for (auto itr = x.begin(); itr != x.end(); itr++)
//	{
//		std::cout << *itr << " ";
//	}	std::cout << std::endl;
//	std::cout << "������ �������� ��Ÿ���� iterator : ";
//	for (auto itr = x.rbegin(); itr != x.rend(); itr++)
//	{
//		std::cout << *itr << " ";
//	}	std::cout << std::endl;
//}

//#include <iostream>
//#include <array>
//#include <algorithm>
//
//int main()
//{
//	std::array<int, 6> data = { 3,1,5,2,6,4 };
//	std::sort(data.begin(), data.end());
//
//	for (auto e : data)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}

//#include <iostream>
//#include <array>
//
//int main()
//{	// �迭�� ũ�Ⱑ 0 ���� �ƴ��� bool Ÿ������ ��ȯ�Ѵ�.
//	std::array<int, 4> arr;
//	std::cout << arr.empty() << std::endl;
//	std::array<int, 0> brr;
//	std::cout << brr.empty() << std::endl;
//
//	arr.fill(3);	// ��� �迭�� ���Ҹ� ���ڷ� ���޵� ������ ä���.
//	for (auto e : arr)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//
//	std::array<int, 4> crr{ 1,1,1,1 };
//	arr.swap(crr);	// �� �迭�� ������ �ٲ۴�.
//	for (auto e : arr)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}

/* ----- < Container-Vector > ----- */

/*
< ����( Vector ) > : �ڵ����� �޸𸮰� �Ҵ�Ǵ� �迭
	#. ���� ��ü�� ������ Ÿ���� �����ؼ� �ν��Ͻ��� �Ѵ�.
	#. ���� ��ü�� ���ҵ��� ũ��� �ش� ���ҵ��� �������� ������ �ִ�.
	#. ���ҵ��� �������� �ε����� �̿��� ������ �����ϴ�.

< ���� ������ ���� > : S ������ ���ӵ� n ���� ��
< �������� ���� > : ũ��� ������ ���� ��
*/

/* --- < std::vector_Basic > --- */

//#include <iostream>
//#include <vector>
//
//int main()
//{	// v ��� �̸��� ��ü�� 5���� ���Ұ� �����ǰ� ������ ���� ����Ǿ��ִ�.
//	// ������ ���ҵ��� 1�� �迭ó�� ����Ǿ� �ִ�.
//	std::vector<int> v{ 2,3,1,5,6 };
//	// ���ڿ��� �� �������� ���� �� �ִ�.
//	std::vector<std::string> v2{ "doggy","kitty","bunny" };
//
//	std::vector<int> v3(5);	// 5 ���� ���Ҹ� ������ �� �ִ� �� vector ��ü�� �����.
//
//	std::cout << v[0];
//	v[1] = 9;
//	// v[5] = 10;	// v �� ũ�⸦ �Ѿ ��� run-time error �� �߻��Ѵ�.
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{	// vecter Ŭ������ int Ÿ������ Ư��ȭ�Ͽ� v ��� �̸��� ��ü�� �����Ѵ�.
//	std::vector<int> v{ 2,3,1,5,6 };	// ��ü v ���� 5���� ���Ұ� �ִ�.
//	
//	v.push_back(2); // �迭�� �� ĭ �߰��ϰ� �� 2 �� ����
//	v.push_back(3);	// �迭�� �� ĭ �߰��ϰ� �� 3 �� ����
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v{ 1,2,3,4,5 };
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		std::cout << v[i] << std::endl;
//		++v[i];
//	}
//	for (int& x : v)
//	{	// x �� ���� ������ ���ǵǾ��� ������ �Ϲ������δ� ���� �ٲ� �� ����. x �� ������ ������ �����ؾ� ���� �ٲ� �� �ִ�.
//		std::cout << x << std::endl;
//		++x;
//// traverse( ��ȸ )
//// < ���� ��� �ݺ�( range-based-loop ) [0 : size()) > : �ݺ��� ���ǽ����� 0 �̻� ~ size() �̸�
//	}
//
//	// �Ϲ� �迭�� ���������� Container ����� ���ش�. ( �����δ� �ƴ����� )
//	std::string myName = { "PartManSu" };
//	for (char x : myName)
//	{
//		std::cout << x;
//	}
//	int array[]{ 1,2,3,4 };
//	for (int x : array)
//	{
//		std::cout << x;
//	}
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v;
//	int sum{};
//
//	// int Ÿ���� ���� �Է¹޴´ٸ� ����ؼ� �ݺ��Ǵ� ����
//	for (int value; std::cin >> value;)
//	{	// �Է��� ���� �� ���� ���ҷ� ����ȴ�.
//		v.push_back(value);
//	}
//	for (int e : v)	// v �� ����� ������ ������ŭ ������ ���ۺ��� ������ ��ȸ�Ѵ�.
//	{
//		sum += e;
//	}
//	// static_cast �� ����ȯ�� �����Ѵ�.
//	std::cout << sum << " : " << static_cast<float>(sum) / v.size() << std::endl;
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v1{ 3 };	// ������ �ʱ�ȭ��
//
//	// �⺻ ������ �ʱ�ȭ �� 3���� ���Ҹ� ������ v2 �̸��� ��ü
//	std::vector<int> v2(3);		// �����ʱ�ȭ ( �����ڸ� ���� �ʱ�ȭ )
//
//	for (int e : v1)
//	{	// ���� v1 �� �� ���� ���Ҹ� ���� �ִ�.
//		std::cout << e << " ";
//	}
//	std::cout << std::endl;
//	for (int e : v2)
//	{	// ���� v2 �� 3 ���� ���Ҹ� ���� �ִ�.
//		std::cout << e << " ";
//	}
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v{ 1,2,3,4,5,6,7,8,9 };
//
//	v.assign(5, 2);		// #1. 2�� ������ 5���� ���Ҹ� �Ҵ��Ѵ�.
//// #1. ������ �ʱ�ȭ�� ���ҵ��� ���ŵȴ�.
//
//	int& a = v.at(0);	// #2. ��ü�� ����� �� ��° ���Ҹ� ���������� ��ȯ�Ѵ�.
//	a = 99;				// #2. ���������� ��ȯ�� ���� �ش� ������ �ּҰ����� ���� �����ϴ�.
//
//	int& b = v[1];		// #3. ��ü�� ����� �� ��° ���Ҹ� ���������� ��ȯ�Ѵ�.
//	b = 88;				// #3. at() �Լ����� ���� �ӵ��� ������������ �������� �ʴ�.
//
//	int& c = v.front();	// #4. ù ��° ���Ҹ� ���������� ��ȯ�Ѵ�.
//	c = 11;
//
//	int& d = v.back();	// #5. ������ ���Ҹ� ���������� ��ȯ�Ѵ�.
//	d = 99;
//
//	v.clear();			// #6. ��� ���Ҹ� �����Ѵ�. 
//// #6. ���Ҹ� �����ϰ� �޸𸮴� �����ִ�. ( size �� �پ������ capacity �� �״�� )
//
//	v = { 1,2,3,4,5,6,7,8,9 };
//
//	v.push_back(99);	// #7. ������ ���� �ڿ� ���Ҹ� �߰��Ѵ�.
//	v.pop_back();		// #8. ������ ���Ҹ� �����Ѵ�.
//
//	v.begin();			// #9. ù ��° ���Ҹ� ����Ų��.
//	v.end();			// #10. ������ ������ �ٷ� �ڸ� ����Ų��.
//// #9, #10. iterator Ŭ������ ����� �� ����ϴ� ������ ������ �Լ�
//
//	v.rbegin();			// #11. ���� �迭�� �������� �� ù ��° ���Ҹ� ����Ų��. ( ������ ���� )
//	v.rend();			// #12. ���� �迭�� �������� �� ������ ���� �ٷ� �ڸ� ����Ų��. ( ù ��° ���� �� ���� )
//// #11, #12. ���Ҹ� �ڿ��� ���� ��ȸ�� �� ����Ѵ�.
//
//	v.reserve(5);		// #13. �� ���� ���Ҹ� ������ ��ġ�� �����Ѵ�. 
//// #13. vecter Ÿ������ �Էµ� ���� ��ŭ �����Ҵ��� �س��´�.
//
//	v.resize(12);		// #14. ũ�⸦ �� ���� �����Ѵ�.
//// #14. ���� �� �ִ� ���Һ��� �� ū ũ���� ��� 0�� ������ �ʱ�ȭ���ش�.
//
//	v.resize(15, 3);	// #15. ũ�⸦ �� ���� �����Ѵ�.
//// #15. ���� �� �ִ� ���Һ��� �� ū ũ���� ��� �Է��� ������ ������ �ʱ�ȭ���ش�.
//
//	// #16, 17. ���� ������ ������ �Ҵ�� ũ�⸦ ��ȯ���ش�.
//	std::cout << v.size() << " : " << v.capacity() << std::endl;
//
//	std::vector<int>v2{ 1,2,3,4,5 };
//
//	v2.swap(v);		// #18. �� ���� ���� �迭�� ���� �ٲ� �ش�.
//
//	std::cout << v.empty() << std::endl;	// #19. ��ü�� size �� 0�� ��� true �� ��ȯ�Ѵ�.
//
//	std::cout << v.size() << " : " << v.capacity() << std::endl;
//
//	for (auto e : v) { std::cout << e << " "; }
//}

/* < size / capacity > */

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v;
//	std::cout << "[ v[i], v.size(), v.capacity() ]" << std::endl;
//
//// #1. size() : ������ ������ ��ȯ�Ѵ�.
//// #2. capacity() : �Ҵ�� ������ ũ�⸦ ��ȯ�Ѵ�. ( c++ ������ �⺻ �޸� * 2 �� �����Ѵ�. )
//	
//	for (int i = 0; i <= 64; i++)
//	{
//		v.push_back(i + 1);
//		std::cout << "[ " << v[i] << " , " << v.size() << " , " << v.capacity() << " ]" << std::endl;
//// #3. size �� �����Ͱ� ä���� ������ ���� �̰�, capacity �� �Ҵ�� �޸� �������� �� �� �ִ�.
//	}
//}

/* < vector �� ��� ���� > */

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v;
//
//	v.push_back(21); v.push_back(32); v.push_back(53); v.push_back(64); v.push_back(15);
//
//// #1. < size_type > : ������ ������ ����
//	std::cout << "ex1-1) [ v.at(i) ] size_type : ";
//	for (std::vector<int>::size_type i = 0; i < v.size(); i++)
//	{
//		std::cout << v.at(i) << " ";
//	}   std::cout << std::endl;
//
//	std::cout << "ex1-1) [ v[i] ] size_type : ";
//	for (std::vector<int>::size_type i = 0; i < v.size(); i++)
//	{
//		std::cout << v[i] << " ";
//	}	std::cout << std::endl << std::endl;
//
//
//// #2. < iterator > : �ݺ��� ����
//	std::cout << "ex2) [ *iter ] iterator : ";
//	std::vector<int>::iterator itr;
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " ";
//	}	std::cout << std::endl;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//
//int main()
//{
//	std::vector<std::string> v;
//
//	v.push_back("NOODLE");
//	v.push_back("SIN NOODLE");
//	v.push_back("JIN NOODLE");
//	v.push_back("ZZAJANG");
//	v.push_back("PALDO");
//	v.push_back("TMSAE");
//
//// #1. < v.front > : ��ü ���� �� ���� �տ� �ִ� ���Ҹ� ���������� ��ȯ�ϴ� �Լ�
//// #2. < v.back > : ��ü ���� �� ���� �ڿ� �ִ� ���Ҹ� ���������� ��ȯ�ϴ� �Լ�
//	std::cout << "//ex3) v.front(), v.back()" << std::endl;
//	std::cout << "v.front() : " << v.front() << std::endl;
//	std::cout << "v.back() : " << v.back() << std::endl;
//	std::cout << std::endl;
//
//	std::cout << "//ex4) v.popback()" << std::endl;
//	std::vector<std::string>::iterator itr;
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " / ";
//	}	std::cout << std::endl;
//
//	v.pop_back();	// #3. < v.pop_back > : ��ü ���� �� ���� �ڿ� �ִ� ���Ҹ� �����ϴ� �Լ�
//
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " / ";
//	}	std::cout << std::endl << std::endl;
//
//	std::cout << "//ex6) v.erase(itr)" << std::endl;
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		if (*itr == "JIN NOODLE")
//		{	// #4. < v.erase(itr) > : ��ü�� ��ȸ�ϸ� Ư�� ���Ҹ� �����ϴ� �Լ�
//			v.erase(itr);
//			break;
//		}
//	}
//	for (itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " / ";
//	}	std::cout << std::endl << std::endl;
//
//// #5. ��ü �ȿ� ���Ұ� ���ŵ� ��� size �� �پ� ������ capacity �� �ʱ⿡ �Ҵ��� �� �״�� �����ǰ� �ִ�.
//	std::cout << "//ex7) v.size(), v.capacity()" << std::endl;
//	std::cout << "v.size() : " << v.size() << std::endl;
//	std::cout << "v.capacity() : " << v.capacity() << std::endl;
//}

/*
< Contaier > : ���� Ÿ���� ��ü�� ������ �� �ִ� �����̳�
	#. < Sequence Container > : �迭 ó�� ��ü���� ���������� �����ϴ� �����̳�
	#. < Associative Container > : Ű�� �������� �����Ǵ� ���� ã���ִ� �����̳�

< Iterator > : �����̳ʿ� ������ ���ҿ� ������ �� �ִ� �ݺ���

< Algorithm > : �ݺ��ڵ��� ������ �Ϸ��� �۾��� �����ϴ� �˰���
*/

//#include <iostream>
//#include <vector>
//
//template <typename T>
//void print_vector(std::vector<T>& vec)
//{
//	for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end(); itr++)
//	{	// iterator �� std::vector<T> �� ���� Ÿ���̱� ������ �տ� typename �� �ۼ��� �־�� �Ѵ�.
//		std::cout << *itr << std::endl;
//	}
//}
//
//int main()
//{
//	std::vector<int> vec;
//	vec.push_back(10);
//	vec.push_back(20);
//	vec.push_back(30);
//	vec.push_back(40);
//
//	std::cout << "--------- ó�� ���� ���� ---------" << std::endl << std::endl;
//	print_vector(vec);
//	std::cout << std::endl << "------------------------------------" << std::endl << std::endl;
//
//	vec.insert(vec.begin() + 2, 999);	// #. vec[2] �տ� �� 999 cnrk
//	print_vector(vec);
//	std::cout << std::endl << "------------------------------------" << std::endl << std::endl;
//
//	vec.erase(vec.begin() + 3);			// #. vec[3] ����
//	print_vector(vec);
//}

/* ----- < �ݺ���( Iterator ) > ----- */

/*
< �ݺ��� > : �����̳ʸ� ��ȸ�ϱ� ���� �����Ͷ�� �� �� �ִ�.
	#. ��� �����̳ʴ� �ݺ��ڸ� ������ �ִ�.
		=> std::vector<int>::iterator itr;
	#. �ݺ��ڴ� ������ �����̳� �ȿ� �ִ� ��Ҹ� ������ �� �ִ�.
	#. �ݺ��ڴ� ��Ҿȿ� ����� ���� �� �� �ִ�.
		=> *itr
	#. �ݺ��ڴ� �����̳� �ȿ� �ִ� ��ҵ� ���� �̵��� �� �ִ� ������ �����Ѵ�.
*/

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v{ 1,2,3 };
//
//	std::vector<int>::iterator itr;	// #. itr �տ� �ִ� ������ Ÿ���̴�.
//	itr = v.begin();	// #. iterator Ÿ���� ��ü itr �� vecter Ÿ���� ��ü v �� ù ��° ���Ҹ� ����Ű�� �Ѵ�.
//
//	while (itr != v.end())
//	{	// #. itr �����Ͱ� v ��ü�� ������ ���� �ٷ� �� �ּҰ��� ����Ű�� ������ �ݺ��Ѵ�.
//		std::cout << *itr << " ";
//		itr++;
//	}
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v{ 1,2,3 };
//
//	for (std::vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
//	{
//		std::cout << *itr << " ";
//	}
//}

/* < auto Ű���� > */

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v{ 1,2,3 };
//	auto itr = v.begin();	// #. �����Ϸ��� ��ü�� Ÿ���� �߷��� �� ���� ��� auto �� �Է��� �� �ִ�.
//
//	for (auto e : v)
//	{	// #. �����Ϸ��� ��ü v �� ���� ���� int Ÿ���̶�� ���� �� �� �ֱ� ������ ��ü e �� Ÿ���� �߷��� �� �ִ�.
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//	for (auto& e : v)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}

/* --- < quick-Algorithm > --- */

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int Compare(const void* left, const void* right)
//{
//	int lhs = *static_cast<const int*>(left);
//	int rhs = *static_cast<const int*>(right);
//
//	if (lhs > rhs)
//	{	// ���� ���� �� ũ�� -1 �� ��ȯ( ���� )
//		return -1;
//	}
//	else if (lhs < rhs)
//	{	// ������ ���� �� ũ�� +1 �� ��ȯ( ��� )
//		return 1;	// ����� ��ȯ�Ѵٴ� ���� ���� ��ġ�� �ٲٰڴٴ� ��
//	}
//	else
//	{	// ���� ������ 0 ���� ��ȯ
//		return 0;
//	}
//
//	return rhs - lhs;
//// #. if ������ ��� �� �ʿ� ���� ( - ) �����ڷ� ���� ���� ����/���/0 ���� ������ �� �ִ�.
//}
//
//int main()
//{
//	std::vector<int> v{ 7,4,1,8,2,3,10,9,6,5 };
//	// #. < qsort() > : �� ���� �˰���
//// #0. qsort �Լ��� �Ű� ����
//// #1. < void* Base > : container �� ���� ����
//// #2. < size_t Num > : Base ���� �� �� ������ ���Ҹ� ������ ������
//// #3. < size_t Size> : ���� �ϳ��� ũ��( ���� ������ void �����ͷ� �޾ұ� ������ ���� �ϳ��� ũ�⸦ �𸣴� ���´�. )
//// #4. < CompareFunction > : ���� ���ϴ� �Լ� ������
//	qsort(v.data(), v.size(), sizeof(v[0]), Compare);
//// < vector.data() > : ù ��° ������ �ּҰ��� ��ȯ���ش�.
//// < size_t > : unsigned int �� ���� ��( 0 �� �������� �� ��� )
//
//	for (auto e : v)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}

/* < ���ٽ�( �����Լ� ) > */

/*
< ���ٽ� > : �ڵ峻�� �Լ��� ������� �����ϴ� ����� ���Ѵ�.
	#. < [] (int a, int b) {} > : �Ű����� 2���� �޴� �����Լ�
	#. < [] (int a) -> int { return result; } > : �Ű����� 1���� ��ȯ���� �ִ� �����Լ�
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<int> v{ 3,2,5,4,1 };
//
//	qsort(v.data(), v.size(), sizeof(v[0]), [](const void* left, const void* right) {
//		return *static_cast<const int*>(left) - *static_cast<const int*>(right);
//		});	// �̸��� ���� �Լ� [] (int a, int b) {}
//// �ڵ峻�� �Լ� ����/���� ���� �����ϴ� ���
//
//	for (auto e : v)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}

/* --- < for_each()-Algorithm > --- */

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<int> v{ 3,7,4,1,6,2,5 };
//
//// #1. < inputiterator > : iterator( ���� ���� ������ )
//// #2. < function > : �Լ�( �Լ��� �޾Ƽ� ���� )
//	std::for_each(v.begin(), v.end(), [](int val) {
//		std::cout << val << " ";
//		});	// �Լ��� ���ؼ� ������ �����ϴ�.
//// < for_each() > : ���ø� ���·� ������ ���ҵ鿡 ���ؼ� �ݺ��� �����ϴ� �Լ�
//// < Unary function > : �Ű� ������ �� ���� �Լ�
//// < Binary function > : �Ű� ������ �� �� �̻��� �Լ�
//}

/* ----- < STL_Container > ----- */

/*
< �������( Overhead ) > : ���α׷��� ����Ǵ� �߿� �ٸ� ��ġ�� �ڵ带 ������Ѿ� �� ��, ���������� �ð�, �޸�, �ڿ� ���� ���Ǵ� �����̴�.
	#. A ��� ó���� �ܼ��ϰ� �����Ѵٸ� 10 �ʰ� �ɸ��µ�, �������� ����Ͽ� �ΰ����� B ��� ó���� �߰��� ���
		=> ó�� �ð��� 15 �ʰ� �ɷȴ�. �� �� �������� 5 �ʰ� �ȴ�.
	#. ���� ������ �ŷڼ� Ȯ�� �� �ý����� ������ ��� ���� ���Ͽ� ���� ��ݵǴ� ������ �߰��Ǵ� ������ ��� �� ���������� ���� ��ȣ
	#. �ܺ� �Լ� ��� �� �Լ� ����� ���� ���ø޸𸮸� �Ҵ��ϰ� �Լ��� ���� �������� ���� ���� �Ͼ��.
		=> �� ó�� ����ġ ���� �ڿ����� ���Ǵ� ���� ��������� �Ѵ�.
	#. �����̳� ��ü�� ���� ���� ���⵵( Space Complexity )�� �� ���� �ִ�.

< ������ ����( Random Access ) > : �ε����� ����Ͽ� �ٷ� ����( Direct Access )�� �� �ִ� ���� ���Ѵ�.
	#. ���������� ����Ǿ� �ֱ� ������ �迭�� ����� ��ü�� ũ��� �ε����� ����ؼ� �ش� ��ü�� ��ġ�� ����� �� �ֱ� �����̴�.

< ������ ����( Sequential Access ) > : �޸𸮿� �� ��ü�� ���� ������ �Ҵ�ǰ� �̿��� ��ü�� ������ ��ġ�� �� �� �ִ�.
	#. n ��° ����� ��ü�� �����Ϸ��� n-1 �������� ��ü�� ���������� �����ؾ� �Ѵ�.
		=> �ε����� ����Ͽ� ������ �� ����.
*/

/* --- < ���� �����̳�( Sequence Container ) > --- */

/*
< Sequence Container > : ���ҵ��� ������� �����Ǿ� �ִ�.
	#. < std::array( Random Access ) > : ���� �迭
	#. < std::vector( Random Access ) > : ���� �迭
	#. < std::deque( Random Access ) > : �� ���� ť( Double Ended Queue )
	#. < std::forward_list( Sequential Access ) > : ������ ����Ʈ( Single Linked List )
	#. < std::list( Sequential Access ) > : �� ���� ����Ʈ( Double Linked List )
*/

/* < std::array > */

//#include <iostream>
//#include <array>	// ������( Sequence ) : ������ ������ �ְ�, �� ������� �����Ѵ�.
//					// ���ӵ� �������( Contiguous ) : �����ͷ� �̵��� �����ϴ�.
//					// ���� : ��������� ũ�Ⱑ �����Ǿ� �ִ�.
//
//int main()
//{
//	std::array<int, 4> intArray{ 0,1,2,3 };	// #. ���� ���Ҹ� ���� 4 ���� �迭
//
//	for (auto e : intArray)
//	{	// #. ���� ��� �ݺ��� ��� ����
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//
//	for (auto itr = intArray.begin(); itr != intArray.end(); itr++)
//	{	// #. iterator ��� ����
//		std::cout << *itr << " ";
//	}	std::cout << std::endl;
//
//	for (int i = 0; i < intArray.size(); i++)
//	{	// #. size() �Լ��� ���� �迭�� ũ�⸦ ���� �� �ִ�.
//		std::cout << intArray[i] << " ";
//	}	std::cout << std::endl;
//// #. �Ϲ� array �ʹ� �ٸ��� STL array �� �ݺ��ڳ� �˰����� �迭�� ������� ����� �� �ִ�.
//}

/* < std::vector > */

//#include <iostream>
//#include <vector>	// ������( Sequence ) : ������ ������ �ְ�, �� ������� �����Ѵ�.
//					// ���ӵ� �������( Contiguous ) : �����ͷ� �̵��� �����ϴ�.
//					// ����( Dynamic ) : �迭�� ũ�⸦ �ٲ� �� �ִ�. ( ���� �������� �߰�/���� ���� )
//
//int main()
//{	// #. ���� �ڿ��� ������ �߰�/������ �ϴ� ���� vector �� ȿ�������� Ȱ���ϴ� ����̴�.
//	std::vector<int> v{ 1,2 };
//
//// #. < �޸� �Ҵ���( Memory Allocator ) > : �Ҵ���( allocator )�� ���� �߰��� ������ �޸� �Ҵ��� �������� ó���� �� �ִ�.
//	v.push_back(3);	// #. ���� �ڿ� ���Ҹ� �����Ѵ�. 
//	v.pop_back();	// #. ���� �ڿ� ����� ���Ҹ� �����Ѵ�.
//
//	v.resize(5);	// #. ������ ������ �ٲ� �� �ִ�.
//
//	for (auto e : v)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//
//	v.clear();		// #. ��� ���Ҹ� �����Ѵ�.
//	std::cout << v.size() << v.capacity() << std::endl;
//}

/* < std::deque > */

//#include <iostream>
//#include <deque>	// ������( Sequence ) : ������ ������ �ְ�, �� ������� �����Ѵ�.
//					// ����( Dynamic ) : �迭�� ũ�⸦ �ٲ� �� �ִ�.
//					// �� ������ ���� �� �ִ� : ��/�ڿ��� �߰�/������ �����ϴ�.
//					// ���ӵ� �������( Contiguous ) ? : �����ͷ� �̵��� �����ϴ�. ��Ȳ�� ���� ���ӵ� ������ �ƴ� ���� ���� �����ϱ⵵ �Ѵ�.
//
//int main()
//{
//	std::deque<int> deque{ 3,4,5 };
//
//	deque.push_front(1);
//	deque.push_back(6);	// #. ��/�ڿ��� ���� �߰��ϴ� �Լ�
//	deque[1] = 99;
//
//	for (auto e : deque)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//
//	deque.pop_front();
//	deque.pop_back();	// #. ��/�ڿ��� ���� �����ϴ� �Լ�
//}

/* < std::forward_list > */

//#include <iostream>
//#include <forward_list>	// ������( Sequence ) : ������ ������ �ְ�, �� ������� �����Ѵ�.
//						// ����( Dynamic ) : �迭�� ũ�⸦ �ٲ� �� �ִ�.
//						// ���� ����( Single Linked List ) : �� �� �������θ� ������ �Ǿ� �ִ�.
//
//int main()
//{	// #. vector �� �ٸ��� list �� ���� �迭 �߰��� ���ο� ���Ҹ� �߰�/������ ����.
//	std::forward_list<int> list{ 10,11,20,21 };
//	// #. iterator ���ۺ��� ������, 11 �̶�� ���� �˻��ؼ� ã�Ƴ��� iterator( ����Ű�� ��ġ ) �� ��ȯ�Ѵ�.
//	auto itr = std::find(list.begin(), list.end(), 11);
//// #. < const int& _Val > : container �Լ����� ��� ���������� ǥ��� �κ��� �������� �ʵ����� �����ٴ� ���� �˷��ش�.
//	std::cout << *itr << std::endl;	// #. find() �Լ��� ���� ���� ���� ����Ű�� ��ġ�̱� ������ ( * )�������� ���־�� �Ѵ�.
//
//	// #. �Է��� ��ġ, �ٷ� ���� ������ �Է��� ���� �����Ѵ�.
//	list.insert_after(itr, 11);
//	// #. ���� �Լ��� ������( Predicate )�� �Է��Ͽ� ���� ������ �� �ִ�.
//	list.sort(std::greater<int>());
//// #. < Predicate > : �����ڷ� bool ���� ��ȯ�ϴ� �Լ� ��ü
////		=> < list.sort(std::less<int>()); > : ��������
////		=> < list.sort(std::greater<int>()); > : ��������
//
//	list.push_front(10);
//	list.unique();	// #. �ٷ� �ڿ� �ִ� ���� ���ؼ� ���� ���� �ִٸ� �ߺ��Ǵ� ��( �ڿ� �ִ� )�� �����Ѵ�.
//
//	for (auto e : list)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}

/* < std::list > */

//#include <iostream>
//#include <list>	// ������( Sequence ) : ������ ������ �ְ�, �� ������� �����Ѵ�.
//				// ����( Dynamic ) : �迭�� ũ�⸦ �ٲ� �� �ִ�.
//				// �� ���� ����( Double Linked List ) : �� �� �������� ������ �Ǿ� �ִ�.
//int main()
//{
//	std::list<int> list1{ 1,2,3 };
//	std::list<int> list2{ 4,5,6 };
//
//	list1.reverse();	// #. �迭�� �Էµ� �������� �������� ���ĵȴ�.
//
//	list1.sort();
//	list2.sort();
//
//	for (auto e : list1)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//	
//	// #. �� ���� list �� �̾� ���δ�. ��, �� ���� list �� ������ ����( ��������/�������� )���� �̹� ���ĵ� ���¿��߸� merge() �Լ��� ������ �� �ִ�.
//	list2.merge(list1);
//// #. < ������ ������( && ) > : ���� �̵��� �� �ִ� �������� ����, ������ �ƴ� ������ ���Ұ� ����� ��ġ���� ���ο� ��ġ�� ���� �̵��ϴ� ��
//
//	for (auto e : list2)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//	for (auto e : list1)
//	{	// #. merge() �Լ��� ���� ��� ���������� ������ list1 ���� ����� ���� ���� �����̴�.
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//	std::cout << list1.size() << std::endl;
//}

/* ----- < ���� �����̳�( Contaier Adaptor ) > ----- */

/*
< ���� �����̳� > : Ư���� ������ ���� ������ ����
	#. < stack > : ���Ұ� ���� ���̰�( top ), ������ ���� ������.
		=> < LIFO > : Last In Last Out
	#. < queue > : ���Ұ� �ڷ� ���̰�, �տ���( front ) ���� ������.
		=> < FIFO > : First In First Out
	#. < priority_queue > : Ư�� ���Ҵ� �켱 ������ ����Ǿ� �� ���� ����( front )���� ���� ������.

< Iterator/[] > : �ݺ��ڳ� �迭 ÷�ڰ� ���ԵǾ� ���� ���� �����̳��̴�.
*/

/* --- < std::stack > --- */

//#include <iostream>
//#include <stack>
//
//int main()
//{
//	std::stack<int> stack;
//	stack.push(1);
//	stack.push(2);
//	stack.push(3);
//	stack.push(4);
//
//	stack.pop();
//
//	std::stack<int> temp(stack);	// #. ���� �����ڸ� �̿��Ͽ� stack ��ü�� ������ temp �� ����
//	while (!temp.empty())
//	{	// #. iterator �� ���� ������ stack �� top() �Լ��� �̿��ؼ� ����ؾ� �Ѵ�. 
//		// #. top() �� ��ġ�ϴ� ���Ҹ� �ٲٱ� ���� ������ top() �� �ִ� ���Ҹ� �����ϸ鼭 ����ؾ� �Ѵ�.
//		std::cout << temp.top() << " ";
//		temp.pop();
//	}
//// #. top() �Լ��� ���� �ֱٿ� �߰��� ���Ҹ� �׼����� �� �ֵ��� �����Ѵ�.
//}

/* --- < std::queue > --- */

//#include <iostream>
//#include <queue>
//
//int main()
//{
//	std::queue<int> queue;
//
//	queue.push(1);
//	queue.push(2);
//	queue.push(3);
//	queue.push(4);
//	
//	queue.pop();
//	
//	std::cout<< queue.front();
//// front() �Լ��� ���� ���� ó���� �߰��� ���Ҹ� �׼����� �� �ִ�.
//}

/* ----- < ���� �����̳�( Associative Container ) > ----- */

/*
< ���� �����̳� > : ���ҵ��� ��/�� �Ǵ� ��/��� ���� ������ �ִ� �����̳��̴�.
	#. ���ҵ鳢�� �θ�/�ڽ��� ���踦 �����⵵ �Ѵ�.
	#. ���Ҹ� �߰��ϸ� �̸� ���ǵ� ������ ���� ������ �ȴ�.
	#. < std::set > : Ư�� ������ ���� ������( unique )���Ҹ� �����ϴ� �����̳��̴�.
		#. set �� ���Ҵ� �� �� �߰��� ���Ŀ��� ������ �� ������ �����̳ʿ� �����ϰų� ������ ���� �ִ�.
			=> ���Ҹ� ������ ���� �ڵ������� ������ �ȴ�.
		#. ���� Ž�� Ʈ��( Binary search tree ) �ڷᱸ���� ����ϸ�, ������ ���� ���·� ���� �����ϴ� �ڷᱸ���̴�.
	#. < std::map > : [key, value]�� ������ ���Ҹ� ������ set �̶�� �� �� �ִ�.
		#. ���Ҹ� �Ϲ������� key-value pair( Ű �� �� )�̶� �θ���.
			=> < key > : �ĺ���
			=> < value > : ���� ������ ��
		#. �迭 ÷��[]�� �����ϸ� map[key]�� value�� ������ �� �ִ�.
		#. < std::pair > : �ϳ��� ���� �ǹ��Ѵ�. �� ���� ���� ���� �� �ִ�.

< Binary Search Tree > : ����� ���� �ڽ��� ���� ��, ����� ������ �ڽ��� ū ��
	#. travers(Node* current) {
	#.   if(current == NULL) return;
	#.   traverse(current->left);
	#.   traverse(current->right); }

< ����( Associative ) > : ���Ҹ� Ű( key )�� ����
	#. ����� �ݺ���
	#. ��������( Orderded )
	#. ������( Unique ) : Ű�� ���� �Ƴ��� ����
*/

/* --- < std::set > --- */

//#include <iostream>
//#include <set>		// < ������( Associative ) > : ������ ��ġ�� ���� ���Ҹ� �����ϴ� ���� �ƴ϶�, Ű( key )�� �����Ѵ�.
//					//		=> ����� �ݺ��ڸ� �����ϱ� ������ ������/������ ��ȸ�� �����ϴ�.
//					// < ���� ����( Ordered ) > : �����̳��� ��� ���Ҵ� ������ ����( totally odererd set )�� ���Ѵ�.
//					//		=> ���Ұ� �߰��� �� ������ ���Լ��� ���� ���ĵȴ�.
//					// < ������( Unique ) > : ������ Ű�� �������� �ʴ´�. set �� ������ ���� Ű �̴�.
//					// < �޸� �Ҵ���( Memory Allocator ) > : �Ҵ��ڸ� ���� �߰��� ������ �޸� �Ҵ��� ������ �� �ִ�.
//
//int main()
//{
//	std::set<int> set;
//
//	set.insert(5);
//	set.insert(3);
//	set.insert(6);
//
//	for (auto e : set)
//	{	// �ٸ� �����̳ʿ� ���������� �ݺ��ڸ� ���� ��ȸ�� �����ϴ�.
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//// #. [���� ����] Ư������ ���� ���ٸ� ���� ���̵� �ڵ����� ���Ұ� �ڵ����� ���ĵǾ� �ִ�.
//}

/* --- < std::map > --- */

//#include <iostream>
//#include <map>		// < ������( Associative ) > : ������ ��ġ�� ���� ���Ҹ� �����ϴ� ���� �ƴ϶�, Ű( key )�� �����Ѵ�.
//					//		=> ����� �ݺ��ڸ� �����ϱ� ������ ������/������ ��ȸ�� �����ϴ�.
//					// < ���� ����( Ordered ) > : �����̳��� ��� ���Ҵ� ������ ����( totally odererd set )�� ���Ѵ�.
//					//		=> ���Ұ� �߰��� �� ������ ���Լ��� ���� ���ĵȴ�.
//					// < ������( Unique ) > : ������ Ű�� �������� �ʴ´�.
//					// < �޸� �Ҵ���( Memory Allocator ) > : �Ҵ��ڸ� ���� �߰��� ������ �޸� �Ҵ��� ������ �� �ִ�.
//
//int main()
//{
//	std::map<std::string, std::string> myDictionary;
//
//	myDictionary.insert(std::pair<std::string, std::string>("array", "�ܼ� �迭"));
//	myDictionary.insert(std::pair<std::string, std::string>("vector", "���� �迭"));
//	myDictionary.insert(std::pair<std::string, std::string>("stack", "LIFO ����"));
//	myDictionary.insert({ "list", "�����" });	// #. ������ �ʱ�ȭ ���� �����̴�.
//
//// #. key ������ �����Ͽ� value �� ����Ѵ�.
//	std::cout << "array : " << myDictionary["array"] << std::endl;
//
//	for (auto e : myDictionary)
//	{	// #. first �� key ����, second �� value ���� �ǹ��Ѵ�.
//		std::cout << e.first << " : " << e.second << std::endl;
//// #. cout �� �⺻ Ÿ�Ը� ���� �� �ֱ� ������ pair Ÿ�Կ��� �ϳ� �� �и� ����ؾ� �Ѵ�.
//	}
//}

/* --- < std::bitset > --- */

//#include <iostream>
//#include <bitset>	// ��Ʈ�� �̷���� ������ �����ϱ� ���� Ŭ����
//					// �ݺ��ڰ� ����.
//
//int main()
//{
//	std::bitset<4> flag;
//
//	flag |= 0b0001;
//	flag |= 0b0100;	// #. ��Ʈ ����
//
//	flag.set(0, 1);
//	flag.set(2, 1);	// #. ��Ʈ ���� ����
//
//	if (flag.test(0) && flag.test(2))
//	{
//		// ����Ʈ 5 ����
//	}
//
//	flag[0] = 1;
//	flag[2] = 1;	// #. �迭 ÷�� ��� ����
//
//	if (flag[0] && flag[2])
//	{
//		// ����Ʈ 5 ����
//	}
//
//	std::cout << flag;
//}

/* ----- < sort algorithm > ----- */

/*
< sort() > : ���� ���� ���ڸ� �������ִ� �Լ��̴�.
	#. <algorithm> ������Ͽ� �����ִ�.
	#. sort(start, end)�� �̿��Ͽ� [start, end)�� ������ �ִ� ����(element)�� ��������(default)���� �������ش�.
	#. quick sort �� ������� �Լ��� �����Ǿ� �־�, ��� �ð����⵵�� n log n �̴�.

< default > : template <typename T>
			  void sort(T start, T end);
< option >	: template <typename T>
			  void sort(T start, T end, Compare comp);

< Descending > : sort(v.begin(), v.end(), greater<�ڷ���>());
< Ascending >  : sort(v.begin(), v.end(), less<�ڷ���>());
*/

/* < default > */

//#include <iostream>
//#include <array>
//#include <algorithm>
//
//template<typename T>
//void Print(T& arr)
//{
//	std::cout << "arr[i] : ";
//	for (auto e: arr)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}
//int main()
//{
//	std::array<int,10> arr{ 3,7,2,4,1,0,9,8,5,6 };
//	Print(arr);
//// #. default - ��������
//	std::sort(arr.begin(),arr.end());
//	Print(arr);
//}

/* < greater<>() > */

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <ctime>
//
//template<typename T>
//void Print(T& v)
//{
//	std::cout << "vector : ";
//	for (auto e : v)
//	{
//		std::cout << e << " ";
//	}	std::cout << std::endl;
//}
//int main()
//{
//	srand((int)time(NULL));	// ��������
//
//	std::vector<int> vec;
//	int n = 10;
//
//	for (int i = 0; i < n; i++)
//	{	// ���ڸ� ���ڸ� ���Ƿ� ����
//		vec.push_back(rand() % 10);
//	}
//	Print(vec);
//// #. greater - ��������
//	sort(vec.begin(), vec.end(), std::greater<int>());
//	Print(vec);
//}

/* < option > */

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <ctime>
//
//class Student
//{
//public:
//	std::string mName;
//	int mAge;
//
//	Student(std::string name, int age) : mName{ name }, mAge{ age }{}
//};
//void Print(std::vector<Student>& v)
//{
//	std::cout << "Student : ";
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << "[" << v[i].mName << ", " << v[i].mAge << "]";
//	}	std::cout << std::endl;
//}
//bool Compare(Student a, Student b)
//{
//	if (a.mName == b.mName)
//	{
//		return a.mAge < b.mAge;
//	}
//	else
//	{
//		return a.mName < b.mName;
//	}
//}
//int main()
//{
//	std::vector<Student> vec;
//
//	vec.push_back(Student("cc", 10));
//	vec.push_back(Student("ba", 24));
//	vec.push_back(Student("aa", 11));
//	vec.push_back(Student("cc", 8));
//	vec.push_back(Student("bb", 21));
//
//	Print(vec);
//	sort(vec.begin(), vec.end(), Compare);
//	Print(vec);
//}

//#include <iostream>
//#include <vector>
//#include "Student.h"
//
//int main()
//{
//	std::vector<Student> student = {
//		{1, "Kim",80},
//		{2,"Lee",20},
//		{3,"Park",50},
//		{4,"Choi", 30}
//	};
//	bool isExit{ false };
//	while (!isExit)
//	{
//		std::cout << "1. ���Ի� �߰�" << std::endl;
//		std::cout << "2. ���л� ����" << std::endl;
//		std::cout << "3. �л��� ���" << std::endl;
//		std::cout << "4. ��� �� ���� ���" << std::endl;
//		std::cout << "5. ��� �̻� �л� ���" << std::endl;
//		std::cout << "6. ����" << std::endl;
//		std::cout << ">  ";
//
//		int command;
//		std::cin >> command;
//
//		switch (command)
//		{
//		case 1:
//			AddStudent(student);
//			break;
//		case 2:
//			RemoveStudent(student);
//			break;
//		case 3:
//			PrintStudent(student);
//			break;
//		case 4:
//			PrintScoreInfo(student);
//			break;
//		case 5:
//			PrintOverAverage(student);
//			break;
//		case 6:
//			isExit = true;
//			break;
//		default:
//			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
//			break;
//		}
//	}
//}

//#include <iostream>
//#include <map>
//#include "map_Student.h"
//
//using Students = std::map<int, Student>;
//
//int main()
//{
//	Students students = {
//		{1,{"Kim",80}},
//		{2,{"Lee",20}},
//		{3,{"Park",50}},
//		{4,{"Choi",30}}
//	};
//	bool isExit{ false };
//	while (!isExit)
//	{
//		std::cout << "1. ���Ի� �߰�" << std::endl;
//		std::cout << "2. ���л� ����" << std::endl;
//		std::cout << "3. �л��� ���" << std::endl;
//		std::cout << "4. ��� �� ���� ���" << std::endl;
//		std::cout << "5. ��� �̻� �л� ���" << std::endl;
//		std::cout << "6. ����" << std::endl;
//		std::cout << ">  ";
//	
//		int command;
//		std::cin >> command;
//	
//		switch (command)
//		{
//		case 1:
//			AddStudent(students);
//			break;
//		case 2:
//			RemoveStudent(students);
//			break;
//		case 3:
//			PrintStudents(students);
//			break;
//		case 4:
//			PrintScoreInfo(students);
//			break;
//		case 5:
//			PrintOverAverage(students);
//			break;
//		case 6:
//			isExit = true;
//			break;
//		default:
//			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
//			break;
//		}
//	}
//}

/* ----- < Modern C++ > ----- */

/*
< ¥���� > :
	#. nullptr : �����Ͱ� �ƹ��� ������ ����Ű�� �ʴ´ٴ� �ǹ��� Ű����
	#. auto : �����Ϸ��� Ÿ���� �߷��� �� ���� �� �Է��� �� �ִ� Ÿ��
	#. decltype : Ÿ���� ����
		=> int x;
		=> decltype(x + 1) y; : ����Ŀ��� Ÿ���� �߷��Ͽ� Ÿ���� �����.
	#. noexcept : ���ܸ� ������ ����
	#. user-custom Literal : ����� ���� ���ͷ�
*/

/* --- < Initializer > --- */

//#include <iostream>
//
//int main()
//{	// #. < �ʱ�ȭ ����Ʈ( Initializer list ) >
//	int myValue1 = { 0 };
//// #. { 0 } �� ������ ��ü�� �� �ڿ� ������ ��ü�� myValue1 �̶�� �̸��� ���δ�.
//
//	// #. < ������ �ʱ�ȭ( Uniform Initialization ) >
//	int myValue2{ 0 };
//// #. myValue2 �� �����ڸ� ȣ���ϸ鼭 ���ÿ� �� 0 �� �����Ѵ�.
//}

/* --- < range-based for > --- */

//#include <iostream>
//
//int main()
//{
//	int myValue[5]{ 1,2,3,4,5 };
//
//	for (auto e : myValue) { std::cout << e << " "; }
//}

/* --- < ���ٽ�( Lamda Expression ) > --- */

/*
< Anonymous Function >
	#. ĸ����( [] ) : �ܺ��� �������� �����´�.
		=> [] : �ܺκ��� ��� �Ұ�
		=> [=] : �ܺ� ������ ������ ���( Call By Value )
		=> [&] : �ܺ� ������ ������ ���( Call By Reference )
	#. �Ű�����( () ) : �Ϲ� �Լ��� �Ű����� ��� ��ɰ� �����ϴ�.
	#. ��ȯ��( -> ) : �Ϲ� �Լ��� return type �� ���� ����� �Ѵ�.
		=> ��ȯ���� �ڵ� �߷еǱ� ������ �Է����� �ʾƵ� ������.
*/

//#include <iostream>
//// []() mutable throw() -> int {}
//
//int main()
//{
//	int number{ 10 };
//
//// #. ���ٽ� ���� main �Լ��� ���ԵǾ� �ִ�. �� main �Լ��� ��ü�� ������ �� �ְ� �ϴ� ����̴�.
//	[=]() {std::cout << number << std::endl; };
//	[&]() {std::cout << number << std::endl; };
//
//// #. ���ٽ��� ���� Ÿ���� �Ű����� ��� �ڿ� �´�.
//	[]()->int {int x = 5; return x; };
//}

//#include <iostream>
//
//int main()
//{	// #. ǥ���� ó�� ����� �� �ִ�.
//	auto myLambda1 = [](int x)->void {};
//// #. �ڵ� �߷��� �Ǳ� ������ [-> void] �� �Է����� �ʾƵ� �ȴ�.
//
//	auto myLambda2 = [](int x) {return 1; };
//
//	myLambda1(3);
//}

/* --- < R_Value Reference > --- */

/*
< Move Semantics > : �ǹ̷����� �̵���Ų��.
	#. 1 + 2 �� 3�� �̵���Ų��.
	#. "1" + "2" �� "12"�� �̵���Ų��.
< Perfect Forwarding > : �Ϻ��� ����( �ǹ� )

< ����( syntax ) + �ǹ�( semantics ) >
	#. 1 + 2
		=> ���� : operator+ �¿�� �ǿ����ڰ� 2�� �����ؾ� �Ѵ�.
		=> �ǹ� : �¿�� �ǿ����ڸ� ���� ����� ��ȯ�Ѵ�.
	#. "1" + "2"
		=> ���� : operator+ �¿�� �ǿ����ڰ� 2�� �����ؾ� �Ѵ�.
		=> �ǹ� : �¿�� �ǿ����ڸ� �̾���� ���ڿ��� ��ȯ�Ѵ�.
*/

//#include <iostream>
//
//template<typename T>
//void swap1(T& a, T& b)
//{	// #. a �� x �� �����ϰ� �ְ�, b �� y �� �����ϰ� �ִ� ����
//	T tmp(a);
//// #. tmp �� a �� ����Ű�� x �� �����ϰ� �ִ�.
//
//	a = b;
//// #. a �� b �� �ֱ� ���ؼ� ���� a �ȿ� �ִ� x �� �����Ѵ�.
//// #. �� �� a �� y �� ����Ű�� �ȴ�.
//// #. tmp �� �״�� x �� �����ϰ� �ִ�.
//
//	b = tmp;
//}
//
//template<typename T>
//void swap2(T&& a, T&& b)
//{	// #. ������ ������ ���� ���簡 �ƴ� ���� �Ű� �ٴѴ�.
//	T tmp(a);	// #. ���� �����ڴ� �Ű������� ��� ���������� �޴´�.
//	a = b;		// #. a �ȿ� b �� ���� �Ű� �´�. ( a = 5 )
//// #. tmp �� x �� ����Ű�� �ִµ� x ���� b �� ���� �Ű��� �ִ�.
//
//	b = tmp;
//}
//
//template<typename T>
//void swap3(T& a, T& b)
//{	// #. std::move �� �Ű� ������ ������ �����̴�.
//	T tmp = std::move(a);		// #. a �� ���� tmp �� �Ű� ������. a �� ���� ��������.
//	a = std::move(b);			// #. b �� ���� a �� �Ű� ������.	b �� ���� ��������.
//	b = std::move(tmp);			// #. tmp �� ���� b �� �Ű� ������.	tmp �� ���� ��������.
//}
//
//int main()
//{
//	int x{ 1 };
//	int y{ 5 };
//	swap3(x, y);
//
//	std::cout << x << " : " << y << std::endl;
//}

//#include <iostream>
//
//void function1(int& a) {}
//
//template<typename T>
//void function2(T&& x) { function1(std::forward<T>(x)); }
//// #. perfect forwarding : �����ϰ��� �ϴ� ���� l_value �� r_value �� �������̳� ��Ȯ�ϰ� �����ϴ� ��
//
//int main()
//{
//	int i = 0;
//	function2(i);	// #. i �� �ּҰ��� ���������� �Ѱ��ش�.
//}

/* --- < constexpr > --- */

/*
< const > : ���( constant )
	#. ������Ÿ��/��Ÿ�ӿ� �����ȴ�.

< constexpr > : ��� ǥ����( constant expression )
	#. ���� ������Ÿ�ӿ� �����ȴ�.
	#. ��ü�� �Լ���� ����� ����� �� �� ����Ѵ�.
		=> �Լ��� ��ȯ���� ��Ÿ�ӿ� �۵��ϴ� ���� �⺻ ��Ģ������ ������ ���� �̶�� ������ Ÿ�ӿ� ����Ͽ� ��ȯ���� ���ȭ ��ų �� �ִ�.
*/

//#include <iostream>
//
//int main()
//{
//	int n = 1;	// #. n �̶�� ������ ���� ����Ǵ� ������ ��Ÿ���̴�.
//// #. �ϵ��ũ�� �ִ� ���� ������ ����Ǹ� RAM ������ ���α׷��� �ö󰣴�.
//// #. �� �� RAM �� ���� �̸��� ���� ����Ǵ� ������ �Ҵ�ȴ�.
//
//	const int c1 = n;
//
//	constexpr int c2 = n;
//// #. constexpr �� ������ Ÿ�ӿ� �����Ǳ� ������ ������ ���� ���� ����.
//
//	std::cout << c1 << std::endl;
//}

//#include <iostream>
//
//enum Flags
//{
//	none = 0, slow = 1, paralyse = 2, bleed = 4, poison = 8
//};
//
//constexpr int operator|(Flags f1, Flags f2)
//{	// #. ������ �����ε��� ���� �߰����� ��Ȳ�� ������� �Ѵٰ� ������ ����
//	// #. �� �� ��ȯ Ÿ���� int �� ���� Ÿ���̶�� ��Ÿ�ӿ� �����Ǳ� ������ switch ���� ���̺�� �ö� �� ����.
//	return Flags(int(f1) | int(f2));
//// #. �׷��� constexpr �� Ȱ���Ͽ� ������ Ÿ�ӿ� �����ǵ��� ����� �ִ� ���̴�.
//}
//
//int main()
//{
//	Flags myStatus{ none };
//
//	switch (myStatus)
//	{
//	case slow:
//		break;
//// #. switch ���̺��� ������ �� �� ����.
//	case slow | paralyse:
//		break;
//	}
//}

/* ----- < Modern C++( PLUS+ ) > ----- */

/* --- < ��� - �Ϲ� > --- */

/*
< nullptr > : null pointer value �� ���� ǥ���� ���̴�.
	=> int* ptr = nullptr;

< auto > : ������ �ʱ�ȭ �Ŀ��� ������ �߷еǴ� ������ �����ϴ� ����
	=> auto number = 3.14f;

< �ʱ�ȭ ����Ʈ( Initializer list ) > : �����ڿ��� �ʵ带 �����ϰ� �ʱ�ȭ �ϴ� ���
	=> MyClass(int value) : mValue{ value } {}

< ������ �ʱ�ȭ( Uniform initialization ) > : ������ �ʱ�ȭ
	=> int number { 10 };

< ���� ��� for( range-based for ) > : ���۰� ������ �˷����� �ʾƵ� �˾Ƽ� ó������ ������ ��ȸ�� ���ִ� �ݺ���

< ���ٽ�( Lambda expression ) > : �͸��� �Լ� ��ü

< ������ ����( R_Value reference )�� std::move ���� > : ���� �̵�

< constexpr > : �����

< decltype > : declared type �� ���ڷ� ǥ������ Ÿ���� �˷��ִ� Ű����
	=> decltype(x + 1) y;

< noexcept > : �Լ� �ڿ� ǥ���Ͽ� ���ܸ� ������ �ʴ´ٴ� ���� ���

< ���� ���� �� �ٽ� ������ > : ���� ���ܸ� �����ؼ� �ٽ� �����Ⱑ ����
	=> std::current_exception();
	=> std::rethrow_exception(...);

< �ζ��� �̸�����( Inline namespace ) > : �̸� ���� �ȿ� �Ǵٸ� �̸� ������ ����� �д�.
*/

/* --- < ��� - Ŭ���� > --- */

/*
< �⺻ �̵� ������ > : R_Value referenece �� �Ķ���ͷ� ���� ���ο� Ÿ���� ������

< ���� ������ > : �ڽŰ� ���� Ŭ���� Ÿ���� �ٸ� ��ü�� ���� ������ �μ��� ���޹޾�, �� ������ ������ �ڽ��� �ʱ�ȭ �ϴ� ���

< �븮 ������ > : ������ ȣ��� �븮�� �Ű������� �޾� �ٸ� �����ڸ� ȣ��

< Ŭ���� ���ο����� ��� �ʱ�ȭ > : �����ڸ� ���� ��� �ʱ�ȭ��

< override > : overriding �Լ��� ��Ÿ�� ������ ������Ÿ�ӿ� �˻����ִ� Ű����

< final > : Ŭ������ �Լ��� �Ļ����� ���ϵ��� ���� Ű����

< ��� ������ > : ��� Ŭ������ �����ڸ� �������� ���

< ����� ����ȯ ������ > : �����ڿ����� ��� �����ϴ� explicit Ű���带 �����ڿ� �����ϴ� ���
*/

/* --- < ��� - Ÿ�� > --- */

/*
< enum class > : �������� ��ü Ÿ������ ���� �� �ִ� ���

< long long > : 64��Ʈ ���� �߰�
*/

/* --- < ��� - ��Ÿ > --- */

/*
< ��ȯ�� ���̻�( Suffix return type ) >

< ���� ���ڿ� ���ͷ�( Raw string literal ) > : ����, ����, Ư����ȣ, ���� ���� �ִ� �״�� ����ϴ� ���

< std::static_assert >
*/

/* --- < ��� ���ø� > --- */

/*
< ���� ���� ���ø�( variadic template ) > : ���ø��� ����ؼ� ������ ������ ���ڸ� �޴� ���

< extern ���ø� > : �ڵ带 �������� �ʰ� ���� ���� ���

< ���ø� ���� > : using �� ����Ͽ� ���ø� ������ �����ϴ� ���
*/

/* --- < STL �Ϲ� > --- */

/*
< std::unique_ptr > : ��ü�� ������ �������� ���� ����Ʈ ������

< std::shared_ptr > : ��ü�� �����ϴ� ����Ʈ ������

< std::weak_ptr > : �ٸ� ����Ʈ ������ó�� ��ü�� �����ϰ� ������ �� ������ ���� ������ �ø� ���� ���� ����Ʈ ������

< std::tuple > : �������� Ÿ������ ������ Ÿ���� ��ȯ�� �� �ִ� Ű����

< std::function & std::bind > : �Լ��� ��üȭ

< ���� ǥ���� > : ���ڿ����� ������ ã�� �˰���
*/

/* --- < STL �����̳� �� �˰��� > --- */

/*
< std::array > : �Ϲ� �迭�� ������ �����̳�

< std::forward_list > : ���� ���� ����Ʈ

< unordered_ �迭 �����̳� > : map, set�� ������ ���� unordered_map, unordered_set
*/

/* --- < STL ���ü� > --- */

/*
< std::thread >

< ��ȣ ����( Mutual Exclusion ) >

< std::lock >

< std::async >
*/
