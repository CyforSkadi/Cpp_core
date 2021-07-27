#include<iostream>
using namespace std;

class Person6
{
public:
	//传统初始化操作
	//Person6(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;

	//}

	//初始化列表操作
	//语法：  构造函数()：属性1(值1),属性2（值2）... {}
	Person6(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
	{

	}

	int m_A;
	int m_B;
	int m_C;
};

void test07()
{
	Person6 p(30,20,10);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;

}

int main6()
{
	
	test07();

	system("pause");
	return 0;
}