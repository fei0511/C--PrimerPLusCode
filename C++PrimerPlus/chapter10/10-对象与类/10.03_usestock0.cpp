#include <iostream>
#include "stock00.h"
//功能：10.3 使用类
//时间：2020年11月27日22:22:47
// 

//int main()
//{
//	Stock fluffy_the_cat;
//	fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
//	fluffy_the_cat.show();
//	fluffy_the_cat.buy(15, 18.125);
//	fluffy_the_cat.show();
//	fluffy_the_cat.sell(400, 20.00);
//	fluffy_the_cat.show();
//	fluffy_the_cat.buy(300000, 40.125);
//	fluffy_the_cat.show();
//	fluffy_the_cat.sell(300000, 0.125);
//	fluffy_the_cat.show();
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Company: NanoSmart Shares: 20
 Share Price: $12.500 Total Worth: $250.000
 Total Worth: $250.00
Company: NanoSmart Shares: 35
 Share Price: $18.125 Total Worth: $634.375
 Total Worth: $634.38
You can't sell more than you have! Transaction is aborted.
Company: NanoSmart Shares: 35
 Share Price: $18.125 Total Worth: $634.375
 Total Worth: $634.38
Company: NanoSmart Shares: 300035
 Share Price: $40.125 Total Worth: $12038904.375
 Total Worth: $12038904.38
Company: NanoSmart Shares: 35
 Share Price: $0.125 Total Worth: $4.375
 Total Worth: $4.38
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/