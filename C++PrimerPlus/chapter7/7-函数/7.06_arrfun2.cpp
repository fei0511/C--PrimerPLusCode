#include <iostream>
using namespace std;

//���ܣ�7.6 ����������
//ʱ�䣺2020��11��25��21:33:24
// 
//const int ArSize = 8;
//int sum_arr(int arr[], int n);
//
//int main()
//{
//	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
//
//	cout << cookies << " = array address, ";
//	cout << sizeof(cookies) << " = sizeof cookies\n";
//	
//	int sum = sum_arr(cookies, ArSize);    //�����д�������
//	cout << "Total cookies eaten: " << sum << "\n";
//	sum = sum_arr(cookies, 3);    //�����д�������
//	cout << "First three eaters ate " << sum << " cookies.\n";
//	sum = sum_arr(cookies + 4, 4);    //�����д�������
//	cout << "Last four eaters ate " << sum << " cookies.\n";
//
//	system("pause");
//	return 0;
//}
//
//int sum_arr(int arr[], int n)
//{
//	int total = 0;
//	cout << arr << " = arr, ";
//
//	cout << sizeof(arr) << " = sizeof arr\n";
//
//	for (int i = 0; i < n; i++)
//	{
//		total = total + arr[i];
//	}
//	return total;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
0023F790 = array address, 32 = sizeof cookies
0023F790 = arr, 4 = sizeof arr
Total cookies eaten: 255
0023F790 = arr, 4 = sizeof arr
First three eaters ate 7 cookies.
0023F7A0 = arr, 4 = sizeof arr
Last four eaters ate 240 cookies.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/