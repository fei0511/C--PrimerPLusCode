#include <iostream>
#include <array>
#include <string>
using namespace std;
//���ܣ�7.15 ������array����
//ʱ�䣺2020��11��26��14:25:10
// 
//const int Seasons = 4;
//const std::array<std::string, Seasons> Snames = { "Spring", "Summer", "Fall", "Winter" };
//
//void fill(std::array<double, Seasons> * pa);
//void show(std::array<double, Seasons> da);
//
//int main()
//{
//	array<double, Seasons> expenses;
//	fill(&expenses);
//	show(expenses);
//
//	system("pause");
//	return 0;
//}
//
//void fill(array<double, Seasons> * pa)
//{
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << "Enter " << Snames[i] << " expenses: ";
//		cin >> (*pa)[i];
//	}
//}
//
//void show(array<double, Seasons> da)
//{
//	double total = 0.0;
//	cout << "\nEXPENSS\n";
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << Snames[i] << ": $" << da[i] << endl;
//		total += da[i];
//	}
//	cout << "Total Expenses: $" << total << endl;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter Spring expenses: 212
Enter Summer expenses: 256
Enter Fall expenses: 208
Enter Winter expenses: 244

EXPENSS
Spring: $212
Summer: $256
Fall: $208
Winter: $244
Total Expenses: $920
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/