#include <iostream>
using namespace std;

//功能：7.6 函数和数组
//时间：2020年11月25日21:33:24
// 
//const int ArSize = 8;
//int sum_arr(int arr[], int n);
//
//int main()
//{
//	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
//
//	cout << cookies << " = array address, ";
//	cout << sizeof(cookies) << " = sizeof cookies\n";
//	
//	int sum = sum_arr(cookies, ArSize);    //向函数中传入数组
//	cout << "Total cookies eaten: " << sum << "\n";
//	sum = sum_arr(cookies, 3);    //向函数中传入数组
//	cout << "First three eaters ate " << sum << " cookies.\n";
//	sum = sum_arr(cookies + 4, 4);    //向函数中传入数组
//	cout << "Last four eaters ate " << sum << " cookies.\n";
//
//	system("pause");
//	return 0;
//}
//
//int sum_arr(int arr[], int n)
//{
//	int total = 0;
//	cout << arr << " = arr, ";
//
//	cout << sizeof(arr) << " = sizeof arr\n";
//
//	for (int i = 0; i < n; i++)
//	{
//		total = total + arr[i];
//	}
//	return total;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
0023F790 = array address, 32 = sizeof cookies
0023F790 = arr, 4 = sizeof arr
Total cookies eaten: 255
0023F790 = arr, 4 = sizeof arr
First three eaters ate 7 cookies.
0023F7A0 = arr, 4 = sizeof arr
Last four eaters ate 240 cookies.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/