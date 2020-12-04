#include <iostream>
#include "studentc.h"

//功能：14.3 包含对象成员的类(valarray类的使用)
//时间：2020年12月3日10:59:22
//
//using std::cin;
//using std::endl;
//using std::cout;
//
//const int pupils = 3;
//const int quizzes = 5;
//void set(Student & sa, int n);
//
//int main()
//{
//	Student ada[pupils] = { Student(quizzes), Student(quizzes), Student(quizzes) };
//
//	int i;
//	for (i = 0; i < pupils; ++i)
//	{
//		set(ada[i], quizzes);
//	}
//	cout << "\nStudent List:\n";
//	for (i = 0; i < pupils; ++i)
//	{
//		cout << ada[i].Name() << endl;
//	}
//	cout << "\nResults:";
//	for (i = 0; i < pupils; i++)
//	{
//		cout << endl << ada[i];
//		cout << "average: " << ada[i].Average() << endl;
//	}
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}
//
//void set(Student & sa, int n)
//{
//	cout << "Please enter the student's name: ";
//	getline(cin, sa);
//	cout << "Please enter " << n << "quiz scores:\n";
//	for (int i = 0; i < n; i++)
//	{
//		cin >> sa[i];
//	}
//	while (cin.get() != '\n')
//	{
//		continue;
//	}
//}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Please enter the student's name: Gil Bayts
Please enter 5quiz scores:
92 94 96 93 95
Please enter the student's name: Pat Roone
Please enter 5quiz scores:
83 89 72 78 95
Please enter the student's name: Fleus O'Day
Please enter 5quiz scores:
92 89 96 74 64

Student List:
Gil Bayts
Pat Roone
Fleus O'Day

Results:
Scores for Gil Bayts:
92 94 96 93 95
average: 94

Scores for Pat Roone:
83 89 72 78 95
average: 83.4

Scores for Fleus O'Day:
92 89 96 74 64
average: 83
Done.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/