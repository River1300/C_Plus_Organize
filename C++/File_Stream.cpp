/* ----- < ���� ����� > ----- */

/*
< ���� �а� ���� > : std::cout << "hello";
	#. < stream > : ���� ��� �� ���� 1byte �� ����Ѵ� �����غ���
		=> h -> e -> l -> l -> o
		=> �׷��� ���ÿ� �����͵��� ��������ٰ� �����غ���
		=> �׷� ��� ���� ó���ϴ� ���� �ϳ��ε� ���ÿ� ����� �����Ͱ� �����鼭 �ӵ��� ������ ���̴�.
		=> �� ���� ���������� ó�����ڴ� ���� stream �̴�.
			=> �����Ͱ� ���� ������ �������� �׾� ���� ������� �ϳ��� �̾ư��� ���̴�.

< ���� ��� >
	#. ���� Ž���� ���� ��� : C:\Users\user\source\repos\_1_211229_LESSON\_222_ORGANIZATION\Data\SimpleData.txt
		#. ������ ǥ�� : C:\\folder\\file.exe

	#. ����� ��Ʃ��� ���� ��� : Data/SimpleData.txt
		#. C++ ǥ��( ������, ��, ���н� ) : C:/folder/file.exe

< �۾� ���� ��ȯ >
	#. good() : ������ �����Ͽ����� Ȯ��

	#. fail() : ���� �۾��� ���� �Ͽ����� Ȯ��
		=> failbit
	#. eof()  : ������ ���� ���� �Ͽ����� Ȯ��
		=> eofbit
	#. bad()  : �ɰ��� ������, ������ �ջ�Ǿ��ų� ���� �� �� ���� �� Ȯ��
		=> badbit

< ���� ó�� >
	������ �ִ� ���� ������ ó���ϴ� ���� �и��Ѵ�.
	try { �ڵ带 ������ ����. } catch { ������ �߻��ϸ� �ڵ����� ���´�. }

< Comma Seperate Values( CSV ) > : �޸��� �з��Ǵ� ������
*/

/* --- < Basic ifstream > --- */

//#include <iostream>
//#include <fstream>	// #. ������ ���� �� ���� stream �̴�.
//					// #. ���Ͽ��� �������� ���Ͽ� �����Ѵ�.
//
//// #. ������ �о����� ���� ���Ͽ����� [��/����]���� �Ǵ��ϴ� bool Ÿ���� ��ȯ�ϰ�
//// #. �Ű� �����δ� ���� �̸�, �� ������ ��θ� �޴´�.
//bool LoadFile(const char* filename)
//{	// #. input file stream : ���Ͽ��� �����͸� �������� Ŭ����
//	// #. �ν��Ͻ��� �����ڿ� ���� ��θ� �Է��ϸ� �ش� ������ �� �� �ִ�.
//	std::ifstream ifs(filename);
//// #. ofstream( output file stream ) : ���Ͽ� �����ϴ� Ŭ����
//
//	if (!ifs)	// #. ���� ��ο� ������ �ִ��� [��/����]���� üũ�� �� �ִ�.
//	{	// #. < if(ifs) >  : ���� ���...
//		// #. < if(!ifs) > : ������ ���...
//		std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
//		return false;
//	}
//
//	char ch;			// #. ���Ͽ� �ִ� ���ڸ� �������� ���� ���� ������ �����.
//	while (ifs >> ch)	// #. ifstream ���� ���ڸ� �����´�.
//	{
//		std::cout << ch;
//	}
//
//	// #. ���ϵ� ������ ó�� �� �а� �� �ڿ� �ݵ�� �ݾ� �־�� �Ѵ�.
//	ifs.close();
//
//	return true;
//}
//
//int main()
//{	// #. ���� Ž����ʹ� �ٸ��� �տ� ��θ� �����Ͽ��� �ȴ�.
//	// #. �� �ٸ� ���� �� �������� �ƴ� ������ ��ȣ�� ����Ѵٴ� ���̴�.
//	LoadFile("Data/SimpleData.txt");
//// #. ���α׷��� ����� �� ����Ǵ� �⺻ ��ΰ� �ִ�.
//// #. �⺻ ��ζ�, ���� ������ ������ ����̴�.
//// #. �ڵ带 �ؼ��ϸ� '���� ���� �ؿ� Data ��� ������ �ְ� �� �ؿ� txt ������ �ִ�.' ��� ���̴�.
//}

