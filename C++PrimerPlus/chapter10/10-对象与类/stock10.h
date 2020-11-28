#ifndef STOCK10_H_
#define STOCK10_H_

#include <string>
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	//定义于类声明中的函数都将自动成为内联函数
	void set_tot() { total_val = shares * share_val; }

public:
	Stock();
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};


#endif // !STOCK00_H_

