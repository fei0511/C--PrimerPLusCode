#include <iostream>
#include <iterator>
#include <vector> 

//���ܣ�16.10 ��׼ģ���(����������)
//ʱ�䣺2020��12��8��20:53:26


//int main()
//{
//	using namespace std;
//
//	int casts[10] = { 6, 7, 2, 9, 4, 11, 8, 7, 10, 5 };
//	vector<int> dice(10);
//
//	copy(casts, casts + 10, dice.begin());
//	cout << "Let the dice be cast!\n";
//
//	ostream_iterator<int, char> out_iter(cout, " ");
//	copy(dice.begin(), dice.end(), out_iter);
//	cout << endl;
//	cout << "Implicit use of reverse iterator.\n";
//	copy(dice.rbegin(), dice.rend(), out_iter);   //�������
//	cout << endl;
//	cout << "Explicit use of reverse iterator.\n";
//	vector<int>::reverse_iterator ri;              //dice.rbegin()��dice.rend()������������Ϊreverse_iterator
//	for ( ri = dice.rbegin(); ri != dice.rend(); ++ri)
//	{
//		cout << *ri << ' ';
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}



/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Let the dice be cast!
6 7 2 9 4 11 8 7 10 5
Implicit use of reverse iterator.
5 10 7 8 11 4 9 2 7 6
Explicit use of reverse iterator.
5 10 7 8 11 4 9 2 7 6
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/