#include <iostream>
using namespace std;
//���ܣ�7.19 ����ָ������
//ʱ�䣺2020��11��26��15:53:38
// 
const double * f1(const double ar[], int n);  //��������������ָ�룬������������Ϊconst double *��double���͵�ָ�룩
const double * f2(const double [], int);
const double * f3(const double *, int);

int main()
{
	double av[3] = { 1112.3, 1542.6, 2227.9 };
	const double * (*p1)(const double *, int) = f1;    //������ָ��p1��ֵ

	auto p2 = f2;                                      //������ָ��p2��ֵ
	cout << "Using pointers to functions:\n";
	cout << " Address Value\n";
	//��һ��Ϊ�������ã�����ֵΪ�����ķ���ֵ��const double *���͵�ָ�룩���ڶ����ٶԷ���ֵȡֵ
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;  
	//ͬ�ϣ�p2(av, 3)�ȼ���(*p2)(av, 3),������Ϊͨ������ָ����еĺ�������
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
	//������һ������ָ������
	const double *(*pa[3])(const double *, int) = { f1,f2,f3 };
	auto pb = pa;    //pb ������ҲΪ����ָ������

	cout << "\nUsing an array of pointers to functions:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		//��һ��Ϊ�������ã���������ֵΪ��const double *���͵�ָ�룩���ڶ����ٶԷ���ֵ��ָ�룩ȡֵ
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	}
	cout << "\nUsing a pointer to a pointer to a function:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	}

	cout << "\nUsing pointers to an array of pointers:\n";
	cout << " Address Value\n";

	auto pc = &pa;  //pcΪ����ָ������ĵ�ַ
	//(*pc)�ȼ���pa
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	//const double *��ʾ��������ֵ���ڶ���*��ʾ��paȡ��ַ����������*:(*pd)[3]:������paΪһ������ָ������
	const double * (* (*pd)[3])(const double *, int) = &pa;  
	//(*pd)[1](av, 3)����pa[1](av, 3)�ķ���ֵ
	const double * pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	//(*(*pd)[2])(av, 3)����pa[2](av, 3)�ķ���ֵ��*(*(*pd)[2])(av, 3)Ϊ����������ֵָ����ڴ�����ȡ����
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;

 	system("pause");
	return 0;
}

const double * f1(const double * ar, int n)
{
	return ar;
}
const double * f2(const double ar[], int n)
{
	return ar + 1;
}
const double * f3(const double ar[], int n)
{
	return ar + 2;
}
/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Using pointers to functions:
 Address Value
00000003F8BDF568: 1112.3
00000003F8BDF570: 1542.6

Using an array of pointers to functions:
 Address Value
00000003F8BDF568: 1112.3
00000003F8BDF570: 1542.6
00000003F8BDF578: 2227.9

Using a pointer to a pointer to a function:
 Address Value
00000003F8BDF568: 1112.3
00000003F8BDF570: 1542.6
00000003F8BDF578: 2227.9

Using pointers to an array of pointers:
 Address Value
00000003F8BDF568: 1112.3
00000003F8BDF570: 1542.6
00000003F8BDF578: 2227.9
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/