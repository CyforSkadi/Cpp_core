#include<iostream>
using namespace std;
#include<string>


class MyPrint
{
public:
	//���� ()
	void operator()(string test)
	{
		cout << test << endl;
	}

};

void test07()
{
	MyPrint myPrint;

	myPrint("hello world");//�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���


}

//�º���û�й̶�д�����ǳ����
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

	//������������
	cout << MyAdd()(100, 100) << endl;

}

int main()
{
	//test07();

	test08();

	system("pause");

	return 0;
}