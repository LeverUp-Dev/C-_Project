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

	// �迭
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

	//����� �Է�
	//�ѱ��� ���� ����
	/*
	const int Size = 15;
	char name1[Size];	//����ִ� �迭
	char name2[Size] = "C++programing"; //���ڿ� ����� �ʱ�ȭ

	cout << "�ȳ��ϼ���. ���� " << name2;
	cout << "�Դϴ�. ������ ��� �ǽó���?\n";

	// cin >> ����
	// cin.get()
	// cin.getline()
	cin.getline(name1, Size);

	cout << "��! ������ " << name1 << "�̽ñ���.";
	cout << "����� �̸��� " << strlen(name1) << "�� �Դϴٸ�\n";
	cout << sizeof(name1) << " ����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.";
	cout << " ����� �̸��� " << name1[0] << "�ڷ� ���۵Ǵ±���.\n";
	
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�.";
	cout << name2 << endl;
	*/
	//string
	/*
	char ch1[20];
	char ch2[20] = "jauar";
	// ch1 = ch2�� Ʋ��
	// ch1 = ch2;

	string str1;
	string str2 = "doyoung";
	str1 = str2;
	cout << str1 << endl;
	*/

	// ����ü
	/* ���1
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
	/* ���2
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
	// �迭 Ȱ��
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

	//����ü(union)
	// ���� �ٸ� ���������� �� ���� �� ������ ���� ������
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
	//����ü(enum)
	// ��ȣ, ����� ����� �Ϳ� ���� �� �ٸ� ���
	/*
	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet };

	spectrum a = blue;
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;
	cout << b << endl;
	*/

	// ������
	// C++: ��ü���� ���α׷��� ����
	/*
	������ �ð��� �ƴ� ����ð��� ��� ������ ���� �� �ִ�.
	*/
	/*
	int val = 3;
	cout << &val << endl;
	*/

	// ������: ����� �ּҿ� �̸��� ���δ�.
	// ��, �����ʹ� �������� �̸��� �ּҸ� ��Ÿ����.
	// ������ ������, ���� ���� ������ *
	/*
	int *a; //c style
	int* b; //c++ style
	int* c, d; //c�� ������ ����, d�� int�� �Ϲ� ����
	*/
	/*
	int a = 6;
	int* b;

	b = &a;

	cout << "a �� �� " << a << endl;
	cout << "*b�� �� " << *b << endl;

	cout << "a�� �ּ� " << &a << endl;
	cout << "*b�� �ּ� " << b << endl;

	*b = *b + 1;

	cout << "���� a�� ���� " << a << endl;
	*/

	

	return 0;
}