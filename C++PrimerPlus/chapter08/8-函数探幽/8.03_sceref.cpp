#include <iostream>
using namespace std;
//���ܣ�8.3 �������ñ���
//ʱ�䣺2020��11��26��18:45:21
// ��ʽ�� int & rodents = rats; //����������ʱ������г�ʼ�����������ҳ�ʼ������������޸�
// �����൱�ڲ����޸ĵ�ָ��

//int main()
//{
//	int rats = 101;
//	int & rodents = rats;
//
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "rats address = " << &rats;
//	cout << ", rodents address = " << &rodents << endl;
//
//	int bunnies = 50;
//	rodents = bunnies;   //�˴��൱��rats = bunnies;�൱�ڱ���֮��ĸ�ֵ�����������Ǹı���rodents���õĶ���
//	cout << "bunnies = " << bunnies;
//	cout << ", rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "bunnies address = " << &bunnies;  //bunnies��rodentsָ��Ĳ���ͬһ������rodentsָ��Ķ����� rats
//	cout << ", rodents address = " << &rodents << endl;
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
rats = 101, rodents = 101
rats address = 0019FAB4, rodents address = 0019FAB4
bunnies = 50, rats = 50, rodents = 50
bunnies address = 0019FA9C, rodents address = 0019FAB4
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/