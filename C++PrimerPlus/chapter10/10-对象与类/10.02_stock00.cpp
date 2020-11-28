#include <iostream>
#include "stock00.h"
//功能：10.2 实现类成员函数
//时间：2020年11月27日22:09:43
// 

//void Stock::acquire(const std::string & co, long n, double pr)
//{
//	company = co;
//	if (n < 0)
//	{
//		std::cout << "Number of shares can't be negative; "
//			<< company << " shares set to 0.\n";
//	}
//	else
//	{
//		shares = n;
//	}
//	share_val = pr;
//	set_tot();
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
//void Stock::show()
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
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//
//}