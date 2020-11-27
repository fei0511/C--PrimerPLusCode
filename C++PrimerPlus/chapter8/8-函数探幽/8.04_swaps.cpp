#include <iostream>
using namespace std;
//功能：8.4 将引用作为函数参数
//时间：2020年11月26日18:53:43
// 格式： int & rodents = rats; //引用在声明时必须进行初始化操作。并且初始化后不允许进行修改
// 引用相当于不可修改的指针
//void swapr(int & a, int & b);
//void swapp(int * a, int * b);
//void swapv(int a, int b);
//
//int main()
//{
//	int wallet1 = 300;
//	int wallet2 = 350;
//
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	cout << "Using references to swap contents:\n";
//	swapr(wallet1, wallet2);
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	cout << "Using pointers to swap contents again:\n";
//	swapp(&wallet1, &wallet2);
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	cout << "Trying to use passing by value:\n";
//	swapv(wallet1, wallet2);
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	system("pause");
//	return 0;
//}
//
//void swapr(int & a, int & b)
//{
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapp(int * a, int * b)
//{
//	int temp;
//
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swapv(int a, int b)
//{
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
wallet1 = $300 wallet2 = $350
Using references to swap contents:
wallet1 = $350 wallet2 = $300
Using pointers to swap contents again:
wallet1 = $300 wallet2 = $350
Trying to use passing by value:
wallet1 = $300 wallet2 = $350
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/