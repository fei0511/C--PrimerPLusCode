#ifndef STONEWT1_H_
#define STONEWT1_H_
//相比于stonewt头文件，添加了转换函数
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
	//定义转换函数
	operator int() const;
	operator double() const;
};


#endif // !STOCK00_H_

#pragma once
