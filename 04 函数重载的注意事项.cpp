#include<iostream>
using namespace std;

//������Ϊ��������
void func(int &a)
{
	cout << "func(int &a)�ĵ���" << endl;
}

void func(const int &a)
{
	cout << "func(const int &a)�ĵ���" << endl;
}
//����������Ĭ�ϲ���
void func2(int a,int b = 10)
{
	cout << "func2(int a)�ĵ���" << endl;
}

void func2(int a)
{
	cout << "func2(int a)�ĵ���" << endl;
}


int main()
{
	int a = 10;
	func(a);
	func(10);

	//func2(10);	//����������Ĭ�ϲ������ֶ�����


	system("pause");

	return 0;
}