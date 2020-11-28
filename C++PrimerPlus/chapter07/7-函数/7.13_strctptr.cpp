#include <iostream>
#include <cmath>
using namespace std;

//功能：7.13 函数与结构体---传入结构体的地址(直角坐标系到极坐标系之间的转换)
//时间：2020年11月26日14:06:43
// 
//struct polar
//{
//	double distance;
//	double angle;
//};
//struct rect
//{
//	double x;
//	double y;
//};
//
//void rect_to_polar(const rect * pxy, polar * pda);
//void show_polar(const polar * pda);
//
//int main()
//{
//	rect rplace;
//	polar pplace;
//
//	cout << "Enter the x and y values: ";
//	while (cin >> rplace.x >> rplace.y)   //读取到非数字之后，终端将中止
//	{
//		rect_to_polar(&rplace, &pplace);
//		show_polar(&pplace);
//		cout << "Next two numbers (q to quit): ";
//	}
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}
//
//void rect_to_polar(const rect * pxy, polar * pda)
//{
//	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
//	pda->angle = atan2(pxy->y, pxy->x);
//}
//
//void show_polar(const polar * pda)
//{
//	const double Rad_to_deg = 57.29577951;
//
//	cout << "distance = " << pda->distance;
//	cout << ", angle = " << pda->angle * Rad_to_deg;
//	cout << " degrees\n";
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter the x and y values: 30 40
distance = 50, angle = 53.1301 degrees
Next two numbers (q to quit): -100 100
distance = 141.421, angle = 135 degrees
Next two numbers (q to quit): q
Done.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/