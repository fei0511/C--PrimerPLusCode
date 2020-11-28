#include <iostream>
#include <new>
using namespace std;
//���ܣ�9.10 ����new������Ͷ�λnew�����
//ʱ�䣺2020��11��27��19:21:19
// 
//const int BUF = 512;
//const int N = 5;
//char buffer[BUF];
//
//int main()
//{
//	double *pd1, *pd2;
//	int i;
//	cout << "Calling new and placement new:\n";
//	pd1 = new double[N];               //����new�����
//	pd2 = new (buffer) double[N];      //��λnew�����
//	for (i = 0; i < N; i++)
//	{
//		pd2[i] = pd1[i] = 1000 + 20.0 * i;
//	}
//	//��Ϊbuffer��charָ�룬�������buffer����ǿ������ת����cout����ʾһ���ַ���
//	cout << "Memory address:\n" << " heap:" << pd1 << " static: " << (void *)buffer << endl;
//	cout << "Memory contents:\n";
//	for ( i = 0; i < N; i++)
//	{
//		cout << pd1[i] << " at " << &pd1[i] << "; ";
//		cout << pd2[i] << " at " << &pd2[i] << endl;
//	}
//
//	cout << "\nCalling new and placement new a second time:\n";
//	double *pd3, *pd4;
//	pd3 = new double[N];
//	pd4 = new (buffer) double[N];
//	for (i = 0; i < N; i++)
//	{
//		pd4[i] = pd3[i] = 1000 + 40.0 * i;
//	}
//	cout << "Memory contents:\n";
//	for ( i = 0; i < N; i++)
//	{
//		cout << pd3[i] << " at " << &pd3[i] << "; ";
//		cout << pd4[i] << " at " << &pd4[i] << endl;
//	}
//
//	cout << "\nCalling new and placement new a third time:\n";
//	delete [] pd1;
//	//��Ϊbuffer���鲻����new���ж�̬������ڴ棬����ͨ����λnew��������з���Ŀռ�pd2��Ҳ������delete�������ͷţ���Ҫ�ɳ������н����ͷ�
//	pd1 = new double[N];
//	pd2 = new (buffer + N * sizeof(double)) double[N];
//	for ( i = 0; i < N; i++)
//	{
//		pd2[i] = pd1[i] = 1000 + 60.0 * i;
//	}
//	cout << "Memory contents:\n";
//	for ( i = 0; i < N; i++)
//	{
//		cout << pd1[i] << " at " << &pd1[i] << "; ";
//		cout << pd2[i] << " at " << &pd2[i] << endl;
//	}
//	delete [] pd1;
//	delete [] pd3;
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Calling new and placement new:
Memory address:
 heap:01715AA0 static: 0084C2D8
Memory contents:
1000 at 01715AA0; 1000 at 0084C2D8
1020 at 01715AA8; 1020 at 0084C2E0
1040 at 01715AB0; 1040 at 0084C2E8
1060 at 01715AB8; 1060 at 0084C2F0
1080 at 01715AC0; 1080 at 0084C2F8

Calling new and placement new a second time:
Memory contents:
1000 at 01715440; 1000 at 0084C2D8
1040 at 01715448; 1040 at 0084C2E0
1080 at 01715450; 1080 at 0084C2E8
1120 at 01715458; 1120 at 0084C2F0
1160 at 01715460; 1160 at 0084C2F8

Calling new and placement new a third time:
Memory contents:
1000 at 01715AA0; 1000 at 0084C300
1060 at 01715AA8; 1060 at 0084C308
1120 at 01715AB0; 1120 at 0084C310
1180 at 01715AB8; 1180 at 0084C318
1240 at 01715AC0; 1240 at 0084C320
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/