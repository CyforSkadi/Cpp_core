#include<iostream>
using namespace std;

//���μ̳и��
//����������̳�ͬһ������
//����ĳ����ͬʱ�̳�������������

class Animal
{
public:
	int m_Age;
};

//������̳н�����μ̳е�����
//�̳�ǰ���Ϲؼ���virtual
//Animal��Ϊ�����

class Sheep:virtual public Animal{};

class Tuo:virtual public Animal{};

class SheepTuo:public Sheep,public Tuo{};

void test12()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//�����μ̳�ʱ����������ӵ����ͬ��Ա���ԣ���Ҫ������������
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

	//�������ֻҪ��һ�ݣ����μ̳е������������ݣ��˷�����Դ

}


int main()
{
	test12();
	
	system("pause");

	return 0;
}