#include <iostream>
#include <string>
#include "brass.h"

//���ܣ�13.10 ��ļ̳�(��̬���м̳�)
//ʱ�䣺2020��11��30��21:06:17
//ͨ��ָ�루�����ã����е��÷�����ʹ�õ��鷽��������

//const int CLIENTS = 4;
//
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	Brass * p_clients[CLIENTS];   //�����˶�̬�ԣ�ָ���������󣬼ȿ��Ե��ø��෽���������Ե�������ķ���
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
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/