#include<iostream>
using namespace std;
#include<string>

//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student
{
	//���е����Ժ���Ϊͳ��Ϊ��Ա
	//����Ҳ�Ƴ�Ա���Ի��Ա����
	//��ΪҲ�Ƴ�Ա�������Ա����

public:
	string m_name;
	int m_id;

	void showStudent()
	{
		cout << "������" << m_name << " ѧ�ţ�" << m_id << endl;
	}

	//��������ֵ
	void setname(string name)
	{
		m_name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setid(int id)
	{
		m_id = id;
	}
};

int main2()
{
	Student s1;
	//s1.m_name = "����";
	//s1.m_id = 1;
	s1.setname("����");
	s1.setid(1);

	s1.showStudent();

	Student s2;
	s2.m_name = "����";
	s2.m_id = 2;

	s2.showStudent();

	system("pause");
	return 0;
}