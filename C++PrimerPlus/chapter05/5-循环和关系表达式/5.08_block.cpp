#include <iostream>
//功能：5.8 for循环使用花括号
//时间：2020年11月25日10:00:22
//

//int main()
//{
//	using namespace std;
//	cout << "The Amazing Accounto will sum and adverage ";
//	cout << "five numbers for you.\n";
//	cout << "Please enter five values:\n";
//	double number;
//	double sum = 0.0;
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << "Value " << i << ": ";
//		cin >> number;
//		sum += number;
//	}
//	cout << "Five exquisite choices indeed! ";
//	cout << "They sum to " << sum << endl;
//	cout << "and adverge to " << sum / 5 << endl;
//	cout << "The Amazing Accounto bids you adieu!\n";
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
The Amazing Accounto will sum and adverage five numbers for you.
Please enter five values:
Value 1: 1942
Value 2: 1948
Value 3: 1957
Value 4: 1974
Value 5: 1980
Five exquisite choices indeed! They sum to 9801
and adverge to 1960.2
The Amazing Accounto bids you adieu!
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/