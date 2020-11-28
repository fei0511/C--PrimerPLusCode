#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
//功能：8.8 类的继承
//时间：2020年11月26日20:43:15
//
//void file_it(ostream & os, double fo, const double fe[], int n);
//const int LIMIT = 5;
//
//int main()
//{
//	ofstream fout;
//	const char * fn = "ep-data.txt";
//	fout.open(fn);
//	if (!fout.is_open())
//	{
//		cout << "Can't open " << fn << ". Bye.\n";
//		exit(EXIT_FAILURE);
//	}
//	double objective;
//	cout << "Enter the focal length of your telescope objective in mm: ";
//	cin >> objective;
//	double eps[LIMIT];
//	cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyepieces:\n";
//	for (int i = 0; i < LIMIT; i++)
//	{
//		cout << "Eyepiece #" << i + 1 << ": ";
//		cin >> eps[i];
//	}
//	file_it(fout, objective, eps, LIMIT);
//	file_it(cout, objective, eps, LIMIT);
//	cout << "Done\n";
//
//	system("pause");
//	return 0;
//}
//
//void file_it(ostream & os, double fo, const double fe[], int n)
//{
//	ios_base::fmtflags initial; //此类型由成员函数标志setf和unsetf用作其参数和/或返回值。
//	initial = os.setf(ios_base::fixed);  //设置cout为定点输出格式
//	os.precision(0);
//	os << "Focal length of objective: " << fo << " mm\n";
//	os.setf(ios::showpoint);  //设置显示小数点后的零
//	os.precision(1);          //设置精确度为1，显示一位小数
//	os.width(12);             //设置下一次输出操作使用的字段宽度
//	os << "f.1. eyepiece";
//	os.width(15);
//	os << "magnification" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		os.width(12);
//		os << fe[i];
//		os.width(15);
//		os << int(fo / fe[i] + 0.5) << endl;
//	}
//	os.setf(initial);  //恢复原来的格式化设置
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter the focal length of your telescope objective in mm: 1800
Enter the focal lengths, in mm, of 5 eyepieces:
Eyepiece #1: 30
Eyepiece #2: 19
Eyepiece #3: 14
Eyepiece #4: 8.8
Eyepiece #5: 7.5
Focal length of objective: 1800 mm
f.1. eyepiece  magnification
		30.0             60
		19.0             95
		14.0            129
		 8.8            205
		 7.5            240
Done
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/