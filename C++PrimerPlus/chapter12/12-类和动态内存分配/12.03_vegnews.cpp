#include <iostream>
#include "stringbad.h"
//功能：12.3 动态内存和类(该程序因为拷贝构造函数的原因，会发生错误)
//时间：2020年11月29日10:22:43
//using std::cout;
//using std::endl;
//
//void callme1(StringBad &);
//void callme2(StringBad);
//
//int main()
//{
//	{
//		cout << "Starting an inner block.\n";
//		StringBad headline1("Celery Stalks at Midnight");
//		StringBad headline2("Lettuce Prey");
//		StringBad sports("Spinach Leaves Bowl for Dollars");
//
//		cout << "headline1: " << headline1 << endl;
//		cout << "headline2: " << headline2 << endl;
//		cout << "sports: " << sports << endl;
//		callme1(headline1);
//		cout << "headline1: " << headline1 << endl;
//		//下面这句代码因为是传值的方式进行传参，，但拷贝构造函数里面没有对num_strings进行加一，因此，造成了下面的代码错误          
//		//callme2(headline2);
//		//cout << "headline2: " << headline2 << endl;
//		//cout << "Initalize one object to another:\n";
//		//这句代码会调用拷贝构造函数，但拷贝构造函数里面没有对num_strings进行加一，因此，造成了下面的代码错误           
//		//StringBad sailor = sports;       
//		//cout << "sailor: " << sailor << endl;
//		//cout << "Assign one object to another:\n";
//		//StringBad knot;
//		//knot = headline1;   //此处会调用赋值运算符，如果不自己提供赋值运算符，将会造成浅拷贝问题，最终报错
//		//cout << "knot: " << knot << endl;
//		//cout << "Exiting the block.\n";
//
//	}
//	cout << "End of main()\n";
//
//	system("pause");
//	return 0;
//}
//
//void callme1(StringBad & rsb)
//{
//	cout << "String passed by reference:\n";
//	cout << "  \"" << rsb << "\"\n";
//}
//
//void callme2(StringBad sb)
//{
//	cout << "String passed by value:\n";
//	cout << "  \"" << sb << "\"\n";
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Starting an inner block.
1: "Celery Stalks at Midnight" object created
2: "Lettuce Prey" object created
3: "Spinach Leaves Bowl for Dollars" object created
headline1: Celery Stalks at Midnight
headline2: Lettuce Prey
sports: Spinach Leaves Bowl for Dollars
String passed by reference:
  "Celery Stalks at Midnight"
headline1: Celery Stalks at Midnight


String passed by value:
  "Lettuce Prey"
"Lettuce Prey" object deleted, 2 left
headline2: 葺葺葺葺葺葺葺葺輀
Initalize one object to another:
sailor: Spinach Leaves Bowl for Dollars
Assign one object to another:
3: "C++" default object created
knot: Celery Stalks at Midnight
Exiting the block.
"Celery Stalks at Midnight" object deleted, 2 left
"Spinach Leaves Bowl for Dollars" object deleted, 1 left
"葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺l" object deleted, 0 left
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/