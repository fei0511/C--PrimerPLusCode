#include <iostream>
#include <fstream>
using namespace std;
//功能：6.15 简单文件输入输出
//时间：2020年11月25日19:10:22
// 

//int main()
//{
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//	ofstream outFile;    //创建文件对象
//	outFile.open("carinfo.txt");   //将ofstream对象与文件关联起来
//
//	cout << "Enter the make and model of automobile: ";
//	cin.getline(automobile, 50);
//	cout << "Enter the model year：";
//	cin >> year;
//	cout << "Enter the original asking price: ";
//	cin >> a_price;
//	d_price = 0.913 * a_price;
//
//	cout << fixed;
//	cout.precision(2);    //设置精确度为2
//	cout.setf(ios_base::showpoint);     //显示浮点数小数点后面的零
//	cout << "Make and model: " << automobile << endl;
//	cout << "Year: " << year << endl;
//	cout << "Was asking $" << a_price << endl;
//	cout << "Now asking $" << d_price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "Make and model: " << automobile << endl;
//	outFile << "Year: " << year << endl;
//	outFile << "Was asking $" << a_price << endl;
//	outFile << "Now asking $" << d_price << endl;
//
//	outFile.close();
//
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter the make and model of automobile: Flitz Perky
Enter the model year：2009
Enter the original asking price: 13500
Make and model: Flitz Perky
Year: 2009
Was asking $13500.00
Now asking $12325.50
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/