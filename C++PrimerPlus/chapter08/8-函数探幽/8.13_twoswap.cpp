#include <iostream>
using namespace std;
//功能：8.13 函数模板显式具体化
//时间：2020年11月27日10:43:18
//
//template <typename T>
//void Swap(T &a, T &b);
//
//struct job
//{
//	char name[40];
//	double salary;
//	int floor;
//};
//
//template <> void Swap<job>(job &j1, job &j2);  //显式指定模板函数的类型
//void Show(job &j);
//
//int main()
//{
//	cout.precision(2);
//	cout.setf(ios::fixed, ios::floatfield);
//	int i = 10, j = 20;
//	cout << "i, j = " << i << ", " << j << ".\n";
//	cout << "Using compiler-generated int swapper:\n";
//	Swap(i, j);
//	cout << "Now i, j = " << i << ", " << j << ".\n";
//
//	job sue = { "Susan Yaffee", 73000.60, 7 };
//	job sidney = { "Sidney Taffee", 78060.72, 9 };
//	cout << "Before job swapping:\n";
//	Show(sue);
//	Show(sidney);
//	Swap(sue, sidney);
//	cout << "After job swapping:\n";
//	Show(sue);
//	Show(sidney);
//
//	system("pause");
//	return 0;
//}
//
//template <typename T>
//void Swap(T &a, T &b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//template <> void Swap<job>(job &j1, job &j2)
//{
//	double t1;
//	int t2;
//	t1 = j1.salary;
//	j1.salary = j2.salary;
//	j2.salary = t1;
//	t2 = j1.salary;
//	j1.floor = j2.floor;
//	j2.floor = t2;
//}
//
//void Show(job &j)
//{
//	cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
//}
 
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
i, j = 10, 20.
Using compiler-generated int swapper:
Now i, j = 20, 10.
Before job swapping:
Susan Yaffee: $73000.60 on floor 7
Sidney Taffee: $78060.72 on floor 9
After job swapping:
Susan Yaffee: $78060.72 on floor 9
Sidney Taffee: $73000.60 on floor 78060
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/