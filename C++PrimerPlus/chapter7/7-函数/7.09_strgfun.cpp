#include <iostream>
using namespace std;

//���ܣ�7.9 �ַ���Ŀ����
//ʱ�䣺2020��11��26��09:20:05
// 
//unsigned int c_in_str(const char * str, char ch);
//
//int main()
//{
//	char mmm[15] = "minimum";
//	const char * wail = "ululate";
//
//	unsigned int ms = c_in_str(mmm, 'm');
//	unsigned int us = c_in_str(wail, 'u');
//
//	cout << ms << " m characters in " << mmm << endl;
//	cout << us << " u characters in " << wail << endl;
//
//	system("pause");
//	return 0;
//}
//
//unsigned int c_in_str(const char * str, char ch)
//{
//	unsigned int count = 0;
//
//	while (*str)
//	{
//		if (*str == ch)
//		{
//			count++;
//		}
//		str++;
//	}
//	return count;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
3 m characters in minimum
2 u characters in ululate
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/