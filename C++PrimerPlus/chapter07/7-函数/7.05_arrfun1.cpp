#include <iostream>
using namespace std;
//功能：7.5 函数和数组
//时间：2020年11月25日21:18:25
// 
//const int ArSize = 8;
//int sum_arr(int arr[], int n);
//
//int main()
//{
//	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
//
//	int sum = sum_arr(cookies, ArSize);    //向函数中传入数组
//	cout << "Total cookies eaten: " << sum << "\n";
//
//	system("pause");
//	return 0;
//}
//
//int sum_arr(int arr[], int n)
//{
//	int total = 0;
//	for (int i = 0; i < n; i++)
//	{
//		total = total + arr[i];
//	}
//	return total;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Total cookies eaten: 255
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/