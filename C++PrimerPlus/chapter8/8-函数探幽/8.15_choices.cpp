#include <iostream>
using namespace std;
//功能：8.15 函数调用顺序（创建自定义选择）
//时间：2020年11月27日13:59:00
//
template <typename T>
T lesser(T a, T b)
{
	return a < b ? a : b;
}

int lesser(int a, int b)
{
	a = a < 0 ? -a : a;   //保证为正数
	b = b < 0 ? -b : b;
	return a < b ? a : b;
}

int main()
{
	int m = 20;
	int n = -30;
	double x = 15.5;
	double y = 25.9;

	cout << lesser(m, n) << endl;     //使用#2
	cout << lesser(x, y) << endl;     //使用#1 with double
	cout << lesser<>(m, n) << endl;   //使用#1 with int
	cout << lesser<int>(x, y) << endl;//使用#1 with int

	system("pause");
	return 0;
}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
20
15.5
-30
15
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/