#include<iostream>
using namespace std;

//ջ�������ɱ����������ٺ��ͷ�,��ź����Ĳ���ֵ,�ֲ�������
//ע�������Ҫ���ؾֲ������ĵ�ַ

int* func(int b)	//�β����ݴ����ջ��
{
	b = 100;
	int a = 10;//�ֲ����������ջ����ջ�������ں���ִ����ɺ��Զ��ͷ�
	return &a;
}

int main2()
{
	int*p = func(1);

	cout << *p << endl;//��һ�δ�ӡ��ȷ����Ϊ���������˱���

	cout << *p << endl;//�ڶ������ݲ��ٱ���

	system("pause");

	return 0;
}