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