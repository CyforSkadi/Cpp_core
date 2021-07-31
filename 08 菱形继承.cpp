#include<iostream>
using namespace std;

//菱形继承概念：
//两个派生类继承同一个基类
//又有某个类同时继承者两个派生类

class Animal
{
public:
	int m_Age;
};

//利用虚继承解决菱形继承的问题
//继承前加上关键字virtual
//Animal类为虚基类

class Sheep:virtual public Animal{};

class Tuo:virtual public Animal{};

class SheepTuo:public Sheep,public Tuo{};

void test12()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//当菱形继承时，两个父类拥有相同成员属性，需要加作用域区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

	//这份数据只要有一份，菱形继承导致数据有两份，浪费了资源

}


int main()
{
	test12();
	
	system("pause");

	return 0;
}