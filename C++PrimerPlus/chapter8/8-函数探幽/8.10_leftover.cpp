#include <iostream>
using namespace std;
//���ܣ�8.10 ��������
//ʱ�䣺2020��11��26��21:54:04
//
//unsigned long left(unsigned long num, unsigned ct);
//char * left(const char * str, int n = 1);   //��������Ĭ�ϲ���
//
//int main()
//{
//	const char * trip = "Hawaii!!";
//	unsigned long n = 12345678;
//	int i;
//	char * temp;
//
//	for ( i = 1; i < 10; i++)
//	{
//		cout << left(n, i) << endl;
//		temp = left(trip, i);
//		cout << temp << endl;
//		delete[] temp;   
//	}
//
//	system("pause");
//	return 0;
//}
//
//unsigned long left(unsigned long num, unsigned ct)
//{
//	unsigned digits = 1;
//	unsigned long n = num;
//
//	if (ct == 0 || num == 0)  //������num������Ҫ��λ����Ϊ��ʱ��ֱ�ӷ�����
//	{
//		return 0;
//	}
//	while (n /= 10)  //ͳ������num��λ��
//	{
//		digits++;
//	}
//	if (digits > ct)  //������num��λ����������Ҫ��λ�����򷵻���Ҫ����һλ
//	{
//		ct = digits - ct;  //������Ҫɾ����λ��
//		while (ct--)   //ÿִ��һ��ѭ�������൱�ڽ�����Num���һλɾ��
//		{
//			num /= 10;
//			return num;
//		}
//	}
//	else             //ֱ�ӷ�������num
//	{
//		return num;
//	}
//}
//
//char * left(const char * str, int n)
//{
//	if (n < 0)
//	{
//		n = 0;
//	}
//	char * p = new char[n + 1];
//	int i;
//	for (i = 0; i < n && str[i]; i++)   //str[i]����ʾ���ַ��󣬽���ѭ��
//	{
//		p[i] = str[i];
//	}
//	while (i <= n)  //���ַ����һλ���Ͻ�����
//	{
//		p[i++] = '\0';
//	}
//	return p;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
1234567
H
1234567
Ha
1234567
Haw
1234567
Hawa
1234567
Hawai
1234567
Hawaii
1234567
Hawaii!
12345678
Hawaii!!
12345678
Hawaii!!
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/