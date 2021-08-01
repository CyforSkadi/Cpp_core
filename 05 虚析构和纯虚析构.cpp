#include<iostream>
using namespace std;
#include<string>

//总结：
//1. 虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
//2. 如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//3. 拥有纯虚析构函数的类也属于抽象类

class Animal1
{
public:
	
	Animal1()
	{
		cout << "Animal构造函数调用" << endl;
	}

	//利用虚析构可以解决 父类指针释放子类对象释放不干净的问题
	/*virtual ~Animal1()
	{
		cout << "Animal虚析构函数调用" << endl;
	}*/

	//纯虚析构 需要声明和实现
	//有了纯虚析构后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal1() = 0;

	virtual void speak() = 0;
};

Animal1:: ~Animal1()
{
	cout << "纯虚析构函数的调用" << endl;
}

class Cat1 :public Animal1
{
public:

	Cat1(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}

	void speak()
	{
		cout << *m_Name << "小猫在说话" << endl;

	}

	~Cat1()
	{
		if (m_Name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;

		}
	}

	string *m_Name;
};

void test07()
{
	Animal1* animal = new Cat1("Tom");
	animal->speak();
	//父类指针在析构时不会调用子类中析构函数，导致子类如果有堆区属性，会出现内存泄漏
	delete animal;
}


int main5()
{

	test07();

	system("pause");

	return 0;

}