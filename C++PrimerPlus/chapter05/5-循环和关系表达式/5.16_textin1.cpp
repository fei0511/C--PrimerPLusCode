#include <iostream>
//功能：5.16 循环与文本输入（使用原始的cin进行输入）
//时间：2020年11月25日13:59:33
//

//int main()
//{
//	using namespace std;
//
//	char ch;
//	int count = 0;
//
//	cout << "Enter characters; enter # to quit:\n";
//	cin >> ch;           //不能读入空格，
//	while (ch != '#')    //cin会把所有输入先保存在缓冲区中，直到遇到回车键，再把所有输入交给操作系统，进行数据的回显与处理
//	{
//		cout << ch;
//		++count;
//		cin >> ch;
//	}
//	cout << endl << count << " characters read.\n";
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter characters; enter # to quit:
see ken run#really fast
seekenrun
9 characters read.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/