#include <iostream>
#include <vector>
#include <valarray>
#include <algorithm>

//���ܣ�16.20 ʹ��vector��array
//valarray:�ó��ڽ�����ѧ����
//ʱ�䣺2020��12��10��21:44:25

//int main()
//{
//	using namespace std;
//	vector<double> data;
//	double temp;
//
//	cout << "Enter numbers (<=0 to quit):\n";
//	while (cin >> temp && temp > 0)
//	{
//		data.push_back(temp);
//	}
//	sort(data.begin(), data.end());
//	int size = data.size();
//	valarray<double> numbers(size);
//	int i;
//	for ( i = 0; i < size; i++)
//	{
//		numbers[i] = data[i];
//	}
//	valarray<double> sq_rts(size);
//	sq_rts = sqrt(numbers);
//	valarray<double> results(size);
//	results = numbers + 2.0 * sq_rts;
//	cout.setf(ios_base::fixed);
//	cout.precision(4);
//	for ( i = 0; i < size; i++)
//	{
//		cout.width(8);
//		cout << numbers[i] << ": ";
//		cout.width(8);
//		cout << results[i] << endl;
//	}
//	cout << "done\n";
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter numbers (<=0 to quit):
3.3 1.8 6.2 10 14.4 21.6 26.9 0
  1.8000:   4.4833
  3.3000:   6.9332
  6.2000:  11.1800
 10.0000:  16.3246
 14.4000:  21.9895
 21.6000:  30.8952
 26.9000:  37.2730
done
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/