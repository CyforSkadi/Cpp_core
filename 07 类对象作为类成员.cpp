#include<iostream>
using namespace std;
#include<string>

class Phone
{
public:

	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone的构造函数调用" << endl;
	}

	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}

	string m_PName;

};

class Person7
{
public:
	Person7(string name, string pname):m_Name(name),m_Phone(pname)
	{
		cout << "Person的构造函数调用" << endl;
	}

	~Person7()
	{
		cout << "Person的析构函数调用" << endl;
	}

	string m_Name;

	Phone m_Phone;
};

//当其他类对象作为本类成员时，构造时先构造其他类对象，再构造本身，析构的顺序相反

void test08()
{
	Person7 p("张三", "华为P40pro");

	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main7()
{
	test08();


	system("pause");
	return 0;
}