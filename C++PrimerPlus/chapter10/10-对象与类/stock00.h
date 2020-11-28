#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>
class Stock
{
public:
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();

private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	//定义于类声明中的函数都将自动成为内联函数
	void set_tot() { total_val = shares * share_val;  }   
};


#endif // !STOCK00_H_

