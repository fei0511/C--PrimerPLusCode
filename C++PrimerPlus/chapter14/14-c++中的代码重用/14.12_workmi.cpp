#include <iostream>
#include <cstring>
#include "workermi.h"

//功能：14.12 多重继承(虚基类，在继承时使用virtual)
//时间：2020年12月4日10:13:40
//
//const int SIZE = 5;
//
//
//int main()
//{
//	using std::cin;
//	using std::cout;
//	using std::endl;
//	using std::strchr;
//
//	Worker * lolas[SIZE];
//
//	int ct;
//	for ( ct = 0; ct < SIZE; ct++)
//	{
//		char choice;
//		cout << "Enter the employee category:\n"
//			<< "w: waiter  s: singer "
//			<< "t: singing waiter   q: quit\n";
//		cin >> choice;
//		while (strchr("wstq", choice) == NULL)    //返回参数choice指定的字符在字符串“wstq”中第一次出现的地址
//		{
//			cout << "Please enter a w, s, t or q: ";
//			cin >> choice;
//		}
//		if (choice == 'q')
//		{
//			break;
//		}
//		switch (choice)
//		{
//		case 'w': lolas[ct] = new Waiter;
//			break;
//		case 's': lolas[ct] = new Singer;
//			break;
//		case 't': lolas[ct] = new SingerWaiter;
//			break;
//		}
//		cin.get();
//		lolas[ct]->Set();
//	}
//
//	cout << "\nHere is your staff:\n";
//	int i;
//	for ( i = 0; i < ct; i++)
//	{
//		cout << endl;
//		lolas[i]->Show();
//	}
//	for ( i = 0; i < ct; i++)
//	{
//		delete lolas[i];
//	}
//	cout << "Bye.\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter singing waiter's name: Natasha Gargalova
Enter worker's ID: 1021
Enter number for singer's vocal range:
0: other  1: alto  2: contralto  3: soprano
4: bass  5: baritone  6: tenor
6
Enter waiter's panache rating: 6
Enter the employee category:
w: waiter  s: singer t: singing waiter   q: quit
q

Here is your staff:

Category: waiter
Name: Wally Slipshod
Employee: 1040
Panache rating: 4

Category: singer
Name: Sinclair Parma
Employee: 1044
Vocal range: baritone

Category: singing waiter
Name: Natasha Gargalova
Employee: 1021
Vocal range: tenor
Panache rating: 6
Bye.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/