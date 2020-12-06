#include <iostream>
#include <cmath>
#include "exc_mean.h"


//功能：15.11 异常（将对象用作异常类型）
//时间：2020年12月5日22:16:02

//double hmean(double a, double b);
//double gmean(double a, double b);
//
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	double x, y, z;
//
//	std::cout << "Enter two numbers: ";
//	while (std::cin >> x >> y)
//	{
//		try
//		{
//			z = hmean(x, y);
//			std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
//			std::cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x,y) << std::endl;
//			std::cout << "Enter next set of numbers <q to quit>: ";
//		}
//		catch (bad_hmean & bg)   //此处捕获字符串类的异常信息，
//		{
//			bg.mesg();
//			std::cout << "Try again.\n";
//			continue;
//		}
//		catch (bad_gmean& hg)   //此处捕获字符串类的异常信息，
//		{
//			cout << hg.mesg();
//			cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
//			cout << "Sorry, you don't get to play any more.\n";
//			std::cout << "Try again.\n";
//			break;
//		}
//	}
//	std::cout << "Bye.\n";
//
//	system("pause");
//	return 0;
//}
//
//double hmean(double a, double b)
//{
//	if (a == -b)
//	{
//		throw bad_hmean(a, b);   //如果存在异常，将抛出异常
//	}
//
//	return 2.0 * a * b / (a + b);
//}
//
//double gmean(double a, double b)
//{
//	if (a < 0 || b < 0)
//	{
//		throw bad_gmean(a, b);   //如果存在异常，将抛出异常
//	}
//
//	return std::sqrt(a * b);
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter two numbers: 4 12
Harmonic mean of 4 and 12 is 6
Geometric mean of 4 and 12 is 6.9282
Enter next set of numbers <q to quit>: 5 -5
hmean(5, -5): invalid arguments: a = -b
Try again.
5 -2
Harmonic mean of 5 and -2 is -6.66667
gmean() arguments should be >= 0
Values used: 5, -2
Sorry, you don't get to play any more.
Try again.
Bye.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/