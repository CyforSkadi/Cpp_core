#include<iostream>
using namespace std;

//C++允许一个类继承多个类

//C++实际开发中不建议用多继承

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

//语法：class 子类 ：继承方式 父类1 ， 继承方式 父类2...
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

	//多继承可能会引发父类中有同名成员出现，需要加作用域区分
	cout << "Base1 m_A = " << s.Base71::m_A << endl;
	cout << "Base2 m_A = " << s.Base72::m_A << endl;

}

int main7()
{
	
	test11();
	system("pause");

	return 0;
}