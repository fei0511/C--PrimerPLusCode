#include <iostream>
#include "mytime1.h"
//功能：11.6 使用Time类（重载了加法运算符）
//时间：2020年11月28日16:37:03
// 


//int main()
//{
//	using std::cout;
//	using std::endl;
//	Time planning;
//	Time coding(2, 40);
//	Time fixing(5, 55);
//	Time total;
//
//	cout << "planning time = ";
//	planning.Show();
//	cout << endl;
//
//	cout << "coding time = ";
//	coding.Show();
//	cout << endl;
//
//	cout << "fixing time = ";
//	fixing.Show();
//	cout << endl;
//
//	total = coding + fixing;    //此处的加号被重载了
//	cout << "coding + fixing = "; 
//	total.Show();
//	cout << endl;
//
//	Time morefixing(3, 28);
//	cout << "more fixing time = ";
//	morefixing.Show();
//	cout << endl;
//	total = morefixing.operator+(total);
//	cout << "morefixing.operator+(total) = ";
//	total.Show();
//	cout << endl;
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
planning time = 0 hours, 0 minutes
coding time = 2 hours, 40 minutes
fixing time = 5 hours, 55 minutes
coding + fixing = 8 hours, 35 minutes
more fixing time = 3 hours, 28 minutes
morefixing.operator+(total) = 12 hours, 3 minutes
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/