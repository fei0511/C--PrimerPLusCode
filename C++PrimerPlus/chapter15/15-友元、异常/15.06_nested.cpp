#include <iostream>
#include <string>
#include "queuetp.h"


//���ܣ�15.6 Ƕ���ࣨģ���е�Ƕ�ף�
//ʱ�䣺2020��12��5��20:49:37

//
//int main()
//{
//	using std::string;
//	using std::cin;
//	using std::cout;
//
//	QueueTP<string> cs(5);
//	string temp;
//
//	while (!cs.isfull())
//	{
//		cout << "Please enter your name, You will be "
//			<< "served in the order of arrival.\n" << "name: ";
//		getline(cin, temp);
//		cs.enqueue(temp);
//	}
//	cout << "The queue is full. Processing begins!\n";
//
//	while (!cs.isempty())
//	{
//		cs.dequeue(temp);
//		cout << "Now processing " << temp << "...\n";
//	}
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Please enter your name, You will be served in the order of arrival.
name: Kinsey MillHone
Please enter your name, You will be served in the order of arrival.
name: Adam Dalgliesh
Please enter your name, You will be served in the order of arrival.
name: Andrew Dalziel
Please enter your name, You will be served in the order of arrival.
name: Kay Scarpetta
Please enter your name, You will be served in the order of arrival.
name: Richard Jury
The queue is full. Processing begins!
Now processing Kinsey MillHone...
Now processing Adam Dalgliesh...
Now processing Andrew Dalziel...
Now processing Kay Scarpetta...
Now processing Richard Jury...
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/