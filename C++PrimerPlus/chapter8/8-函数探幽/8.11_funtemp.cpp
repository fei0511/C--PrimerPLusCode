#include <iostream>
using namespace std;
//���ܣ�8.11 ����ģ��
//ʱ�䣺2020��11��26��22:05:51
//
//template <typename T>
//void Swap(T &a, T &b);
//
//int main()
//{
//	int i = 10;
//	int j = 20;
//	cout << "i, j = " << i << ", " << j << endl;
//	cout << "Using compiler-generated int swapper:";
//	Swap(i, j);
//	cout << "Now i, j = " << i << ", " << j << endl;
//
//	double x = 24.5;
//	double y = 81.7;
//	cout << "x, y = " << x << ", " << y << endl;
//	cout << "Using compiler-generated double swapper:";
//	Swap(x, y);
//	cout << "Now x, y = " << x << ", " << y << endl;
//
//	system("pause");
//	return 0;
//}
//
//template <typename T>
//void Swap(T &a, T &b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
i, j = 10, 20
Using compiler-generated int swapper:Now i, j = 20, 10
x, y = 24.5, 81.7
Using compiler-generated double swapper:Now x, y = 81.7, 24.5
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/