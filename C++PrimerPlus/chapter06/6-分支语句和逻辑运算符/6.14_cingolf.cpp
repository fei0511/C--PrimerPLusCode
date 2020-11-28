#include <iostream>
using namespace std;
//功能：6.14 读取数字的循环
//时间：2020年11月25日18:25:32
// 
//const int Max = 5;
//int main()
//{
//	int golf[Max];
//
//	cout << "Please enter your golf scores.\n";
//	cout << "You must enter " << Max << " rounds.\n";
//	int i;
//	for ( i = 0; i < Max; i++)
//	{
//		cout << "round #" << i + 1 << ": ";
//		while (!(cin >> golf[i]))
//		{
//			cin.clear();                  
//			while (cin.get() != '\n')
//			{
//				continue;
//			}
//			cout << "Please enter a number: ";
//		}
//	}
//
//	double total = 0.0;
//	for ( i = 0; i < Max; i++)
//	{
//		total += golf[i];
//	}
//	cout << total / Max << " = average score " << Max << " rounds\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Please enter your golf scores.
You must enter 5 rounds.
round #1: 88
round #2: 87
round #3: must
Please enter a number: 103
round #4: 94
round #5: 86
91.6 = average score 5 rounds
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/