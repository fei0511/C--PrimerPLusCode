#include <iostream>
using namespace std;
//功能：8.12 函数模板
//时间：2020年11月26日22:05:51
//
//template <typename T>
//void Swap(T &a, T &b);
//
//template <typename T>
//void Swap(T *a, T *b, int n);
//void Show(int a[]);
//const int Lim = 8;
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
//	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
//	int d2[Lim] = { 0,7,2,0,1,9,6,9 };
//	cout << "Original" << endl;
//	Show(d1);
//	Show(d2);
//	Swap(d1, d2, Lim);
//	cout << "Swwapped arrays:\n";
//	Show(d1);
//	Show(d2);
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
//
//template <typename T>
//void Swap(T a[], T b[], int n)
//{
//	T temp;
//	for (int i = 0; i < n; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//
//void Show(int a[])
//{
//	cout << a[0] << a[1] << '/';
//	cout << a[2] << a[3] << '/';
//	for (int i = 4; i < Lim; i++)
//	{
//		cout << a[i];
//	}
//	cout << endl;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
i, j = 10, 20
Using compiler-generated int swapper:Now i, j = 20, 10
Original
07/04/1776
07/20/1969
Swwapped arrays:
07/20/1969
07/04/1776
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/