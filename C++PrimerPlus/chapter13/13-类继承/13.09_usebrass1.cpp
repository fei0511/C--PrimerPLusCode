#include <iostream>
#include "brass.h"

//���ܣ�13.9 ��ļ̳�(��̬���м̳�)
//ʱ�䣺2020��11��30��20:36:01
//ͨ��������е��÷�����û��ʹ�õ��鷽��������

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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
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
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/