#include<iostream>
using namespace std;

//C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��

class Person3
{
public:

	void showClassName()
	{
		cout << "this is Person class" << endl;

	}

	void showPersonAge()
	{
		//����ԭ��Ϊ����ָ��Ϊ��

		if (this == NULL)//��֤���뽡׳��
		{
			return;
		}

		cout << "age = " << this->m_Age << endl;

	}

	int m_Age;
};


void test05()
{
	Person3 *p = NULL;

	p->showClassName();

	p->showPersonAge();

}

int main3()
{
	test05();

	system("pause");

	return 0;
}