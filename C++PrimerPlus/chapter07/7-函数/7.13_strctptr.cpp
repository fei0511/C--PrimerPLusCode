#include <iostream>
#include <cmath>
using namespace std;

//���ܣ�7.13 ������ṹ��---����ṹ��ĵ�ַ(ֱ������ϵ��������ϵ֮���ת��)
//ʱ�䣺2020��11��26��14:06:43
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
//	while (cin >> rplace.x >> rplace.y)   //��ȡ��������֮���ն˽���ֹ
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