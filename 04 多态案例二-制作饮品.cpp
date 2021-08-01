#include<iostream>
using namespace std;
#include<string>

//������Ʒ�Ĵ�������Ϊ����ˮ - ���� - ���뱭�� - ���븨��
//���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ

class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();

	}

};


class Coffee :public AbstractDrinking
{
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;

	}

	virtual void Brew()
	{
		cout << "���ݿ���" << endl;

	}

	virtual void PourInCup()
	{
		cout << "���뿧�ȱ���" << endl;
	}

	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;

	}
};

class Tea :public AbstractDrinking
{
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;

	}

	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;

	}

	virtual void PourInCup()
	{
		cout << "����豭��" << endl;
	}

	virtual void PutSomething()
	{
		cout << "��������" << endl;

	}

};

void doWork(AbstractDrinking *abs)
{
	abs->makeDrink();
	delete abs;

}

void test06()
{
	//��������
	doWork(new Coffee);
	
	cout << "----------------" << endl;
	//������Ҷ
	doWork(new Tea);

}


int main4()
{

	test06();

	system("pause");

	return 0;

}