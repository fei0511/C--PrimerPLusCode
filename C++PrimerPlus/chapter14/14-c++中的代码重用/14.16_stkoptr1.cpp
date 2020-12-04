#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stacktp1.h"

//功能：14.16 类模板(指针栈)
//时间：2020年12月4日14:42:08
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
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
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
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/