#include<iostream>
using namespace std;
#include<string>

class Base
{
public:
	//���麯���﷨��virtual ����ֵ���� ������ �������б� = 0;
	//���������˴��麯���������Ҳ��Ϊ������

	//�������ص㣺
	//1���޷�ʵ��������
	//2�����������д�������еĴ��麯��������Ҳ���ڳ�����
	virtual void func() = 0;

};

class Son :public Base
{
public:
	virtual void func() 
	{
		cout << "func()��������" << endl;
	};
};


void test05()
{
	
	//Base b;//�޷�ʵ��������
	//new Base;//�޷�ʵ��������

	//Son s;//���������д�������еĴ��麯��������Ҳ���ڳ�����

	Base* base = new Son;
	base->func();

	delete base;

}



int main3()
{

	test05();

	system("pause");

	return 0;

}