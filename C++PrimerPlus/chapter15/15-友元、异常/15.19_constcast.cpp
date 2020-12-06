#include <iostream>

//功能：15.19 类型转换运算符
//时间：2020年12月6日17:08:54
using std::cout;
using std::endl;

void change(const int* pt, int n);

int main()
{
	int pop1 = 38383;
	const int pop2 = 2000;

	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
	change(&pop1, -103);
	change(&pop2, -103);  //对于pop2的值，并未能修改成功
	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;

	system("pause");
	return 0;
}

void change(const int* pt, int n)   //pt指向的值不能修改
{
	int* pc;

	pc = const_cast<int*> (pt);    //指针pc删除了pt的const特征，可以用来修改指向的值，但仅当指向的值不是const时才可行
	*pc += n;
}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
pop1, pop2: 38383, 2000
pop1, pop2: 38280, 2000
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/