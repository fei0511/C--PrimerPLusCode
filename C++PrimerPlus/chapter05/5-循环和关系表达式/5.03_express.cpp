#include <iostream>
//功能：5.3 <<运算符与表达式中的运算符进行比较
//时间：2020年11月25日09:03:21
//
//int main()
//{
//	using namespace std;
//	int x;
//
//	cout << "The express x = 100 has the value ";
//	cout << (x = 100) << endl;
//	cout << "Now x = " << x << endl;
//	cout << "The expression x < 3 has the value ";
//	cout << (x < 3) << endl;
//	cout << "The expression x > 3 has the value ";
//	cout << (x > 3) << endl;
//	cout.setf(ios_base::boolalpha);    //该语句设置cout显示bool变量，而不是0和1
//	cout << "The expression x < 3 has the value ";
//	cout << (x < 3) << endl;
//	cout << "The expression x > 3 has the value ";
//	cout << (x > 3) << endl;
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
The express x = 100 has the value 100
Now x = 100
The expression x < 3 has the value 0
The expression x > 3 has the value 1
The expression x < 3 has the value false
The expression x > 3 has the value true
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/