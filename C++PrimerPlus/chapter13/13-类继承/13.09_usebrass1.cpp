#include <iostream>
#include "brass.h"

//功能：13.9 类的继承(多态公有继承)
//时间：2020年11月30日20:36:01
//通过对象进行调用方法，没有使用到虚方法的特性

//int main()
//{
//	using std::cout;
//	using std::endl;
//
//	Brass Piggy("Porcelot PIgg", 381299, 4000.00);
//	BrassPlus Hoggy("Horatio Hogg", 383388, 3000.00);
//	Piggy.ViewAcct();
//	cout << endl;
//	Hoggy.ViewAcct();
//	cout << endl;
//	cout << "Depisiting $1000 into the Hogg Account:\n";
//	Hoggy.Deposit(1000.00);
//	cout << "Withdrawing $4200 from the Pigg Account:\n";
//	Piggy.Withdraw(4200.00);
//	cout << "Pigg account balance: $" << Piggy.Balance() << endl;
//	cout << "Withdrawing $4200 from the Hogg Account:\n";
//	Hoggy.Withdraw(4200.00);
//	Hoggy.ViewAcct();
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Client: Porcelot PIgg
Account Number: 381299
Balance: $4000.00

Client: Horatio Hogg
Account Number: 383388
Balance: $3000.00
Maximum loan: $500.00
Owed to bank: $0.00
Loan Rate: 11.125%

Depisiting $1000 into the Hogg Account:
Withdrawing $4200 from the Pigg Account:
Withdrawal amount of $4200.00 exceeds your balance.
Withdrawal cancelled.
Pigg account balance: $4000
Withdrawing $4200 from the Hogg Account:
Bank advance: $200.00
Finance charge: $22.25
Client: Horatio Hogg
Account Number: 383388
Balance: $0.00
Maximum loan: $500.00
Owed to bank: $222.25
Loan Rate: 11.125%
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/