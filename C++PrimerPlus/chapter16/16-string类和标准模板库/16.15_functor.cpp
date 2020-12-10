#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>


//功能：16.15 标准模板库(函数对象)
//时间：2020年12月9日20:41:12
//template<class T>
//class TooBig
//{
//public:
//	TooBig(const T& t) : cutoff(t) {   };
//	bool operator()(const T& v) { return v > cutoff; }
//
//private:
//	T cutoff;
//};
//
//void outint(int n) { std::cout << n << " "; }
//
//int main()
//{
//	using std::list;
//	using std::cout;
//	using std::endl;
//
//	TooBig<int> f100(100);
//	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
//	list<int> yadayada(vals, vals + 10);
//	list<int> etcetera(vals, vals + 10);
//
//	cout << "Original lists:\n";
//	for_each(yadayada.begin(), yadayada.end(), outint);    //打印输出数据
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);    
//	cout << endl;
//	yadayada.remove_if(f100);                              //移除大于100的元素
//	etcetera.remove_if(TooBig<int>(200));
//	cout << "Trimmed lists:\n";
//	for_each(yadayada.begin(), yadayada.end(), outint);
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//	
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Original lists:
50 100 90 180 60 210 415 88 188 201
50 100 90 180 60 210 415 88 188 201
Trimmed lists:
50 100 90 60 88
50 100 90 180 60 88 188
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/