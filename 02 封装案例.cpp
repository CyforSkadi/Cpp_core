#include<iostream>
using namespace std;
#include<string>

//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student
{
	//类中的属性和行为统称为成员
	//属性也称成员属性或成员变量
	//行为也称成员函数或成员方法

public:
	string m_name;
	int m_id;

	void showStudent()
	{
		cout << "姓名：" << m_name << " 学号：" << m_id << endl;
	}

	//给姓名赋值
	void setname(string name)
	{
		m_name = name;
	}
	//给学号赋值
	void setid(int id)
	{
		m_id = id;
	}
};

int main2()
{
	Student s1;
	//s1.m_name = "张三";
	//s1.m_id = 1;
	s1.setname("张三");
	s1.setid(1);

	s1.showStudent();

	Student s2;
	s2.m_name = "李四";
	s2.m_id = 2;

	s2.showStudent();

	system("pause");
	return 0;
}