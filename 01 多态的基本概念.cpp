#include<iostream>
using namespace std;

//多态分为两类
//静态多态 : 函数重载 和 运算符重载属于静态多态，复用函数名
//动态多态 : 派生类和虚函数实现运行时多态

//静态多态和动态多态区别：
//静态多态的函数地址早绑定 - 编译阶段确定函数地址
//动态多态的函数地址晚绑定 - 运行阶段确定函数地址

//动态多态满足条件：
//1、有继承关系
//2、子类重写父类的虚函数

//动态多态使用：
//父类的指针或引用执行于类对象


class Animal
{
public:
	//虚函数
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}

};

class Cat: public Animal
{
public:
	//重写：函数返回值类型 函数名 参数列表 完全相同
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog:public Animal
{
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//地址早绑定，在编译阶段确定函数地址
//如果要执行猫说话，函数地址需要在运行阶段绑定（地址晚绑定）
void doSpeak(Animal &animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);

}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main1()
{

	//test01();
	test02();

	system("pause");

	return 0;
}