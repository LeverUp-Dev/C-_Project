#include <iostream>	//전처리 지시자
#include <limits>

#define PIE 3.1415926535;

/*
C++에서 함수를 사용하고자 한다면...
반드시 함수의 원형을 미리 정의하여야 한다
*/

using namespace std;

int main() {
	
	// 기초 출력
	/*
	printf("Hello, World!\n");	// C 언어 형식

	cout << "Hello, World!" << endl; // C++ 형식

	int a, b;

	cout << "a = " << &a << ", b = " << &b << endl;
	*/

	//정수형
	/*
	int n_int = INT_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값 " << n_int << " 이다.\n" << endl;

	short n_short = SHRT_MAX;

	cout << "short는 " << sizeof n_short << "바이트이다." << endl;
	cout << "short의 최대값은 " << n_short << "이다.\n" << endl;

	long n_long = LONG_MAX;

	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "long의 최대값은 " << n_long << "이다.\n" << endl;

	long	long n_llong = LLONG_MAX;

	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "long long의 최대값은 " << n_llong << "이다.\n" << endl;

	// unsigned는 대입한 값이 음의 정수일 경우 ,정수 자료형의 음과 양의 모두 합한 범위에서 대입한 정수를 합한 결과값을 가진다.
	// 예) 범위값 + 대입한값 = 출력값
	// 대입값이 양의 정수일 경우 대입한 수를 출력한다.(0도 포함)
	unsigned int a = -1;
	cout << a << endl;

	unsigned int b = 1;
	cout << b << endl;

	//실수형
	float c = 3.14;
	int d = 3.14;

	cout << c << " " << d << endl;
	*/

	// 문자형
	/*
	// 한글은 ASCII 코드를 지원하지 않음
	char b = 'a';

	cout << b << endl;
	*/
	// bool 자료형
	//bool형은 0은 0으로 0 초과의 숫자는 1로 출력
	/*
	bool a = 0;
	bool b = 10;
	bool c = 1;

	cout << a << " " << b << " " << c << endl;
	*/

	// 상수
	/*
	const float PI = 3.1415926535;

	int r = 3;
	float s = r * r * PIE;

	int r2 = 3;
	float s2 = r2 * r2 * PI;

	cout << s << endl;
	cout << s2 << endl;
	*/
	//데이터형 변환(형 변환)
	/*
	int a = 3.141592;
	cout << a << endl;

	// 강제적 형 변환
	//()를 통한 형 변환
	char ch = 'M';
	cout << (int)ch << "	" << int(ch) << endl;
	// static_cast를 통한 형 변환
	cout << static_cast<int>(ch) << endl;
	*/

	// 배열
	/*
	short month[12] = { 1, 2, 3 };

	cout << month[0] << endl;
	cout << month << endl;

	char ch1[5] = { 'H', 'e', 'l', 'l', 'o' };
	cout << ch1 << endl;

	char ch2[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	cout << ch2 << endl;

	char ch3[] = { 'H', 'e', 'l', 'l', 'o'};
	cout << ch3 << endl;

	char ch4[] = "Hello";
	cout << ch4 << endl;
	*/

	//사용자 입력
	//한글은 지원 안함
	/*
	const int Size = 15;
	char name1[Size];	//비어있는 배열
	char name2[Size] = "C++programing"; //문자열 상수로 초기화

	cout << "안녕하세요. 저는 " << name2;
	cout << "입니다. 성함이 어떻게 되시나요?\n";

	// cin >> 변수
	// cin.get()
	// cin.getline()
	cin.getline(name1, Size);

	cout << "아! 성함이 " << name1 << "이시군요.";
	cout << "당신의 이름은 " << strlen(name1) << "자 입니다만\n";
	cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.";
	cout << " 당신의 이름은 " << name1[0] << "자로 시작되는군요.\n";
	
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다.";
	cout << name2 << endl;
	*/
	//string
	/*
	char ch1[20];
	char ch2[20] = "jauar";
	// ch1 = ch2은 틀림
	// ch1 = ch2;

	string str1;
	string str2 = "doyoung";
	str1 = str2;
	cout << str1 << endl;
	*/

	// 구조체
	/* 방법1
	struct Player
	{
		string name;
		string job;
		float health;
		float stamina;
	};

	Player P1;
	P1.name = "Meharu";
	P1.job = "Magician";
	P1.health = 100.12;
	P1.stamina = 100.12;

	Player P2 = {
		"Meharu",
		"Magician",
		100.12,
		100.12
	};

	cout << P1.name << endl;
	cout << P1.job << endl;
	cout << P1.health << endl;
	cout << P1.stamina << endl;
	*/
	/* 방법2
	struct Player
	{
		string name;
		string job;
		float health;
		float stamina;
	} B;

	B = {

	};

	cout << B.name << endl;
	*/
	// 배열 활용
	/*
	struct Player {
		string name;
		string job;
		float health;
		float stamina;
	};

	Player P[2] = {
		{"A", "B", 1.1, 1.2},
		{"C", "D", 1.1, 1.2}
	};

	cout << P[0].name << endl;
	*/

	//공용체(union)
	// 서로 다른 데이터형을 한 번에 한 가지만 보관 가능함
	/*
	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;
	test.intVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 3.14;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;
	*/
	//열거체(enum)
	// 기호, 상수를 만드는 것에 대한 또 다른 방법
	/*
	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet };

	spectrum a = blue;
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;
	cout << b << endl;
	*/

	// 포인터
	// C++: 객체지향 프로그래밍 지원
	/*
	컴파일 시간이 아닌 실행시간에 어떠한 결정을 내릴 수 있다.
	*/
	/*
	int val = 3;
	cout << &val << endl;
	*/

	// 포인터: 사용할 주소에 이름을 붙인다.
	// 즉, 포인터는 포인터의 이름이 주소를 나타낸다.
	// 간접값 연산자, 간접 참조 연산자 *
	/*
	int *a; //c style
	int* b; //c++ style
	int* c, d; //c는 포인터 변수, d는 int형 일반 변수
	*/
	/*
	int a = 6;
	int* b;

	b = &a;

	cout << "a 의 값 " << a << endl;
	cout << "*b의 값 " << *b << endl;

	cout << "a의 주소 " << &a << endl;
	cout << "*b의 주소 " << b << endl;

	*b = *b + 1;

	cout << "이제 a의 값은 " << a << endl;
	*/

	

	return 0;
}