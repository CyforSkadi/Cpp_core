#include<iostream>
using namespace std;

//常量引用使用场景：修饰形参，防止误操作
void showvalue(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}

int main()
{
	
	const int& ref = 10;	//编译器将代码修改为 int temp = 10;const int& ref =temp;

	int a = 100;
	showvalue(a);

	cout << "a = " << a << endl;

	system("pause");

	return 0;
}