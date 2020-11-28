#include <iostream>
//功能：5.18 循环与文本输入（文件尾条件EOF）
//时间：2020年11月25日14:05:30
//cin.eof()和cin.fail()函数 《CTRL+Z》+《Enter》可以代替EOF标志

//int main()
//{
//	using namespace std;
//
//	char ch;
//	int count = 0;
//	cin.get(ch);           //cin.get()能把空格也读入进来，
//	while (cin.fail() == false)     //cin会把所有输入先保存在缓冲区中，直到遇到回车键，再把所有输入交给操作系统，进行数据的回显与处理
//	{
//		cout << ch;
//		++count;
//		cin.get(ch);
//	}
//	cout << endl << count << " characters read.\n";
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
The green bird sings in the winter.
The green bird sings in the winter.
Yes,but the crow files in the daw.
Yes,but the crow files in the daw.
^Z

71 characters read.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/