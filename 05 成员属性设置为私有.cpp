#include<iostream>
using namespace std;
#include<string>

//优点1：将所有成员属性设置为私有，可以自己控制读写权限
//优点2：对于写权限，我们可以检测数据的有效性

class Person
{
public:
	//设置姓名
	void setname(string name)
	{
		m_name = name;
	}

	//获取姓名
	string getname()
	{
		return m_name;
	}

	//获取年龄 可读可写，若想修改必须在0~150范围内
	int getage()
	{
		//int m_age = 0;
		return m_age;
	}

	//设置年龄
	void setage(int age)
	{
		if (age < 0 || age>150)
		{
			m_age = 0;
			cout << "年龄有误" << endl;
			return;
		}
		m_age = age;
	}

	//设置情人
	void setlover(string lover)
	{
		m_lover = lover;
	}

private:
	string m_name;//姓名 可读可写

	int m_age;//年龄 只读

	string m_lover;//情人 只写
};
int main5()
{
	Person p;

	p.setname("张三");
	cout << "姓名为：" << p.getname() << endl;

	p.setage(1000);
	cout << "年龄为：" << p.getage() << endl;


	system("pause");
	return 0;
}