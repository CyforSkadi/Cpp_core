#include<iostream>
using namespace std;
#include<string>

class Building;

class Goodgay
{
public:

	Goodgay();

	void visit();//���Է���˽�г�Ա
	void visit2();//�����Է���˽�г�Ա

	Building *building;

};

class Building
{
	friend void Goodgay::visit();//Goodgay���µ�visit��������Ϊ�������Ԫ�����Է���˽�г�Ա

public:
	Building();

public:
	string m_SettingRoom;

private:
	string m_BedRoom;

};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SettingRoom = "����";
	m_BedRoom = "����";

}

Goodgay::Goodgay()
{
	building = new Building;

}

void Goodgay::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_SettingRoom << endl;

	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void Goodgay::visit2()
{
	cout << "visit2�������ڷ��ʣ�" << building->m_SettingRoom << endl;

	//cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test03()
{
	Goodgay gg;
	gg.visit();
	gg.visit2();

}

int main()
{
	
	test03();

	system("pause");

	return 0;
}