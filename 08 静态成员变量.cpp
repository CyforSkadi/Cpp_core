#include<iostream>
using namespace std;
#include<string>

//静态成员变量
//1、所有对象共享同一份数据
//2、在编译阶段分配内存
//3、类内声明，类外初始化

class Person8 
{
public:


	static int m_A;

	//静态成员变量也有访问权限
private:
	static int m_B;

};

int Person8::m_A = 100;
int Person8::m_B = 200;

//void test09()
//{
//	Person8 p;
//	cout << p.m_A << endl;
//
//	Person8 p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//
//}

void test10()
{
	//静态成员变量两种访问方式
	//1、通过对象进行访问
	Person8 p;
	cout << p.m_A << endl;
	//2、通过类名直接访问
	cout << Person8::m_A << endl;
	//cout << Person8::m_B << endl;

}

int main8()
{
	//test09();
	test10();

	system("pause");
	return 0;
}