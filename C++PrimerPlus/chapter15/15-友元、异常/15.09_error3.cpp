#include <iostream>
#include <cstdlib>


//���ܣ�15.9 �쳣�����ش����룩
//ʱ�䣺2020��12��5��21:34:13

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
//		catch (const char * s)   //�˴������ַ�������쳣��Ϣ��
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
//		throw "bad hmean() arguments: a = -b not allowed";   //��������쳣�����׳��쳣
//	}
//
//	return 2.0 * a * b / (a + b);
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter two numbers: 3 6
Harmonic mean of 3 and 6 is 4
Enter next set of numbers <q to quit>: 10 -10
bad hmean() arguments: a = -b not allowed
Enter a new pair of numbers: 1 19
Harmonic mean of 1 and 19 is 1.9
Enter next set of numbers <q to quit>: q
Bye.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/