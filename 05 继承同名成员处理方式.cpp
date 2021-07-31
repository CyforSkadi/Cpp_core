#include<iostream>
using namespace std;

class Base5
{
public:
	Base5()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base - func()调用" << endl;

	}

	void func(int a )
	{
		cout << "Base - func(int a )调用" << endl;

	}

	int m_A;

};

class Son5 :public Base5
{
public:
	Son5()
	{
		m_A = 200;

	}

	void func()
	{
		cout << "Son - func()调用" << endl;

	}

	
	int m_A;

};

//同名成员属性处理
void test07()
{
	Son5 s;
	cout << "Son中m_A = " << s.m_A << endl;
	//如果通过子类对象访问父类的同名成员，需要加作用域
	cout << "Base中m_A = " << s.Base5::m_A << endl;
}

//同名成员函数处理
void test08()
{
	Son5 s;
	s.func();
	s.Base5::func();

	//s.func(100);//如果子类中出现和父类同名成员函数，子类的同名成员函数会隐藏父类中所有同名成员函数
	s.Base5::func(100);//如果访问父类中被隐藏的同名成员函数需要加所用域


}

int main5()
{

	//test07();
	test08();

	system("pause");

	return 0;
}