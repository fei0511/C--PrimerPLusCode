#include <iostream>
#include <cstdlib>


//功能：15.7 异常（调用abort）
//时间：2020年12月5日21:20:50
//double hmean(double a, double b);
//
//int main()
//{
//	double x, y, z;
//
//	std::cout << "Enter two numbers: ";
//	while (std::cin >> x >> y)
//	{
//		z = hmean(x, y);
//		std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
//		std::cout << "Enter next set of numbers <q to quitL>: ";
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
//		std::cout << "untenable arguments to hmean()\n";
//		std::abort();  //向标准错误流发送消息（程序异常终止），然后终止程序
//	}
//
//	return 2.0 * a * b / (a + b);
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter two numbers: 3 6
Harmonic mean of 3 and 6 is 4
Enter next set of numbers <q to quitL>: 10 -10
untenable arguments to hmean()
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/