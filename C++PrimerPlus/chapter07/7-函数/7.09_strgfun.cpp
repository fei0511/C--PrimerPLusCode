#include <iostream>
using namespace std;

//功能：7.9 字符数目计算
//时间：2020年11月26日09:20:05
// 
//unsigned int c_in_str(const char * str, char ch);
//
//int main()
//{
//	char mmm[15] = "minimum";
//	const char * wail = "ululate";
//
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_in_str(wail, 'u');
//
//	cout << ms << " m characters in " << mmm << endl;
//	cout << us << " u characters in " << wail << endl;
//
//	system("pause");
//	return 0;
//}
//
//unsigned int c_in_str(const char * str, char ch)
//{
//	unsigned int count = 0;
//
//	while (*str)
//	{
//		if (*str == ch)
//		{
//			count++;
//		}
//		str++;
//	}
//	return count;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
3 m characters in minimum
2 u characters in ululate
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/