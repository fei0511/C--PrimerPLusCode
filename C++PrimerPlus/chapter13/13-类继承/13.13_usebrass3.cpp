#include <iostream>
#include <string>
#include "acctabc.h"

//���ܣ�13.13 ��ļ̳�(�������)
//ʱ�䣺2020��12��1��21:44:27
//ͨ��ָ�루�����ã����е��÷�����ʹ�õ��鷽��������

//const int CLIENTS = 4;
//
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	AcctABC* p_clients[CLIENTS];   //�����˶�̬�ԣ�ָ���������󣬼ȿ��Ե��ø��෽���������Ե�������ķ���
//	std::string temp;
//	long tempnum;
//	double tempbal;
//	char kind;
//
//	for (int i = 0; i < CLIENTS; i++)
//	{
//		cout << "Enter client's name: ";
//		//ÿ��ʹ����cin>>֮�󣬶����ڻ������ж����һ���س���
//		//cin��ʱ�򣬲�����ֻҪ��ȡ���س�����ִ����cin�����Ǳ���Ҫ��ȡ�������Ӧ�����͵����ݡ��Ӽ������룬�Ż�����ִ����cin��
//		//����������Ϊ�գ�����cin>>�ڵȴ���������ʱ�����������ûس�����cin>>���Ҳ����ִ�н�����
//		//cin.getline()������getline()���������Ƕ����Իس�����ΪΨһ�ı�׼��������������Ϊ�գ�Ҳ����˵ֱ��һ���س����ͽ�����
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
//		while (cin.get() != '\n')   //������뻺�����ж�������ݣ��Լ��س���
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
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
Enter client's name: 212118
Enter client's account number: 5200
Enter opening balance: $2
Enter 1 for Brass Account or 2 for BrassPlus Account: 800
Enter either 1 or 2: Enter either 1 or 2: Enter either 1 or 2: 0.10
Enter either 1 or 2: Enter either 1 or 2: Enter client's name: Time Turtletop
Enter client's account number: 233255
Enter opening balance: $688
Enter 1 for Brass Account or 2 for BrassPlus Account: 1

Brass Client: Harry Fishsong
Account Number: 112233
Balance: $1500.00

Brass Client: Dinah Otternoe
Account Number: 121213
Balance: $1800.00
Owed to bank: $0.00
Loan Rate: 12.000%

Brass Client: 212118
Account Number: 5200
Balance: $2.00

Brass Client: Time Turtletop
Account Number: 233255
Balance: $688.00

Done.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/