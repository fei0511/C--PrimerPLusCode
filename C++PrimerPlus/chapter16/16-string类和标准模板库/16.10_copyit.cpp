#include <iostream>
#include <iterator>
#include <vector> 

//功能：16.10 标准模板库(迭代器类型)
//时间：2020年12月8日20:53:26


//int main()
//{
//	using namespace std;
//
//	int casts[10] = { 6, 7, 2, 9, 4, 11, 8, 7, 10, 5 };
//	vector<int> dice(10);
//
//	copy(casts, casts + 10, dice.begin());
//	cout << "Let the dice be cast!\n";
//
//	ostream_iterator<int, char> out_iter(cout, " ");
//	copy(dice.begin(), dice.end(), out_iter);
//	cout << endl;
//	cout << "Implicit use of reverse iterator.\n";
//	copy(dice.rbegin(), dice.rend(), out_iter);   //反向输出
//	cout << endl;
//	cout << "Explicit use of reverse iterator.\n";
//	vector<int>::reverse_iterator ri;              //dice.rbegin()和dice.rend()迭代器的类型为reverse_iterator
//	for ( ri = dice.rbegin(); ri != dice.rend(); ++ri)
//	{
//		cout << *ri << ' ';
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Let the dice be cast!
6 7 2 9 4 11 8 7 10 5
Implicit use of reverse iterator.
5 10 7 8 11 4 9 2 7 6
Explicit use of reverse iterator.
5 10 7 8 11 4 9 2 7 6
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/