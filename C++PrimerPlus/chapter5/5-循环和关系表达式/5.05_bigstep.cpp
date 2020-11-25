#include <iostream>
//功能：5.5 修改for循环的步长
//时间：2020年11月25日09:35:47
//

//int main()
//{
//	using namespace std;
//	cout << "Enter an integer: ";
//	int by;
//	cin >> by;
//	cout << "Counting by " << by << "s:" << endl;
//	for (int i = 0; i < 100; i = i + by)
//	{
//		cout << i << endl;
//	}
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter an integer: 17
Counting by 17s:
0
17
34
51
68
85
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/