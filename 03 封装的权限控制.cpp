#include<iostream>
using namespace std;
#include<string>

//访问权限有三种：
//public 公共权限		成员在类内可以访问，类外也可以访问
//protected 保护权限	成员在类内可以访问，类外不可以访问，子类可以访问父类的保护内容
//private 私有权限		成员在类内可以访问，类外不可以访问，子类不能访问父类的私有内容

class Person1
{
public:
	string m_name;

protected:
	string m_car;

private:
	int m_password;

public:
	void func()
	{
		m_name = "张三";
		m_car = "拖拉机";
		m_password = 123456;
	}
};

int main3()
{
	Person1 p1;
	p1.m_name = "李四";
	//p1.m_car = "奔驰";//保护权限内容在类外访问不到
	//p1.m_password = 232323;//私有权限内容在类外访问不到

	p1.func();

	system("pause");
	return 0;
}