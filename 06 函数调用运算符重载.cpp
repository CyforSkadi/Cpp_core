#include<iostream>
using namespace std;
#include<string>


class MyPrint
{
public:
	//重载 ()
	void operator()(string test)
	{
		cout << test << endl;
	}

};

void test07()
{
	MyPrint myPrint;

	myPrint("hello world");//由于重载后使用的方式非常像函数的调用，因此称为仿函数


}

//仿函数没有固定写法，非常灵活
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;

	}
};


void test08()
{
	MyAdd myAdd;
	int ret = myAdd(100, 100);
	
	cout << "ret = " << ret << endl;

	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;

}

int main()
{
	//test07();

	test08();

	system("pause");

	return 0;
}