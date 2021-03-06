#include <iostream>
#include <string>

//功能：14.19 类模板（使用多个类型参数）
//时间：2020年12月4日16:15:32
//
//template <class T1, class T2>
//class Pair
//{
//public:
//	T1 & first();
//	T2 & second();
//	T1 first() const { return a; }
//	T2 second() const { return b; }
//	Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
//	Pair() { };
//
//private:
//	T1 a;
//	T2 b;
//};
//
//template <class T1, class T2>
//T1 & Pair<T1, T2>::first()
//{
//	return a;
//}
//
//template <class T1, class T2>
//T2 & Pair<T1, T2>::second()
//{
//	return b;
//}
//
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	using std::string;
//
//	Pair<string, int> ratings[4] =
//	{
//		Pair<string, int>("The Purpled Duck", 5),
//		Pair<string, int>("Jaquie's Frisco Al Fresco", 4),
//		Pair<string, int>("Cafe Souffle", 5),
//		Pair<string, int>("Bertie's Eats", 3),
//	};
//
//	int joints = sizeof(ratings) / sizeof(Pair<string, int>);
//	cout << "Rating:\t Eatery\n";
//	for (int i = 0; i < joints; i++)
//	{
//		cout << ratings[i].second() << ":\t" << ratings[i].first() << endl;
// 	}
//	cout << "Oops! Revised rating:\n";
//	ratings[3].first() = "Berite's Fab Eats";
//	ratings[3].second() = 6;
//	cout << ratings[3].second() << ":\t" << ratings[3].first() << endl;
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Rating:  Eatery
5:      The Purpled Duck
4:      Jaquie's Frisco Al Fresco
5:      Cafe Souffle
3:      Bertie's Eats
Oops! Revised rating:
6:      Berite's Fab Eats
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/