#include <iostream>
using namespace std;

//���ܣ�7.11 ������ṹ��
//ʱ�䣺2020��11��26��10:53:42
// 
//struct travel_time
//{
//	int hours;
//	int mins;
//};
//const int Mins_per_hr = 60;
//
//travel_time sum(travel_time t1, travel_time t2);
//void show_time(travel_time t);
//
//int main()
//{
//	travel_time day1 = { 5, 45 };
//	travel_time day2 = { 4, 55 };
//
//	travel_time trip = sum(day1, day2);
//	cout << "Two-day total: ";
//	show_time(trip);
//
//	travel_time day3 = { 4, 32 };
//	cout << "Three-day total: ";
//	show_time(sum(trip, day3));
//
//	system("pause");
//	return 0;
//}
//
//travel_time sum(travel_time t1, travel_time t2)
//{
//	travel_time total;
//
//	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
//	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / Mins_per_hr;
//
//	return total;
//}
//
//void show_time(travel_time t)
//{
//	cout << t.hours << " hours, " << t.mins << " minutes\n";
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Two-day total: 10 hours, 40 minutes
Three-day total: 15 hours, 12 minutes
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/