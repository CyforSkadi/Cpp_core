#include<iostream>
using namespace std;

//���������ɳ���Ա�����ٺ��ͷ�

int* func()
{
	//����new�ؼ��� ���Խ����ݿ��ٵ����������ص�ַ
	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣������ݷ��ڶ���
	int* p = new int(10);
	return p;
}
int main3()
{
	//�ڶ�����������
	int* p = func();

	cout << *p << endl;

	cout << *p << endl;

	system("pause");

	return 0;
}