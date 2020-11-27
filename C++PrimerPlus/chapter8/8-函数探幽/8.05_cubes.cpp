#include <iostream>
using namespace std;
//功能：8.5 比较引用传参和按值传参的区别
//时间：2020年11月26日19:07:50
//格式：int & rodents = rats; //引用在声明时必须进行初始化操作。并且初始化后不允许修改引用
//引用相当于不可修改的指针
//double cube(double a);
//double refcube(double &ra);
//
//int main()
//{
//	double x = 3.0;
//
//	cout << cube(x);
//	cout << " = cube of " << x << endl;
//	cout << refcube(x);
//	cout << " = cube of " << x << endl;
//
//
//	system("pause");
//	return 0;
//}
//
//double cube(double a)
//{
//	a *= a * a;
//	return a;
//}
//
//double refcube(double &ra)
//{
//	ra *= ra * ra;
//	return ra;
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
27 = cube of 3
27 = cube of 27
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/