#include<iostream>
using namespace std;
#include<string>

//�ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

class Person
{
public:
	//��������
	void setname(string name)
	{
		m_name = name;
	}

	//��ȡ����
	string getname()
	{
		return m_name;
	}

	//��ȡ���� �ɶ���д�������޸ı�����0~150��Χ��
	int getage()
	{
		//int m_age = 0;
		return m_age;
	}

	//��������
	void setage(int age)
	{
		if (age < 0 || age>150)
		{
			m_age = 0;
			cout << "��������" << endl;
			return;
		}
		m_age = age;
	}

	//��������
	void setlover(string lover)
	{
		m_lover = lover;
	}

private:
	string m_name;//���� �ɶ���д

	int m_age;//���� ֻ��

	string m_lover;//���� ֻд
};
int main5()
{
	Person p;

	p.setname("����");
	cout << "����Ϊ��" << p.getname() << endl;

	p.setage(1000);
	cout << "����Ϊ��" << p.getage() << endl;


	system("pause");
	return 0;
}