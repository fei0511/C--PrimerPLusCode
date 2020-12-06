#include <iostream>
#include <cmath>
#include <string>
#include "exc_mean.h"


//���ܣ�15.12 �쳣��ջ���ˣ�
//ʱ�䣺2020��12��6��09:35:33

//class demo
//{
//public:
//	demo(const std::string& str)
//	{
//		word = str;
//		std::cout << "demo " << word << "created\n";
//	}
//	~demo()
//	{
//		std::cout << "demo " << word << " destroyed\n";
//	}
//	void show() const {
//		std::cout << "demo " << word << " lives!\n";
//	}
//
//private:
//	std::string word;
//};
//
//
//double hmean(double a, double b);
//double gmean(double a, double b);
//double means(double a, double b);
//
//
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	double x, y, z;
//	{
//		demo d1("demo found in block in main()");
//		cout << "Enter two numbers: ";
//		while (std::cin >> x >> y)
//		{
//			try
//			{
//				z = means(x, y);
//				std::cout << "The mean mean of " << x << " and " << y << " is " << z << std::endl;
//				std::cout << "Enter next pair: ";
//			}
//			catch (bad_hmean& bg)   //�˴������ַ�������쳣��Ϣ��
//			{
//				bg.mesg();
//				std::cout << "Try again.\n";
//				continue;
//			}
//			catch (bad_gmean& hg)   //�˴������ַ�������쳣��Ϣ��
//			{
//				cout << hg.mesg();
//				cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
//				cout << "Sorry, you don't get to play any more.\n";
//				std::cout << "Try again.\n";
//				break;
//			}
//		}
//		d1.show();
//
//	}
//	std::cout << "Bye.\n";
//	cin.get();
//	cin.get();
//	
//
//	system("pause");
//	return 0;
//}
//
//double hmean(double a, double b)
//{
//	if (a == -b)
//	{
//		throw bad_hmean(a, b);   //��������쳣�����׳��쳣
//	}
//
//	return 2.0 * a * b / (a + b);
//}
//
//double gmean(double a, double b)
//{
//	if (a < 0 || b < 0)
//	{
//		throw bad_gmean(a, b);   //��������쳣�����׳��쳣
//	}
//
//	return std::sqrt(a * b);
//}
//
//double means(double a, double b)
//{
//	double am, hm, gm;
//	demo d2("found in means()");
//	am = (a + b) / 2.0;
//	try
//	{
//		hm = hmean(a, b);
//		gm = gmean(a, b);
//	}
//	catch (bad_hmean& bg)   //�˴������ַ�������쳣��Ϣ��
//	{
//		bg.mesg();
//		std::cout << "Caugnt in means().\n";
//		throw;
//	}
//	d2.show();
//
//	return (am + hm + gm) / 3.0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
demo found in block in main()created
Enter two numbers: 6 12
demo found in means()created
demo found in means() lives!
demo found in means() destroyed
The mean mean of 6 and 12 is 8.49509
Enter next pair: 6 -6
demo found in means()created
hmean(6, -6): invalid arguments: a = -b
Caugnt in means().
demo found in means() destroyed
hmean(6, -6): invalid arguments: a = -b
Try again.
6 -8
demo found in means()created
demo found in means() destroyed
gmean() arguments should be >= 0
Values used: 6, -8
Sorry, you don't get to play any more.
Try again.
demo found in block in main() lives!
demo found in block in main() destroyed
Bye.

�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/