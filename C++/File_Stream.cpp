/* ----- < 파일 입출력 > ----- */

/*
< 파일 읽고 쓰기 > : std::cout << "hello";
	#. < stream > : 예를 들어 한 번에 1byte 를 출력한다 가정해보자
		=> h -> e -> l -> l -> o
		=> 그런데 동시에 데이터들이 몰려들었다고 가정해보자
		=> 그럴 경우 일을 처리하는 것은 하나인데 동시에 출력할 데이터가 몰리면서 속도가 느려질 것이다.
		=> 이 것을 안정적으로 처리하자는 것이 stream 이다.
			=> 데이터가 들어올 때마다 차곡차곡 쌓아 놓고 순서대로 하나씩 뽑아가는 것이다.

< 파일 경로 >
	#. 파일 탐색기 상의 경로 : C:\Users\user\source\repos\_1_211229_LESSON\_222_ORGANIZATION\Data\SimpleData.txt
		#. 윈도우 표준 : C:\\folder\\file.exe

	#. 비쥬얼 스튜디오 상의 경로 : Data/SimpleData.txt
		#. C++ 표준( 리눅스, 맥, 유닉스 ) : C:/folder/file.exe

< 작업 상태 반환 >
	#. good() : 연산이 성공하였는지 확인

	#. fail() : 파일 작업이 실패 하였는지 확인
		=> failbit
	#. eof()  : 파일의 끝에 도착 하였는지 확인
		=> eofbit
	#. bad()  : 심각한 오류로, 파일이 손상되었거나 열어 볼 수 없는 지 확인
		=> badbit

< 예외 처리 >
	문제가 있는 곳과 문제를 처리하는 곳을 분리한다.
	try { 코드를 실행해 본다. } catch { 문제가 발생하면 자동으로 들어온다. }

< Comma Seperate Values( CSV ) > : 콤마로 분류되는 데이터
*/

/* --- < Basic ifstream > --- */

//#include <iostream>
//#include <fstream>	// #. 파일을 여는 것 역시 stream 이다.
//					// #. 파일에서 가져오고 파일에 저장한다.
//
//// #. 파일을 읽었는지 읽지 못하였는지 [참/거짓]으로 판단하는 bool 타입을 반환하고
//// #. 매개 변수로는 파일 이름, 즉 파일의 경로를 받는다.
//bool LoadFile(const char* filename)
//{	// #. input file stream : 파일에서 데이터를 가져오는 클래스
//	// #. 인스턴스의 생성자에 파일 경로를 입력하면 해당 파일을 열 수 있다.
//	std::ifstream ifs(filename);
//// #. ofstream( output file stream ) : 파일에 저장하는 클래스
//
//	if (!ifs)	// #. 파일 경로에 파일이 있는지 [참/거짓]으로 체크할 수 있다.
//	{	// #. < if(ifs) >  : 참일 경우...
//		// #. < if(!ifs) > : 거짓일 경우...
//		std::cout << "파일을 찾을 수 없습니다!" << std::endl;
//		return false;
//	}
//
//	char ch;			// #. 파일에 있는 문자를 꺼내오기 위해 문자 변수를 만든다.
//	while (ifs >> ch)	// #. ifstream 에서 문자를 꺼내온다.
//	{
//		std::cout << ch;
//	}
//
//	// #. 파일도 포인터 처럼 다 읽고 난 뒤에 반드시 닫아 주어야 한다.
//	ifs.close();
//
//	return true;
//}
//
//int main()
//{	// #. 파일 탐색기와는 다르게 앞에 경로를 생략하여도 된다.
//	// #. 또 다른 점은 역 슬레쉬가 아닌 슬레쉬 기호를 사용한다는 것이다.
//	LoadFile("Data/SimpleData.txt");
//// #. 프로그램이 실행될 때 실행되는 기본 경로가 있다.
//// #. 기본 경로란, 실행 파일을 실행한 경로이다.
//// #. 코드를 해석하면 '실행 파일 밑에 Data 라는 폴더가 있고 그 밑에 txt 파일이 있다.' 라는 뜻이다.
//}

