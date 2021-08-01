#include<iostream>
using namespace std;
#include<string>

class Base
{
public:
	//纯虚函数语法：virtual 返回值类型 函数名 （参数列表） = 0;
	//当类中有了纯虚函数，这个类也称为抽象类

	//抽象类特点：
	//1、无法实例化对象
	//2、子类必须重写抽象类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;

};

class Son :public Base
{
public:
	virtual void func() 
	{
		cout << "func()函数调用" << endl;
	};
};


void test05()
{
	
	//Base b;//无法实例化对象
	//new Base;//无法实例化对象

	//Son s;//子类必须重写抽象类中的纯虚函数，否则也属于抽象类

	Base* base = new Son;
	base->func();

	delete base;

}



int main3()
{

	test05();

	system("pause");

	return 0;

}