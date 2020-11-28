#include <iostream>
using namespace std;
//功能：6.12 break和continue语句
//时间：2020年11月25日16:53:59
// 
//const int ArSize = 80;
//int main()
//{
//	char line[ArSize];
//	int spaces = 0;
//
//	cout << "Enter a line of text:\n";
//	cin.get(line, ArSize);
//	cout << "Complete line:\n" << line << endl;
//	cout << "Line through first period:\n";
//	for (int i = 0; line[i] != '\0'; i++)
//	{
//		cout << line[i];
//		if (line[i] == '.')
//		{
//			break;
//		}
//		if (line[i] != ' ')
//		{
//			continue;
//		}
//		spaces++;
//	}
//	cout << "\n" << spaces << " spaces\n";
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter a line of text:
Let's do lunch today. You can pay!
Complete line:
Let's do lunch today. You can pay!
Line through first period:
Let's do lunch today.
3 spaces
Done.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/