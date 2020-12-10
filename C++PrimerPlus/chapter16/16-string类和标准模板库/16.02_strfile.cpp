#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

//功能：16.2 string类输入
//时间：2020年12月7日18:45:50


//int main()
//{
//	using namespace std;
//
//	ifstream fin;
//	fin.open("tobuy.txt");
//	if (fin.is_open() == false)
//	{
//		cerr << "Can't open file. Bye.\n";
//		exit(EXIT_FAILURE);
//	}
//	std::string item;
//	int count = 0;
//	getline(fin, item, ":");
//	while (fin)
//	{
//		++count;
//		cout << count << ": " << item << endl;
//		getline(fin, item, ":");
//	}
//	cout << "Done\n";
//	fin.close();
//
//
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Lottery Winner!
$$$$$$$$$$$$$$$$$$$$
Lottery Winner!
Lottery Winner! Oops！
Sorry! That was Pottery Winner!
All's well that ends
well, well...
That was Pottery in motion!
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/