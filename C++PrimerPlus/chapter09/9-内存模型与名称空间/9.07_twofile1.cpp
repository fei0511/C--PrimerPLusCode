#include <iostream>
using namespace std;
//���ܣ�9.7 ��̬�����ԡ��ڲ�������
//ʱ�䣺2020��11��27��16:51:12
//����ȫ�ֱ���ʹ��static�޶����󣬻�ʹ�øñ���ֻ���ڱ��ļ���ʹ�ã�
//�Ҳ����������ļ��ж����ͬ�������ı������ͻ
//int tom = 3;
//int dick = 30;
//static int harry = 300;
//
//void remote_access();
//
//int main()
//{
//	cout << "main() reports the following address:\n";
//	cout << &tom << " = &tom, " << &dick << " = &dick";
//	cout << &harry << " = &harry\n";
//	remote_access();
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
main() reports the following address:
0017C000 = &tom, 0017C004 = &dick0017C008 = &harry
remote_access() reports the following address:
0017C000 = &tom, 0017C014 = &dick, 0017C010 = &harry
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/