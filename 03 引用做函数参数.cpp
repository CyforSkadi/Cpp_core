#include<iostream>
using namespace std;

//1��ֵ����
void myswap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2����ַ����
void myswap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3�����ô���
void myswap3(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main3()
{
	int a = 10;
	int b = 20;

	//myswap1(a, b);	//ֵ���ݣ��ββ�����ʵ��

	//myswap2(&a, &b);	//��ַ���ݣ��β�����ʵ��

	myswap3(a, b);	//���ô��ݣ��β�����ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}