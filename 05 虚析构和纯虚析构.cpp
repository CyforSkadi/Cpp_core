#include<iostream>
using namespace std;
#include<string>

//�ܽ᣺
//1. �������������������������ͨ������ָ���ͷ��������
//2. ���������û�ж������ݣ����Բ�дΪ��������������
//3. ӵ�д���������������Ҳ���ڳ�����

class Animal1
{
public:
	
	Animal1()
	{
		cout << "Animal���캯������" << endl;
	}

	//�������������Խ�� ����ָ���ͷ���������ͷŲ��ɾ�������
	/*virtual ~Animal1()
	{
		cout << "Animal��������������" << endl;
	}*/

	//�������� ��Ҫ������ʵ��
	//���˴��������������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal1() = 0;

	virtual void speak() = 0;
};

Animal1:: ~Animal1()
{
	cout << "�������������ĵ���" << endl;
}

class Cat1 :public Animal1
{
public:

	Cat1(string name)
	{
		cout << "Cat���캯������" << endl;
		m_Name = new string(name);
	}

	void speak()
	{
		cout << *m_Name << "Сè��˵��" << endl;

	}

	~Cat1()
	{
		if (m_Name != NULL)
		{
			cout << "Cat������������" << endl;
			delete m_Name;
			m_Name = NULL;

		}
	}

	string *m_Name;
};

void test07()
{
	Animal1* animal = new Cat1("Tom");
	animal->speak();
	//����ָ��������ʱ�����������������������������������ж������ԣ�������ڴ�й©
	delete animal;
}


int main5()
{

	test07();

	system("pause");

	return 0;

}