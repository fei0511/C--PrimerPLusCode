#include <iostream>

//功能：14.23 模板类和友元(模板类的约束模板友元函数：需要满足三个条件)
//时间：2020年12月4日20:20:49
//
//using std::cout;
//using std::endl;
//
//template <typename T> void counts();
//template <typename T> void report(T &);
//
//
//template <typename TT>
//class HasFriendT
//{
//public:
//	HasFriendT(const TT & i) : item(i) { ct++; };
//	~HasFriendT() { ct--; };
//	friend void counts<TT>();        //函数前面的《》表示了模板具体化
//	friend void report<>(HasFriendT<TT> &);   //
//
//private:
//	TT item;
//	static int ct;
//};
//
//template <typename T>
//int HasFriendT<T>::ct = 0;  //模板类为每一种不同的类型的实现提供了各自类型的静态成员
//
//template <typename T>
//void counts()
//{
//	cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
//	cout << "template counts(): " << HasFriendT<T>::ct << endl;
//}
//
//template <typename T>
//void report(T & hf) //需要为每种类型都编写一个友元函数
//{
//	cout << hf.item << endl;
//}
//
//
//int main()
//{
//	counts<int>();
//	HasFriendT<int> hfil(10);
//	HasFriendT<int> hfi2(20);
//	HasFriendT<double> hfdb(10.5);
//
//	report(hfil);
//	report(hfi2);
//	report(hfdb);
//
//	cout << "coutns<int>() output:\n";
//	counts<int>();
//	cout << "counts<double>() output:\n";
//	counts<double>();
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
template size: 4; template counts(): 0
10
20
10.5
coutns<int>() output:
template size: 4; template counts(): 2
counts<double>() output:
template size: 8; template counts(): 1
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/