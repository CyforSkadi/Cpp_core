#include<iostream>
using namespace std;

//��̬��Ϊ����
//��̬��̬ : �������� �� ������������ھ�̬��̬�����ú�����
//��̬��̬ : ��������麯��ʵ������ʱ��̬

//��̬��̬�Ͷ�̬��̬����
//��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
//��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ

//��̬��̬����������
//1���м̳й�ϵ
//2��������д������麯��

//��̬��̬ʹ�ã�
//�����ָ�������ִ���������


class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}

};

class Cat: public Animal
{
public:
	//��д����������ֵ���� ������ �����б� ��ȫ��ͬ
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog:public Animal
{
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//��ַ��󶨣��ڱ���׶�ȷ��������ַ
//���Ҫִ��è˵����������ַ��Ҫ�����н׶ΰ󶨣���ַ��󶨣�
void doSpeak(Animal &animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);

}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main1()
{

	//test01();
	test02();

	system("pause");

	return 0;
}