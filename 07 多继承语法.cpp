#include<iostream>
using namespace std;

//C++����һ����̳ж����

//C++ʵ�ʿ����в������ö�̳�

class Base71
{
public:

	Base71()
	{
		m_A = 100;
	}

	int m_A;

};

class Base72
{
public:

	Base72()
	{
		m_A = 200;
	}

	int m_A;

};

//�﷨��class ���� ���̳з�ʽ ����1 �� �̳з�ʽ ����2...
class Son7 :public Base71, public Base72
{
public:

	Son7()
	{
		m_C = 300;
		m_D = 400;
	}

	int m_C;
	int m_D;
};

void test11()
{
	Son7 s;

	cout << "sizeof Son = " << sizeof(Son7) << endl;

	//��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
	cout << "Base1 m_A = " << s.Base71::m_A << endl;
	cout << "Base2 m_A = " << s.Base72::m_A << endl;

}

int main7()
{
	
	test11();
	system("pause");

	return 0;
}