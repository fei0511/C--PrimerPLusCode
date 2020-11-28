#include <iostream>
#include "coordin.h"
using namespace std;
//功能：9.2 函数与结构体(直角坐标系到极坐标系之间的转换)（分文件编写）
//时间：2020年11月27日15:06:15
//
//int main()
//{
//	rect rplace;
//	polar pplace;
//
//	cout << "Enter the x and y values: ";
//	while (cin >> rplace.x >> rplace.y)   //读取到非数字之后，终端将中止
//	{
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "Next two numbers (q to quit): ";
//	}
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter the x and y values: 120 80
distance = 144.222, angle = 33.6901 degrees
Next two numbers (q to quit): 120 50
distance = 130, angle = 22.6199 degrees
Next two numbers (q to quit): q
Done.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/