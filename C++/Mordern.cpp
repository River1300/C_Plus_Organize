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