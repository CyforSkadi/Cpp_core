#include<iostream>
using namespace std;



int main5()
{
	int a = 10;

	int& ref = a;	//�Զ�ת��Ϊ int* const ref = &a; ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���

	ref = 20;	//�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	system("pause");

	return 0;
}