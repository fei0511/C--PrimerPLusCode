#include <iostream>
#include <cstdlib>


//���ܣ�15.7 �쳣������abort��
//ʱ�䣺2020��12��5��21:20:50
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
//		std::abort();  //���׼������������Ϣ�������쳣��ֹ����Ȼ����ֹ����
//	}
//
//	return 2.0 * a * b / (a + b);
//}
/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter two numbers: 3 6
Harmonic mean of 3 and 6 is 4
Enter next set of numbers <q to quitL>: 10 -10
untenable arguments to hmean()
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/