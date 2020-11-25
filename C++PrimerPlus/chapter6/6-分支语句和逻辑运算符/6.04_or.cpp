#include <iostream>
//功能：6.4 逻辑OR运算符||
//时间：2020年11月25日15:11:21
// 

//int main()
//{
//	using namespace std;
//	cout << "This program may reformat your hard disk\n"
//		<< "and destory all your data.\n" 
//		<< "Do you wish to continue?<y/n> ";
//
//	char ch;
//	cin >> ch;
//	if (ch == 'y' || ch == 'Y')
//	{
//		cout << "You were warned!\a\a\n";
//	}
//	else if (ch == 'n' || ch == 'N')
//	{
//		cout << "A wise choice ... bye\n";
//	}
//	else
//	{
//		cout << "That wasn't a y or n! Apparently you can't follow\n instructions, so I'll trash your disk anyway.\a\a\a\n";
//	}
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
This program may reformat your hard disk
and destory all your data.
Do you wish to continue?<y/n> N
A wise choice ... bye
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/