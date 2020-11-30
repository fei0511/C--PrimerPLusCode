#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string1.h"
//功能：12.7 动态内存和类(改进后的新String类)
//时间：2020年11月29日22:07:38
//const int ArSize = 10;
//const int MaxLen = 81;
//
//int main()
//{
//	using namespace std;
//	String name;
//	cout << "Hi, what's your name?\n>> ";
//	cin >> name;
//
//	cout << name << ", please enter up to " << ArSize
//		<< " short sayings <empty line to quit>:\n";
//	String sayings[ArSize];
//	char temp[MaxLen];
//	int i;
//	for (i = 0; i < ArSize; i++)
//	{
//		cout << i + 1 << ": ";
//		cin.get(temp, MaxLen);  // 换行符被留在输入队列
//		while (cin && cin.get() != '\n') //读取上一句输入后的字符，直到读到换行符，它在做的事就是丢弃滤掉多余的字符。
//		{
//			continue;
//		}
//		if (!cin || temp[0] == '\0')  //c++最新标准中，!cin可以用来进行检测空行，而第二个条件旧版本检测空行
//		{
//			break;
//		}
//		else
//		{
//			sayings[i] = temp;
//		}
//	}
//	int total = i;
//
//	if (total > 0)
//	{
//		cout << "Here are your sayings:\n";
//		for (i = 0; i < total; i++)
//		{
//			cout << sayings[i] << endl;
//		}
//		
//		String * shortest = &sayings[0];
//		String * first = &sayings[0];
//
//		for (i = 1; i < total; i++)
//		{
//			if (sayings[i].length() < shortest->length())  //比较长度
//			{
//				shortest = &sayings[i];
//			}
//			if (sayings[i] < *first)  //比较值
//			{
//				first = &sayings[i];
//			}
//		}
//		cout << "Shortest saying:\n" << *shortest << endl;
//		cout << "First alphabetically:\n" << *first << endl;
//		srand(time(0));
//		int choice = rand() % total;
//		String * favorite = new String(sayings[choice]);  //调用拷贝构造函数
//		cout << "My favorite saying:\n" << *favorite << endl;
//		delete favorite;
//	}
//	else
//	{
//		cout << "No input to say, eh?\n";
//	}
//	cout << "Bye.\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Hi, what's your name?
>> Kirt Rood
Kirt Rood, please enter up to 10 short sayings <empty line to quit>:
1: a friend in need id a friend indeed
2: neither a borrower nor a lender be
3: a switch in time saves nine
4: a niche in time saves stine
5: it takes a crook to catch a crook
6: cold hands, warm heart
7:
Here are your sayings:
a friend in need id a friend indeed
neither a borrower nor a lender be
a switch in time saves nine
a niche in time saves stine
it takes a crook to catch a crook
cold hands, warm heart
Shortest saying:
cold hands, warm heart
First alphabetically:
a friend in need id a friend indeed
My favorite saying:
it takes a crook to catch a crook
Bye.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/