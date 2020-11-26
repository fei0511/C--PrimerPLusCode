#include <iostream>
using namespace std;
//功能：7.2 函数原型和函数调用
//时间：2020年11月25日20:20:26
// 
//void cheers(int);
//double cube(double x);
//
//int main()
//{
//	cheers(5);
//	cout << "Gice me a number: ";
//	double side;
//	cin >> side;
//	double volume = cube(side);
//	cout << "A " << side << "-foot cube has a volume of ";
//	cout << volume << " cubic feet.\n";
//	cheers(cube(2));
//
//	system("pause");
//	return 0;
//}
//
//void cheers(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Cheers! ";
//	}
//	cout << endl;
//}
//
//double cube(double x)
//{
//	return x * x * x;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Cheers! Cheers! Cheers! Cheers! Cheers!
Gice me a number: 5
A 5-foot cube has a volume of 125 cubic feet.
Cheers! Cheers! Cheers! Cheers! Cheers! Cheers! Cheers! Cheers!
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/