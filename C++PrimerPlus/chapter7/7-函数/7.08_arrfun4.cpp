#include <iostream>
using namespace std;

//���ܣ�7.8 ʹ����������ĺ���
//ʱ�䣺2020��11��26��08:58:39
// 
//const int arsize = 8;
//int sum_arr(const int * begin, const int * end);
//
//int main()
//{
//	int cookies[arsize] = { 1,2,4,8,16,32,64,128 };
//	
//	int sum = sum_arr(cookies, cookies + arsize);    //�����д�������
//	cout << "Total cookies eaten: " << sum << "\n";
//	sum = sum_arr(cookies, cookies + 3);    //�����д�������
//	cout << "First three eaters ate " << sum << " cookies.\n";
//	sum = sum_arr(cookies + 4, cookies + 8);    //�����д�������
//	cout << "Last four eaters ate " << sum << " cookies.\n";
//
//	system("pause");
//	return 0;
//}
//
//int sum_arr(const int * begin, const int * end)
//{
//	const int * pt;
//	int total = 0;
//	
//	for (pt = begin; pt != end; pt++)
//	{
//		total = total + *pt;
//	}
//	return total;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Total cookies eaten: 255
First three eaters ate 7 cookies.
Last four eaters ate 240 cookies.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/