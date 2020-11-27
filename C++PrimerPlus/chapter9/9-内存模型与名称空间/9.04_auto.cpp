#include <iostream>
using namespace std;
//功能：9.4 自动存储持续性
//时间：2020年11月27日15:27:39
//
//void oil(int x);
//int main()
//{
//	int texas = 31;
//	int year = 2011;
//	cout << "In main(), texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In mian(), year = " << year << ", &year = ";
//	cout << &year << endl;
//	oil(texas);
//	cout << "In main(), texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In main(), year = " << year << ", &year = ";
//	cout << &year << endl;
//
//	system("pause");
//	return 0;
//}
//
//void oil(int x)
//{
//	int texas = 5;
//
//	cout << "In oil(), texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In oil(), x = " << x << ", &x = ";
//	cout << &x << endl;
//	{
//		int texas = 113;
//		cout << "In block, texas = " << texas;
//		cout << ", &texas = " << &texas << endl;
//		cout << "In block, x = " << x << ", &x = " << endl;
//		cout << &x << endl;
//	}
//	cout << "Post-block texas = " << texas;
//	cout << ", &texas = " << &texas << endl;
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
In main(), texas = 31, &texas = 0077F740
In mian(), year = 2011, &year = 0077F734
In oil(), texas = 5, &texas = 0077F64C
In oil(), x = 31, &x = 0077F660
In block, texas = 113, &texas = 0077F640
In block, x = 31, &x =
0077F660
Post-block texas = 5, &texas = 0077F64C
In main(), texas = 31, &texas = 0077F740
In main(), year = 2011, &year = 0077F734
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/