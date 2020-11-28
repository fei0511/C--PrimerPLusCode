#include <iostream>
using namespace std;
//enum {red, orange, yellow, green ,blue ,violet, indigo};
//功能：6.11 枚举作为sitch语句的标签
//时间：2020年11月25日16:43:29
// 

//int main()
//{
//	cout << "Enter color code (0-6): ";
//	int code;
//	cin >> code;
//	while (code >= red && code < indigo)
//	{
//		switch (code)
//		{
//			case red: cout << "\a\n"; break;
//			case orange: cout << "Her hair was orange.\n"; break;
//			case yellow: cout << "Her shoes was yellow.\n"; break;
//			case green: cout << "Her nails was green.\n"; break;
//			case blue: cout << "Her sweatsuit was blue.\n"; break;
//			case violet: cout << "Her eyes were violet.\n"; break;
//			case indigo: cout << "Her mood was indigo.\n"; break;
//		}
//		cout << "Enter color code (0-6): ";
//		cin >> code;
//	}
//	cout << "Bye!\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter color code (0-6): 3
Her nails was green.
Enter color code (0-6): 5
Her eyes were violet.
Enter color code (0-6): 2
Her shoes was yellow.
Enter color code (0-6): 8
Bye!
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/