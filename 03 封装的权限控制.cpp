#include<iostream>
using namespace std;
#include<string>

//����Ȩ�������֣�
//public ����Ȩ��		��Ա�����ڿ��Է��ʣ�����Ҳ���Է���
//protected ����Ȩ��	��Ա�����ڿ��Է��ʣ����ⲻ���Է��ʣ�������Է��ʸ���ı�������
//private ˽��Ȩ��		��Ա�����ڿ��Է��ʣ����ⲻ���Է��ʣ����಻�ܷ��ʸ����˽������

class Person1
{
public:
	string m_name;

protected:
	string m_car;

private:
	int m_password;

public:
	void func()
	{
		m_name = "����";
		m_car = "������";
		m_password = 123456;
	}
};

int main3()
{
	Person1 p1;
	p1.m_name = "����";
	//p1.m_car = "����";//����Ȩ��������������ʲ���
	//p1.m_password = 232323;//˽��Ȩ��������������ʲ���

	p1.func();

	system("pause");
	return 0;
}