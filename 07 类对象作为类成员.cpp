#include<iostream>
using namespace std;
#include<string>

class Phone
{
public:

	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone�Ĺ��캯������" << endl;
	}

	~Phone()
	{
		cout << "Phone��������������" << endl;
	}

	string m_PName;

};

class Person7
{
public:
	Person7(string name, string pname):m_Name(name),m_Phone(pname)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}

	~Person7()
	{
		cout << "Person��������������" << endl;
	}

	string m_Name;

	Phone m_Phone;
};

//�������������Ϊ�����Աʱ������ʱ�ȹ�������������ٹ��챾��������˳���෴

void test08()
{
	Person7 p("����", "��ΪP40pro");

	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
}

int main7()
{
	test08();


	system("pause");
	return 0;
}