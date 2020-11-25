#include <iostream>
//功能：6.3 if else if语句
//时间：2020年11月25日14:58:03
// 
//const int Fave = 27;
//
//int main()
//{
//	using namespace std;
//	int n;
//
//	cout << "Enter a number in the range 1-100 to find ";
//	cout << "my favorite number: ";
//	do 
//	{
//		cin >> n;
//		if (n < Fave)
//		{
//			cout << "Too low -- guess again: ";
//		}
//		else if (n > Fave)
//		{
//			cout << "Too high -- guess again: ";
//		}
//		else
//		{
//			cout << Fave << " is right!\n";
//		}
//	} while (n != Fave);
//
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter a number in the range 1-100 to find my favorite number: 50
Too high -- guess again: 25
Too low -- guess again: 38
Too high -- guess again: 55
Too high -- guess again: 27
27 is right!
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/