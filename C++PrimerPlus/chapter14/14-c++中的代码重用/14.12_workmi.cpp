#include <iostream>
#include <cstring>
#include "workermi.h"

//���ܣ�14.12 ���ؼ̳�(����࣬�ڼ̳�ʱʹ��virtual)
//ʱ�䣺2020��12��4��10:13:40
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
//		while (strchr("wstq", choice) == NULL)    //���ز���choiceָ�����ַ����ַ�����wstq���е�һ�γ��ֵĵ�ַ
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
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
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/