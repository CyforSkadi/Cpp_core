#include<iostream>
using namespace std;
#include<string>

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person9
{
public:

	static void func()
	{
		m_A = 100;//静态成员函数可以访问静态成员变量
		//m_B = 200;//静态成员函数不能访问非静态成员变量

		cout << "static void func的调用" << endl;
	}

	static int m_A;
	int m_B;

	//静态成员函数也有访问权限
private:
	static void func2()
	{
		cout << "static void func2的调用" << endl;
	}

};

int Person9::m_A = 0;


void test12()
{
	//1、通过对象访问
	Person9 p;
	p.func();
	//2、通过类名访问
	Person9::func();

	//Person9::func2();//类外访问不到私有静态成员函数
}

int main()
{
	test12();

	system("pause");
	return 0;
}