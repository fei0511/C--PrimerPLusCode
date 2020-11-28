#include <iostream>
#include "mytime1.h"
//功能：11.5 实现Time类成员函数(添加了重载加法运算符)
//时间：2020年11月28日16:36:41
// 

//Time::Time()
//{
//	hours = minutes = 0;
//}
//
//Time::Time(int h, int m)
//{
//	hours = h;
//	minutes = m;
//}
//
//void Time::AddMin(int m)
//{
//	minutes += m;
//	hours += minutes / 60;
//	minutes %= 60;
//}
//
//void Time::AddHr(int h)
//{
//	hours += h;
//}
//
//void Time::Reset(int h, int m)
//{
//	hours = h;
//	minutes = m;
//}
//
//Time Time::operator+(const Time & t) const
//{
//	Time sum;
//	sum.minutes = minutes + t.minutes;
//	sum.hours = hours + t.hours + sum.minutes / 60;
//	sum.minutes %= 60;
//
//	return sum;
//}
//
//void Time::Show() const
//{
//	std::cout << hours << " hours, " << minutes << " minutes";
//}
