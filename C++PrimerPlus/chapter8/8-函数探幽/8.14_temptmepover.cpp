#include <iostream>
using namespace std;
//功能：8.14 函数调用顺序（部分排序规则）
//时间：2020年11月27日11:16:50
//
//template <typename T>
//void ShowArray(T arr[], int n);
//
//template <typename T>
//void ShowArray(T * arr[], int n);
//
//struct debts
//{
//	char name[50];
//	double amount;
//};
//
//
//int main()
//{
//	int things[6] = { 13, 31, 103, 301, 310, 130 };
//	struct debts mr_E[3] = 
//	{
//		{"Ima Wolfe", 2400.0},
//		{"Ura Foxe", 1300.0},
//		{"Iby Stout", 1800.0}
//	};
//	double * pd[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		pd[i] = &mr_E[i].amount;
//	}
//	cout << "Listing Mr. E's counts of things:\n";
//	ShowArray(things, 6);
//	cout << "Listing Mr. E's debts:\n";
//	ShowArray(pd, 3);
//
//	system("pause");
//	return 0;
//}
//
//template <typename T>
//void ShowArray(T arr[], int n)
//{
//	cout << "template A\n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//	cout << endl;
//}
//
//template <typename T>
//void ShowArray(T * arr[], int n)
//{
//	cout << "template B\n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << *arr[i] << ' ';
//	}
//	cout << endl;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Listing Mr. E's counts of things:
template A
13 31 103 301 310 130
Listing Mr. E's debts:
template B
2400 1300 1800
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/