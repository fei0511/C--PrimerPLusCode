#include <iostream>
//���ܣ�6.5 �߼�AND�����&&
//ʱ�䣺2020��11��25��15:19:49
// 
//const int ArSize = 6;
//
//int main()
//{
//	using namespace std;
//	
//	float naaq[ArSize];
//	cout << "Enter the NAAQs (New Age Awareness Quotients) "
//		<< "of\nyour neighbors. Program terminates "
//		<< "when you make\n" << ArSize << " entires "
//		<< "or enter a negative value.\n";
//
//	int i = 0;
//	float temp;
//	cout << "First value: ";
//	cin >> temp;
//	while (i < ArSize && temp >= 0)
//	{
//		naaq[i] = temp;
//		++i;
//		if (i < ArSize)
//		{
//			cout << "Next value: ";
//			cin >> temp;
//		}
//	}
//	if (i == 0)
//	{
//		cout << "No data-type\n";
//	}
//	else
//	{
//		cout << "Enter your NAAQ: ";
//		float you;
//		cin >> you;
//		int count = 0;
//		for (int j = 0; j < i; j++)
//		{
//			if (naaq[j] > you)
//			{
//				++count;
//			}
//
//		}
//		cout << count;
//		cout << " of your neighbors have greater awareness of\n"
//			<< "the New Age than you do.\n";
//	}
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter the NAAQs (New Age Awareness Quotients) of
your neighbors. Program terminates when you make
6 entires or enter a negative value.
First value: 28
Next value: 72
Next value: 15
Next value: 6
Next value: 130
Next value: 145
Enter your NAAQ: 50
3 of your neighbors have greater awareness of
the New Age than you do.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/