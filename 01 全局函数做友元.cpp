#include<iostream>
using namespace std;
#include<string>
//��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա
//��Ԫ�Ĺؼ���Ϊ friend

class Building1
{
	friend void goodGay(Building1 *building);//goodGayȫ�ֺ�����Building�����Ԫ�����Է���˽������

public:
	string m_SittingRoom;

	Building1()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

private:
	string m_BedRoom;

};

//ȫ�ֺ���
void goodGay(Building1 *building)
{
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01()
{
	Building1 building;
	goodGay(&building);

}

int main1()
{

	test01();

	system("pause");

	return 0;
}