#include<iostream>
using namespace std;

//不要返回局部变量的引用
int& test1()
{
	int a = 10;		//局部变量存放在栈区
	return a;
}

//函数的调用可以作为左值
int& test2()
{
	static int a = 10;	//静态变量存放在全局区
	return a;
}

int main4()
{
	int &ref = test1();
	cout << "ref = " << ref << endl;	//第一次结果被保留
	cout << "ref = " << ref << endl;	//第二次结果错误，a的内存已经被释放

	int &ref2 = test2();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test2() = 100;	//如果函数返回值为引用，函数调用可以作为左值
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}