//#include <iostream>
//#include <fstream>
//
//bool LoadFile(const char* filename)
//{
//	std::ifstream ifs(filename);
//
//	if (!ifs.good())	// #. 파일 경로에 있는 파일을 열었는데 이 작업이 성공 했는지?
//	{
//		std::cout << "파일을 찾을 수 없습니다!" << std::endl;
//		return false;
//	}
//
//	char ch;
//	while (ifs.get(ch))	// #. 이스케이프 시퀀스도 전부 읽어 주는 명령어 .get()
//	{
//		if (ifs.bad())
//		{
//			std::cout << "파일이 손상되었습니다!" << std::endl;
//			ifs.close();
//			return false;
//		}
//		if (ifs.fail())
//		{
//			std::cout << "읽을 수 없는 파일입니다!" << std::endl;
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
//// #. 어떤 문제가 발생하면 이 문제에 대한 예외를 처리할 것이다.
//// #. badbit, failbit 에 대한 문제
//	ifs.exceptions(std::ifstream::badbit | std::ifstream::failbit);
//	try {	// #. 문제가 생길법한 곳을 try 블럭으로 묶어 준다.
//		ifs.open(filename);	// #. .open() 파일을 열 수 있는 함수이다.
//		char ch;
//		while (ifs.get(ch)) {
//			std::cout << ch;
//		}
//		ifs.close();
//	}	// #. 모든 문제에 대한 부모 클래스 std::exceptions 으로 객체를 만들어 준다.
//	catch (std::exception e) {	// #. try 에서 발생한 문제는 catch 에 걸리게 된다.
//		std::cout << "문제발생" << e.what() << std::endl;
//// #. what() 함수는 에러에 대한 설명을 출력해 준다.
//		ifs.close();
//		return false;
//	}
//	return true;
//}
//int main()
//{
//	LoadFile("Data/SimpleData.txt");
//}

/* --- < 자료구조 > --- */

//#include <iostream>
//#include <fstream>
//#include <sstream>		// 한 줄씩 읽어오기 위한 헤더파일
//#include <vector>
//
//class Monster
//{	// #. 기획팀에서 파일을 넘겨 받아 자료구조를 만든다고 가정해 보자.
//private:
//	std::string mName;
//	int mLevel;
//	int mHp;
//	int mMp;	// #. 기획팀에서 넘어온 데이터가 4개로 분류되어 있기에 4개의 데이터를 만들어 준다.
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
//		std::string buffer;		// #. 한 줄씩 읽어올 문자열 공간을 만들어 준다.
//
//// #. std::getline() 함수를 이용하여 파일로 부터 한 줄씩 읽어올 수 있다.
//// #. 입력( istream ) : ifs( 파일 )
//// #. 문자열( basic_string ) : buffer
//		std::getline(ifs, buffer);		// 머릿말을 읽고 그 다음부터 자료구조로 저장한다.
//
//		while (!ifs.eof()) {	// #. 파일의 끝을 만날 때까지 계속해서 파일을 읽는다.
//			std::getline(ifs, buffer);	// $1. 일단 한 줄을 읽는다.
//			std::stringstream ss(buffer);	// $2. 문자열 스트림을 만들고 읽어들인 문자열을 저장한다.
//
//// #. 4개로 나누어 읽은 데이터는 연속으로 저장할 공간을 만든다.
//			std::vector<std::string> args;
//
//			for (int i = 0; i < 4; i++)
//			{
//				std::string token;	// $3. 한 줄을 데이터 분리 기호로 나누어서 저장할 수 있게 문자열을 만든다.
//				std::getline(ss, token, ',');	// #. Delim : 데이터 분리 기호
//
//// #. getline 을 통해 읽은 한 줄이 token 에 쉼표 단위로 저장된다.
//// #. for 문을 통해 총 4번 동적 배열에 저장해 준다.
//				args.push_back(token);
//			}
//// #. 클래스 객체의 생성자로 순서대로 인자를 전달한다.
//			Monster mon{ args[0], std::stoi(args[1]), std::stoi(args[2]), std::stoi(args[3]) };
//			monsters.push_back(mon);
//// #. 최종적으로 main 에서 만든 Monster 객체에 저장해 준다.
//		}
//		ifs.close();
//	}
//	catch (std::exception e) {
//		std::cout << "문제발생" << e.what() << std::endl;
//		ifs.close();
//		return false;
//	}
//	return true;
//}
//int main()
//{	// Monster 를 원소로 갖는 동적 배열을 만들어 준다.
//	std::vector<Monster> monsters;
//	LoadFile("Data/SimpleData.txt", monsters);
//}

