#include <iostream>
#include <cmath>
using namespace std;

//功能：7.12 函数与结构体(直角坐标系到极坐标系之间的转换)
//时间：2020年11月26日13:50:55
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
//polar rect_to_polar(rect xypos);
//void show_polar(polar dapos);
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
//
//polar rect_to_polar(rect xypos)
//{
//	polar answer;
//
//	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//	return answer;
//}
//
//void show_polar(polar dapos)
//{
//	const double Rad_to_deg = 57.29577951;
//
//	cout << "distance = " << dapos.distance;
//	cout << ", angle = " << dapos.angle * Rad_to_deg;
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