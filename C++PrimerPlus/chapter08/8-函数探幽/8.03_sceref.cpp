#include <iostream>
using namespace std;
//功能：8.3 创建引用变量
//时间：2020年11月26日18:45:21
// 格式： int & rodents = rats; //引用在声明时必须进行初始化操作。并且初始化后不允许进行修改
// 引用相当于不可修改的指针

//int main()
//{
//	int rats = 101;
//	int & rodents = rats;
//
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "rats address = " << &rats;
//	cout << ", rodents address = " << &rodents << endl;
//
//	int bunnies = 50;
//	rodents = bunnies;   //此处相当于rats = bunnies;相当于变量之间的赋值操作，并不是改变了rodents引用的对象
//	cout << "bunnies = " << bunnies;
//	cout << ", rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "bunnies address = " << &bunnies;  //bunnies与rodents指向的不是同一个对象，rodents指向的对象是 rats
//	cout << ", rodents address = " << &rodents << endl;
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
rats = 101, rodents = 101
rats address = 0019FAB4, rodents address = 0019FAB4
bunnies = 50, rats = 50, rodents = 50
bunnies address = 0019FA9C, rodents address = 0019FAB4
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/