/* < 연산자 오버로딩 > */

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
//	// >> 의 왼쪽 피연산자가 ifstream 이기 때문에 class 의 멤버함수로 만들 수 없다.
//	friend std::ifstream& operator >>(std::ifstream& input, Monster& monster);
//// #. 매개변수 : 왼쪽 피연산자와 오른쪽 피연산자를 받아야 한다.
//// #. 반환값   : ifstream& 으로 하여 결과 자체가 호출자 자체여야 연속된 호출이 가능하다.
//};
//
//std::ifstream& operator >>(std::ifstream& input, Monster& monster)
//{	// 구분된 문자열을 저장할 문자열을 만든다.
//	std::string token;
//
//	try {	// input 에서 token 으로 쉼표까지 읽어온다.
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
//		std::cout << "형식이 잘못되었습니다 : " << e.what() << std::endl;
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
//		{	// #. .peek() 살짝 엿보고 파일의 끝이라면
//			if (ifs.peek() == EOF) { break; }
//
//			Monster monster;
//			ifs >> monster;		// #. 파일 스트림에서 몬스터를 한 마리씩 꺼내온다.
//			monsters.push_back(monster);
//		}
//
//		ifs.close();
//	}
//	catch (std::exception e)
//	{
//		std::cout << "문제발생" << e.what() << std::endl;
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

/* ----- < 파일 입출력 > ----- */



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
//		std::cout << "형식이 잘못되었습니다 : " << e.what() << std::endl;
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
//		std::cout << "데이터를 저장할 때 문제가 발생했습니다 : " << e.what() << std::endl;
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
//		std::cout << "문제발생" << e.what() << std::endl;
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
//		std::cout << "파일 저장 도중 에러 발생 : " << e.what() << std::endl;
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
< binary data > : 컴퓨터가 기록하는 형태( 0, 1 )로 저장한 데이터
	#. 줄바꿈, 콤마 등의 명확한 구분이 없어서 전체를 읽기 전까지는 어디서 끝나는지 모른다. ( 0d, 0a( .. ) 를 통해 줄바꿈을 알 수는 있음 )
	#. 때문에 지금 현재 데이터가 몇개가 저장되어있는지 정보를 입력해 놓는 것이 좋다.
	#. 또 문자열을 저장할 때는 몇 글자의 문자열인지도 저장해야 한다.
	#. 자료구조를 구분할 수 있는 정보가추가적으로 필요( 줄바꿈, 쉼표 )

< CPU > : 연산을 담당하는 부품
	#. Big-Endian : 왼쪽에서 부터 오른쪽으로 저장( 비교할 때 최적화 )
		=> 리눅스
	#. Little-Endian : 오른쪽에서 부터 왼쪽으로 저장( 연산 최적화 )
		=> Window, Intel, AMD

