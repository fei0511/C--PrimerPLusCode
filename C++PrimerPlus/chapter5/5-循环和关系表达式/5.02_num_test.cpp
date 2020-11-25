#include <iostream>
//功能：5.2 测试循环条件
//时间：2020年11月25日08:58:26
//
//int main()
//{
//	using namespace std;
//	cout << "Enter the starting countdown value: ";
//	int limit;
//	cin >> limit;
//	int i;
//	for (i = limit; i; i--)           //当i==0时，for循环结束
//	{
//		cout << "i = " << i << endl;
//	}
//	cout << "Done now that i = " << i << endl;
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter the starting countdown value: 4
i = 4
i = 3
i = 2
i = 1
Done now that i = 0
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/