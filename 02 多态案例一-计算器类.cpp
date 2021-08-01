#include<iostream>
using namespace std;
#include<string>

//分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类

//普通写法
class Calculator
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}

		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}

		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//如果想扩展新功能，需求修改源码
		//提倡开闭原则：对扩展进行开放，对修改进行关闭
	}
	
	int m_Num1;
	int m_Num2;
};


void test03()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;

}

//利用多态实现
//好处：
//1、组织结构清晰
//2、可读性强
//3、对于前期和后期扩展以及维护性高

//实现计算器抽象类
class AbstractCalculator
{
public:

	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

//加法计算器类
class AddCalculator : public AbstractCalculator
{
public:

	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//减法计算器类
class SubCalculator : public AbstractCalculator
{
public:

	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//乘法计算器类
class MulCalculator : public AbstractCalculator
{
public:

	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test04()
{
	//创建加法运算
	AbstractCalculator *abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//创建减法运算
	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//创建乘法运算
	abc = new MulCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

}

int main2()
{

	//test03();
	test04();

	system("pause");

	return 0;
}