< POD( Plain Old Data ) > : 표준 타입( int, float ... )
	#. 구조체( 기본생성자를 가진 클래스 + 다형성 X )
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
//{	// #. binary data 를 저장하기 위해서는 해당 vector 에 몇개의 원소가 있는지도 같이 저장해야 한다.
//	int version{ 1 };	// #. 파일의 정보가 바뀔 수 있기 때문에 파일 버전도 저장한다.
//	int itemCount{};	// #. 몇 개의 원소가 있는지
//};
//
//std::ofstream& operator <<(std::ofstream& output, Monster& monster)
//{
//	try {	// #. 몬스터의 이름은 문자열이기 때문에 몇 글자인지 저장해 준다.
//		int nameLength = static_cast<int>(monster.mName.size());
//// #. 먼저 몬스터 이름의 글자 수를 저장해 준다.
//		output.write(reinterpret_cast<char*>(&nameLength), sizeof(int));
//// #. mName 은 std::string 이기 때문에 POD 형식의 배열로 받기 위해 c_str() 함수를 이용해 char* 로 바꾸어 준다.
//		output.write(monster.mName.c_str(), nameLength);
//		output.write(reinterpret_cast<char*>(&monster.mLevel), sizeof(int));
//		output.write(reinterpret_cast<char*>(&monster.mHp), sizeof(int));
//		output.write(reinterpret_cast<char*>(&monster.mMp), sizeof(int));
//	}
//	catch (std::exception e) {
//		std::cout << "데이터를 저장할 때 문제가 발생했습니다 : " << e.what() << std::endl;
//	}
//	return output;
//}
//
//bool WriteBinary(const char* filename, std::vector<Monster>& monsters)
//{
//	std::ofstream ostream;
//	ostream.exceptions(std::ofstream::badbit | std::ofstream::failbit);
//	try {	// #. 파일 열기의 기본 옵션은 텍스트 버전이기 때문에 open_mode 를 바이너리 방식으로 지정해 준다.
//		ostream.open(filename, std::ifstream::binary);
//		// #. h 라는 이름의 구조체에 버전과 원소 갯수를 입력한다.
//		Header h{ 1,static_cast<int>(monsters.size()) };
//// #. write() : 통체로 파일에 정보를 보낸다.
//// #. (&h) 구조체의 주소를 받아와서 포인터로 전달한다.
//// #. Header 의 크기만큼 한 번에 저장한다.
//		ostream.write(reinterpret_cast<char*>(&h), sizeof(Header));
//		for (auto e : monsters) { ostream << e; }
//		ostream.close();
//	}
//	catch (std::exception e) {
//		std::cout << "저장 중에 에러 : " << e.what() << std::endl;
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
		#. 선언
			=> 헤더( 머릿말 ) : <? ~ ?>
				=> <?xml version="1.0" encoding="UTF-8"?>
		#. 태그
			=> < ~ >
			=> 시작 : <section>
			=> 종료 : </section>
			=> 빈태그 : <section />
		#. 원소
			=> 시작태그부터 종료태그 사이의 내용
			=> <print> Hello, World </print>
		#. 속성
			=> 이름 = 값
			=> 태그 내부에 존재하는 정보
				=> <img src="wallpaper.png"> </img>

< JAVE >
	< JSOM( Jave Script Object Notation ) >
*/

/* --- < 정규 표현식( Regular Expression ) > --- */

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
//	std::regex pattern("\"([^ \"]*)\"");	// #. 정규 표현식으로 문자열을 구분하여 읽을 예정
//
//	while (!file.eof())
//	{
//		std::getline(file, line);	// 한 줄씩 읽어 온다.
//// #. 찾은 문자열의 인덱스를 저장해 둔다.
//		auto result = line.find("<sprite");	// #. find() 문자열이 들어있는지 찾아 본다.
//		if (result != std::string::npos)	// #. < std::string::npos > : result 가 <sprite 문자열을 못 찾았을 경우 // 근대 != 이기 때문에 찾았을 경우
//		{	// #. 정규 표현식의 결과를 반복자로 만들 수 있는 클래스
//			// #. 시작부터 끝까지 검색해서 정규 표현식에 만족하는 문자열을 가리킨다.
//			std::sregex_iterator current(line.begin(), line.end(), pattern);
//			std::sregex_iterator end;	// #. default 는 가장 끝을 가리킨다.
//			int index{};
//			Sprite sprite;
//
//			while(current != end)
//			{	// 반복자를 역참조하고 이 후에 배열의 원소를 가져온다.
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
//				current++;	// 반복자 개념이기 때문에 ++ 연산이 가능하다.
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

