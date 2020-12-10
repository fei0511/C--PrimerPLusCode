#include <iostream>
#include <valarray>
#include <cstdlib>

//���ܣ�16.21 ʹ��valarray
//valarray:�ó��ڽ�����ѧ����
//ʱ�䣺2020��12��10��21:44:25
//const int SIZE = 12;
//typedef std::valarray<int> vint;
//void show(const vint& v, int cols);
//
//int main()
//{
//	using std::slice;
//	using std::cout;
//	vint valint(SIZE);
//
//	int i;
//	for ( i = 0; i < SIZE; i++)
//	{
//		valint[i] = std::rand() % 10;
//	}
//	cout << "Original array:\n";
//	show(valint, 3);
//	vint vcol(valint[slice(1, 4, 3)]);
//	cout << "Second column:\n";
//	show(vcol, 1);
//	vint vrow(valint[slice(3, 3, 1)]);
//	cout << "Second row:\n";
//	show(vrow, 3);
//	valint[slice(2, 4, 3)] = 10;
//	cout << "Set last column to 10:\n";
//	show(valint, 3);
//	cout << "Set first column to sum of next two:\n";
//	valint[slice(0, 4, 3)] = vint(valint[slice(1, 4, 3)]) + vint(valint[slice(2, 4, 3)]);
//	show(valint, 3);
//	
//
//	system("pause");
//	return 0;
//}
//
//void show(const vint& v, int clos)
//{
//	using std::cout;
//	using std::endl;
//
//	int lim = v.size();
//	for (int i = 0; i < lim; i++)
//	{
//		cout.width(3);
//		cout << v[i];
//		if (i % clos == clos - 1)
//		{
//			cout << endl;
//		}
//		else
//		{
//			cout << ' ';
//		}
//	}
//	if (lim % clos != 0)
//	{
//		cout << endl;
//	}
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Original array:
  1   7   4
  0   9   4
  8   8   2
  4   5   5
Second column:
  7
  9
  8
  5
Second row:
  0   9   4
Set last column to 10:
  1   7  10
  0   9  10
  8   8  10
  4   5  10
Set first column to sum of next two:
 17   7  10
 19   9  10
 18   8  10
 15   5  10
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/