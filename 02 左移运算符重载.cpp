#include<iostream>
using namespace std;


class Person2
{

	friend ostream& operator<<(ostream &cout, Person2 &p);

public:
	Person2(int a, int b)
	{
		m_A = a;
		m_B = b;

	}

private:


	//��Ա��������<<
	//һ�㲻�����ó�Ա��������<<
	//void operator<<(cout)
	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ�������<<
ostream& operator<<(ostream &cout, Person2 &p)//���� operator<<(cout,p) �򻯳�cout << p
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;

	return cout;
}

void test02()
{
	Person2 p(10, 10);

	cout << p << endl;

}

//�ܽ᣺������������������Ԫ����ʵ������Զ�����������


int main2()
{
	
	test02();

	system("pause");

	return 0;
}