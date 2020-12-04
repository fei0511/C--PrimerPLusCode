#include <iostream>

//功能：14.24 模板类和友元(模板类的非约束模板友元函数：声明在类内部)
//时间：2020年12月4日20:58:49
//
using std::cout;
using std::endl;


template <typename T>
class ManyFriend
{
public:
	ManyFriend(const T & i) : item(i) { };
	template <typename C, typename D> friend void show2(C &, D &);

private:
	T item;
};

template <typename C, typename D> void show2(C & c, D & d)
{
	cout << c.item << ", " << d.item << endl;
}


int main()
{
	ManyFriend<int> hfi1(10);
	ManyFriend<int> hfi2(20);
	ManyFriend<double> hfdb(10.5);

	cout << "hfil, hfi2: ";
	show2(hfi1, hfi2);
	cout << "hfdb, hfi2: ";
	show2(hfdb, hfi2);

	system("pause");
	return 0;
}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
hfil, hfi2: 10, 20
hfdb, hfi2: 10.5, 20
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/