#ifndef MYTIME2_H_
#define MYTIME2_H_

class Time
{
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(double n) const;
	void Show() const;

private:
	int hours;
	int minutes;
};


#endif // !STOCK00_H_

