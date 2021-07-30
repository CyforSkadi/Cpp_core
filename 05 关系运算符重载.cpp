#include<iostream>
using namespace std;
#include<string>
//作用：重载关系运算符，可以让两个自定义类型对象进行对比操作

class Person5
{
public:
	Person5(string name,int age)
	{
		m_Name = name;
		m_Age = age;

	}

	//重载 ==
	bool operator==(Person5 &p)
	{
		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

	//重载 !=
	bool operator!=(Person5 &p)
	{
		if (this->m_Name != p.m_Name || this->m_Age != p.m_Age)
		{
			return true;

		}
		return false;

	}

	string m_Name;
	int m_Age;

};

void test06()
{
	Person5 p1("Tom", 18);
	Person5 p2("Jerry", 18);

	if (p1 == p2)
	{
		cout << "p1和p2相等" << endl;

	}
	else
	{
		cout << "p1和p2不相等" << endl;

	}

	if (p1 != p2)
	{
		cout << "p1和p2不相等" << endl;

	}
	else
	{
		cout << "p1和p2相等" << endl;

	}

}


int main5()
{
	test06();

	system("pause");

	return 0;
}