#include <iostream>
using namespace std;
//功能：8.2 创建引用变量
//时间：2020年11月26日18:38:01
// 格式： int & rodents = rats; //引用在声明时必须进行初始化操作。并且初始化后不允许进行修改
// 引用相当于不可修改的指针

//int main()
//{
//	int rats = 10;
//	int & rodents = rats;
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//	rodents++;
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "rats address = " << &rats;
//	cout << ", rodents address = " << &rodents << endl;
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
rats = 10, rodents = 10
rats = 11, rodents = 11
rats address = 00CFFCF0, rodents address = 00CFFCF0
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/