#include<iostream>
using namespace std;

//C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
//如果用到this指针，需要加以判断保证代码的健壮性

class Person3
{
public:

	void showClassName()
	{
		cout << "this is Person class" << endl;

	}

	void showPersonAge()
	{
		//报错原因为传入指针为空

		if (this == NULL)//保证代码健壮性
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