#include<iostream>
using namespace std;

//默认情况下，c++编译器至少给一个类添加3个函数
//1．默认构造函数(无参，函数体为空)
//2．默认析构函数(无参，函数体为空)
//3．默认拷贝构造函数，对属性进行值拷贝

//构造函数调用规则如下：
//如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//如果用户定义拷贝构造函数，c++不会再提供其他构造函数

class Person4
{
public:
	//Person4()
	//{
	//	cout << "Person的默认构造函数调用" << endl;
	//}

	//Person4(int age)
	//{
	//	cout << "Person的有参构造函数调用" << endl;
	//	m_Age = age;
	//}

	Person4(const Person4 &p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;

	}

	~Person4()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;
};

//void test04()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//
//}

void test05()
{
	//Person4 p(28);

	//Person4 p2(p);
}

int main4()
{
	
	test05();

	system("pause");
	return 0;
}