#include <iostream>
using namespace std;
//功能：9.7 静态持续性、内部链接性
//时间：2020年11月27日16:51:12
//对于全局变量使用static限定符后，会使得该变量只能在本文件中使用，
//且不会与其他文件中定义的同变量名的变量相冲突
//int tom = 3;
//int dick = 30;
//static int harry = 300;
//
//void remote_access();
//
//int main()
//{
//	cout << "main() reports the following address:\n";
//	cout << &tom << " = &tom, " << &dick << " = &dick";
//	cout << &harry << " = &harry\n";
//	remote_access();
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
main() reports the following address:
0017C000 = &tom, 0017C004 = &dick0017C008 = &harry
remote_access() reports the following address:
0017C000 = &tom, 0017C014 = &dick, 0017C010 = &harry
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/