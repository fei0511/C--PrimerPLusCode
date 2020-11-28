#include <iostream>
#include <new>
using namespace std;
//功能：9.10 常规new运算符和定位new运算符
//时间：2020年11月27日19:21:19
// 
//const int BUF = 512;
//const int N = 5;
//char buffer[BUF];
//
//int main()
//{
//	double *pd1, *pd2;
//	int i;
//	cout << "Calling new and placement new:\n";
//	pd1 = new double[N];               //常规new运算符
//	pd2 = new (buffer) double[N];      //定位new运算符
//	for (i = 0; i < N; i++)
//	{
//		pd2[i] = pd1[i] = 1000 + 20.0 * i;
//	}
//	//因为buffer是char指针，如果不对buffer进行强制类型转换，cout将显示一个字符串
//	cout << "Memory address:\n" << " heap:" << pd1 << " static: " << (void *)buffer << endl;
//	cout << "Memory contents:\n";
//	for ( i = 0; i < N; i++)
//	{
//		cout << pd1[i] << " at " << &pd1[i] << "; ";
//		cout << pd2[i] << " at " << &pd2[i] << endl;
//	}
//
//	cout << "\nCalling new and placement new a second time:\n";
//	double *pd3, *pd4;
//	pd3 = new double[N];
//	pd4 = new (buffer) double[N];
//	for (i = 0; i < N; i++)
//	{
//		pd4[i] = pd3[i] = 1000 + 40.0 * i;
//	}
//	cout << "Memory contents:\n";
//	for ( i = 0; i < N; i++)
//	{
//		cout << pd3[i] << " at " << &pd3[i] << "; ";
//		cout << pd4[i] << " at " << &pd4[i] << endl;
//	}
//
//	cout << "\nCalling new and placement new a third time:\n";
//	delete [] pd1;
//	//因为buffer数组不能由new进行动态分配的内存，所以通过定位new运算符进行分配的空间pd2，也不能由delete来进行释放，需要由程序自行进行释放
//	pd1 = new double[N];
//	pd2 = new (buffer + N * sizeof(double)) double[N];
//	for ( i = 0; i < N; i++)
//	{
//		pd2[i] = pd1[i] = 1000 + 60.0 * i;
//	}
//	cout << "Memory contents:\n";
//	for ( i = 0; i < N; i++)
//	{
//		cout << pd1[i] << " at " << &pd1[i] << "; ";
//		cout << pd2[i] << " at " << &pd2[i] << endl;
//	}
//	delete [] pd1;
//	delete [] pd3;
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Calling new and placement new:
Memory address:
 heap:01715AA0 static: 0084C2D8
Memory contents:
1000 at 01715AA0; 1000 at 0084C2D8
1020 at 01715AA8; 1020 at 0084C2E0
1040 at 01715AB0; 1040 at 0084C2E8
1060 at 01715AB8; 1060 at 0084C2F0
1080 at 01715AC0; 1080 at 0084C2F8

Calling new and placement new a second time:
Memory contents:
1000 at 01715440; 1000 at 0084C2D8
1040 at 01715448; 1040 at 0084C2E0
1080 at 01715450; 1080 at 0084C2E8
1120 at 01715458; 1120 at 0084C2F0
1160 at 01715460; 1160 at 0084C2F8

Calling new and placement new a third time:
Memory contents:
1000 at 01715AA0; 1000 at 0084C300
1060 at 01715AA8; 1060 at 0084C308
1120 at 01715AB0; 1120 at 0084C310
1180 at 01715AB8; 1180 at 0084C318
1240 at 01715AC0; 1240 at 0084C320
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/