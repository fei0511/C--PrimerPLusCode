#include <iostream>
#include <string>

//功能：16.1 string类
//时间：2020年12月6日21:21:59
//using std::cout;
//using std::endl;
//
//void change(const int* pt, int n);
//
//int main()
//{
//	using namespace std;
//
//	string one("Lottery Winner!");
//	cout << one << endl;
//	string two(20, '$');
//	cout << two << endl;
//	string three(one);
//	cout << three << endl;
//	one += " Oops！";
//	cout << one << endl;
//	two = "Sorry! That was ";
//	three[0] = 'P';
//	string four;
//	four = two + three;
//	cout << four << endl;
//	char alls[] = "All's well that ends well";
//	string five(alls, 20);
//	cout << five << endl;
//	string six(alls + 6, alls + 10);
//	cout << six << ", ";
//	string seven(&five[6], &five[10]);
//	cout << seven << "...\n";
//	string eight(four, 7, 16);
//	cout << eight << " in motion!" << endl;
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