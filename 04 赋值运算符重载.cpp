#include<iostream>
using namespace std;

//c++编译器至少给一个类添加4个函数
//1、默认构造函数(无参，函数体为空)
//2、默认析构函数(无参，函数体为空)
//3、默认拷贝构造函数，对属性进行值拷贝
//4、赋值运算符 operator=, 对属性进行值拷贝

//如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题

class Person4
{
public:

	Person4(int age)
	{
		m_Age = new int(age);
	}

	~Person4()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	//重载=
	Person4& operator=(Person4 &p)
	{
		//编译器提供的是浅拷贝
		//m_Age = p.m_Age;

		//应该先判断是否有属性在堆区，如果有先释放干净，再深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*p.m_Age);

		return *this;

	}

	int *m_Age;
};

void test05()
{
	Person4 p1(18);

	Person4 p2(20);

	Person4 p3(30);

	p3 = p2 = p1;

	cout << "p1的年龄为：" << *p1.m_Age << endl;
	cout << "p2的年龄为：" << *p2.m_Age << endl;
	cout << "p3的年龄为：" << *p3.m_Age << endl;

}

int main4()
{
	test05();

	system("pause");

	return 0;
}