#include<iostream>
using namespace std;

//��Ҫ���ؾֲ�����������
int& test1()
{
	int a = 10;		//�ֲ����������ջ��
	return a;
}

//�����ĵ��ÿ�����Ϊ��ֵ
int& test2()
{
	static int a = 10;	//��̬���������ȫ����
	return a;
}

int main4()
{
	int &ref = test1();
	cout << "ref = " << ref << endl;	//��һ�ν��������
	cout << "ref = " << ref << endl;	//�ڶ��ν������a���ڴ��Ѿ����ͷ�

	int &ref2 = test2();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test2() = 100;	//�����������ֵΪ���ã��������ÿ�����Ϊ��ֵ
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}