#include<iostream>
using namespace std;



class Person1
{
public:
	//1、构造函数 进行初始化操作
	//构造函数语法：类名(){}
	//构造函数，没有返回值也不写void
	//函数名称与类名相同
	//构造函数可以有参数，因此可以发生重载
	//程序在调用对象时候会自动调用构造，无须手动调用, 而且只会调用一次
	Person1()
	{
		cout << "Person构造函数的调用" << endl;
	}

	//2、析构函数
	//析构函数语法： ~类名() {}
	//析构函数，没有返回值也不写void
	//函数名称与类名相同, 在名称前加上符号 ~
	//析构函数不可以有参数，因此不可以发生重载
	//程序在对象销毁前会自动调用析构，无须手动调用, 而且只会调用一次
	~Person1()
	{
		cout<<"Person的析构函数调用"<<endl;
	}
};

void test1()
{
	Person1 p;
}



int main1()
{
	test1();

	system("pause");
	return 0;
}