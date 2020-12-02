#include <iostream>
#include <string>
#include "brass.h"

//功能：13.10 类的继承(多态公有继承)
//时间：2020年11月30日21:06:17
//通过指针（或引用）进行调用方法，使用到虚方法的特性

//const int CLIENTS = 4;
//
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	Brass * p_clients[CLIENTS];   //体现了多态性，指向子类对象后，既可以调用父类方法，还可以调用子类的方法
//	std::string temp;
//	long tempnum;
//	double tempbal;
//	char kind;
//
//	for (int i = 0; i < CLIENTS; i++)
//	{
//		cout << "Enter client's name: ";
//		//每次使用了cin>>之后，都会在缓冲区中多出来一个回车符
//		//cin的时候，并不是只要读取到回车符就执行完cin，而是必须要读取到【相对应的类型的内容】从键盘敲入，才会真正执行完cin，
//		//不允许输入为空，所以cin>>在等待键盘敲入时，你哪怕先敲回车符，cin>>语句也不会执行结束。
//		//cin.getline()函数和getline()函数，它们都是以回车符作为唯一的标准，而且允许输入为空，也就是说直接一个回车符就结束，
//		getline(cin, temp);
//		cout << "Enter client's account number: ";
//		cin >> tempnum;
//		cout << "Enter opening balance: $";
//		cin >> tempbal;
//		cout << "Enter 1 for Brass Account or " << "2 for BrassPlus Account: ";
//		while (cin >> kind && (kind != '1' && kind != '2'))
//		{
//			cout << "Enter either 1 or 2: ";
//		}
//		if (kind == '1')
//		{
//			p_clients[i] = new Brass(temp, tempnum, tempbal);
//		}
//		else
//		{
//			double tmax, trate;
//			cout << "Enter the overdraft limit: $";
//			cin >> tmax;
//			cout << "Enter the interest rate " << "as a decimal fraction: ";
//			cin >> trate;
//			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
//		}
//		while (cin.get() != '\n')   //清楚输入缓冲区中多余的数据，以及回车符
//		{
//			continue;
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < CLIENTS; i++)
//	{
//		p_clients[i]->ViewAcct();
//		cout << endl;
//	}
//	for (int i = 0; i < CLIENTS; i++)
//	{
//		delete p_clients[i];
//	}
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter client's name: Harry Fishsong
Enter client's account number: 112233
Enter opening balance: $1500
Enter 1 for Brass Account or 2 for BrassPlus Account: 1
Enter client's name: Dinah Otternoe
Enter client's account number: 121213
Enter opening balance: $1800
Enter 1 for Brass Account or 2 for BrassPlus Account: 2
Enter the overdraft limit: $350
Enter the interest rate as a decimal fraction: 0.12
Enter client's name: Brenda Birdherd
Enter client's account number: 212118
Enter opening balance: $5200
Enter 1 for Brass Account or 2 for BrassPlus Account: 2
Enter the overdraft limit: $800
Enter the interest rate as a decimal fraction: 0.10
Enter client's name: Tim Turtletop
Enter client's account number: 233255
Enter opening balance: $688
Enter 1 for Brass Account or 2 for BrassPlus Account: 1

Client: Harry Fishsong
Account Number: 112233
Balance: $1500.00

Client: Dinah Otternoe
Account Number: 121213
Balance: $1800.00
Maximum loan: $350.00
Owed to bank: $0.00
Loan Rate: 12.000%

Client: Brenda Birdherd
Account Number: 212118
Balance: $5200.00
Maximum loan: $800.00
Owed to bank: $0.00
Loan Rate: 10.000%

Client: Tim Turtletop
Account Number: 233255
Balance: $688.00

Done.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/