//#include <iostream>
//#include <fstream>
//
//bool LoadFile(const char* filename)
//{
//	std::ifstream ifs(filename);
//
//	if (!ifs.good())	// #. ���� ��ο� �ִ� ������ �����µ� �� �۾��� ���� �ߴ���?
//	{
//		std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
//		return false;
//	}
//
//	char ch;
//	while (ifs.get(ch))	// #. �̽������� �������� ���� �о� �ִ� ��ɾ� .get()
//	{
//		if (ifs.bad())
//		{
//			std::cout << "������ �ջ�Ǿ����ϴ�!" << std::endl;
//			ifs.close();
//			return false;
//		}
//		if (ifs.fail())
//		{
//			std::cout << "���� �� ���� �����Դϴ�!" << std::endl;
//			ifs.close();
//			return false;
//		}
//		std::cout << ch;
//	}
//	ifs.close();
//
//	return true;
//}
//int main()
//{
//	LoadFile("Data/SimpleData.txt");
//}

/* --- < try-catch > --- */

//#include <iostream>
//#include <fstream>
//
//bool LoadFile(const char* filename)
//{
//	std::ifstream ifs;
//// #. � ������ �߻��ϸ� �� ������ ���� ���ܸ� ó���� ���̴�.
//// #. badbit, failbit �� ���� ����
//	ifs.exceptions(std::ifstream::badbit | std::ifstream::failbit);
//	try {	// #. ������ ������� ���� try ������ ���� �ش�.
//		ifs.open(filename);	// #. .open() ������ �� �� �ִ� �Լ��̴�.
//		char ch;
//		while (ifs.get(ch)) {
//			std::cout << ch;
//		}
//		ifs.close();
//	}	// #. ��� ������ ���� �θ� Ŭ���� std::exceptions ���� ��ü�� ����� �ش�.
//	catch (std::exception e) {	// #. try ���� �߻��� ������ catch �� �ɸ��� �ȴ�.
//		std::cout << "�����߻�" << e.what() << std::endl;
//// #. what() �Լ��� ������ ���� ������ ����� �ش�.
//		ifs.close();
//		return false;
//	}
//	return true;
//}
//int main()
//{
//	LoadFile("Data/SimpleData.txt");
//}

/* --- < �ڷᱸ�� > --- */

//#include <iostream>
//#include <fstream>
//#include <sstream>		// �� �پ� �о���� ���� �������
//#include <vector>
//
//class Monster
//{	// #. ��ȹ������ ������ �Ѱ� �޾� �ڷᱸ���� ����ٰ� ������ ����.
//private:
//	std::string mName;
//	int mLevel;
//	int mHp;
//	int mMp;	// #. ��ȹ������ �Ѿ�� �����Ͱ� 4���� �з��Ǿ� �ֱ⿡ 4���� �����͸� ����� �ش�.
//
//public:
//	Monster(std::string name, int level, int hp, int mp) :
//		mName{ name }, mLevel{ level }, mHp{ hp }, mMp{ mp }{}
//};
//
//bool LoadFile(const char* filename, std::vector<Monster>& monsters)
//{
//	std::ifstream ifs;
//	ifs.exceptions(std::ifstream::badbit);
//	try {
//		ifs.open(filename);
//		std::string buffer;		// #. �� �پ� �о�� ���ڿ� ������ ����� �ش�.
//
//// #. std::getline() �Լ��� �̿��Ͽ� ���Ϸ� ���� �� �پ� �о�� �� �ִ�.
//// #. �Է�( istream ) : ifs( ���� )
//// #. ���ڿ�( basic_string ) : buffer
//		std::getline(ifs, buffer);		// �Ӹ����� �а� �� �������� �ڷᱸ���� �����Ѵ�.
//
//		while (!ifs.eof()) {	// #. ������ ���� ���� ������ ����ؼ� ������ �д´�.
//			std::getline(ifs, buffer);	// $1. �ϴ� �� ���� �д´�.
//			std::stringstream ss(buffer);	// $2. ���ڿ� ��Ʈ���� ����� �о���� ���ڿ��� �����Ѵ�.
//
//// #. 4���� ������ ���� �����ʹ� �������� ������ ������ �����.
//			std::vector<std::string> args;
//
//			for (int i = 0; i < 4; i++)
//			{
//				std::string token;	// $3. �� ���� ������ �и� ��ȣ�� ����� ������ �� �ְ� ���ڿ��� �����.
//				std::getline(ss, token, ',');	// #. Delim : ������ �и� ��ȣ
//
//// #. getline �� ���� ���� �� ���� token �� ��ǥ ������ ����ȴ�.
//// #. for ���� ���� �� 4�� ���� �迭�� ������ �ش�.
//				args.push_back(token);
//			}
//// #. Ŭ���� ��ü�� �����ڷ� ������� ���ڸ� �����Ѵ�.
//			Monster mon{ args[0], std::stoi(args[1]), std::stoi(args[2]), std::stoi(args[3]) };
//			monsters.push_back(mon);
//// #. ���������� main ���� ���� Monster ��ü�� ������ �ش�.
//		}
//		ifs.close();
//	}
//	catch (std::exception e) {
//		std::cout << "�����߻�" << e.what() << std::endl;
//		ifs.close();
//		return false;
//	}
//	return true;
//}
//int main()
//{	// Monster �� ���ҷ� ���� ���� �迭�� ����� �ش�.
//	std::vector<Monster> monsters;
//	LoadFile("Data/SimpleData.txt", monsters);
//}

