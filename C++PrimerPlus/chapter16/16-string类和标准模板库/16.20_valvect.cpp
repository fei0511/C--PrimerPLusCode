#include <iostream>
#include <vector>
#include <valarray>
#include <algorithm>

//功能：16.20 使用vector、array
//valarray:擅长于进行数学计算
//时间：2020年12月10日21:44:25

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
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
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
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/