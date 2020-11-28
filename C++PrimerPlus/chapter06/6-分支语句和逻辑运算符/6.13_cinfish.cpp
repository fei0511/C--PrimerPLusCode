#include <iostream>
using namespace std;
//功能：6.13 读取数字的循环
//时间：2020年11月25日18:25:32
// 
//const int Max = 5;
//int main()
//{
//	double fish[Max];
//	
//	cout << "please enter the weights of your fish.\n";
//	cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
//	cout << "fish #1: ";
//	int i = 0;
//	while (i < Max && cin >> fish[i])
//	{
//		if (++i < Max)
//		{
//			cout << "fish #" << i + 1 << ": ";
//		}
//	}
//
//	double total = 0.0;
//	for (int j = 0; j < i; j++)
//	{
//		total += fish[j];
//	}
//	if (i == 0)
//	{
//		cout << "No fish\n";
//	}
//	else
//	{
//		cout << total / i << " = average weight of " << i << " fish\n";
//	}
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
please enter the weights of your fish.
You may enter up to 5 fish <q to terminate>.
fish #1: 30
fish #2: 35
fish #3: 25
fish #4: 40
fish #5: q
32.5 = average weight of 4 fish
Done.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/