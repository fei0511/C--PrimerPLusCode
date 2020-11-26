#include <iostream>
#include <string>
using namespace std;

//功能：7.14 函数与string对象
//时间：2020年11月26日14:17:03
// 

//const int SIZE = 5;
//void display(const string sa[], int n);
//
//int main()
//{
//	string list[SIZE];
//	cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << i + 1 << ": ";
//		getline(cin, list[i]);
//	}
//
//	cout << "Your list:\n";
//	display(list, SIZE);
//
//	system("pause");
//	return 0;
//}
//
//void display(const string sa[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << i + 1 << ": " << sa[i] << endl;
//	}
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter your 5 favorite astronomical sights:
1: Orion Nebula
2: M13
3: Saturn
4: Jupiter
5: Moon
Your list:
1: Orion Nebula
2: M13
3: Saturn
4: Jupiter
5: Moon
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/