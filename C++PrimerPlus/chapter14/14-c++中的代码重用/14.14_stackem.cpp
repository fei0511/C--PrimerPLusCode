#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"

//���ܣ�14.14 ��ģ��
//ʱ�䣺2020��12��4��14:06:45
//
//using std::cin;
//using std::cout;
//
//
//int main()
//{
//	Stack<std::string> st;
//	char ch;
//	std::string po;
//	cout << "Please enter A to add a purchase order,\n"
//		<< "P to process a PO, or Q to quit.\n";
//	while (cin >> ch && std::toupper(ch) != 'Q')
//	{
//		while (cin.get() != '\n')
//		{
//			continue;
//		}
//		if (!std::isalpha(ch))
//		{
//			cout << '\a';
//			continue;
//		}
//		switch (ch)
//		{
//		case 'A': 
//		case 'a': cout << "Enter a PO number to add: ";
//			cin >> po;
//			if (st.isfull())
//			{
//				cout << "stack already full\n";
//			}
//			else
//			{
//				st.push(po);
//			}
//			break;
//		case 'P':
//		case 'p': 
//			if (st.isempty())
//			{
//				cout << "stack already empty\n";
//			}
//			else
//			{
//				st.pop(po);
//				cout << "PO #" << po << " popped\n";
//			}
//			break;
//		}
//		cout << "Please enter A to add a purchase order,\n"
//			<< "P to process a PO, or Q to quit.\n";
//	}
//	cout << "Bye\n";
//
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
A
Enter a PO number to add: red911porsche
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
A
Enter a PO number to add: blueR8audi
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
A
Enter a PO number to add: silver747boeing
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
P
PO #silver747boeing popped
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
P
PO #blueR8audi popped
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
P
PO #red911porsche popped
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
P
stack already empty
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
Q
Bye
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/