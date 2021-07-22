#include<iostream>
using namespace std;


int* func1()
{
	//new返回的是该数据类型的指针
	int* p = new int(10);	//变量值为10
	return p;
}

void test1()
{
	int *p = func1();
	cout << *p << endl;
	cout << *p << endl;
	//利用关键字delete释放
	delete p;
	//cout << *p << endl;	//内存已经被释放，再次访问就是非法操作

}

//在堆区开辟数组
void test2()
{
	int* arr = new int[10];	//数组元素个数为10
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

}

int main()
{
	test1();

	test2();

	system("pause");

	return 0;
}