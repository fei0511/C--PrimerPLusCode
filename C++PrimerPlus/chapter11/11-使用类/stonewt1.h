#ifndef STONEWT1_H_
#define STONEWT1_H_
//�����stonewtͷ�ļ��������ת������
class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;

public:
	Stonewt();
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	~Stonewt();
	void show_lbs() const;
	void show_stn() const;
	//����ת������
	operator int() const;
	operator double() const;
};


#endif // !STOCK00_H_

#pragma once
