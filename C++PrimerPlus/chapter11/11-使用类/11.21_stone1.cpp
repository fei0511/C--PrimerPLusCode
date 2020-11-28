#include <iostream>
#include "stonewt1.h"
//功能：11.21 实现类的自动类型转换和强制类型转换(添加了转换函数)
//时间：2020年11月28日22:26:54
 
int main()
{
	using std::cout;
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;
	
	cout << "Convert to double => ";
	cout << "Poppins: " << p_wt << " pounds.\n";   //调用了double转换函数
	cout << "Poppins to int => ";
	cout << "Poppins: " << int(poppins) << " pounds.\n";  //调用了int转换函数

	system("pause");
	return 0;
}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Convert to double => Poppins: 128.8 pounds.
Poppins to int => Poppins: 129 pounds.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/