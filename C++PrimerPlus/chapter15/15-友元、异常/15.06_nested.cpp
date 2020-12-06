#include <iostream>
#include <string>
#include "queuetp.h"


//功能：15.6 嵌套类（模板中的嵌套）
//时间：2020年12月5日20:49:37

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
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
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
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/