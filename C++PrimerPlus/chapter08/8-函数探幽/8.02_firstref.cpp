#include <iostream>
using namespace std;
//���ܣ�8.2 �������ñ���
//ʱ�䣺2020��11��26��18:38:01
// ��ʽ�� int & rodents = rats; //����������ʱ������г�ʼ�����������ҳ�ʼ������������޸�
// �����൱�ڲ����޸ĵ�ָ��

//int main()
//{
//	int rats = 10;
//	int & rodents = rats;
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//	rodents++;
//	cout << "rats = " << rats;
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "rats address = " << &rats;
//	cout << ", rodents address = " << &rodents << endl;
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
rats = 10, rodents = 10
rats = 11, rodents = 11
rats address = 00CFFCF0, rodents address = 00CFFCF0
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/