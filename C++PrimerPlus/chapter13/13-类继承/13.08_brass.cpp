#include <iostream>
#include "brass.h"
//功能：13.8 类的继承(多态公有继承)
//时间：2020年11月30日20:08:56
// 

//using std::cout;
//using std::endl;
//using std::string;
//
//
//typedef std::ios_base::fmtflags format;
//typedef std::streamsize precis;
//format setFormat();
//void restore(format f, precis p);
//
//Brass::Brass(const std::string & s, long an, double bal)
//{
//	fullNanme = s;
//	acctNum = an;
//	balance = bal;  
//}
//
//void Brass::Deposit(double amt)   //存款
//{
//	if (amt < 0)
//	{
//		cout << "Negative deposit not allowed; " << "deposit if cancelled.\n";
//	}
//	else
//	{
//		balance += amt;
//	}
//}
//
//void Brass::Withdraw(double amt)   //取钱
//{
//	format initialState = setFormat();
//	precis prec = cout.precision(2);
//
//	if (amt < 0)
//	{
//		cout << "Withdrawal amount must be positive; " << "withdrawal cancelled.\n";
//	}
//	else if (amt <= balance)
//	{
//		balance -= amt;
//	}
//	else
//	{
//		cout << "Withdrawal amount of $" << amt << " exceeds your balance.\n" << "Withdrawal cancelled.\n";
//	}
//	restore(initialState, prec);
//}
//
//double Brass::Balance() const 
//{
//	return balance;
//}
//
//void Brass::ViewAcct() const  //显示账户信息
//{
//	format initialState = setFormat();
//	precis prec = cout.precision(2);
//	cout << "Client: " << fullNanme << endl;
//	cout << "Account Number: " << acctNum << endl;
//	cout << "Balance: $" << balance << endl;
//	restore(initialState, prec);
//}
//
//BrassPlus::BrassPlus(const std::string & s, long an, double bal, double ml, double r) : Brass(s, an, bal)
//{
//	maxLoan = ml;  //最大透支上限
//	oweBank = 0.0; //欠款数目
//	rate = r;      //贷款利率
//}
//
//BrassPlus::BrassPlus(const Brass & ba, double ml, double r) : Brass(ba)
//{
//	maxLoan = ml;
//	oweBank = 0.0;
//	rate = r;
//}
//
//void BrassPlus::ViewAcct() const
//{
//	format initialState = setFormat();
//	precis prec = cout.precision(2);
//	Brass::ViewAcct();                   //派生类可以调用基类的公共方法
//	cout << "Maximum loan: $" << maxLoan << endl;
//	cout << "Owed to bank: $" << oweBank << endl;
//	cout.precision(3);
//	cout << "Loan Rate: " << 100 * rate << "%\n";
//	restore(initialState, prec);
//}
//
//void BrassPlus::Withdraw(double amt)
//{
//	format initialState = setFormat();
//	precis prec = cout.precision(2);
//
//	double bal = Balance();           //因为派生类没有重定义该方法，所以调用该方法不用加作用域运算符
//
//	if (amt <= bal)
//	{
//		Brass::Withdraw(amt);
//	}
//	else if (amt <= bal + maxLoan - oweBank)  //账户剩余额度加上能透支的额度
//	{
//		double advance = amt - bal;
//		oweBank += advance * (1.0 + rate);
//		cout << "Bank advance: $" << advance << endl;  //需要透支数目
//		cout << "Finance charge: $" << advance * rate << endl;  //利息
//		Deposit(advance);
//		Brass::Withdraw(amt);
//	}
//	else
//	{
//		cout << "Credit limit exceed. Transaction cancelled.\n";
//	}
//	restore(initialState, prec);
//}
//
//format setFormat()
//{
//	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
//}
//
//void restore(format f, precis p)
//{
//	cout.setf(f, std::ios_base::floatfield);
//	cout.precision(p);
//}