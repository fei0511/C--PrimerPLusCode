#include <iostream>
using namespace std;
//���ܣ�8.5 �Ƚ����ô��κͰ�ֵ���ε�����
//ʱ�䣺2020��11��26��19:07:50
//��ʽ��int & rodents = rats; //����������ʱ������г�ʼ�����������ҳ�ʼ���������޸�����
//�����൱�ڲ����޸ĵ�ָ��
//double cube(double a);
//double refcube(double &ra);
//
//int main()
//{
//	double x = 3.0;
//
//	cout << cube(x);
//	cout << " = cube of " << x << endl;
//	cout << refcube(x);
//	cout << " = cube of " << x << endl;
//
//
//	system("pause");
//	return 0;
//}
//
//double cube(double a)
//{
//	a *= a * a;
//	return a;
//}
//
//double refcube(double &ra)
//{
//	ra *= ra * ra;
//	return ra;
//}
/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
27 = cube of 3
27 = cube of 27
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/