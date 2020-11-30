#include <iostream>
#include "string1.h"
//功能：12.6 动态内存和类(改进后的新String类)
//时间：2020年11月29日16:45:57
//const int ArSize = 10;
//const int MaxLen = 81;
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::cin;
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
//			cout << sayings[i][0] << ": " << sayings[i] << endl;
//		}
//
//		int shortest = 0;
//		int first = 0;
//		for (i = 1; i < total; i++)
//		{
//			if (sayings[i].length() < sayings[shortest].length())
//			{
//				shortest = i;
//			}
//			if (sayings[i] < sayings[first])
//			{
//				first = i;
//			}
//		}
//		cout << "Shortest saying:\n" << sayings[shortest] << endl;
//		cout << "First alphabetically:\n" << sayings[first] << endl;
//		cout << "This program used " << String::HowMany() << " String objects. Bye.\n";
//	}
//	else
//	{
//		cout << "No input! Bye.\n";
//	}
//	
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Hi, what's your name?
>> Misty Gutz
Misty Gutz, please enter up to 10 short sayings <empty line to quit>:
1: a fool and his money are soon parted
2: penny wise, pound foolish
3: the love of money is the root od much evil
4: out of sight, out of mind
5: absence makes the heart grow fonder
6: absinthe makes the heart grow fonder
7:
Here are your sayings:
a: a fool and his money are soon parted
p: penny wise, pound foolish
t: the love of money is the root od much evil
o: out of sight, out of mind
a: absence makes the heart grow fonder
a: absinthe makes the heart grow fonder
Shortest saying:
penny wise, pound foolish
First alphabetically:
a fool and his money are soon parted
This program used 11 String objects. Bye.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/