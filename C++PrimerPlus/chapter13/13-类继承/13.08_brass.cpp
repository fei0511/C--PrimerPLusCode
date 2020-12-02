#include <iostream>
#include "brass.h"
//���ܣ�13.8 ��ļ̳�(��̬���м̳�)
//ʱ�䣺2020��11��30��20:08:56
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
//void Brass::Deposit(double amt)   //���
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
//void Brass::Withdraw(double amt)   //ȡǮ
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
//void Brass::ViewAcct() const  //��ʾ�˻���Ϣ
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
//	maxLoan = ml;  //���͸֧����
//	oweBank = 0.0; //Ƿ����Ŀ
//	rate = r;      //��������
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
//	Brass::ViewAcct();                   //��������Ե��û���Ĺ�������
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
//	double bal = Balance();           //��Ϊ������û���ض���÷��������Ե��ø÷������ü������������
//
//	if (amt <= bal)
//	{
//		Brass::Withdraw(amt);
//	}
//	else if (amt <= bal + maxLoan - oweBank)  //�˻�ʣ���ȼ�����͸֧�Ķ��
//	{
//		double advance = amt - bal;
//		oweBank += advance * (1.0 + rate);
//		cout << "Bank advance: $" << advance << endl;  //��Ҫ͸֧��Ŀ
//		cout << "Finance charge: $" << advance * rate << endl;  //��Ϣ
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