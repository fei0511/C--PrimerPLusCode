#include <iostream>
using namespace std;
//���ܣ�6.13 ��ȡ���ֵ�ѭ��
//ʱ�䣺2020��11��25��18:25:32
// 
//const int Max = 5;
//int main()
//{
//	double fish[Max];
//	
//	cout << "please enter the weights of your fish.\n";
//	cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
//	cout << "fish #1: ";
//	int i = 0;
//	while (i < Max && cin >> fish[i])
//	{
//		if (++i < Max)
//		{
//			cout << "fish #" << i + 1 << ": ";
//		}
//	}
//
//	double total = 0.0;
//	for (int j = 0; j < i; j++)
//	{
//		total += fish[j];
//	}
//	if (i == 0)
//	{
//		cout << "No fish\n";
//	}
//	else
//	{
//		cout << total / i << " = average weight of " << i << " fish\n";
//	}
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
please enter the weights of your fish.
You may enter up to 5 fish <q to terminate>.
fish #1: 30
fish #2: 35
fish #3: 25
fish #4: 40
fish #5: q
32.5 = average weight of 4 fish
Done.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/