#include <iostream>
#include "stonewt1.h"
//���ܣ�11.20 ʵ������Զ�����ת����ǿ������ת��(�����ת������)
//ʱ�䣺2020��11��28��22:27:03
// 
using std::cout;

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}
Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}

void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}

Stonewt::operator int() const
{
	return int (pounds + 0.5);
}

Stonewt::operator double() const
{
	return pounds;
}