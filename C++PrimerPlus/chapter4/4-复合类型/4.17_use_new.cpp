#include <iostream>
//���ܣ�4.17 new�ؼ��ֵ�ʹ�ã���̬�����ڴ棩
//ʱ�䣺2020��11��24��16:26:49

//int main()
//{
//	using namespace std;
//	int nights = 1001;
//	int * pt = new int;
//	*pt = 1001;
//
//	cout << "nights value = " << nights << ": location " << &nights << endl;
//	cout << "int " << "value = " << *pt << ": location = " << pt << endl;
//	double * pd = new double;
//	*pd = 10000001.0;
//
//	cout << "double value = " << *pd << ": location = " << pd << endl;
//	cout << "location of pointer pd: " << &pd << endl;
//	cout << "size of pt = " << sizeof(pt);
//	cout << ": size of *pt = " << sizeof(*pt) << endl;
//	cout << "size of pd = " << sizeof(pd);
//	cout << ": size of *pd = " << sizeof(*pd) << endl;
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
nights value = 1001: location 0000000BAF0FF9D4
int value = 1001: location = 00000137D32D9270
double value = 1e+07: location = 00000137D32E41F0
location of pointer pd: 0000000BAF0FFA18
size of pt = 4: size of *pt = 4
size of pd = 4: size of *pd = 8
�밴���������. . .

-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
nights value = 1001: location 0000000BAF0FF9D4
int value = 1001: location = 00000137D32D9270
double value = 1e+07: location = 00000137D32E41F0
location of pointer pd: 0000000BAF0FFA18
size of pt = 8: size of *pt = 4
size of pd = 8: size of *pd = 8
�밴���������. . .
*/