#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
//���ܣ�11.12 ʹ��Time��(����˼ӷ����������˷�����<<�����)
//ʱ�䣺2020��11��28��19:10:21
// 

//int main()
//{
//	using namespace std;
//	using VECTOR::Vector;
//	srand(time(0));
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	cout << "Enter target distance (q to quit): ";
//	while (cin >> target)
//	{
//		cout << "Enter step length: ";
//		if (!(cin >> dstep))
//		{
//			break;
//		}
//		
//		while (result.magval() < target)
//		{
//			direction = rand() % 360;
//			step.reset(dstep, direction, Vector::POL);
//			result = result + step;
//			steps++;
//		}
//		cout << "After " << steps << " steps, the subject has the following location:\n";
//		cout << result << endl;
//		result.polar_mode();
//		cout << " or\n" << result << endl;
//		cout << "Average outward distance per step = " << result.magval() / steps << endl;
//		steps = 0;
//		result.reset(0.0, 0.0);
//		cout << "Enter target distance (q to quit): ";
//	}
//	cout << "Bye!\n";
//	cin.clear();  // ��η����������������������ǿ��Լ�������,����������ݼ�������.
//	while (cin.get() != '\n')
//	{
//		continue;
//	}
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter target distance (q to quit): 50
Enter step length: 2
After 229 steps, the subject has the following location:
(x,y) = (14.0776, -48.7128)
 or
(m,a) = (50.7062, -73.8811)
Average outward distance per step = 0.221424
Enter target distance (q to quit): 50
Enter step length: 2
After 886 steps, the subject has the following location:
(x,y) = (-30.7936, 40.717)
 or
(m,a) = (51.0502, 127.1)
Average outward distance per step = 0.0576187
Enter target distance (q to quit): 50
Enter step length: 1
After 3357 steps, the subject has the following location:
(x,y) = (28.9034, -41.2861)
 or
(m,a) = (50.3979, -55.0051)
Average outward distance per step = 0.0150128
Enter target distance (q to quit): q
Bye!
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/