#include <iostream>	//��ó�� ������
#include <limits>

#define PIE 3.1415926535;

/*
C++���� �Լ��� ����ϰ��� �Ѵٸ�...
�ݵ�� �Լ��� ������ �̸� �����Ͽ��� �Ѵ�
*/

using namespace std;

int main() {
	
	// ���� ���
	/*
	printf("Hello, World!\n");	// C ��� ����

	cout << "Hello, World!" << endl; // C++ ����

	int a, b;

	cout << "a = " << &a << ", b = " << &b << endl;
	*/

	//������
	/*
	int n_int = INT_MAX;

	cout << "int�� " << sizeof n_int << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪 " << n_int << " �̴�.\n" << endl;

	short n_short = SHRT_MAX;

	cout << "short�� " << sizeof n_short << "����Ʈ�̴�." << endl;
	cout << "short�� �ִ밪�� " << n_short << "�̴�.\n" << endl;

	long n_long = LONG_MAX;

	cout << "long�� " << sizeof n_long << "����Ʈ�̴�." << endl;
	cout << "long�� �ִ밪�� " << n_long << "�̴�.\n" << endl;

	long	long n_llong = LLONG_MAX;

	cout << "long long�� " << sizeof n_llong << "����Ʈ�̴�." << endl;
	cout << "long long�� �ִ밪�� " << n_llong << "�̴�.\n" << endl;

	// unsigned�� ������ ���� ���� ������ ��� ,���� �ڷ����� ���� ���� ��� ���� �������� ������ ������ ���� ������� ������.
	// ��) ������ + �����Ѱ� = ��°�
	// ���԰��� ���� ������ ��� ������ ���� ����Ѵ�.(0�� ����)
	unsigned int a = -1;
	cout << a << endl;

	unsigned int b = 1;
	cout << b << endl;

	//�Ǽ���
	float c = 3.14;
	int d = 3.14;

	cout << c << " " << d << endl;
	*/

	// ������
	/*
	// �ѱ��� ASCII �ڵ带 �������� ����
	char b = 'a';

	cout << b << endl;
	*/
	// bool �ڷ���
	//bool���� 0�� 0���� 0 �ʰ��� ���ڴ� 1�� ���
	/*
	bool a = 0;
	bool b = 10;
	bool c = 1;

	cout << a << " " << b << " " << c << endl;
	*/

	// ���
	/*
	const float PI = 3.1415926535;

	int r = 3;
	float s = r * r * PIE;

	int r2 = 3;
	float s2 = r2 * r2 * PI;

	cout << s << endl;
	cout << s2 << endl;
	*/
	//�������� ��ȯ(�� ��ȯ)
	/*
	int a = 3.141592;
	cout << a << endl;

	// ������ �� ��ȯ
	//()�� ���� �� ��ȯ
	char ch = 'M';
	cout << (int)ch << "	" << int(ch) << endl;
	// static_cast�� ���� �� ��ȯ
	cout << static_cast<int>(ch) << endl;
	*/



	return 0;
}