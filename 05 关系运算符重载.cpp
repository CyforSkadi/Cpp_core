#include<iostream>
using namespace std;
#include<string>
//���ã����ع�ϵ������������������Զ������Ͷ�����жԱȲ���

class Person5
{
public:
	Person5(string name,int age)
	{
		m_Name = name;
		m_Age = age;

	}

	//���� ==
	bool operator==(Person5 &p)
	{
		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

	//���� !=
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
		cout << "p1��p2���" << endl;

	}
	else
	{
		cout << "p1��p2�����" << endl;

	}

	if (p1 != p2)
	{
		cout << "p1��p2�����" << endl;

	}
	else
	{
		cout << "p1��p2���" << endl;

	}

}


int main5()
{
	test06();

	system("pause");

	return 0;
}