#include<iostream>
using namespace std;

//继承的语法：class 子类 : 继承方式 父类

//继承方式一共有三种：
//公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//父类公共权限成员 到子类中仍是公共权限
		m_B = 10;//父类保护权限成员 到子类中仍是保护权限
		//m_C = 10;//父类私有权限成员 子类无法访问
	}
};

void test02()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//保护权限类外无法访问
	//s1.m_C = 100;//私有权限无法访问

}
//保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;//父类公共权限成员 到子类中为保护权限
		m_B = 100;//父类保护权限成员 到子类中为保护权限
		//m_C = 100;//父类私有权限成员 子类无法访问
	}
};

void test03()
{
	Son2 s2;
	//s2.m_A = 100;//保护权限类外不可访问
	//s2.m_B = 100;//保护权限类外不可访问
	//s2.m_C = 100;//私有权限无法访问
}

//私有继承
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;//父类公共权限成员 到子类中为私有权限
		m_B = 100;//父类公共权限成员 到子类中为私有权限
		//m_C = 100;//父类私有权限成员 子类无法访问
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 100;
		//m_B = 100;
		//Son3中均为私有权限，子类无法访问
	}
};


void test04()
{
	Son3 s3;
	//s3.m_A = 1000;
	//s3.m_B = 1000;
	//s3.m_C = 1000;

}


int main2()
{

	


	system("pause");

	return 0;
}