#include <iostream>
#include <string>
#include <algorithm>

//���ܣ�16.17 STL��string��
//ʱ�䣺2020��12��9��22:01:20

//int main()
//{
//	using namespace std;
//	string letters;
//	cout << "Enter the letter grounping (quit to quit): ";
//	while (cin >> letters && letters != "quit")
//	{
//		cout << "Permutations of " << letters << endl;
//		sort(letters.begin(), letters.end());
//		cout << letters << endl;
//		while (next_permutation(letters.begin(), letters.end()))
//		{
//			cout << letters << endl;
//		}
//		cout << "Entere next sequence (quit to quit): ";
//	}
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter the letter grounping (quit to quit): awl
Permutations of awl
alw
awl
law
lwa
wal
wla
Entere next sequence (quit to quit): all
Permutations of all
all
lal
lla
Entere next sequence (quit to quit): quit
Done.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/