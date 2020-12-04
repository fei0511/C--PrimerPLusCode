#include "workermi.h"
#include <iostream>
//功能：14.11 多重继承(虚基类，在继承时使用virtual)
//时间：2020年12月4日09:45:20
// 
//using std::cout;
//using std::endl;
//using std::cin;
//
//Worker::~Worker() { }
//
//void Worker::Data() const
//{
//	cout << "Name: " << fullname << endl;
//	cout << "Employee: " << id << endl;
//}
//
//void Worker::Get() 
//{
//	getline(cin, fullname);
//	cout << "Enter worker's ID: ";
//	cin >> id;
//	while (cin.get() != '\n')
//	{
//		continue;
//	}
//}
//
//void Waiter::Set()
//{
//	cout << "Enter worker's name: ";
//	Worker::Get();
//	Get();        //调用自身的Get函数
//}
//
//void Waiter::Show() const
//{
//	cout << "Category: waiter\n";
//	Worker::Data();
//	Data();        //调用自身的Data函数
//}
//
//void Waiter::Data() const
//{
//	cout << "Panache rating: " << panache << endl;
//}
//
//void Waiter::Get()
//{
//	cout << "Enter waiter's panache rating: ";
//	cin >> panache;
//	while (cin.get() != '\n')
//	{
//		continue;
//	}
//}
//
//
//const char * Singer::pv[] = { "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor" };
//
//void Singer::Set()
//{
//	cout << "Enter singer's name: ";
//	Worker::Get();
//	Get();      //调用Singer::Get()
//}
//
//void Singer::Show() const
//{
//	cout << "Category: singer\n";
//	Worker::Data();
//	Data();
//}
//
//void Singer::Data() const
//{
//	cout << "Vocal range: " << pv[voice] << endl;
//}
//
//void Singer::Get()
//{
//	cout << "Enter number for singer's vocal range:\n";
//	int i;
//	for ( i = 0; i < Vtypes; i++)
//	{
//		cout << i << ": " << pv[i] << "  ";
//		if (i % 4 == 3)
//		{
//			cout << endl;
//		}
//	}
//	if (i %4 != 0)
//	{
//		cout << '\n';
//	}
//	cin >> voice;
//	while (cin.get() != '\n')
//	{
//		continue;
//	}
//}
//
//void SingerWaiter::Data() const
//{
//	Singer::Data();
//	Waiter::Data();
//}
//
//void SingerWaiter::Get()
//{
//	Singer::Get();
//	Waiter::Get();
//}
//
//void SingerWaiter::Set()
//{
//	cout << "Enter singing waiter's name: ";
//	Worker::Get();
//	Get();
//}
//
//void SingerWaiter::Show() const
//{
//	cout << "Category: singing waiter\n";
//	Worker::Data();
//	Data();
//}



















