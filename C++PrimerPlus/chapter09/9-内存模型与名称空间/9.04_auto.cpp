#include <iostream>
using namespace std;
//���ܣ�9.4 �Զ��洢������
//ʱ�䣺2020��11��27��15:27:39
//
//void oil(int x);
//int main()
//{
//	int texas = 31;
//	int year = 2011;
//	cout << "In main(), texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In mian(), year = " << year << ", &year = ";
//	cout << &year << endl;
//	oil(texas);
//	cout << "In main(), texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In main(), year = " << year << ", &year = ";
//	cout << &year << endl;
//
//	system("pause");
//	return 0;
//}
//
//void oil(int x)
//{
//	int texas = 5;
//
//	cout << "In oil(), texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In oil(), x = " << x << ", &x = ";
//	cout << &x << endl;
//	{
//		int texas = 113;
//		cout << "In block, texas = " << texas;
//		cout << ", &texas = " << &texas << endl;
//		cout << "In block, x = " << x << ", &x = " << endl;
//		cout << &x << endl;
//	}
//	cout << "Post-block texas = " << texas;
//	cout << ", &texas = " << &texas << endl;
//}
/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
In main(), texas = 31, &texas = 0077F740
In mian(), year = 2011, &year = 0077F734
In oil(), texas = 5, &texas = 0077F64C
In oil(), x = 31, &x = 0077F660
In block, texas = 113, &texas = 0077F640
In block, x = 31, &x =
0077F660
Post-block texas = 5, &texas = 0077F64C
In main(), texas = 31, &texas = 0077F740
In main(), year = 2011, &year = 0077F734
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/