#include <iostream>
#include <ctime>
#include <cstdlib>
#include "queue.h"

//功能：12.12 队列应用
//时间：2020年11月30日14:27:02

const int MIN_PER_HR = 60;
bool newcustomer(double x);

int main()
{
	using namespace std;

	srand(time(0));

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter macimum size of queue: ";
	int qs;
	cin >> qs;
	Queue line(qs);

	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HR * hours;

	cout << "Enter the average number of customers per hour: ";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR;

	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.isfull())
			{
				turnaways++;
			}
			else
			{
				customers++;
				temp.set(cycle);
				line.enqueue(temp);
			}
		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
		{
			wait_time--;
		}
		sum_line += line.queuecount();
	}

	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << " customers served: " << served << endl;
		cout << "		turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " average wait time: " << (double)line_wait / served << "minutes\n";
 	}
	else
	{
		cout << "No customers!\n";
	}
	cout << "Done!\n";

	system("pause");
	return 0;
}

bool newcustomer(double x)
{
	return (rand() * x / RAND_MAX < 1);
}
/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Case Study: Bank of Heather Automatic Teller
Enter macimum size of queue: 10
Enter the number of simulation hours: 100
Enter the average number of customers per hour: 15
customers accepted: 112
 customers served: 112
				turnaways: 0
average queue size: 0.00
 average wait time: 0.04minutes
Done!
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/