/* < ������ �����ε� > */

//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <vector>
//
//class Monster
//{
//private:
//	std::string mName;
//	int mLevel;
//	int mHp;
//	int mMp;
//
//public:
//	Monster() :mName{}, mLevel{}, mHp{}, mMp{}{}
//	Monster(std::string name, int level, int hp, int mp) :
//		mName{ name }, mLevel{ level }, mHp{ hp }, mMp{ mp }{}
//	void Print()
//	{
//		std::cout << mName << ", " << mLevel << ", " << mHp << ", " << mMp << std::endl;
//	}
//	// >> �� ���� �ǿ����ڰ� ifstream �̱� ������ class �� ����Լ��� ���� �� ����.
//	friend std::ifstream& operator >>(std::ifstream& input, Monster& monster);
//// #. �Ű����� : ���� �ǿ����ڿ� ������ �ǿ����ڸ� �޾ƾ� �Ѵ�.
//// #. ��ȯ��   : ifstream& ���� �Ͽ� ��� ��ü�� ȣ���� ��ü���� ���ӵ� ȣ���� �����ϴ�.
//};
//
//std::ifstream& operator >>(std::ifstream& input, Monster& monster)
//{	// ���е� ���ڿ��� ������ ���ڿ��� �����.
//	std::string token;
//
//	try {	// input ���� token ���� ��ǥ���� �о�´�.
//		std::getline(input, token, ',');
//		monster.mName = token;
//		std::getline(input, token, ',');
//		monster.mLevel = std::stoi(token);
//		std::getline(input, token, ',');
//		monster.mHp = std::stoi(token);
//		std::getline(input, token);
//		monster.mMp = std::stoi(token);
//	}
//	catch (std::exception e) {
//		std::cout << "������ �߸��Ǿ����ϴ� : " << e.what() << std::endl;
//	}
//	return input;
//}
//
//bool LoadFile(const char* filename, std::vector<Monster>& monsters)
//{
//	std::ifstream ifs;
//	ifs.exceptions(std::ifstream::badbit);
//	try
//	{
//		ifs.open(filename);
//
//		std::string buffer;
//
//		std::getline(ifs, buffer);
//		while (!ifs.eof())
//		{	// #. .peek() ��¦ ������ ������ ���̶��
//			if (ifs.peek() == EOF) { break; }
//
//			Monster monster;
//			ifs >> monster;		// #. ���� ��Ʈ������ ���͸� �� ������ �����´�.
//			monsters.push_back(monster);
//		}
//
//		ifs.close();
//	}
//	catch (std::exception e)
//	{
//		std::cout << "�����߻�" << e.what() << std::endl;
//		ifs.close();
//		return false;
//	}
//
//	return true;
//}
//
//int main()
//{
//	std::vector<Monster> monsters;
//
//	LoadFile("Data/SimpleData.txt", monsters);
//
//	for (auto e : monsters)
//	{
//		e.Print();
//	}
//}