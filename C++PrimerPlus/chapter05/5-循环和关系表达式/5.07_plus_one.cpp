#include <iostream>
//功能：5.7 递增运算符
//时间：2020年11月25日09:48:22
//

//int main()
//{
//	using namespace std;
//	int a = 20;
//	int b = 20;
//
//	cout << "a = " << a << ": b = " << b << endl;
//	cout << "a++ = " << a++ << ": ++b = " << ++b << endl;    //a++:先取值，再加一；++a:先加一，再取值
//	cout << "a = " << a << ": b = " << b << endl;
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
a = 20: b = 20
a++ = 20: ++b = 21
a = 21: b = 21
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/