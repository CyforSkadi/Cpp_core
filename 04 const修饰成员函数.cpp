#include<iostream>
using namespace std;

//常函数：
//成员函数后加const后我们称为这个函数为常函数
//常函数内不可以修改成员属性
//成员属性声明时加关键字mutable后，在常函数中依然可以修改

class Person4
{
public:
	void showPerson() const//在成员函数后加const修饰的是this指针，让指针指向的值也不可修改
	{
		//this指针本质是指针常量，指向不可修改
		//const Person4 * const this
		
		//this->m_A = 100;

		this->m_B = 100;
	 }

	void funct()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;//特殊变量，在常函数中也可以修改，加关键字mutable

};

void test06()
{
	Person4 p;
	p.showPerson();
}


//常对象：
//声明对象前加const称该对象为常对象
//常对象只能调用常函数

void test07()
{
	const Person4 p;
	//p.m_A = 100;
	p.m_B = 100;//特殊值在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	//p.funct();

}
int main()
{
	//test06();

	test07();

	system("pause");

	return 0;
}