#include<iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class Son :public Base
{
public:
	int m_D;

};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷� C��
//��ת�ļ�·�� cd ����·����
// cl /d1 reportSingleClassLayout���� �ļ���

void test05()
{
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���Ա������������ˣ���˷��ʲ���
	cout << "size of Son = " << sizeof(Son) << endl;

}

int main3()
{

	test05();


	system("pause");

	return 0;
}