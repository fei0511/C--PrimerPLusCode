#include <iostream>
#include "worker0.h"

//功能：14.9 多重继承
//时间：2020年12月4日08:39:06
//
//const int LIM = 4;
//
//
//int main()
//{
//	Waiter bob("Bob Apple", 314L, 5);
//	Singer bev("Beverly Hills", 522L, 3);
//	Waiter w_temp;
//	Singer s_temp;
//
//	Worker * pw[LIM] = { &bob, &bev, &w_temp, &s_temp };
//
//	int i;
//	for (i = 2; i < LIM; i++)
//	{
//		pw[i]->Set();   //虚函数，已重载
//	}
//	for (i = 0; i < LIM; i++)
//	{
//		pw[i]->Show();  //虚函数，已重载
//		std::cout << std::endl;
//	}
//
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter worker's name: Waldo Dropmaster
Enter worker's ID: 442
Enter waiter's panache rating: 3
Enter worker's name: Sylvie Sirenne
Enter worker's ID: 555
Enter number for singer's vocal range:
0: other  1: alto  2: contralto  3: soprano
4: bass  5: baritone  6: tenor
3
Category: waiter
Name: Bob Apple
Employee ID: 314
Panache rating: 5

Category: singer
Name: Beverly Hills
Employee ID: 522
Vocal range: soprano

Category: waiter
Name: Waldo Dropmaster
Employee ID: 442
Panache rating: 3

Category: singer
Name: Sylvie Sirenne
Employee ID: 555
Vocal range: soprano

请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/