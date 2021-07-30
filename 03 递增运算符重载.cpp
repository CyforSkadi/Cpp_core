#include<iostream>
using namespace std;

//自定义整型变量
class MyInteger
{
	friend ostream& operator<<(ostream &cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置++运算符 返回引用是为了一直对一个数据进行递增操作
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}

	//重载后置++运算符 返回值是因为如果返回局部对象引用，函数执行完后局部对象将被释放无法再访问
	MyInteger operator++(int)//int 代表占位参数，可以用于区分前置和后置递增
	{
		//先记录当前结果，再递增，最后返回递增前结果
		MyInteger temp = *this;
		m_Num++;
		return temp;

	}

private:
	int m_Num;

};

//重载左移运算符
ostream& operator<<(ostream &cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test03()
{
	MyInteger myint;

	cout << ++(++myint) << endl;
	cout << myint << endl;

}

void test04()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;

}

//总结： 前置递增返回引用，后置递增返回值


int main3()
{
	//test03();
	test04();

	system("pause");

	return 0;
}