#include<iostream>
using namespace std;
#include<string>

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person9
{
public:

	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;//��̬��Ա�������ܷ��ʷǾ�̬��Ա����

		cout << "static void func�ĵ���" << endl;
	}

	static int m_A;
	int m_B;

	//��̬��Ա����Ҳ�з���Ȩ��
private:
	static void func2()
	{
		cout << "static void func2�ĵ���" << endl;
	}

};

int Person9::m_A = 0;


void test12()
{
	//1��ͨ���������
	Person9 p;
	p.func();
	//2��ͨ����������
	Person9::func();

	//Person9::func2();//������ʲ���˽�о�̬��Ա����
}

int main()
{
	test12();

	system("pause");
	return 0;
}