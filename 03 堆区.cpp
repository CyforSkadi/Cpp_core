#include<iostream>
using namespace std;

//堆区数据由程序员管理开辟和释放

int* func()
{
	//利用new关键字 可以将数据开辟到堆区，返回地址
	//指针本质也是局部变量，放在栈上；指针保存的数据放在堆区
	int* p = new int(10);
	return p;
}
int main3()
{
	//在堆区开辟数据
	int* p = func();

	cout << *p << endl;

	cout << *p << endl;

	system("pause");

	return 0;
}