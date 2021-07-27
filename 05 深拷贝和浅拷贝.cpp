#include<iostream>
using namespace std;

//如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题


class Person5
{
public:
	Person5()
	{
		cout << "person的默认构造函数调用" << endl;
	}

	Person5(int age,int height)
	{
		cout << "person的有参构造函数调用" << endl;
		m_Age = age;
		m_Height = new int(height);
	}

	//自己实现拷贝构造函数来解决浅拷贝带来的堆区内存重复释放的问题
	Person5(const Person5 &p)
	{
		cout << "Person的拷贝构造函数的调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//编译器默认实现浅拷贝
		m_Height = new int(*p.m_Height);//深拷贝

	}

	~Person5()
	{
		//析构代码需要将堆区开辟的数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test06()
{
	Person5 p1(18,160);
	cout << "p1的年龄为：" << p1.m_Age <<" 身高为：" << *p1.m_Height << endl;

	Person5 p2(p1);
	cout << "p2的年龄为：" << p2.m_Age <<" 身高为：" << *p2.m_Height << endl;

}

int main5()
{
	test06();


	system("pause");
	return 0;
}