#include<iostream>
using namespace std;
#include<string>

//设计立方体类(Cube)
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等

class Cube
{
public:
	//设置获取长宽高
	void setL(int l)
	{
		m_L = l;
	}

	int getL()
	{
		return m_L;
	}

	void setW(int w)
	{
		m_W = w;
	}

	int getW()
	{
		return m_W;
	}

	void setH(int h)
	{
		m_H = h;
	}

	int getH()
	{
		return m_H;
	}

	//获取立方体面基
	int calculateS()
	{
		return 2 * m_L*m_W + 2 * m_L*m_H + 2 * m_W*m_H;
	}

	//获取立方体体积
	int calculateV()
	{
		return m_L * m_W*m_H;
	}

	//利用成员函数判断
	bool isSameByClass(Cube c)
	{
		if (getL() == c.getL() && getW() == c.getW() && getH() == c.getH())
		{
			return true;
		}
		return false;
	}

private:
	int m_L;//长
	int m_W;//宽
	int m_H;//高

};

//利用全局函数判断
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL()&&c1.getW() == c2.getW()&&c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}

int main6()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1的面积为：" << c1.calculateS() << endl;
	cout << "c1的体积为：" << c1.calculateV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "全局判断c1和c2相等" << endl;
	}
	else
	{
		cout << "全局判断c1和c2不相等" << endl;
	}

	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "成员判断c1和c2相等" << endl;
	}
	else
	{
		cout << "成员判断c1和c2不相等" << endl;
	}

	system("pause");
	return 0;
}