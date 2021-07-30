#include<iostream>
using namespace std;


class Person2
{

	friend ostream& operator<<(ostream &cout, Person2 &p);

public:
	Person2(int a, int b)
	{
		m_A = a;
		m_B = b;

	}

private:


	//成员函数重载<<
	//一般不会利用成员函数重载<<
	//void operator<<(cout)
	int m_A;
	int m_B;
};

//只能利用全局函数重载<<
ostream& operator<<(ostream &cout, Person2 &p)//本质 operator<<(cout,p) 简化成cout << p
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;

	return cout;
}

void test02()
{
	Person2 p(10, 10);

	cout << p << endl;

}

//总结：重载左移运算符配合友元可以实现输出自定义数据类型


int main2()
{
	
	test02();

	system("pause");

	return 0;
}