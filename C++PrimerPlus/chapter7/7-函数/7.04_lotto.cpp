#include <iostream>
using namespace std;
//���ܣ�7.4 ���������밴ֵ����
//ʱ�䣺2020��11��25��21:05:40
// 
//long double probability(unsigned numbers, unsigned picks);
//
//int main()
//{
//	double total, choices;
//	cout << "Enter the total number od choices on the game card and \n"
//		<< "the number of picks allowed:\n";
//	while ((cin >> total >> choices) && choices <= total)
//	{
//		cout << "You have one chance in ";
//		cout << probability(total, choices);
//		cout << " of wining.\n";
//		cout << "Next two numbers (q to quit): ";
//	}
//	cout << "bye\n";
//
//	system("pause");
//	return 0;
//}
//
//long double probability(unsigned numbers, unsigned picks)
//{
//	long double result = 1.0;
//	long double n;
//	unsigned p;
//
//	for ( n = numbers, p = picks; p > 0; n--, p--)
//	{
//		result = result * n / p;
//	}
//	return result;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter the total number od choices on the game card and
the number of picks allowed:
49 6
You have one chance in 1.39838e+07 of wining.
Next two numbers (q to quit): 51 6
You have one chance in 1.80095e+07 of wining.
Next two numbers (q to quit): 38 6
You have one chance in 2.76068e+06 of wining.
Next two numbers (q to quit): q
bye
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/