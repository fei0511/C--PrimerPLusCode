#ifndef BRASS_H_
#define BRASS_H_

#include <string>

class Brass
{
public:
	Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
	void Deposit(double amt);   //存款
	virtual void Withdraw(double amt); //取款
	double Balance() const;
	virtual void ViewAcct() const;  //显示账户信息
	virtual ~Brass() {}

private:
	std::string fullNanme;  //客户姓名
	long acctNum;           //账号
	double balance;         //结余
};

class BrassPlus : public Brass
{
public:
	BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
	BrassPlus(const Brass & ba, double m1 = 500, double r = 0.11125);
	virtual void ViewAcct() const;
	virtual void Withdraw(double amt);
	void ResetMax(double m) { maxLoan = m; }
	void ResetRate(double r) { rate = r; }
	void ResetOwes() { oweBank = 0; }

private:
	double maxLoan;  //透支上限
	double rate;     //贷款利率
	double oweBank;  //当前透支总额

};



#endif // !STOCK00_H_

