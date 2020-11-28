#include <iostream>
using namespace std;
//功能：7.16 递归
//时间：2020年11月26日14:42:07
// 
//void countdown(int n);
//
//int main()
//{
//	countdown(4);
//
//	system("pause");
//	return 0;
//}
//
//void countdown(int n)
//{
//	cout << "Counting down ... " << n << endl;
//	if (n > 0)
//	{
//		countdown(n - 1);
//	}
//	cout << n << ": Kaboom!\n";
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Counting down ... 4
Counting down ... 3
Counting down ... 2
Counting down ... 1
Counting down ... 0
0: Kaboom!
1: Kaboom!
2: Kaboom!
3: Kaboom!
4: Kaboom!
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/