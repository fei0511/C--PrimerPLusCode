#include <iostream>
//���ܣ�4.16 ָ���ʼ��
//ʱ�䣺2020��11��24��16:12:23

//int main()
//{
//	using namespace std;
//	int higgens = 5;
//	int* pt = &higgens;
//
//	cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
//	cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << endl;
//	cout << "Size of pt = " << sizeof(pt) << endl;
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Value of higgens = 5; Address of higgens = 00B2FBE4
Value of *pt = 5; Value of pt = 00B2FBE4
Size of pt = 4
�밴���������. . .

-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
Value of higgens = 5; Address of higgens = 000000EA9156F5A4
Value of *pt = 5; Value of pt = 000000EA9156F5A4
Size of pt = 8
�밴���������. . .
*/