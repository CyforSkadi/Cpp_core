#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base的构造函数！" << endl;
	}

	~Base()
	{
		cout << "Base的析构函数!" << endl;

	}
};

class Son : public Base
{
public:
	Son()
	{
		cout << "Son的构造函数！" << endl;
	}

	~Son()
	{
		cout << "Son的析构函数!" << endl;

	}

};


void test06() {

	//Base b;

	//继承中构造和析构顺序：
	//先构造父类，再构造子类
	//先析构子类，再析构父类
	Son s;

}


int main4()
{

	test06();


	system("pause");

	return 0;
}