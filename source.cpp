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

	

	return 0;
}