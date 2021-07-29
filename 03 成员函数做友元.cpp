#include<iostream>
using namespace std;
#include<string>

class Building;

class Goodgay
{
public:

	Goodgay();

	void visit();//可以访问私有成员
	void visit2();//不可以访问私有成员

	Building *building;

};

class Building
{
	friend void Goodgay::visit();//Goodgay类下的visit函数是作为本类的友元，可以访问私有成员

public:
	Building();

public:
	string m_SettingRoom;

private:
	string m_BedRoom;

};

//类外实现成员函数
Building::Building()
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";

}

Goodgay::Goodgay()
{
	building = new Building;

}

void Goodgay::visit()
{
	cout << "visit函数正在访问：" << building->m_SettingRoom << endl;

	cout << "visit函数正在访问：" << building->m_BedRoom << endl;
}

void Goodgay::visit2()
{
	cout << "visit2函数正在访问：" << building->m_SettingRoom << endl;

	//cout << "visit2函数正在访问：" << building->m_BedRoom << endl;
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