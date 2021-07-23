#include<iostream>
using namespace std;

//1、值传递
void myswap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2、地址传递
void myswap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3、引用传递
void myswap3(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main3()
{
	int a = 10;
	int b = 20;

	//myswap1(a, b);	//值传递，形参不修饰实参

	//myswap2(&a, &b);	//地址传递，形参修饰实参

	myswap3(a, b);	//引用传递，形参修饰实参

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}