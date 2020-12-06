#include <iostream>
#include <cstdlib>


//功能：15.9 异常（返回错误码）
//时间：2020年12月5日21:34:13

//double hmean(double a, double b);
//
//
//int main()
//{
//	double x, y, z;
//
//	std::cout << "Enter two numbers: ";
//	while (std::cin >> x >> y)
//	{
//		try
//		{
//			z = hmean(x, y);
//		}
//		catch (const char * s)   //此处捕获字符串类的异常信息，
//		{
//			std::cout << s << std::endl;
//			std::cout << "Enter a new pair of numbers: ";
//			continue;
//		}
//		
//		std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
//
//		std::cout << "Enter next set of numbers <q to quit>: ";
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
//		throw "bad hmean() arguments: a = -b not allowed";   //如果存在异常，将抛出异常
//	}
//
//	return 2.0 * a * b / (a + b);
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter two numbers: 3 6
Harmonic mean of 3 and 6 is 4
Enter next set of numbers <q to quit>: 10 -10
bad hmean() arguments: a = -b not allowed
Enter a new pair of numbers: 1 19
Harmonic mean of 1 and 19 is 1.9
Enter next set of numbers <q to quit>: q
Bye.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/