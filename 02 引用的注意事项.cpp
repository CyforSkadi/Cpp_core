#include<iostream>
using namespace std;



int main2()
{
	int a = 10;

	//���ñ����ʼ��
	//int &b;	//���󣬱����ʼ��
	int &b = a;

	//�����ڳ�ʼ���󣬲����Ըı�
	int c = 20;
	b = c;	//��ֵ�����Ǹ�������

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}