#include <iostream>
#include <string>
using namespace std;
//���ܣ�8.6 ���������ڽṹ��
//ʱ�䣺2020��11��26��19:29:32
//��ʽ��int & rodents = rats; //����������ʱ������г�ʼ�����������ҳ�ʼ���������޸�����
//�����൱�ڲ����޸ĵ�ָ��
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
//	accumulate(dup, five) = four;    //��ֵ�����������ã���Ϊ��������ֵ��һ������
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
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
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/