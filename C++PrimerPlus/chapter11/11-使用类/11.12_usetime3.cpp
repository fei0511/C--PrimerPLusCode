#include <iostream>
#include "mytime3.h"
//功能：11.12 使用Time类(添加了加法、减法、乘法、及<<运算符)
//时间：2020年11月28日19:10:21
// 

//int main()
//{
//	using std::cout;
//	using std::endl;
//
//	Time aida(3, 35);
//	Time tosca(2, 48);
//	Time temp;
//
//	cout << "Aida and Tosca:\n";
//	cout << aida << "; " << tosca << endl;  //此处调用了重载<<运算符（友元函数）
//	temp = aida + tosca;     //此处调用了重载+运算符
//	cout << "Aida + Tosca: " << temp << endl;
//	temp = aida * 1.17;     //此处调用了重载*运算符（类成员函数）
//	cout << "Aida * 1.17" << temp << endl;
//	cout << "10.0 * Tosca: " << 10.0 * tosca << endl;  //此处调用了重载*运算符（友元函数）
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Aida and Tosca:
3 hours, 35 minutes; 2 hours, 48 minutes
Aida + Tosca: 6 hours, 23 minutes
Aida * 1.174 hours, 11 minutes
10.0 * Tosca: 28 hours, 0 minutes
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/