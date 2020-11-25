#include <iostream>
#include <cctype>   
//功能：6.8 字符函数库cctypes
//时间：2020年11月25日16:06:35
// 

//int main()
//{
//	using namespace std;
//
//	cout << "Enter text for analysis, and type @ to terminate input.\n";
//	char ch;
//	int whitespace = 0;
//	int digits = 0;
//	int chars = 0;
//	int punct = 0;
//	int others = 0;
//
//	cin.get(ch);
//	while (ch != '@')
//	{
//		if (isalpha(ch))        //字母
//		{
//			chars++;
//		}
//		else if (isspace(ch))   //空格
//		{
//			whitespace++;
//		}
//		else if (isdigit(ch))   //数字
//		{
//			digits++;
//		}
//		else if (ispunct(ch))   //标点符号
//		{
//			punct++;
//		}
//		else
//		{
//			others++;
//		}
//		cin.get(ch);
//	}
//	cout << chars << " letters, " << whitespace << " whitespace, " << digits << " digits, "
//		<< punct << " punctuations, " << others << " others.\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter text for analysis, and type @ to terminate input.
AdrenalVision International producer Adrienne Vismonger
announced production of their new 3-D film, a remake of
"My Dinner with Andre," scheduled for 2013. "wait until
you see the the new scene with an enraged Collossipede!"@
177 letters, 33 whitespace, 5 digits, 9 punctuations, 0 others.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/