#include <iostream>
//功能：6.6 用&&来设置取值范围
//时间：2020年11月25日15:46:15
// 
//const char * qualify[4] = 
//{
//	"10.000-meter race.\n",
//	"mud tug-of-war.\n",
//	"masters canoe jousting.\n",
//	"pie-throwing festival.\n"
//};
//
//int main()
//{
//	using namespace std;
//
//	int age;
//	cout << "Enter your age in years: ";
//	cin >> age;
//	int index;
//
//	if (age > 17 && age < 35)
//	{
//		index = 0;
//	}
//	else if (age >= 35 && age < 50)
//	{
//		index = 1;
//	}
//	else if (age >= 50 && age < 65)
//	{
//		index = 2;
//	}
//	else
//	{
//		index = 3;
//	}
//
//	cout << "You qualify for the " << qualify[index];
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter your age in years: 24
You qualify for the 10.000-meter race.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/