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
	friend class GoodGay;//GoodGay类为本类的友元，可以访问本类私有成员

public:

	Building2();

	string m_SettingRoom;

private:
	string m_BedRoom;

};

//类外写成员函数
Building2::Building2()
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";

}

GoodGay::GoodGay()
{
	building = new Building2;


}

void GoodGay::visit()
{
	cout << "好基友类正在访问：" << building->m_SettingRoom << endl;

	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
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