#include<iostream>
using namespace std;

//��������
//��Ա�������const�����ǳ�Ϊ�������Ϊ������
//�������ڲ������޸ĳ�Ա����
//��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�

class Person4
{
public:
	void showPerson() const//�ڳ�Ա�������const���ε���thisָ�룬��ָ��ָ���ֵҲ�����޸�
	{
		//thisָ�뱾����ָ�볣����ָ�򲻿��޸�
		//const Person4 * const this
		
		//this->m_A = 100;

		this->m_B = 100;
	 }

	void funct()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;//����������ڳ�������Ҳ�����޸ģ��ӹؼ���mutable

};

void test06()
{
	Person4 p;
	p.showPerson();
}


//������
//��������ǰ��const�Ƹö���Ϊ������
//������ֻ�ܵ��ó�����

void test07()
{
	const Person4 p;
	//p.m_A = 100;
	p.m_B = 100;//����ֵ�ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.funct();

}
int main()
{
	//test06();

	test07();

	system("pause");

	return 0;
}