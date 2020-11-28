#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
//功能：6.16 读取文本文件
//时间：2020年11月25日19:44:41
// 
const int SIZE = 60;

int main()
{
	char filename[SIZE];
	ifstream inFile;    //创建文件对象

	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);     //将ifstream对象与文件关联起来
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good()) //判断最后一次读取输入的操作是否成功
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
	{
		cout << "End of file reached.\n";
	}
	else if (inFile.fail())
	{
		cout << "Input terminated by data mismatch.\n";
	}
	else
	{
		cout << "Input terminated for unknown reason.\n";
	}
	if (count == 0)
	{
		cout << "No data processed.\n";
	}
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();

	system("pause");
	return 0;
}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter name of data file: scores.txt
End of file reached.
Items read: 12
Sum: 204.5
Average: 17.0417
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/