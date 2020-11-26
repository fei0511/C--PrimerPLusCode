#include <iostream>
using namespace std;
//功能：7.19 函数指针数组
//时间：2020年11月26日15:53:38
// 
const double * f1(const double ar[], int n);  //定义了三个函数指针，函数返回类型为const double *（double类型的指针）
const double * f2(const double [], int);
const double * f3(const double *, int);

int main()
{
	double av[3] = { 1112.3, 1542.6, 2227.9 };
	const double * (*p1)(const double *, int) = f1;    //给函数指针p1赋值

	auto p2 = f2;                                      //给函数指针p2赋值
	cout << "Using pointers to functions:\n";
	cout << " Address Value\n";
	//第一个为函数调用，最终值为函数的返回值（const double *类型的指针），第二个再对返回值取值
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;  
	//同上，p2(av, 3)等价于(*p2)(av, 3),都被称为通过函数指针进行的函数调用
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
	//定义了一个函数指针数组
	const double *(*pa[3])(const double *, int) = { f1,f2,f3 };
	auto pb = pa;    //pb 的类型也为函数指针数组

	cout << "\nUsing an array of pointers to functions:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		//第一个为函数调用，函数返回值为（const double *类型的指针），第二个再对返回值（指针）取值
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	}
	cout << "\nUsing a pointer to a pointer to a function:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
	{
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	}

	cout << "\nUsing pointers to an array of pointers:\n";
	cout << " Address Value\n";

	auto pc = &pa;  //pc为函数指针数组的地址
	//(*pc)等价于pa
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	//const double *表示函数返回值；第二个*表示对pa取地址，最后第三个*:(*pd)[3]:代表了pa为一个函数指针数组
	const double * (* (*pd)[3])(const double *, int) = &pa;  
	//(*pd)[1](av, 3)等于pa[1](av, 3)的返回值
	const double * pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	//(*(*pd)[2])(av, 3)等于pa[2](av, 3)的返回值；*(*(*pd)[2])(av, 3)为将函数返回值指向的内存数据取出来
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;

 	system("pause");
	return 0;
}

const double * f1(const double * ar, int n)
{
	return ar;
}
const double * f2(const double ar[], int n)
{
	return ar + 1;
}
const double * f3(const double ar[], int n)
{
	return ar + 2;
}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Using pointers to functions:
 Address Value
00000003F8BDF568: 1112.3
00000003F8BDF570: 1542.6

Using an array of pointers to functions:
 Address Value
00000003F8BDF568: 1112.3
00000003F8BDF570: 1542.6
00000003F8BDF578: 2227.9

Using a pointer to a pointer to a function:
 Address Value
00000003F8BDF568: 1112.3
00000003F8BDF570: 1542.6
00000003F8BDF578: 2227.9

Using pointers to an array of pointers:
 Address Value
00000003F8BDF568: 1112.3
00000003F8BDF570: 1542.6
00000003F8BDF578: 2227.9
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/