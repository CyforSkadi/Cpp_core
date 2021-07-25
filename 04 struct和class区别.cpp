#include<iostream>
using namespace std;
#include<string>

//区别：
//struct 默认权限为公共
//class 默认权限为私有

class C1
{
	int m_a;//默认权限为私有
};

struct C2
{
	int m_a;//默认权限为公共
};

int main4()
{
	C1 c1;
	//c1.m_a = 100;

	C2 c2;
	c2.m_a = 100;

	system("pause");
	return 0;
}