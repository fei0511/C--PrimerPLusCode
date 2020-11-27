#include <iostream>
using namespace std;
//功能：8.1 C++内联函数
//时间：2020年11月26日16:51:04
// 
//inline double square(double x) 
//{ 
//	return x * x; 
//}
//
//int main()
//{
//	double a, b;
//	double c = 13.0;
//
//	a = square(5.0);
//	b = square(4.5 + 7.5);
//	cout << "a = " << a << ", b = " << b << endl;
//	cout << "c = " << c;
//	cout << ", c squared = " << square(c++) << endl;
//	cout << "Now c = " << c << endl;
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
a = 25, b = 144
c = 13, c squared = 169
Now c = 14
请按任意键继续. . .

-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/