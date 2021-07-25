#include<iostream>
using namespace std;
#include<string>
#include"point.h"
#include"circle.h"

//���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��

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

//�жϹ�ϵ����
void isInCircle(Circle &c, Point &p)
{
	double distance = (c.getCenter().getX() - p.getX())*	(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*	(c.getCenter().getY() - p.getY());

	int sqrtR = c.getR()*c.getR();

	if (distance == sqrtR)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > sqrtR)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
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