/* --- < TinyXML2 > --- */

/*
< XMLDocument >		: XML 파일
< XMLDeclaration >	: XML 선언
< XMLElement >		: 태그
*/

//#include <iostream>
//#include "tinyxml2.h"
//#include "monster.h"
//
//using namespace tinyxml2;
//
//bool SaveToXML(const char* filename, const std::vector<Monster>& monsters)
//{
//	XMLDocument d;
//
//	XMLDeclaration* decl = d.NewDeclaration(R"("xml version="1.0" encoding="EUC - KR")");
//	d.LinkEndChild(decl);
//
//	auto pRoot = d.NewElement("monsters");
//	for (auto e : monsters)
//	{
//		auto pMonsterNode = d.NewElement("monster");
//		pMonsterNode->SetAttribute("name", e.GetName().c_str());
//
//		auto pStatusNode = d.NewElement("status");
//		pStatusNode->SetAttribute("level", e.GetStatus().mLevel);
//		pStatusNode->SetAttribute("hp", e.GetStatus().mHP);
//		pStatusNode->SetAttribute("mp", e.GetStatus().mMP);
//		pMonsterNode->LinkEndChild(pStatusNode);
//
//		auto pItemsNode = d.NewElement("items");
//		for (auto item : e.GetDropItems())
//		{
//			auto pItemNode = d.NewElement("item");
//			pItemNode->SetAttribute("name", item.mName.c_str());
//			pItemNode->SetAttribute("gold", item.mGold);
//			pItemsNode->LinkEndChild(pItemNode);
//		}
//		pMonsterNode->LinkEndChild(pItemsNode);
//		pRoot->LinkEndChild(pMonsterNode);
//	}
//	d.LinkEndChild(pRoot);
//	d.SaveFile(filename);
//	return true;
//}
//bool LoadFromXML(const char* filename, std::vector<Monster>& monsters)
//{
//	XMLDocument d;
//	if (d.LoadFile(filename) != XML_SUCCESS)
//	{
//		return false;
//	}
//
//	auto pRootNode = d.FirstChildElement("monsters");
//	for (auto pMonsterNode = pRootNode->FirstChildElement(); pMonsterNode;
//		pMonsterNode = pMonsterNode->NextSiblingElement())
//	{
//		Monster monster;
//		monster.SetName(pMonsterNode->Attribute("name"));
//
//		auto pStatusNode = pMonsterNode->FirstChildElement("status");
//		Status status;
//		status.mLevel = pStatusNode->IntAttribute("level");
//		status.mLevel = pStatusNode->IntAttribute("hp");
//		status.mLevel = pStatusNode->IntAttribute("mp");
//		monster.SetStatus(status);
//
//		auto pItemsNode = pMonsterNode->FirstChildElement("items");
//		for (auto pItemNode = pItemsNode->FirstChildElement(); pItemNode;
//			pItemNode = pItemNode->NextSiblingElement())
//		{
//			Item item;
//			item.mName = pItemNode->Attribute("name");
//			item.mGold = pItemNode->IntAttribute("gold");
//			monster.AddDropItem(item);
//		}
//		monsters.push_back(monster);
//	}
//	return true;
//}
//
//
//int main()
//{
//	std::vector<Monster> monsters;
//
//	Monster monster;
//	monster.SetName("슬라임");
//	monster.SetStatus(Status{ 1,1,1 });
//	monster.AddDropItem(Item{ "끈적한 젤리",1 });
//
//	monsters.push_back(monster);
//
//	monster.GetDropItems().clear();
//	monster.SetName("늑대");
//	monster.SetStatus(Status{ 5,5,5 });
//	monster.AddDropItem(Item{ "발톱",5 });
//	monster.AddDropItem(Item{ "가죽",10 });
//
//	monsters.push_back(monster);
//
//	monster.GetDropItems().clear();
//	monster.SetName("악마");
//	monster.SetStatus(Status{ 10,10,10 });
//	monster.AddDropItem(Item{ "날개",10 });
//	monster.AddDropItem(Item{ "손톱",20 });
//
//	monsters.push_back(monster);
//
//	SaveToXML("Data/myxml.xml", monsters);
//
//	monsters.clear();
//	LoadFromXML("Data/myxml.xml", monsters);
//}

