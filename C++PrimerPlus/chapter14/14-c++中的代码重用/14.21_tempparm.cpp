#include <iostream>
#include "stacktp.h"
//���ܣ�14.21 ��ģ������������
//ʱ�䣺2020��12��4��19:32:26
//
//template <template <typename T> class Thing>  //ģ�������template <typename T> class Thing,����template <typename T> class�ǲ�������

//class Crab
//{
//public:
//	Crab() { };
//	bool push(int a, double x) { return s1.push(a) && s2.push(x); }
//	bool pop(int & a, double & x) { return s1.pop(a) && s2.pop(x); }
//
//private:
//	Thing<int> s1;
//	Thing<double> s2;
//};
//
//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//	Crab<Stack> nebula;
//	int ni;
//	double nb;
//	cout << "Enter int double pairs, such as 4 3.5 (0 0 to end):\n";
//	while (cin >> ni >> nb && ni > 0 && nb > 0)
//	{
//		if (!nebula.push(ni, nb))
//		{
//			break;
//		}
//	}
//
//	while (nebula.pop(ni, nb))
//	{
//		cout << ni << ", " << nb << endl;
//	}
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter int double pairs, such as 4 3.5 (0 0 to end):
50 22.48
25 33.87
60 19.12
0 0
60, 19.12
25, 33.87
50, 22.48
Done.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/