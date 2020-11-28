#include <iostream>
//功能：5.17 循环与文本输入（使用cin.get(char)进行补救）
//时间：2020年11月25日14:05:30
//

//int main()
//{
//	using namespace std;
//
//	char ch;
//	int count = 0;
//
//	cout << "Enter characters; enter # to quit:\n";
//	cin.get(ch);           //cin.get()能把空格也读入进来，
//	while (ch != '#')     //cin会把所有输入先保存在缓冲区中，直到遇到回车键，再把所有输入交给操作系统，进行数据的回显与处理
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
Enter characters; enter # to quit:
Did you use a pencil?#2
Did you use a pencil?
21 characters read.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/