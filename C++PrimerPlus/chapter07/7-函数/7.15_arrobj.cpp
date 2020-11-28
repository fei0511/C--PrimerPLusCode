#include <iostream>
#include <array>
#include <string>
using namespace std;
//功能：7.15 函数与array对象
//时间：2020年11月26日14:25:10
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
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
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
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/