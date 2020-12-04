#include <iostream>

//功能：14.22 模板类和友元
//时间：2020年12月4日19:56:39
//
//using std::cout;
//using std::endl;
//
//template <typename T>
//class HasFriend
//{
//public:
//	HasFriend(const T & i) : item(i) { ct++; };
//	~HasFriend() { ct--;  };
//	friend void counts();
//	friend void reports(HasFriend<T> &);
//
//private:
//	T item;
//	static int ct;
//};
//template <typename T>
//int HasFriend<T>::ct = 0;  //模板类为每一种不同的类型的实现提供了各自类型的静态成员
//
//void counts()
//{
//	cout << "int count: " << HasFriend<int>::ct << "; ";
//	cout << "double count: " << HasFriend<double>::ct << endl;
//}
//
//void reports(HasFriend<int> & hf) //需要为每种类型都编写一个友元函数
//{
//	cout << "HasFriend<int>: " << hf.item << endl;
//}
//
//void reports(HasFriend<double> & hf)
//{
//	cout << "HasFriend<double>: " << hf.item << endl;
//}
//
//
//int main()
//{
//	cout << "No objects declared: ";
//	counts();
//	HasFriend<int> hfil(10);
//	cout << "After hfil declared: ";
//	counts();
//	HasFriend<int> hfi2(20);
//	cout << "After hfi2 declared: ";
//	counts();
//	HasFriend<double> hfdb(10.5);
//	cout << "After hfdb declared: ";
//	counts();
//	reports(hfil);
//	reports(hfi2);
//	reports(hfdb);
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
No objects declared: int count: 0; double count: 0
After hfil declared: int count: 1; double count: 0
After hfi2 declared: int count: 2; double count: 0
After hfdb declared: int count: 2; double count: 1
HasFriend<int>: 10
HasFriend<int>: 20
HasFriend<double>: 10.5
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/