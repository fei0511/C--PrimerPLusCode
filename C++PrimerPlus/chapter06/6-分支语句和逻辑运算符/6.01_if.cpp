#include <iostream>
//功能：6.1 if语句
//时间：2020年11月25日14:41:05
// 

//int main()
//{
//	using namespace std;
//
//	char ch;
//	int spaces = 0;
//	int total = 0;
//	cin.get(ch);
//	while (ch != '.')   //以'.'为结束条件
//	{
//		if (ch == ' ') //统计空格的个数
//		{
//			++spaces;
//		}
//		++total;      //统计所有字符的个数
//		cin.get(ch);
//	}
//	cout << spaces << " spaces, " << total;
//	cout << " characters total in sentence\n";
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
The ballonist was an airhead
with lofty goals.
6 spaces, 45 characters total in sentence
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/