#include<iostream>
using namespace std;

//Ĭ������£�c++���������ٸ�һ�������3������
//1��Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
//2��Ĭ����������(�޲Σ�������Ϊ��)
//3��Ĭ�Ͽ������캯���������Խ���ֵ����

//���캯�����ù������£�
//����û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
//����û����忽�����캯����c++�������ṩ�������캯��

class Person4
{
public:
	//Person4()
	//{
	//	cout << "Person��Ĭ�Ϲ��캯������" << endl;
	//}

	//Person4(int age)
	//{
	//	cout << "Person���вι��캯������" << endl;
	//	m_Age = age;
	//}

	Person4(const Person4 &p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;

	}

	~Person4()
	{
		cout << "Person��������������" << endl;
	}

	int m_Age;
};

//void test04()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//
//}

void test05()
{
	//Person4 p(28);

	//Person4 p2(p);
}

int main4()
{
	
	test05();

	system("pause");
	return 0;
}