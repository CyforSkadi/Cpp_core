#include<iostream>
using namespace std;

class Base5
{
public:
	Base5()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base - func()����" << endl;

	}

	void func(int a )
	{
		cout << "Base - func(int a )����" << endl;

	}

	int m_A;

};

class Son5 :public Base5
{
public:
	Son5()
	{
		m_A = 200;

	}

	void func()
	{
		cout << "Son - func()����" << endl;

	}

	
	int m_A;

};

//ͬ����Ա���Դ���
void test07()
{
	Son5 s;
	cout << "Son��m_A = " << s.m_A << endl;
	//���ͨ�����������ʸ����ͬ����Ա����Ҫ��������
	cout << "Base��m_A = " << s.Base5::m_A << endl;
}

//ͬ����Ա��������
void test08()
{
	Son5 s;
	s.func();
	s.Base5::func();

	//s.func(100);//��������г��ֺ͸���ͬ����Ա�����������ͬ����Ա���������ظ���������ͬ����Ա����
	s.Base5::func(100);//������ʸ����б����ص�ͬ����Ա������Ҫ��������


}

int main5()
{

	//test07();
	test08();

	system("pause");

	return 0;
}