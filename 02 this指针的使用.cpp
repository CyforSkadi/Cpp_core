#include<iostream>
using namespace std;

class Person2
{
public:
	Person2(int age)
	{
		//thisָ��ָ�򱻵��ó�Ա���������Ķ���
		this->age = age;
	}

	Person2& PersonAddAge(Person2 &p)//���÷�ʽ���ز��ܷ��ر��壬ֵ���ݷ��ػ���ÿ�������
	{
		this->age += p.age;

		return *this;
	}

	int age;
};

//thisָ�����;��
//1�����βκͳ�Ա����ͬ��ʱ������thisָ��������
void test03()
{
	Person2 p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}


//2������ķǾ�̬��Ա�����з��ض�������ʹ��return *this
void test04()
{
	Person2 p1(10);

	Person2 p2(10);

	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2������Ϊ��" << p2.age << endl;

}


int main2()
{
	//test03();

	test04();

	system("pause");

	return 0;
}