#include <iostream>
using namespace std;
//功能：9.5 外部变量声明
//时间：2020年11月27日16:27:36
//
//double warming = 0.3;
//void update(double dt);
//void local();
//
//int main()
//{
//	cout << "Global warming is " << warming << " degrees.\n";
//	update(0.1);
//	cout << "Global warming is " << warming << " degrees.\n";
//	local();
//	cout << "Global warming is " << warming << " degrees.\n";
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Global warming is 0.3 degrees.
Updating global warming to 0.4 degrees.
Global warming is 0.4 degrees.
Local warming = 0.8 degrees.
But global warming = 0.4 degrees.
Global warming is 0.4 degrees.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/