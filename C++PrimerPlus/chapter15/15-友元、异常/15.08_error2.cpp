#include <iostream>
#include <cstdlib>


//功能：15.9 异常（异常机制：try ... catch ...）
//时间：2020年12月5日21:50:32

//bool hmean(double a, double b);
//
//
//int main()
//{
//	double x, y, z;
//
//	std::cout << "Enter two numbers: ";
//	while (std::cin >> x >> y)
//	{
//		if (hmean(x, y, &z))
//			std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
//		else
//		{
//			std::cout << "One value should not be the negative of the other - try again.\n";
//		}
//		std::cout << "Enter next set of numbers <q to quit>: ";
//	}
//	std::cout << "Bye.\n";
//
//	system("pause");
//	return 0;
//}
//
//bool hmean(double a, double b, double * ans)
//{
//	if (a == -b)
//	{
//		*ans = DBL_MAX;
//		return false;
//	}
//	else
//	{
//		*ans = 2.0 * a * b / (a + b);
//		return true;
//	}
//
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter two numbers: 3 6
Harmonic mean of 3 and 6 is 4
Enter next set of numbers <q to quit>: 10 -10
One value should not be the negative of the other - try again.
Enter next set of numbers <q to quit>: 1 19
Harmonic mean of 1 and 19 is 1.9
Enter next set of numbers <q to quit>: q
Bye.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/