#include<iostream>
using namespace std;
#include<string>

//制作饮品的大致流程为：煮水 - 冲泡 - 倒入杯中 - 加入辅料
//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶

class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入辅料
	virtual void PutSomething() = 0;

	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();

	}

};


class Coffee :public AbstractDrinking
{
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;

	}

	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;

	}

	virtual void PourInCup()
	{
		cout << "倒入咖啡杯中" << endl;
	}

	virtual void PutSomething()
	{
		cout << "加入糖和牛奶" << endl;

	}
};

class Tea :public AbstractDrinking
{
	virtual void Boil()
	{
		cout << "煮矿泉水" << endl;

	}

	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;

	}

	virtual void PourInCup()
	{
		cout << "倒入茶杯中" << endl;
	}

	virtual void PutSomething()
	{
		cout << "加入柠檬" << endl;

	}

};

void doWork(AbstractDrinking *abs)
{
	abs->makeDrink();
	delete abs;

}

void test06()
{
	//制作咖啡
	doWork(new Coffee);
	
	cout << "----------------" << endl;
	//制作茶叶
	doWork(new Tea);

}


int main4()
{

	test06();

	system("pause");

	return 0;

}