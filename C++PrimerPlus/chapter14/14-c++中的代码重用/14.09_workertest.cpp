#include <iostream>
#include "worker0.h"

//���ܣ�14.9 ���ؼ̳�
//ʱ�䣺2020��12��4��08:39:06
//
//const int LIM = 4;
//
//
//int main()
//{
//	Waiter bob("Bob Apple", 314L, 5);
//	Singer bev("Beverly Hills", 522L, 3);
//	Waiter w_temp;
//	Singer s_temp;
//
//	Worker * pw[LIM] = { &bob, &bev, &w_temp, &s_temp };
//
//	int i;
//	for (i = 2; i < LIM; i++)
//	{
//		pw[i]->Set();   //�麯����������
//	}
//	for (i = 0; i < LIM; i++)
//	{
//		pw[i]->Show();  //�麯����������
//		std::cout << std::endl;
//	}
//
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter worker's name: Waldo Dropmaster
Enter worker's ID: 442
Enter waiter's panache rating: 3
Enter worker's name: Sylvie Sirenne
Enter worker's ID: 555
Enter number for singer's vocal range:
0: other  1: alto  2: contralto  3: soprano
4: bass  5: baritone  6: tenor
3
Category: waiter
Name: Bob Apple
Employee ID: 314
Panache rating: 5

Category: singer
Name: Beverly Hills
Employee ID: 522
Vocal range: soprano

Category: waiter
Name: Waldo Dropmaster
Employee ID: 442
Panache rating: 3

Category: singer
Name: Sylvie Sirenne
Employee ID: 555
Vocal range: soprano

�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/