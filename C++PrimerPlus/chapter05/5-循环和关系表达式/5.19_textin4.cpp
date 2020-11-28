#include <iostream>
//功能：5.19 循环与文本输入（文件尾条件EOF）
//时间：2020年11月25日14:16:09
//cin.eof()和cin.fail()函数 《CTRL+Z》+《Enter》可以代替EOF标志

//int main()
//{
//	using namespace std;
//
//	int ch;
//	int count = 0;
//	
//	while ((ch = cin.get()) != EOF)     //cin会把所有输入先保存在缓冲区中，直到遇到回车键，再把所有输入交给操作系统，进行数据的回显与处理
//	{
//		cout.put(char(ch));
//		++count;
//	}
//	cout << endl << count << " characters read.\n";
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
The sullen mackerel sulks in the shadowy shallows.
The sullen mackerel sulks in the shadowy shallows.
Yes, but the blue bird of happiness harbors secrets.
Yes, but the blue bird of happiness harbors secrets.
^Z

104 characters read.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/