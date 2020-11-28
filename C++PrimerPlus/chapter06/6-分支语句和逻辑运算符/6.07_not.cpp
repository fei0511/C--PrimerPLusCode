#include <iostream>
#include <climits>
//功能：6.7 逻辑NOT运算符
//时间：2020年11月25日15:54:28
// 
//bool is_int(double);
//
//int main()
//{
//	using namespace std;
//
//	double num;
//
//	cout << "Yo, dude! Enter aninteger value: ";
//	cin >> num;
//	while (!is_int(num))
//	{
//		cout << "Out of range -- please try again: ";
//		cin >> num;
//	}
//	int val = int(num);
//	cout << "You've entered the integer " << val << "\nBye\n";
//
//	system("pause");
//	return 0;
//}
//
//bool is_int(double x)
//{
//	if (x <= INT_MAX && x >= INT_MIN)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Yo, dude! Enter aninteger value: 6234128679
Out of range -- please try again: -8000222333
Out of range -- please try again: 99999
You've entered the integer 99999
Bye
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/