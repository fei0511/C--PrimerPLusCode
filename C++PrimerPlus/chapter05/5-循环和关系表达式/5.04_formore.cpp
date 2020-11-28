#include <iostream>
//功能：5.4 利用for循环计算阶乘
//时间：2020年11月25日09:19:50
//
//const int ArSize = 16;
//
//int main()
//{
//	using namespace std;
//	long long factorials[ArSize];
//	factorials[1] = factorials[0] = 1LL;
//	for (int i = 2; i < ArSize; i++)
//	{
//		factorials[i] = i * factorials[i-1];
//	}
//	for (int i = 0; i < ArSize; i++)
//	{
//		cout << i << "! = " << factorials[i] << endl;
//	}
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
0! = 1
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800
11! = 39916800
12! = 479001600
13! = 6227020800
14! = 87178291200
15! = 1307674368000
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/