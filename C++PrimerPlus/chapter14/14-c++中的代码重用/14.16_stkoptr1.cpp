#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stacktp1.h"

//���ܣ�14.16 ��ģ��(ָ��ջ)
//ʱ�䣺2020��12��4��14:42:08
//
//const int Num = 10;
//
//
//int main()
//{
//	std::srand(std::time(0));
//	std::cout << "Please enter stack size: ";
//	int stacksize;
//	std::cin >> stacksize;
//	Stack<const char *> st(stacksize);
//
//	const char * in[Num] = { "1: Hank Gilgamesh", "2: Kiki Ishtar","3: Betty Rocker", "4: Ian Flagranti",
//							"5: Wolfgang Kibble", "6: Portia Koop", "7: Joy Almondo", "8: Xaverie Paprika",
//							"9: Juan Moore", "10: Misha Mache" };
//	const char * out[Num];
//
//	int processed = 0;
//	int nextin = 0;
//	while (processed < Num)
//	{
//		if (st.isempty())
//		{
//			st.push(in[nextin++]);
//		}
//		else if (st.isfull())
//		{
//			st.pop(out[processed++]);
//		}
//		else if (std::rand() % 2 && nextin < Num)
//		{
//			st.push(in[nextin++]);
//		}
//		else
//		{
//			st.pop(out[processed++]);
//		}
//	}
//	for (int i = 0; i < Num; i++)
//	{
//		std::cout << out[i] << std::endl;
//	}
//	std::cout << "Bye\n";
// 
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Please enter stack size: 5
1: Hank Gilgamesh
2: Kiki Ishtar
6: Portia Koop
5: Wolfgang Kibble
7: Joy Almondo
8: Xaverie Paprika
4: Ian Flagranti
9: Juan Moore
10: Misha Mache
3: Betty Rocker
Bye
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/