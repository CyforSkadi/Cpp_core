#include<iostream>
using namespace std;

//两种分类方式：
//按参数分为： 有参构造和无参构造（默认构造）
//按类型分为： 普通构造和拷贝构造


class Person2
{
public:
	//普通构造函数
	Person2()
	{
		cout << "Person的无参构造函数调用" << endl;
	}

	Person2(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}

	//拷贝构造函数
	Person2(const Person2 &p)
	{
		//将传入的人身上的所有属性拷贝到这身上
		age = p.age;
		cout << "Person拷贝构造函数调用" << endl;
	}

	~Person2()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int age;
};

void test11()
{
	//三种调用方式：
	//1、括号法
	//Person p1;//默认构造函数
	//Person p2(10);//有参构造函数
	//Person p3(p2);//拷贝构造函数
	
	//注意事项
	//调用默认构造函数时不要加()
	//Person p1();//编译器会默认为一个函数声明

	//cout << "p2的年龄为：" << p2.age << endl;
	//cout << "p3的年龄为：" << p3.age << endl;

	//2、显示法
	Person2 p1;
	Person2 p2 = Person2(10);//有参构造
	Person2 p3 = Person2(p2);//拷贝构造

	//Person(10);//匿名对象，当前行执行结束后系统会立即回收该对象
	//注意事项
	//不要用拷贝构造函数来初始化匿名对象
	//Person(p3);//编译器会认为是一个对象的声明

	//3、隐式转换法
	Person2 p4 = 10;//有参构造
	Person2 p5 = p4;//拷贝构造


}

int main2()
{
	test11();

	system("pause");
	return 0;
}