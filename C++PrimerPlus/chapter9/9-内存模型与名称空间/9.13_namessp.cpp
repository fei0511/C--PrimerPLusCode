#include <iostream>
#include "namesp.h"
//���ܣ�9.13 �����ռ���붨��
//ʱ�䣺2020��11��27��20:59:50
// 
void other(void);
void another(void);

int main()
{
	using debts::Debt;
	using debts::showDebt;

	Debt golf = { {"Benny", "Goatsniff"}, 120.0 };
	showDebt(golf);
	other();
	another();

	system("pause");
	return 0;
}

void other(void)
{
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = { "Doodles", "Glister" };
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		getDebt(zippy[i]);
	}

	for ( i = 0; i < 3; i++)
	{
		showDebt(zippy[i]);
	}
	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
}

void another(void)
{
	using pers::Person;
	Person collector = { "Milo", "Rightshift" };
	pers::showPerson(collector);
	std::cout << std::endl;
}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Goatsniff, Benny: $120
Glister, Doodles
Enter first name: Arabella
Enter last name: Binx
Enter debt: 100
Enter first name: Cleve
Enter last name: DelaProux
Enter debt: 120
Enter first name: Eddie
Enter last name: Fiotox
Enter debt: 200
Binx, Arabella: $100
DelaProux, Cleve: $120
Fiotox, Eddie: $200
Total debt: $420
Rightshift, Milo
�밴���������. . .

-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/