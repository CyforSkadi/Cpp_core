#include<iostream>
using namespace std;

//c++���������ٸ�һ�������4������
//1��Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
//2��Ĭ����������(�޲Σ�������Ϊ��)
//3��Ĭ�Ͽ������캯���������Խ���ֵ����
//4����ֵ����� operator=, �����Խ���ֵ����

//�������������ָ�����������ֵ����ʱҲ�������ǳ��������

class Person4
{
public:

	Person4(int age)
	{
		m_Age = new int(age);
	}

	~Person4()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	//����=
	Person4& operator=(Person4 &p)
	{
		//�������ṩ����ǳ����
		//m_Age = p.m_Age;

		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ��������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//���
		m_Age = new int(*p.m_Age);

		return *this;

	}

	int *m_Age;
};

void test05()
{
	Person4 p1(18);

	Person4 p2(20);

	Person4 p3(30);

	p3 = p2 = p1;

	cout << "p1������Ϊ��" << *p1.m_Age << endl;
	cout << "p2������Ϊ��" << *p2.m_Age << endl;
	cout << "p3������Ϊ��" << *p3.m_Age << endl;

}

int main4()
{
	test05();

	system("pause");

	return 0;
}