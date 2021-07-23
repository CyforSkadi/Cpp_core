#include<iostream>
using namespace std;

//引用作为重载条件
void func(int &a)
{
	cout << "func(int &a)的调用" << endl;
}

void func(const int &a)
{
	cout << "func(const int &a)的调用" << endl;
}
//函数重载与默认参数
void func2(int a,int b = 10)
{
	cout << "func2(int a)的调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}


int main()
{
	int a = 10;
	func(a);
	func(10);

	//func2(10);	//函数重载与默认参数出现二义性


	system("pause");

	return 0;
}