#pragma once
#include<iostream>
using namespace std;

class Point
{
public:
	void setX(double x);

	double getX();

	void setY(double y);

	double getY();

private:
	double m_X;
	double m_Y;
};
