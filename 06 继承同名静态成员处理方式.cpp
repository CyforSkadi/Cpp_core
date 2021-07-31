#include<iostream>
using namespace std;

class Base6
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}

	static void func(int a )
	{
		cout << "Base - static void func(int a)" << endl;
	}
};
int Base6::m_A = 100;

class Son6 :public Base6
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()" << endl;
	}

};
int Son6::m_A = 200;

//ͬ����̬��Ա����
void test09()
{
	//ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son6 s;
	cout << "Son m_A = " << s.m_A << endl;
	cout << "Base m_A = " << s.Base6::m_A << endl;

	//ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	cout << "Son m_A = " << Son6::m_A << endl;
	cout << "Base m_A = " << Son6::Base6::m_A << endl;//��һ��::����ͨ���������ʣ��ڶ���::������ʸ�����������

}

//ͬ����̬��Ա����
void test10()
{
	//ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son6 s;
	s.func();
	s.Base6::func();

	//ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	Son6::func();
	Son6::Base6::func();

	//s.func(100);//��������г��ֺ͸���ͬ����Ա�����������ͬ����Ա���������ظ���������ͬ����Ա����
	s.Base6::func(100);//������ʸ����б����ص�ͬ����Ա������Ҫ��������

}

int main6()
{
	
	//test09();
	test10();
	system("pause");

	return 0;
}