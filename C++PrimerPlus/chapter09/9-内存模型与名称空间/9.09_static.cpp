#include <iostream>
using namespace std;
//���ܣ�9.9 ��̬�����ԡ��ڲ�������
//ʱ�䣺2020��11��27��16:51:12
//����ȫ�ֱ���ʹ��static�޶����󣬻�ʹ�øñ���ֻ���ڱ��ļ���ʹ�ã�
//�Ҳ����������ļ��ж����ͬ�������ı������ͻ
//const int ArSize = 10;
//void strcount(const char * str);
//
//int main()
//{
//	char input[ArSize];
//	char next;
//
//	cout << "Enter a line:\n";
//	cin.get(input, ArSize);
//	while (cin)
//	{
//		cin.get(next);
//		while (next != '\n')
//		{
//			cin.get(next);
//		}
//		strcount(input);
//		cout << "Enter next line (empty line to quit):\n";
//		cin.get(input, ArSize);
//	}
//	cout << "Bye\n";
//
//	system("pause");
//	return 0;
//}
//
//void strcount(const char * str)
//{
//	static int total = 0;
//	int count = 0;
//
//	cout << "\"" << str << "\" contains ";
//	while (*str++)
//	{
//		count++;
//	}
//	total += count;
//	cout << count << " characters\n";
//	cout << total << " characters total\n";
//}
/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter a line:
nice pants
"nice pant" contains 9 characters
9 characters total
Enter next line (empty line to quit):
thanks
"thanks" contains 6 characters
15 characters total
Enter next line (empty line to quit):
parting is such sweet sorrow
"parting i" contains 9 characters
24 characters total
Enter next line (empty line to quit):
ok
"ok" contains 2 characters
26 characters total
Enter next line (empty line to quit):

Bye
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/