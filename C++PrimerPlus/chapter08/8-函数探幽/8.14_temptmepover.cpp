#include <iostream>
using namespace std;
//���ܣ�8.14 ��������˳�򣨲����������
//ʱ�䣺2020��11��27��11:16:50
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Listing Mr. E's counts of things:
template A
13 31 103 301 310 130
Listing Mr. E's debts:
template B
2400 1300 1800
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/