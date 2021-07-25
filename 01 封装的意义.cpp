#include<iostream>
using namespace std;

const double PI = 3.14;

//设计一个圆类，求圆的周长
//语法： class 类名{ 访问权限： 属性 / 行为 };
class Circle1
{
	//访问权限
	//公共权限
public:
	//属性
	//半径
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI*m_r;
	}
};



int main1()
{
	//通过圆类创建一个具体的圆（对象）
	Circle1 c1;
	//给对象的属性进行赋值
	c1.m_r = 10;
	cout << "圆的周长为：" << c1.calculateZC() << endl;

	

	system("pause");
	return 0;
}