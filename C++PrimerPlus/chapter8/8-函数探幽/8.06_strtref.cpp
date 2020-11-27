#include <iostream>
#include <string>
using namespace std;
//功能：8.6 将引用用于结构体
//时间：2020年11月26日19:29:32
//格式：int & rodents = rats; //引用在声明时必须进行初始化操作。并且初始化后不允许修改引用
//引用相当于不可修改的指针
//struct free_throws
//{
//	string name;
//	int made;
//	int attempts;
//	float percent;
//};
//void display(const free_throws & ft);
//void set_pc(free_throws & ft);
//free_throws & accumulate(free_throws & target, const free_throws & source);
//
//int main()
//{
//	free_throws one = { "Ifelsa Branch", 13, 14 };
//	free_throws two = { "Andor Knott", 10, 16 };
//	free_throws three = { "Minnie Max", 7, 9 };
//	free_throws four = { "Whily Looper", 5, 9 };
//	free_throws five = { "Long Long", 6, 14 };
//	free_throws team = { "Throwgoods", 0, 0 };
//	free_throws dup;
//
//	set_pc(one);
//	display(one);
//	accumulate(team, one);
//	display(team);
//
//	display(accumulate(team, one));
//	accumulate(accumulate(team, three), four);
//	display(team);
//
//	dup = accumulate(team, five);
//	cout << "Displaying team:\n";
//	display(team);
//	cout << "Displaying dup after assignment:\n";
//	display(dup);
//	set_pc(four);
//	accumulate(dup, five) = four;    //将值赋给函数调用，因为函数返回值是一个引用
//	cout << "Displaying dup after ill-advised assignment:\n";
//	display(dup);
//
//	system("pause");
//	return 0;
//}
//
//void display(const free_throws & ft)
//{
//	cout << "Name: " << ft.name << endl;
//	cout << " Made: " << ft.made << '\t';
//	cout << "Attempts: " << ft.attempts << '\t';
//	cout << "Percent: " << ft.percent << endl;
//}
//
//void set_pc(free_throws & ft)
//{
//	if (ft.attempts != 0)
//	{
//		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
//	}
//	else
//	{
//		ft.percent = 0;
//	}
//}
//
//free_throws & accumulate(free_throws & target, const free_throws & source)
//{
//	target.attempts += source.attempts;
//	target.made += source.made;
//	set_pc(target);
//	return target;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Name: Ifelsa Branch
 Made: 13       Attempts: 14    Percent: 92.8571
Name: Throwgoods
 Made: 13       Attempts: 14    Percent: 92.8571
Name: Throwgoods
 Made: 26       Attempts: 28    Percent: 92.8571
Name: Throwgoods
 Made: 38       Attempts: 46    Percent: 82.6087
Displaying team:
Name: Throwgoods
 Made: 44       Attempts: 60    Percent: 73.3333
Displaying dup after assignment:
Name: Throwgoods
 Made: 44       Attempts: 60    Percent: 73.3333
Displaying dup after ill-advised assignment:
Name: Whily Looper
 Made: 5        Attempts: 9     Percent: 55.5556
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/