#include <iostream>
using namespace std;
//���ܣ�8.9 ��������
//ʱ�䣺2020��11��26��20:43:15
//
//const int ArSize = 80;
//char * left(const char * str, int n = 1);   //��������Ĭ�ϲ���
//
//int main()
//{
//	char sample[ArSize];
//	cout << "Enter a string:\n";
//	cin.get(sample, ArSize);
//	char * ps = left(sample, 4);
//	cout << ps << endl;
//	delete[] ps;
//	ps = left(sample);
//	cout << ps << endl;
//	delete[] ps;
//
//	system("pause");
//	return 0;
//}
//
//char * left (const char * str, int n)
//{
//	if (n < 0)
//	{
//		n = 0;
//	}
//	char * p = new char[n + 1];
//	int i;
//	for ( i = 0; i < n && str[i]; i++)
//	{
//		p[i] = str[i];
//	}
//	while (i <= n)
//	{
//		p[i++] = '\0';
//	}
//	return p;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter a string:
forthcoming
fort
f
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/