#include <iostream>
using namespace std;
//功能：7.4 函数参数与按值传递
//时间：2020年11月25日21:05:40
// 
//long double probability(unsigned numbers, unsigned picks);
//
//int main()
//{
//	double total, choices;
//	cout << "Enter the total number od choices on the game card and \n"
//		<< "the number of picks allowed:\n";
//	while ((cin >> total >> choices) && choices <= total)
//	{
//		cout << "You have one chance in ";
//		cout << probability(total, choices);
//		cout << " of wining.\n";
//		cout << "Next two numbers (q to quit): ";
//	}
//	cout << "bye\n";
//
//	system("pause");
//	return 0;
//}
//
//long double probability(unsigned numbers, unsigned picks)
//{
//	long double result = 1.0;
//	long double n;
//	unsigned p;
//
//	for ( n = numbers, p = picks; p > 0; n--, p--)
//	{
//		result = result * n / p;
//	}
//	return result;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter the total number od choices on the game card and
the number of picks allowed:
49 6
You have one chance in 1.39838e+07 of wining.
Next two numbers (q to quit): 51 6
You have one chance in 1.80095e+07 of wining.
Next two numbers (q to quit): 38 6
You have one chance in 2.76068e+06 of wining.
Next two numbers (q to quit): q
bye
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/