#include<iostream>
using namespace std;



class Person3
{
public:
	Person3()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}

	Person3(int age)
	{
		cout << "Person�вι��캯������" << endl;
		m_Age = age;
	}

	Person3(const Person3 &p)
	{
		cout << "Person�������캯������" << endl;
		m_Age = p.m_Age;
	}

	~Person3()
	{
		cout << "Person������������" << endl;
	}

	int m_Age;
};

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person3 p1(20);
	Person3 p2(p1);

	cout << "p2�����䣺" << p2.m_Age << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person3 p)
{
	
}

void test02()
{
	Person3 p;
	doWork(p);
}

//3����ֵ��ʽ���ؾֲ�����
Person3 doWork2()
{
	Person3 p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03()
{
	Person3 p = doWork2();
	cout << (int*)&p << endl;
}



int main3()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}