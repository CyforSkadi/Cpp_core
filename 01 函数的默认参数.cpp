#include<iostream>
using namespace std;

//������������ݾ��ô�������ݣ�û�д������Ĭ��ֵ
//�﷨�� ����ֵ���� ���������β� = Ĭ��ֵ��
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//ע������

//���ĳ��λ���Ѿ�����Ĭ�ϲ����������λ�ô������Ҷ�������Ĭ��ֵ
//int func2(int a, int b = 10, int c)
//{
//	return a + b + c;
//}

//������������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a = 10, int b = 10);

int func2(int a, int b)
{
	return a + b;
}

int main1()
{
	//cout << func(10,30) << endl;
	
	cout << func2() << endl;

	system("pause");

	return 0;
}