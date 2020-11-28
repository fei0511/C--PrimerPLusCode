#include <iostream>
#include "stonewt.h"
//功能：11.18 实现类的自动类型转换和强制类型转换
//时间：2020年11月28日21:20:12
// 
//using std::cout;
//void display(const Stonewt & st, int n);
//int main()
//{
//	Stonewt incognito = 275;
//	Stonewt wolfe(285.7);
//	Stonewt taft(21, 8);
//
//	cout << "The celebrity weighed ";
//	incognito.show_stn();
//	cout << "The detective weighed ";
//	wolfe.show_stn();
//	cout << "The President weighed ";
//	taft.show_lbs();
//	incognito = 276.8;
//	taft = 325;
//	cout << "After dinner, the celebrity weighed ";
//	incognito.show_stn();
//	cout << "After dinner, the President weighed ";
//	taft.show_lbs();
//	display(taft, 2);
//	cout << "The wrestler weighed even more.\n";
//	display(422, 2);
//	cout << "No stone left unearned\n";
//
//	system("pause");
//	return 0;
//}
//
//void display(const Stonewt & st, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Wow!";
//		st.show_stn();
//	}
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
The celebrity weighed 19 stone, 9 pounds
The detective weighed 20 stone, 5.7 pounds
The President weighed 302 pounds
After dinner, the celebrity weighed 19 stone, 10.8 pounds
After dinner, the President weighed 325 pounds
Wow!23 stone, 3 pounds
Wow!23 stone, 3 pounds
The wrestler weighed even more.
Wow!30 stone, 2 pounds
Wow!30 stone, 2 pounds
No stone left unearned
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/