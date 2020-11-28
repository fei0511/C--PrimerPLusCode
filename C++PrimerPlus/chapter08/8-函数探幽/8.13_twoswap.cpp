#include <iostream>
using namespace std;
//���ܣ�8.13 ����ģ����ʽ���廯
//ʱ�䣺2020��11��27��10:43:18
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
//template <> void Swap<job>(job &j1, job &j2);  //��ʽָ��ģ�庯��������
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
i, j = 10, 20.
Using compiler-generated int swapper:
Now i, j = 20, 10.
Before job swapping:
Susan Yaffee: $73000.60 on floor 7
Sidney Taffee: $78060.72 on floor 9
After job swapping:
Susan Yaffee: $78060.72 on floor 9
Sidney Taffee: $73000.60 on floor 78060
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/