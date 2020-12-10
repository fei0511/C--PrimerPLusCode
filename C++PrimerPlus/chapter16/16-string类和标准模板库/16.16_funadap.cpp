#include <iostream>
#include <vector>
#include <functional>
#include <iterator>
#include <algorithm>


//功能：16.16 自适应函数符和函数适配器
//时间：2020年12月9日21:20:16

//void Show(double);
//const int LIM = 6;
//
//int main()
//{
//	using namespace std;
//	double arr1[LIM] = { 28, 29, 30, 35, 38, 59 };
//	double arr2[LIM] = { 63, 65, 69, 75, 80, 99 };
//	vector<double> gr8(arr1, arr1 + LIM);
//	vector<double> m8(arr2, arr2 + LIM);
//	cout.setf(ios_base::fixed);
//	cout.precision(1);
//	cout << "gr8:\t";
//	for_each(gr8.begin(), gr8.end(), Show);
//	cout << endl;
//	cout << "m8: \t";
//	for_each(m8.begin(), m8.end(), Show);
//	cout << endl;
//
//	vector<double> sum(LIM);
//	transform(gr8.begin(), gr8.end(), m8.begin(), sum.begin(), plus<double>());     //加两数相加，并将结果保存到sum里面
//	cout << "sum:\t";
//	for_each(sum.begin(), sum.end(), Show);
//	cout << endl;
//
//	vector<double> prod(LIM);
//	transform(gr8.begin(), gr8.end(), prod.begin(), bind1st(multiplies<double>(), 2.5));   //对两数相乘与2.5，并存到prod里面
//	cout << "prod:\t";
//	for_each(prod.begin(), prod.end(), Show);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//
//void Show(double v)
//{
//	std::cout.width(6);
//	std::cout << v << ' ';
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
gr8:      28.0   29.0   30.0   35.0   38.0   59.0
m8:       63.0   65.0   69.0   75.0   80.0   99.0
sum:      91.0   94.0   99.0  110.0  118.0  158.0
prod:     70.0   72.5   75.0   87.5   95.0  147.5
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/