#include <iostream>
#include <cmath>
using namespace std;

//���ܣ�7.12 ������ṹ��(ֱ������ϵ��������ϵ֮���ת��)
//ʱ�䣺2020��11��26��13:50:55
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
//	while (cin >> rplace.x >> rplace.y)   //��ȡ��������֮���ն˽���ֹ
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter the x and y values: 30 40
distance = 50, angle = 53.1301 degrees
Next two numbers (q to quit): -100 100
distance = 141.421, angle = 135 degrees
Next two numbers (q to quit): q
Done.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/