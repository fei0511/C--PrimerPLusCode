#include <iostream>
#include "mytime2.h"
//功能：11.9 使用Time类(添加了重载加法运算符、减法及乘法重载)
//时间：2020年11月28日17:05:03
// 

//int main()
//{
//	using std::cout;
//	using std::endl;
//
//	Time weeding(4, 35);
//	Time waxing(2, 47);
//	Time total;
//	Time diff;
//	Time adjusted;
//
//	cout << "weeding time = ";
//	weeding.Show();
//	cout << endl;
//
//	cout << "waxing time = ";
//	waxing.Show();
//	cout << endl;
//
//	cout << "total work time = ";
//	total = weeding + waxing;
//	total.Show();
//	cout << endl;
//
//	cout << "weeding time - waxing time = ";
//	diff = weeding - waxing;    //此处的加号被重载了
//	diff.Show();
//	cout << endl;
//
//	adjusted = total * 1.5;
//	cout << "adjusted work time = ";
//	adjusted.Show();
//	cout << endl;
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
weeding time = 4 hours, 35 minutes
waxing time = 2 hours, 47 minutes
total work time = 7 hours, 22 minutes
weeding time - waxing time = 1 hours, 48 minutes
adjusted work time = 11 hours, 3 minutes
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/