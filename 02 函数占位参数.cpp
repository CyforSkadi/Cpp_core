#include<iostream>
using namespace std;

//占位参数
//语法：返回值类型 函数名 (数据类型){}
//占位参数也可以有默认参数
void func(int a,int )
{
	cout << "this is function" << endl;
}

int main2()
{
	func(10, 10);

	system("pause");

	return 0;
}