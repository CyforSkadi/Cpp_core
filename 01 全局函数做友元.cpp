#include<iostream>
using namespace std;
#include<string>
//友元的目的就是让一个函数或者类 访问另一个类中私有成员
//友元的关键字为 friend

class Building1
{
	friend void goodGay(Building1 *building);//goodGay全局函数是Building类的友元，可以访问私有内容

public:
	string m_SittingRoom;

	Building1()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

private:
	string m_BedRoom;

};

//全局函数
void goodGay(Building1 *building)
{
	cout << "好基友的全局函数 正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友的全局函数 正在访问：" << building->m_BedRoom << endl;
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