#include<iostream>
using namespace std;

//�̳е��﷨��class ���� : �̳з�ʽ ����

//�̳з�ʽһ�������֣�
//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//���๫��Ȩ�޳�Ա �����������ǹ���Ȩ��
		m_B = 10;//���ౣ��Ȩ�޳�Ա �����������Ǳ���Ȩ��
		//m_C = 10;//����˽��Ȩ�޳�Ա �����޷�����
	}
};

void test02()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//����Ȩ�������޷�����
	//s1.m_C = 100;//˽��Ȩ���޷�����

}
//�����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;//���๫��Ȩ�޳�Ա ��������Ϊ����Ȩ��
		m_B = 100;//���ౣ��Ȩ�޳�Ա ��������Ϊ����Ȩ��
		//m_C = 100;//����˽��Ȩ�޳�Ա �����޷�����
	}
};

void test03()
{
	Son2 s2;
	//s2.m_A = 100;//����Ȩ�����ⲻ�ɷ���
	//s2.m_B = 100;//����Ȩ�����ⲻ�ɷ���
	//s2.m_C = 100;//˽��Ȩ���޷�����
}

//˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;//���๫��Ȩ�޳�Ա ��������Ϊ˽��Ȩ��
		m_B = 100;//���๫��Ȩ�޳�Ա ��������Ϊ˽��Ȩ��
		//m_C = 100;//����˽��Ȩ�޳�Ա �����޷�����
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 100;
		//m_B = 100;
		//Son3�о�Ϊ˽��Ȩ�ޣ������޷�����
	}
};


void test04()
{
	Son3 s3;
	//s3.m_A = 1000;
	//s3.m_B = 1000;
	//s3.m_C = 1000;

}


int main2()
{

	


	system("pause");

	return 0;
}