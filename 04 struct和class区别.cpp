#include<iostream>
using namespace std;
#include<string>

//����
//struct Ĭ��Ȩ��Ϊ����
//class Ĭ��Ȩ��Ϊ˽��

class C1
{
	int m_a;//Ĭ��Ȩ��Ϊ˽��
};

struct C2
{
	int m_a;//Ĭ��Ȩ��Ϊ����
};

int main4()
{
	C1 c1;
	//c1.m_a = 100;

	C2 c2;
	c2.m_a = 100;

	system("pause");
	return 0;
}