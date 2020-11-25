#include <iostream>
#include <ctime>
//功能：5.14 编写延时函数
//时间：2020年11月25日11:16:38
//

//int main()
//{
//	using namespace std;
//
//	cout << "Enter the delay time, in seconds: ";
//	float secs;
//	cin >> secs;
//	clock_t delay = secs * CLOCKS_PER_SEC;
//	cout << CLOCKS_PER_SEC << endl;         //1000
//	cout << "starting\a\n";
//	clock_t start = clock();
//	while (clock() - start < delay)
//		;
//	cout << "done \a\n";
//
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter the delay time, in seconds: 3
starting
done
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/