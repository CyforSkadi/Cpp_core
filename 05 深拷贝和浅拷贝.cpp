#include<iostream>
using namespace std;

//����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������


class Person5
{
public:
	Person5()
	{
		cout << "person��Ĭ�Ϲ��캯������" << endl;
	}

	Person5(int age,int height)
	{
		cout << "person���вι��캯������" << endl;
		m_Age = age;
		m_Height = new int(height);
	}

	//�Լ�ʵ�ֿ������캯�������ǳ���������Ķ����ڴ��ظ��ͷŵ�����
	Person5(const Person5 &p)
	{
		cout << "Person�Ŀ������캯���ĵ���" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//������Ĭ��ʵ��ǳ����
		m_Height = new int(*p.m_Height);//���

	}

	~Person5()
	{
		//����������Ҫ���������ٵ��������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person��������������" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test06()
{
	Person5 p1(18,160);
	cout << "p1������Ϊ��" << p1.m_Age <<" ���Ϊ��" << *p1.m_Height << endl;

	Person5 p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age <<" ���Ϊ��" << *p2.m_Height << endl;

}

int main5()
{
	test06();


	system("pause");
	return 0;
}