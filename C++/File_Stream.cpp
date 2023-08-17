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

/* ----- < ���� ����� > ----- */



/* --- < ofstream > --- */

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
//	Monster() : mName{}, mLevel{}, mHp{}, mMp{}{}
//	Monster(std::string name, int level, int hp, int mp) :
//		mName{ name }, mLevel{ level }, mHp{ hp }, mMp{ mp }{}
//
//public:
//	void Print()
//	{
//		std::cout << mName << ", " << mLevel << ", " << mHp << ", " << mMp << std::endl;
//	}
//
//public:
//	friend std::ifstream& operator >>(std::ifstream& input, Monster& monster);
//	friend std::ofstream& operator <<(std::ofstream& input, Monster& monster);
//};
//
//std::ifstream& operator >>(std::ifstream& input, Monster& monster)
//{
//	std::string token;
//	try {
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
//std::ofstream& operator <<(std::ofstream& output, Monster& monster)
//{
//	try {
//		output << monster.mName << "," << monster.mLevel << "," 
//			<< monster.mHp << "," << monster.mMp << std::endl;
//	}
//	catch (std::exception e) {
//		std::cout << "�����͸� ������ �� ������ �߻��߽��ϴ� : " << e.what() << std::endl;
//	}
//	return output;
//}
//
//bool LoadFile(const char* filename, std::vector<Monster>& monsters)
//{
//	std::ifstream ifs;
//	ifs.exceptions(std::ifstream::badbit);
//	try {
//		ifs.open(filename);
//		std::string buffer;
//		std::getline(ifs, buffer);
//		while (!ifs.eof())
//		{
//			if (ifs.peek() == EOF) { break; }
//			Monster monster;
//			ifs >> monster;
//			monsters.push_back(monster);
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
//bool WriteFile(const char* filename, std::vector<Monster>& monsters)
//{
//	std::ofstream ofs;
//	ofs.exceptions(std::ofstream::badbit);
//	try {
//		ofs.open(filename);
//		ofs << "--- MONSTER DATA ---" << std::endl;
//		for (auto e : monsters) { ofs << e; }
//		ofs.close();
//	}
//	catch (std::exception e) {
//		std::cout << "���� ���� ���� ���� �߻� : " << e.what() << std::endl;
//		ofs.close();
//		return false;
//	}
//	return true;
//}
//
//int main()
//{
//	std::vector<Monster> monsters;
//	LoadFile("Data/SimpleData.txt", monsters);
//	for (auto e : monsters) { e.Print(); }
//	WriteFile("Data/SimpleData2.txt", monsters);
//}

/* < binary > */

/*
< binary data > : ��ǻ�Ͱ� ����ϴ� ����( 0, 1 )�� ������ ������
	#. �ٹٲ�, �޸� ���� ��Ȯ�� ������ ��� ��ü�� �б� �������� ��� �������� �𸥴�. ( 0d, 0a( .. ) �� ���� �ٹٲ��� �� ���� ���� )
	#. ������ ���� ���� �����Ͱ� ��� ����Ǿ��ִ��� ������ �Է��� ���� ���� ����.
	#. �� ���ڿ��� ������ ���� �� ������ ���ڿ������� �����ؾ� �Ѵ�.
	#. �ڷᱸ���� ������ �� �ִ� �������߰������� �ʿ�( �ٹٲ�, ��ǥ )

< CPU > : ������ ����ϴ� ��ǰ
	#. Big-Endian : ���ʿ��� ���� ���������� ����( ���� �� ����ȭ )
		=> ������
	#. Little-Endian : �����ʿ��� ���� �������� ����( ���� ����ȭ )
		=> Window, Intel, AMD

< POD( Plain Old Data ) > : ǥ�� Ÿ��( int, float ... )
	#. ����ü( �⺻�����ڸ� ���� Ŭ���� + ������ X )
*/

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
//	Monster() : mName{}, mLevel{}, mHp{}, mMp{}{}
//	Monster(std::string name, int level, int hp, int mp) :
//		mName{ name }, mLevel{ level }, mHp{ hp }, mMp{ mp }{}
//
//public:
//	friend std::ofstream& operator <<(std::ofstream& output, Monster& monster);
//};
//struct Header
//{	// #. binary data �� �����ϱ� ���ؼ��� �ش� vector �� ��� ���Ұ� �ִ����� ���� �����ؾ� �Ѵ�.
//	int version{ 1 };	// #. ������ ������ �ٲ� �� �ֱ� ������ ���� ������ �����Ѵ�.
//	int itemCount{};	// #. �� ���� ���Ұ� �ִ���
//};
//
//std::ofstream& operator <<(std::ofstream& output, Monster& monster)
//{
//	try {	// #. ������ �̸��� ���ڿ��̱� ������ �� �������� ������ �ش�.
//		int nameLength = static_cast<int>(monster.mName.size());
//// #. ���� ���� �̸��� ���� ���� ������ �ش�.
//		output.write(reinterpret_cast<char*>(&nameLength), sizeof(int));
//// #. mName �� std::string �̱� ������ POD ������ �迭�� �ޱ� ���� c_str() �Լ��� �̿��� char* �� �ٲپ� �ش�.
//		output.write(monster.mName.c_str(), nameLength);
//		output.write(reinterpret_cast<char*>(&monster.mLevel), sizeof(int));
//		output.write(reinterpret_cast<char*>(&monster.mHp), sizeof(int));
//		output.write(reinterpret_cast<char*>(&monster.mMp), sizeof(int));
//	}
//	catch (std::exception e) {
//		std::cout << "�����͸� ������ �� ������ �߻��߽��ϴ� : " << e.what() << std::endl;
//	}
//	return output;
//}
//
//bool WriteBinary(const char* filename, std::vector<Monster>& monsters)
//{
//	std::ofstream ostream;
//	ostream.exceptions(std::ofstream::badbit | std::ofstream::failbit);
//	try {	// #. ���� ������ �⺻ �ɼ��� �ؽ�Ʈ �����̱� ������ open_mode �� ���̳ʸ� ������� ������ �ش�.
//		ostream.open(filename, std::ifstream::binary);
//		// #. h ��� �̸��� ����ü�� ������ ���� ������ �Է��Ѵ�.
//		Header h{ 1,static_cast<int>(monsters.size()) };
//// #. write() : ��ü�� ���Ͽ� ������ ������.
//// #. (&h) ����ü�� �ּҸ� �޾ƿͼ� �����ͷ� �����Ѵ�.
//// #. Header �� ũ�⸸ŭ �� ���� �����Ѵ�.
//		ostream.write(reinterpret_cast<char*>(&h), sizeof(Header));
//		for (auto e : monsters) { ostream << e; }
//		ostream.close();
//	}
//	catch (std::exception e) {
//		std::cout << "���� �߿� ���� : " << e.what() << std::endl;
//		ostream.close();
//		return false;
//	}
//	return true;
//}
//
//int main()
//{
//	std::vector<Monster> monsters{
//		{"Jelly",1,1,1},
//		{"Wolf",5,5,5},
//		{"Demon",10,10,10}
//	};
//	WriteBinary("Data/SimpleData.bin", monsters);
//}

