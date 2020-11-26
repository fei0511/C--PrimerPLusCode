#include <iostream>
using namespace std;
//功能：7.18 函数指针
//时间：2020年11月26日15:27:47
// 
//double besty(int);
//double pam(int);
//void estimate(int lines, double(*pf)(int));
//
//int main()
//{
//	int code;
//	
//	cout << "How manu lines of code do you need? ";
//	cin >> code;
//	cout << "Here's Betsy's estimate:\n";
//	estimate(code, besty);
//	cout << "Here's Pam's estimate:\n";
//	estimate(code, pam);
//
//	system("pause");
//	return 0;
//}
//
//double besty(int lns)
//{
//	return 0.05 * lns;
//}
//
//double pam(int lns)
//{
//	return 0.03 * lns + 0.0004 * lns * lns;
//}
//
//void estimate(int lines, double(*pf)(int))
//{
//	cout << lines << " lines will take ";
//	cout << (*pf)(lines) << " hour(s)\n";
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
How manu lines of code do you need? 30
Here's Betsy's estimate:
30 lines will take 1.5 hour(s)
Here's Pam's estimate:
30 lines will take 1.26 hour(s)
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/