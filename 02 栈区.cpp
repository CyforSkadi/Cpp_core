#include<iostream>
using namespace std;

//栈区数据由编译器管理开辟和释放,存放函数的参数值,局部变量等
//注意事项：不要返回局部变量的地址

int* func(int b)	//形参数据存放在栈区
{
	b = 100;
	int a = 10;//局部变量存放在栈区，栈区数据在函数执行完成后自动释放
	return &a;
}

int main2()
{
	int*p = func(1);

	cout << *p << endl;//第一次打印正确是因为编译器做了保留

	cout << *p << endl;//第二次数据不再保留

	system("pause");

	return 0;
}