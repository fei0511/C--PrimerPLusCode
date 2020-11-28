#include <iostream>
using namespace std;
//功能：8.11 函数模板
//时间：2020年11月26日22:05:51
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
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
i, j = 10, 20
Using compiler-generated int swapper:Now i, j = 20, 10
x, y = 24.5, 81.7
Using compiler-generated double swapper:Now x, y = 81.7, 24.5
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/