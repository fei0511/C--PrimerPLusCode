#include <iostream>
using namespace std;
//功能：7.3 函数参数与按值传递
//时间：2020年11月25日20:41:30
// 
//void n_chars(char, int);
//
//int main()
//{
//	int times;
//	char ch;
//
//	cout << "Enter a character: ";
//	cin >> ch;
//	while (ch != 'q')
//	{
//		cout << "Enter an integer: ";
//		cin >> times;
//		n_chars(ch, times);
//		cout << "\nEnter another character or press the q-key to quit: ";
//		cin >> ch;
//	}
//	cout << "The value of times is " << times << ".\n";
//	cout << "Bye\n";
//
//
//	system("pause");
//	return 0;
//}
//
//void n_chars(char c, int n)
//{
//	while (n-- > 0)
//	{
//		cout << c;
//	}
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter a character: -
Enter an integer: 50
--------------------------------------------------
Enter another character or press the q-key to quit: *
Enter an integer: 50
**************************************************
Enter another character or press the q-key to quit: X
Enter an integer: 50
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
Enter another character or press the q-key to quit: q
The value of times is 50.
Bye
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/