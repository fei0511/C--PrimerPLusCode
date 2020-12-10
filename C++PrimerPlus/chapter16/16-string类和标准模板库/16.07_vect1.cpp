#include <iostream>
#include <string>
#include <vector> 

//功能：16.7 标准模板库(模板类vector)
//时间：22020年12月7日21:46:28

//const int NUM = 5;
//using namespace std;
//int main()
//{
//	using std::vector;
//	using std::string;
//	using std::cin;
//	using std::cout;
//
//	vector<int> ratings[NUM];
//	vector<string> titles[NUM];
//	cout << "You will do exactly as told. You will enter\n" << NUM << " book titles and your ratings (0-10).\n";
//
//	int i;
//	for ( i = 0; i < NUM; i++)
//	{
//		cout << "Entere title #" << i + 1 << ": ";
//		cin >> titles[i];
//		getline(cin, titles[i]);
//		cout << "Enter your rating (0-10): ";
//		cin >> ratings[i];
//		cin.get();
//	}
//	cout << "Thank you. You entered the following:\n" << "Rating\tBook\n";
//
//	for ( i = 0; i < NUM; i++)
//	{
//		cout << ratings[i] << "\t" << titles[i] << std::endl;
//	}
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
The nominees for best avian baseball film are
Fowl Balls
Duck Walks
Chicken Runs
Turkey Errors
Goose Eggs
The winner is Chicken Runs!

请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/