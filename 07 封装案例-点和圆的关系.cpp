#include<iostream>
using namespace std;
#include<string>
#include"point.h"
#include"circle.h"

//设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。

//class Point
//{
//public:
//	void setX(double x)
//	{
//		m_X = x;
//	}
//
//	double getX()
//	{
//		return m_X;
//	}
//
//	void setY(double y)
//	{
//		m_Y = y;
//	}
//
//	double getY()
//	{
//		return m_Y;
//	}
//
//private:
//	double m_X;
//	double m_Y;
//};
//
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//
//	int getR()
//	{
//		return m_R;
//	}
//
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;
//	Point m_Center;
//};

//判断关系函数
void isInCircle(Circle &c, Point &p)
{
	double distance = (c.getCenter().getX() - p.getX())*	(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*	(c.getCenter().getY() - p.getY());

	int sqrtR = c.getR()*c.getR();

	if (distance == sqrtR)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > sqrtR)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(c, p);

	system("pause");
	return 0;
}