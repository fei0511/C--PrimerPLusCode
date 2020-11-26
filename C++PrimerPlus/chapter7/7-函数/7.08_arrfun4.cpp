#include <iostream>
using namespace std;

//功能：7.8 使用数组区间的函数
//时间：2020年11月26日08:58:39
// 
//const int arsize = 8;
//int sum_arr(const int * begin, const int * end);
//
//int main()
//{
//	int cookies[arsize] = { 1,2,4,8,16,32,64,128 };
//	
//	int sum = sum_arr(cookies, cookies + arsize);    //向函数中传入数组
//	cout << "Total cookies eaten: " << sum << "\n";
//	sum = sum_arr(cookies, cookies + 3);    //向函数中传入数组
//	cout << "First three eaters ate " << sum << " cookies.\n";
//	sum = sum_arr(cookies + 4, cookies + 8);    //向函数中传入数组
//	cout << "Last four eaters ate " << sum << " cookies.\n";
//
//	system("pause");
//	return 0;
//}
//
//int sum_arr(const int * begin, const int * end)
//{
//	const int * pt;
//	int total = 0;
//	
//	for (pt = begin; pt != end; pt++)
//	{
//		total = total + *pt;
//	}
//	return total;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Total cookies eaten: 255
First three eaters ate 7 cookies.
Last four eaters ate 240 cookies.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/