#include<iostream>
using namespace std;
#include<string>

//��̬��Ա����
//1�����ж�����ͬһ������
//2���ڱ���׶η����ڴ�
//3�����������������ʼ��

class Person8 
{
public:


	static int m_A;

	//��̬��Ա����Ҳ�з���Ȩ��
private:
	static int m_B;

};

int Person8::m_A = 100;
int Person8::m_B = 200;

//void test09()
//{
//	Person8 p;
//	cout << p.m_A << endl;
//
//	Person8 p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//
//}

void test10()
{
	//��̬��Ա�������ַ��ʷ�ʽ
	//1��ͨ��������з���
	Person8 p;
	cout << p.m_A << endl;
	//2��ͨ������ֱ�ӷ���
	cout << Person8::m_A << endl;
	//cout << Person8::m_B << endl;

}

int main8()
{
	//test09();
	test10();

	system("pause");
	return 0;
}