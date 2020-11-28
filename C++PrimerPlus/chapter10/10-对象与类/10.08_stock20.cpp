#include <iostream>
#include "stock20.h"
//功能：10.8 类成员函数的实现
//时间：2020年11月28日10:41:49
// 
//Stock::Stock()
//{
//	std::cout << "Default constructor called\n";
//	company = "no name";
//	shares = 0;
//	share_val = 0.0;
//	total_val = 0.0;
//}
//
//Stock::Stock(const std::string & co, long n, double pr)
//{
//	std::cout << "Constructor using " << co << " called\n";
//	company = co;
//
//	if (n < 0)
//	{
//		std::cout << "Number of shares can't be negative; "
//			<< company << " shares set to 0.\n";
//		shares = 0;
//	}
//	else
//	{
//		shares = n;
//	}
//	share_val = pr;
//	set_tot();
//}
//Stock::~Stock()
//{
//}
//
//void Stock::buy(long num, double price)
//{
//	if (num < 0)
//	{
//		std::cout << "Number of shares purchased can't be negative. "
//			<< "Transaction is aborted.\n";
//	}
//	else
//	{
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::sell(long num, double price)
//{
//	using std::cout;
//	if (num < 0)
//	{
//		cout << "Number of shares sold can't be negative. "
//			<< "Transaction is aborted.\n";
//	}
//	else if (num > shares)
//	{
//		cout << "You can't sell more than you have! "
//			<< "Transaction is aborted.\n";
//	}
//	else
//	{
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::update(double price)
//{
//	share_val = price;
//	set_tot();
//}
//
//// const用来修饰this指针，表明该函数不能使用this指针来修改本对象的值
//void Stock::show() const
//{
//	using std::cout;
//	using std::ios_base;
//	//设置定点表示法（即非科学计数法）
//	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
//	//设置显示三位小数
//	std::streamsize prec = cout.precision(3);
//
//	std::cout << "Company: " << company << " Shares: " << shares << '\n'
//		<< " Share Price: $" << share_val << " Total Worth: $" << total_val << '\n';
//
//	cout.precision(2);
//	cout << " Total Worth: $" << total_val << std::endl;
//
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//
//}
//
//// 第一个const用来表明该函数的对象不能对其进行修改
//// 括号中的const表示该函数不能修改s对象的值
//// 括号后面的const用来修饰this指针，表明该函数不能使用this指针来修改本对象的值
//// 具体详情见书本P364-P365
//const Stock & Stock::topval(const Stock & s) const
//{
//	if (s.total_val > total_val)
//	{
//		return s;
//	}
//	else
//	{
//		return *this;
//	}
//}