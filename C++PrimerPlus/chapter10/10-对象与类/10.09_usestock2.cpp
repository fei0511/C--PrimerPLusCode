#include <iostream>
#include "stock20.h"
#include <typeinfo.h>
//���ܣ�10.9 ʹ���ࣨthisָ�룩
//ʱ�䣺2020��11��28��10:42:17
// 
//const int STKS = 4;  //�����ĸ�����
//
//int main()
//{
//	Stock stocks[STKS] = {
//		Stock("NanoSmart", 12, 20.0),
//		Stock("Boffo Objects", 200, 2.0),
//		Stock("Monolithic Obelisks", 130, 3.25),
//		Stock("Fleep Enterprises", 60, 6.5)
//	};
//
//	std::cout << std::endl;
//	std::cout << "Stock holdings:\n";
//	int st;
//	for ( st = 0; st < STKS; st++)
//	{
//		stocks[st].show();
//	}
//
//	const Stock * top = &stocks[0];
//	//���ĸ�������˳�����ν���total_val��С�ıȽϣ����շ���ֵ�����Ǹ����������
//	for ( st = 0; st < STKS; st++)
//	{
//		//std::cout << typeid(top).name() << std::endl;
//		top = &(top->topval(stocks[st]));  //topval����ֵΪ��������ã���ȡ���ַ��top
//		top = &top->topval(stocks[st]);  //���ϱ��ʽ�ȼۣ�->��������ȼ�������&�����
//		//std::cout << typeid(top).name() << std::endl;
//	}
//	std::cout << "\nMost valuable holding:\n";
//	top->show();
//
//	system("pause");
//	return 0;
//}



/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Constructor using NanoSmart called
Constructor using Boffo Objects called
Constructor using Monolithic Obelisks called
Constructor using Fleep Enterprises called

Stock holdings:
Company: NanoSmart Shares: 12
 Share Price: $20.000 Total Worth: $240.000
 Total Worth: $240.00
Company: Boffo Objects Shares: 200
 Share Price: $2.000 Total Worth: $400.000
 Total Worth: $400.00
Company: Monolithic Obelisks Shares: 130
 Share Price: $3.250 Total Worth: $422.500
 Total Worth: $422.50
Company: Fleep Enterprises Shares: 60
 Share Price: $6.500 Total Worth: $390.000
 Total Worth: $390.00

Most valuable holding:
Company: Monolithic Obelisks Shares: 130
 Share Price: $3.250 Total Worth: $422.500
 Total Worth: $422.50
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/