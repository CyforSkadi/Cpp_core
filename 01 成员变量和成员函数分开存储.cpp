#include<iostream>
using namespace std;

//ֻ�зǾ�̬��Ա������������Ķ�����

class Person1
{
	int m_A;//�Ǿ�̬��Ա���� ������Ķ�����

	static int m_B;//��̬��Ա���� ��������Ķ�����

	void func(){}//�Ǿ�̬��Ա���� ��������Ķ�����

	static void func2(){}//��̬��Ա���� ��������Ķ�����

};

int Person1::m_B = 10;


void test01()
{
	Person1 p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//���������ÿ���ն������һ���ֽڿռ䣬Ϊ�����ֿն���ռ�ڴ��λ�ã�ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
	Person1 p;
	
	cout << "size of p = " << sizeof(p) << endl;
}

int main1()
{

	//test01();
	test02();

	system("pause");

	return 0;
}