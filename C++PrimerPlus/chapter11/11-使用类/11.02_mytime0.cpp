#include <iostream>
#include "mytime0.h"
//���ܣ�11.2 ʵ��Time���Ա����
//ʱ�䣺2020��11��28��16:15:38
// 
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
//Time Time::Sum(const Time & t) const 
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