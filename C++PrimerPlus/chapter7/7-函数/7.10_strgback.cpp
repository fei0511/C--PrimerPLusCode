#include <iostream>
using namespace std;

//功能：7.10 返回字符串的指针
//时间：2020年11月26日09:30:59
// 
//char *  buildstr(char c, int n);
//
//int main()
//{
//	int times;
//	char ch;
//	
//	cout << "Enter a character: ";
//	cin >> ch;
//	cout << "Enter an integer: ";
//	cin >> times;
//	char * ps = buildstr(ch, times);
//	cout << ps << endl;
//	delete[] ps;
//	ps = buildstr('+', 20);
//	cout << ps << "-DONE-" << ps << endl;
//	delete[] ps;
//
//	system("pause");
//	return 0;
//}
//
//char *  buildstr(char c, int n)
//{
//	char * pstr = new char[n + 1];
//	pstr[n] = '\0';
//	while (n-- > 0)
//	{
//		pstr[n] = c;
//	}
//	return pstr;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter a character: *
Enter an integer: 50
**************************************************
++++++++++++++++++++-DONE-++++++++++++++++++++
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/