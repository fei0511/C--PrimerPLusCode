#include <iostream>
using namespace std;
//功能：9.9 静态持续性、内部链接性
//时间：2020年11月27日16:51:12
//对于全局变量使用static限定符后，会使得该变量只能在本文件中使用，
//且不会与其他文件中定义的同变量名的变量相冲突
//const int ArSize = 10;
//void strcount(const char * str);
//
//int main()
//{
//	char input[ArSize];
//	char next;
//
//	cout << "Enter a line:\n";
//	cin.get(input, ArSize);
//	while (cin)
//	{
//		cin.get(next);
//		while (next != '\n')
//		{
//			cin.get(next);
//		}
//		strcount(input);
//		cout << "Enter next line (empty line to quit):\n";
//		cin.get(input, ArSize);
//	}
//	cout << "Bye\n";
//
//	system("pause");
//	return 0;
//}
//
//void strcount(const char * str)
//{
//	static int total = 0;
//	int count = 0;
//
//	cout << "\"" << str << "\" contains ";
//	while (*str++)
//	{
//		count++;
//	}
//	total += count;
//	cout << count << " characters\n";
//	cout << total << " characters total\n";
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter a line:
nice pants
"nice pant" contains 9 characters
9 characters total
Enter next line (empty line to quit):
thanks
"thanks" contains 6 characters
15 characters total
Enter next line (empty line to quit):
parting is such sweet sorrow
"parting i" contains 9 characters
24 characters total
Enter next line (empty line to quit):
ok
"ok" contains 2 characters
26 characters total
Enter next line (empty line to quit):

Bye
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/