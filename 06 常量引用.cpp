#include<iostream>
using namespace std;

//��������ʹ�ó����������βΣ���ֹ�����
void showvalue(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}

int main()
{
	
	const int& ref = 10;	//�������������޸�Ϊ int temp = 10;const int& ref =temp;

	int a = 100;
	showvalue(a);

	cout << "a = " << a << endl;

	system("pause");

	return 0;
}