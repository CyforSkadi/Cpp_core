#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯����" << endl;
	}

	~Base()
	{
		cout << "Base����������!" << endl;

	}
};

class Son : public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ��캯����" << endl;
	}

	~Son()
	{
		cout << "Son����������!" << endl;

	}

};


void test06() {

	//Base b;

	//�̳��й��������˳��
	//�ȹ��츸�࣬�ٹ�������
	//���������࣬����������
	Son s;

}


int main4()
{

	test06();


	system("pause");

	return 0;
}