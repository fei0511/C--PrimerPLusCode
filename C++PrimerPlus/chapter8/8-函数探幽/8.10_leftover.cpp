#include <iostream>
using namespace std;
//功能：8.10 函数重载
//时间：2020年11月26日21:54:04
//
//unsigned long left(unsigned long num, unsigned ct);
//char * left(const char * str, int n = 1);   //给函数赋默认参数
//
//int main()
//{
//	const char * trip = "Hawaii!!";
//	unsigned long n = 12345678;
//	int i;
//	char * temp;
//
//	for ( i = 1; i < 10; i++)
//	{
//		cout << left(n, i) << endl;
//		temp = left(trip, i);
//		cout << temp << endl;
//		delete[] temp;   
//	}
//
//	system("pause");
//	return 0;
//}
//
//unsigned long left(unsigned long num, unsigned ct)
//{
//	unsigned digits = 1;
//	unsigned long n = num;
//
//	if (ct == 0 || num == 0)  //当数字num和所需要的位数都为零时，直接返回零
//	{
//		return 0;
//	}
//	while (n /= 10)  //统计数字num的位数
//	{
//		digits++;
//	}
//	if (digits > ct)  //当数字num的位数大于所需要的位数，则返回需要的那一位
//	{
//		ct = digits - ct;  //计算需要删除的位数
//		while (ct--)   //每执行一次循环，就相当于将数字Num最后一位删除
//		{
//			num /= 10;
//			return num;
//		}
//	}
//	else             //直接返回数字num
//	{
//		return num;
//	}
//}
//
//char * left(const char * str, int n)
//{
//	if (n < 0)
//	{
//		n = 0;
//	}
//	char * p = new char[n + 1];
//	int i;
//	for (i = 0; i < n && str[i]; i++)   //str[i]：表示空字符后，结束循环
//	{
//		p[i] = str[i];
//	}
//	while (i <= n)  //在字符最后一位加上结束符
//	{
//		p[i++] = '\0';
//	}
//	return p;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
1234567
H
1234567
Ha
1234567
Haw
1234567
Hawa
1234567
Hawai
1234567
Hawaii
1234567
Hawaii!
12345678
Hawaii!!
12345678
Hawaii!!
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/