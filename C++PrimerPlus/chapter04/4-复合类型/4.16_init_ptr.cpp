#include <iostream>
//功能：4.16 指针初始化
//时间：2020年11月24日16:12:23

//int main()
//{
//	using namespace std;
//	int higgens = 5;
//	int* pt = &higgens;
//
//	cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
//	cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << endl;
//	cout << "Size of pt = " << sizeof(pt) << endl;
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Value of higgens = 5; Address of higgens = 00B2FBE4
Value of *pt = 5; Value of pt = 00B2FBE4
Size of pt = 4
请按任意键继续. . .

-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
Value of higgens = 5; Address of higgens = 000000EA9156F5A4
Value of *pt = 5; Value of pt = 000000EA9156F5A4
Size of pt = 8
请按任意键继续. . .
*/