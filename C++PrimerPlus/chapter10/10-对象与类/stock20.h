#ifndef STOCK20_H_
#define STOCK20_H_

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
	Stock();      // 默认构造函数
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock();    //析构函数
	void buy(long num, double price); 
	void sell(long num, double price);
	void update(double price);
	void show() const; // const用来修饰this指针，表明该函数不能使用this指针来修改本对象的值
	const Stock & topval(const Stock & s) const; // 括号中的const表示该函数不能修改s对象的值
};


#endif // !STOCK00_H_

