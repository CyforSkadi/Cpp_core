#include<iostream>
using namespace std;


int* func1()
{
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);	//����ֵΪ10
	return p;
}

void test1()
{
	int *p = func1();
	cout << *p << endl;
	cout << *p << endl;
	//���ùؼ���delete�ͷ�
	delete p;
	//cout << *p << endl;	//�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ�����

}

//�ڶ�����������
void test2()
{
	int* arr = new int[10];	//����Ԫ�ظ���Ϊ10
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

}

int main()
{
	test1();

	test2();

	system("pause");

	return 0;
}