#include<iostream>
using namespace std;

//���ַ��෽ʽ��
//��������Ϊ�� �вι�����޲ι��죨Ĭ�Ϲ��죩
//�����ͷ�Ϊ�� ��ͨ����Ϳ�������


class Person2
{
public:
	//��ͨ���캯��
	Person2()
	{
		cout << "Person���޲ι��캯������" << endl;
	}

	Person2(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}

	//�������캯��
	Person2(const Person2 &p)
	{
		//������������ϵ��������Կ�����������
		age = p.age;
		cout << "Person�������캯������" << endl;
	}

	~Person2()
	{
		cout << "Person��������������" << endl;
	}
	int age;
};

void test11()
{
	//���ֵ��÷�ʽ��
	//1�����ŷ�
	//Person p1;//Ĭ�Ϲ��캯��
	//Person p2(10);//�вι��캯��
	//Person p3(p2);//�������캯��
	
	//ע������
	//����Ĭ�Ϲ��캯��ʱ��Ҫ��()
	//Person p1();//��������Ĭ��Ϊһ����������

	//cout << "p2������Ϊ��" << p2.age << endl;
	//cout << "p3������Ϊ��" << p3.age << endl;

	//2����ʾ��
	Person2 p1;
	Person2 p2 = Person2(10);//�вι���
	Person2 p3 = Person2(p2);//��������

	//Person(10);//�������󣬵�ǰ��ִ�н�����ϵͳ���������ոö���
	//ע������
	//��Ҫ�ÿ������캯������ʼ����������
	//Person(p3);//����������Ϊ��һ�����������

	//3����ʽת����
	Person2 p4 = 10;//�вι���
	Person2 p5 = p4;//��������


}

int main2()
{
	test11();

	system("pause");
	return 0;
}