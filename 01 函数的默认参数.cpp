#include<iostream>
using namespace std;

//如果传入了数据就用传入的数据，没有传入就用默认值
//语法： 返回值类型 函数名（形参 = 默认值）
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//注意事项

//如果某个位置已经有了默认参数，从这个位置从左往右都必须有默认值
//int func2(int a, int b = 10, int c)
//{
//	return a + b + c;
//}

//函数的声明和实现只能有一个有默认参数
int func2(int a = 10, int b = 10);

int func2(int a, int b)
{
	return a + b;
}

int main1()
{
	//cout << func(10,30) << endl;
	
	cout << func2() << endl;

	system("pause");

	return 0;
}