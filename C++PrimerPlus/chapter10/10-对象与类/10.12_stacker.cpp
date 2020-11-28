#include <iostream>
#include <cctype>
#include "stack.h"

//���ܣ�10.12 ʹ��ջ
//ʱ�䣺2020��11��28��14:54:13
// 

int main()
{
	using namespace std;
	Stack st;
	char ch;
	unsigned long po;
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')  // ��СдӢ����ĸ ת��Ϊ��дӢ����ĸ��
	{
		while (cin.get() != '\n')
		{
			continue;
		}
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
			case 'A':
			case 'a': cout << "Enter a PO number to add: ";
				cin >> po;
				if (st.isfull())
				{
					cout << "stack already full\n";
				}
				else
				{
					st.push(po);
				}
				break;
			case 'P':
			case 'p': 
				if (st.isempty())
				{
					cout << "stack already empty\n";
				}
				else
				{
					st.pop(po);
					cout << "PO #" << po << " poped\n";
				}
				break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";

	system("pause");
	return 0;
}



/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
A
Enter a PO number to add: 17885
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
P
PO #17885 poped
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
A
Enter a PO number to add: 17965
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
A
Enter a PO number to add: 18002
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
P
PO #18002 poped
Please enter A to add a purchase order,
P to process a PO, or Q to quit.
P
PO #17965 poped
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