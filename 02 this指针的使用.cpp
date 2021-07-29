#include<iostream>
using namespace std;

class Person2
{
public:
	Person2(int age)
	{
		//this指针指向被调用成员函数所属的对象
		this->age = age;
	}

	Person2& PersonAddAge(Person2 &p)//引用方式返回才能返回本体，值传递返回会调用拷贝构造
	{
		this->age += p.age;

		return *this;
	}

	int age;
};

//this指针的用途：
//1、当形参和成员变量同名时，可用this指针来区分
void test03()
{
	Person2 p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}


//2、在类的非静态成员函数中返回对象本身，可使用return *this
void test04()
{
	Person2 p1(10);

	Person2 p2(10);

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2的年龄为：" << p2.age << endl;

}


int main2()
{
	//test03();

	test04();

	system("pause");

	return 0;
}