#include <iostream>
#include "studentc.h"

//���ܣ�14.3 ���������Ա����(valarray���ʹ��)
//ʱ�䣺2020��12��3��10:59:22
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
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
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/