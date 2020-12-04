#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"

//功能：14.14 类模板
//时间：2020年12月4日14:06:45
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
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
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
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/