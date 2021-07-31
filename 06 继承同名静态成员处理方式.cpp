#include<iostream>
using namespace std;

class Base6
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}

	static void func(int a )
	{
		cout << "Base - static void func(int a)" << endl;
	}
};
int Base6::m_A = 100;

class Son6 :public Base6
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()" << endl;
	}

};
int Son6::m_A = 200;

//同名静态成员属性
void test09()
{
	//通过对象访问
	cout << "通过对象访问：" << endl;
	Son6 s;
	cout << "Son m_A = " << s.m_A << endl;
	cout << "Base m_A = " << s.Base6::m_A << endl;

	//通过类名访问
	cout << "通过类名访问：" << endl;
	cout << "Son m_A = " << Son6::m_A << endl;
	cout << "Base m_A = " << Son6::Base6::m_A << endl;//第一个::代表通过类名访问，第二个::代表访问父类作用域下

}

//同名静态成员函数
void test10()
{
	//通过对象访问
	cout << "通过对象访问：" << endl;
	Son6 s;
	s.func();
	s.Base6::func();

	//通过类名访问
	cout << "通过类名访问：" << endl;
	Son6::func();
	Son6::Base6::func();

	//s.func(100);//如果子类中出现和父类同名成员函数，子类的同名成员函数会隐藏父类中所有同名成员函数
	s.Base6::func(100);//如果访问父类中被隐藏的同名成员函数需要加所用域

}

int main6()
{
	
	//test09();
	test10();
	system("pause");

	return 0;
}