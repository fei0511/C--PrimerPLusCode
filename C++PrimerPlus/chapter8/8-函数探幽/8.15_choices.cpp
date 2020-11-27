#include <iostream>
using namespace std;
//���ܣ�8.15 ��������˳�򣨴����Զ���ѡ��
//ʱ�䣺2020��11��27��13:59:00
//
template <typename T>
T lesser(T a, T b)
{
	return a < b ? a : b;
}

int lesser(int a, int b)
{
	a = a < 0 ? -a : a;   //��֤Ϊ����
	b = b < 0 ? -b : b;
	return a < b ? a : b;
}

int main()
{
	int m = 20;
	int n = -30;
	double x = 15.5;
	double y = 25.9;

	cout << lesser(m, n) << endl;     //ʹ��#2
	cout << lesser(x, y) << endl;     //ʹ��#1 with double
	cout << lesser<>(m, n) << endl;   //ʹ��#1 with int
	cout << lesser<int>(x, y) << endl;//ʹ��#1 with int

	system("pause");
	return 0;
}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
20
15.5
-30
15
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/