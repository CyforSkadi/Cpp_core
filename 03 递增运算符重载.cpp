#include<iostream>
using namespace std;

//�Զ������ͱ���
class MyInteger
{
	friend ostream& operator<<(ostream &cout, MyInteger myint);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//����ǰ��++����� ����������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}

	//���غ���++����� ����ֵ����Ϊ������ؾֲ��������ã�����ִ�����ֲ����󽫱��ͷ��޷��ٷ���
	MyInteger operator++(int)//int ����ռλ������������������ǰ�úͺ��õ���
	{
		//�ȼ�¼��ǰ������ٵ�������󷵻ص���ǰ���
		MyInteger temp = *this;
		m_Num++;
		return temp;

	}

private:
	int m_Num;

};

//�������������
ostream& operator<<(ostream &cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test03()
{
	MyInteger myint;

	cout << ++(++myint) << endl;
	cout << myint << endl;

}

void test04()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;

}

//�ܽ᣺ ǰ�õ����������ã����õ�������ֵ


int main3()
{
	//test03();
	test04();

	system("pause");

	return 0;
}