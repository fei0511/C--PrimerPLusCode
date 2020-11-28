#include <iostream>
#include "stock20.h"
#include <typeinfo.h>
//功能：10.9 使用类（this指针）
//时间：2020年11月28日10:42:17
// 
//const int STKS = 4;  //创建四个对象
//
//int main()
//{
//	Stock stocks[STKS] = {
//		Stock("NanoSmart", 12, 20.0),
//		Stock("Boffo Objects", 200, 2.0),
//		Stock("Monolithic Obelisks", 130, 3.25),
//		Stock("Fleep Enterprises", 60, 6.5)
//	};
//
//	std::cout << std::endl;
//	std::cout << "Stock holdings:\n";
//	int st;
//	for ( st = 0; st < STKS; st++)
//	{
//		stocks[st].show();
//	}
//
//	const Stock * top = &stocks[0];
//	//对四个对象按照顺序依次进行total_val大小的比较，最终返回值最大的那个对象的引用
//	for ( st = 0; st < STKS; st++)
//	{
//		//std::cout << typeid(top).name() << std::endl;
//		top = &(top->topval(stocks[st]));  //topval返回值为对象的引用，再取其地址给top
//		top = &top->topval(stocks[st]);  //与上表达式等价，->运算符优先级优先于&运算符
//		//std::cout << typeid(top).name() << std::endl;
//	}
//	std::cout << "\nMost valuable holding:\n";
//	top->show();
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Constructor using NanoSmart called
Constructor using Boffo Objects called
Constructor using Monolithic Obelisks called
Constructor using Fleep Enterprises called

Stock holdings:
Company: NanoSmart Shares: 12
 Share Price: $20.000 Total Worth: $240.000
 Total Worth: $240.00
Company: Boffo Objects Shares: 200
 Share Price: $2.000 Total Worth: $400.000
 Total Worth: $400.00
Company: Monolithic Obelisks Shares: 130
 Share Price: $3.250 Total Worth: $422.500
 Total Worth: $422.50
Company: Fleep Enterprises Shares: 60
 Share Price: $6.500 Total Worth: $390.000
 Total Worth: $390.00

Most valuable holding:
Company: Monolithic Obelisks Shares: 130
 Share Price: $3.250 Total Worth: $422.500
 Total Worth: $422.50
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/