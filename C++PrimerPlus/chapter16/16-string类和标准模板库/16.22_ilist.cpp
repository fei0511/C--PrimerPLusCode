#include <iostream>
#include <initializer_list>

//功能：16.22 使用initializer_list
//时间：2020年12月10日22:07:54
double sum(std::initializer_list<double> il);
double average(const std::initializer_list<double>& ril);

int main()
{
	using std::cout;

	cout << "List 1: sum = " << sum({ 2,3,4 }) << ", ave = " << average({ 2,3,4 }) << std::endl;

	std::initializer_list<double> d1 = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	cout << "list 2: sum = " << sum(d1) << ", ave = " << average(d1) << std::endl;

	d1 = { 16.0, 25.0, 36.0, 40.0, 64.0 };
	cout << "list 3: sum = " << sum(d1) << ", ave = " << average(d1) << std::endl;


	system("pause");
	return 0;
}

double sum(std::initializer_list<double> il)
{
	double tot = 0;
	for (auto p = il.begin(); p != il.end(); p++)
	{
		tot += *p;
	}
	return tot;
}

double average(const std::initializer_list<double>& ril)
{
	double tot = 0;
	int n = ril.size();
	double ave = 0.0;
	if (n > 0)
	{
		for (auto p = ril.begin(); p != ril.end(); p++)
		{
			tot += *p;
		}
		ave = tot / n;
	}
	return ave;
}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
List 1: sum = 9, ave = 3
list 2: sum = 16.5, ave = 3.3
list 3: sum = 181, ave = 36.2
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/