#include <iostream>
using namespace std;

//���ܣ�7.10 �����ַ�����ָ��
//ʱ�䣺2020��11��26��09:30:59
// 
//char *  buildstr(char c, int n);
//
//int main()
//{
//	int times;
//	char ch;
//	
//	cout << "Enter a character: ";
//	cin >> ch;
//	cout << "Enter an integer: ";
//	cin >> times;
//	char * ps = buildstr(ch, times);
//	cout << ps << endl;
//	delete[] ps;
//	ps = buildstr('+', 20);
//	cout << ps << "-DONE-" << ps << endl;
//	delete[] ps;
//
//	system("pause");
//	return 0;
//}
//
//char *  buildstr(char c, int n)
//{
//	char * pstr = new char[n + 1];
//	pstr[n] = '\0';
//	while (n-- > 0)
//	{
//		pstr[n] = c;
//	}
//	return pstr;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter a character: *
Enter an integer: 50
**************************************************
++++++++++++++++++++-DONE-++++++++++++++++++++
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/