#include<iostream>
using namespace std;
#include<string>

class Building2;

class GoodGay
{
public:

	GoodGay();

	void visit();

	Building2 *building;
};

class Building2
{
	friend class GoodGay;//GoodGay��Ϊ�������Ԫ�����Է��ʱ���˽�г�Ա

public:

	Building2();

	string m_SettingRoom;

private:
	string m_BedRoom;

};

//����д��Ա����
Building2::Building2()
{
	m_SettingRoom = "����";
	m_BedRoom = "����";

}

GoodGay::GoodGay()
{
	building = new Building2;


}

void GoodGay::visit()
{
	cout << "�û��������ڷ��ʣ�" << building->m_SettingRoom << endl;

	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test02()
{
	GoodGay gg;
	gg.visit();

}

int main2()
{
	test02();

	system("pause");

	return 0;
}