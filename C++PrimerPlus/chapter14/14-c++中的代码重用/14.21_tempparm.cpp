#include <iostream>
#include "stacktp.h"
//功能：14.21 将模板类用作参数
//时间：2020年12月4日19:32:26
//
//template <template <typename T> class Thing>  //模板参数是template <typename T> class Thing,其中template <typename T> class是参数类型

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
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter int double pairs, such as 4 3.5 (0 0 to end):
50 22.48
25 33.87
60 19.12
0 0
60, 19.12
25, 33.87
50, 22.48
Done.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/