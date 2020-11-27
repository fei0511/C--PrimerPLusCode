#include <iostream>
using namespace std;
//功能：8.9 函数重载
//时间：2020年11月26日20:43:15
//
//const int ArSize = 80;
//char * left(const char * str, int n = 1);   //给函数赋默认参数
//
//int main()
//{
//	char sample[ArSize];
//	cout << "Enter a string:\n";
//	cin.get(sample, ArSize);
//	char * ps = left(sample, 4);
//	cout << ps << endl;
//	delete[] ps;
//	ps = left(sample);
//	cout << ps << endl;
//	delete[] ps;
//
//	system("pause");
//	return 0;
//}
//
//char * left (const char * str, int n)
//{
//	if (n < 0)
//	{
//		n = 0;
//	}
//	char * p = new char[n + 1];
//	int i;
//	for ( i = 0; i < n && str[i]; i++)
//	{
//		p[i] = str[i];
//	}
//	while (i <= n)
//	{
//		p[i++] = '\0';
//	}
//	return p;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter a string:
forthcoming
fort
f
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/