/* --- < RAPIDJSON > --- */

//#include <iostream>
//#include <fstream>
//#include <rapidjson\document.h>
//#include <rapidjson\prettywriter.h>
//#include "monster.h"
//
//using namespace rapidjson;
//
//bool SaveToJSON(const char* filename, std::vector<Monster>& monsters)
//{
//	StringBuffer sb;
//	PrettyWriter<StringBuffer> writer(sb);
//
//	writer.StartObject();
//
//	writer.Key("monsters");
//
//	writer.StartArray();
//
//	for (auto monster : monsters)
//	{
//		writer.StartObject();
//		{
//			writer.Key("name");
//			writer.String(monster.GetName().c_str());
//
//			writer.Key("status");
//			writer.StartObject();
//			{
//				writer.Key("level"); writer.Int(monster.GetStatus().mLevel);
//				writer.Key("hp");	 writer.Int(monster.GetStatus().mHP);
//				writer.Key("mp");	 writer.Int(monster.GetStatus().mMP);
//			}
//			writer.EndObject();
//
//			writer.Key("items");
//			writer.StartArray();
//			{
//				for (auto item : monster.GetDropItems())
//				{
//					writer.StartObject();
//					{
//						writer.Key("name"); writer.String(item.mName.c_str());
//						writer.Key("gold"); writer.Int(item.mGold);
//					}
//					writer.EndObject();
//				}
//			}
//			writer.EndArray();
//		}
//		writer.EndObject();
//	}
//
//	writer.EndArray();
//
//	writer.EndObject();
//
//	std::ofstream ofs;
//	ofs.exceptions(std::ofstream::badbit | std::ofstream::failbit);
//
//	try {
//		ofs.open(filename);
//
//		ofs << sb.GetString();
//
//		ofs.close();
//	}
//	catch (std::exception e) {
//		std::cout << "JSON 저장 중에 문제 말생 : " << e.what() << std::endl;
//		ofs.close();
//		return false;
//	}
//
//	return true;
//}
//bool LoadFromJSON(const char* filename, std::vector<Monster>& monsters)
//{
//	return true;
//}
//
//int main()
//{
//	std::vector<Monster> monsters;
//
//	Monster monster;
//	monster.SetName("슬라임");
//	monster.SetStatus(Status{ 1,1,1 });
//	monster.AddDropItem(Item{ "끈적한 젤리",1 });
//
//	monsters.push_back(monster);
//
//	monster.GetDropItems().clear();
//	monster.SetName("늑대");
//	monster.SetStatus(Status{ 5,5,5 });
//	monster.AddDropItem(Item{ "발톱",5 });
//	monster.AddDropItem(Item{ "가죽",10 });
//
//	monsters.push_back(monster);
//
//	monster.GetDropItems().clear();
//	monster.SetName("악마");
//	monster.SetStatus(Status{ 10,10,10 });
//	monster.AddDropItem(Item{ "날개",10 });
//	monster.AddDropItem(Item{ "손톱",20 });
//
//	monsters.push_back(monster);
//
//	SaveToJSON("Data/monsters.json", monsters);
//
//	monsters.clear();
//	LoadFromJSON("Data/monsters.json", monsters);
//}