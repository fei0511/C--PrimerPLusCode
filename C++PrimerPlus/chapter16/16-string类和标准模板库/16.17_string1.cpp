#include <iostream>
#include <string>
#include <algorithm>

//功能：16.17 STL和string类
//时间：2020年12月9日22:01:20

//int main()
//{
//	using namespace std;
//	string letters;
//	cout << "Enter the letter grounping (quit to quit): ";
//	while (cin >> letters && letters != "quit")
//	{
//		cout << "Permutations of " << letters << endl;
//		sort(letters.begin(), letters.end());
//		cout << letters << endl;
//		while (next_permutation(letters.begin(), letters.end()))
//		{
//			cout << letters << endl;
//		}
//		cout << "Entere next sequence (quit to quit): ";
//	}
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter the letter grounping (quit to quit): awl
Permutations of awl
alw
awl
law
lwa
wal
wla
Entere next sequence (quit to quit): all
Permutations of all
all
lal
lla
Entere next sequence (quit to quit): quit
Done.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/