/* < Document Object Model > */

/*
< DOM >
	< W3C( WWW Consortium ) >
	< HTML >
	< XML( eXtensible Markup Language ) >
		#. ����
			=> ���( �Ӹ��� ) : <? ~ ?>
				=> <?xml version="1.0" encoding="UTF-8"?>
		#. �±�
			=> < ~ >
			=> ���� : <section>
			=> ���� : </section>
			=> ���±� : <section />
		#. ����
			=> �����±׺��� �����±� ������ ����
			=> <print> Hello, World </print>
		#. �Ӽ�
			=> �̸� = ��
			=> �±� ���ο� �����ϴ� ����
				=> <img src="wallpaper.png"> </img>

< JAVE >
	< JSOM( Jave Script Object Notation ) >
*/

/* --- < ���� ǥ����( Regular Expression ) > --- */

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <regex>
//#include <vector>
//
//class Sprite
//{
//public:
//	std::string n;
//	int x;
//	int y;
//	int w;
//	int h;
//};
//
//void LoadXML(const char* filename, std::vector<Sprite>& sprites)
//{
//	std::ifstream file(filename, std::ifstream::binary);
//	std::string line;
//	std::regex pattern("\"([^ \"]*)\"");	// #. ���� ǥ�������� ���ڿ��� �����Ͽ� ���� ����
//
//	while (!file.eof())
//	{
//		std::getline(file, line);	// �� �پ� �о� �´�.
//// #. ã�� ���ڿ��� �ε����� ������ �д�.
//		auto result = line.find("<sprite");	// #. find() ���ڿ��� ����ִ��� ã�� ����.
//		if (result != std::string::npos)	// #. < std::string::npos > : result �� <sprite ���ڿ��� �� ã���� ��� // �ٴ� != �̱� ������ ã���� ���
//		{	// #. ���� ǥ������ ����� �ݺ��ڷ� ���� �� �ִ� Ŭ����
//			// #. ���ۺ��� ������ �˻��ؼ� ���� ǥ���Ŀ� �����ϴ� ���ڿ��� ����Ų��.
//			std::sregex_iterator current(line.begin(), line.end(), pattern);
//			std::sregex_iterator end;	// #. default �� ���� ���� ����Ų��.
//			int index{};
//			Sprite sprite;
//
//			while(current != end)
//			{	// �ݺ��ڸ� �������ϰ� �� �Ŀ� �迭�� ���Ҹ� �����´�.
//				std::string token = (*current)[1];
//				switch (index)
//				{
//				case 0:
//					sprite.n = token;
//					break;
//				case 1:
//					sprite.x = std::stoi(token);
//					break;
//				case 2:
//					sprite.y = std::stoi(token);
//					break;
//				case 3:
//					sprite.w = std::stoi(token);
//					break;
//				case 4:
//					sprite.h = std::stoi(token);
//					break;
//				}
//				index++;
//				current++;	// �ݺ��� �����̱� ������ ++ ������ �����ϴ�.
//			}
//			sprites.push_back(sprite);
//		}
//	}
//}
//int main()
//{
//	std::vector<Sprite> sprites;
//	LoadXML("Data/mydata.xml", sprites);
//}