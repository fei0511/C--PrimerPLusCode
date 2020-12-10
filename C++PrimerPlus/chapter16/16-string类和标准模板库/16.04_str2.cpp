#include <iostream>
#include <string>

//功能：16.4 使用字符串
//时间：2020年12月7日20:21:02


//int main()
//{
//	using namespace std;
//	string empty;
//	string small = "bit";
//	string larger = "Elephants are a girl's best friend";
//	cout << "Sizes:\n";
//	cout << "\tempty: " << empty.size() << endl;       //计算字符串的大小
//	cout << "\tsmall: " << small.size() << endl;
//	cout << "\tlarger: " << larger.size() << endl;
//	cout << "Capacities:\n";
//	cout << "\tempty: " << empty.capacity() << endl;   //计算给字符串总共分配的内存空间大小
//	cout << "\tsmall: " << small.capacity() << endl;
//	cout << "\tlarger: " << larger.capacity() << endl;
//
//	empty.reserve(50);
//	cout << "Capacity after empty.reserve(50): " << empty.capacity() << endl;   //给字符串预留的内存空间
//
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Sizes:
		empty: 0
		small: 3
		larger: 34
Capacities:
		empty: 15
		small: 15
		larger: 47
Capacity after empty.reserve(50): 63    15+50 = 64（16的倍数减一）
请按任意键继续. . .

-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/