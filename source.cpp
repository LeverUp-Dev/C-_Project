#include <iostream>	//전처리 지시자

/*
C++에서 함수를 사용하고자 한다면...
반드시 함수의 원형을 미리 정의하여야 한다
*/

using namespace std;

int main() {

	printf("Hello, World!\n");	// C 언어 형식

	cout << "Hello, World!" << endl; // C++ 형식

	int a, b;

	cout << "a = " << &a << ", b = " << &b << endl;

	return 0;
}