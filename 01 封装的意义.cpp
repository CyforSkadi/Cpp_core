#include<iostream>
using namespace std;

const double PI = 3.14;

//���һ��Բ�࣬��Բ���ܳ�
//�﷨�� class ����{ ����Ȩ�ޣ� ���� / ��Ϊ };
class Circle1
{
	//����Ȩ��
	//����Ȩ��
public:
	//����
	//�뾶
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI*m_r;
	}
};



int main1()
{
	//ͨ��Բ�ഴ��һ�������Բ������
	Circle1 c1;
	//����������Խ��и�ֵ
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

	

	system("pause");
	return 0;
}