#include <iostream>
#include <climits>
//���ܣ�6.7 �߼�NOT�����
//ʱ�䣺2020��11��25��15:54:28
// 
//bool is_int(double);
//
//int main()
//{
//	using namespace std;
//
//	double num;
//
//	cout << "Yo, dude! Enter aninteger value: ";
//	cin >> num;
//	while (!is_int(num))
//	{
//		cout << "Out of range -- please try again: ";
//		cin >> num;
//	}
//	int val = int(num);
//	cout << "You've entered the integer " << val << "\nBye\n";
//
//	system("pause");
//	return 0;
//}
//
//bool is_int(double x)
//{
//	if (x <= INT_MAX && x >= INT_MIN)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Yo, dude! Enter aninteger value: 6234128679
Out of range -- please try again: -8000222333
Out of range -- please try again: 99999
You've entered the integer 99999
Bye
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/