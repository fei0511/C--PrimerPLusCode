#include <iostream>
using namespace std;
//���ܣ�8.4 ��������Ϊ��������
//ʱ�䣺2020��11��26��18:53:43
// ��ʽ�� int & rodents = rats; //����������ʱ������г�ʼ�����������ҳ�ʼ������������޸�
// �����൱�ڲ����޸ĵ�ָ��
//void swapr(int & a, int & b);
//void swapp(int * a, int * b);
//void swapv(int a, int b);
//
//int main()
//{
//	int wallet1 = 300;
//	int wallet2 = 350;
//
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	cout << "Using references to swap contents:\n";
//	swapr(wallet1, wallet2);
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	cout << "Using pointers to swap contents again:\n";
//	swapp(&wallet1, &wallet2);
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	cout << "Trying to use passing by value:\n";
//	swapv(wallet1, wallet2);
//	cout << "wallet1 = $" << wallet1;
//	cout << " wallet2 = $" << wallet2 << endl;
//
//	system("pause");
//	return 0;
//}
//
//void swapr(int & a, int & b)
//{
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapp(int * a, int * b)
//{
//	int temp;
//
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swapv(int a, int b)
//{
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
wallet1 = $300 wallet2 = $350
Using references to swap contents:
wallet1 = $350 wallet2 = $300
Using pointers to swap contents again:
wallet1 = $300 wallet2 = $350
Trying to use passing by value:
wallet1 = $300 wallet2 = $350
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/