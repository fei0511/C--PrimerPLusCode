#include <iostream>

//功能：14.20 成员模板
//时间：2020年12月4日18:52:48
//
//using std::cout;
//using std::endl;
//template <typename T>
//class beta
//{
//public:
//	beta(T t, int i) : q(t), n(i) { };
//	template<typename U>
//	U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }
//	void Show() const { q.show(); n.show(); }
//
//private:
//	template <typename V>
//	class hold
//	{
//	public:
//		hold(V v = 0) : val(v) { };
//		void show() const { cout << val << endl; }
//		V Value() const { return val; }
//
//	private:
//		V val;
//	};
//	hold<T> q;
//	hold<int> n;
//};
//
//int main()
//{
//	beta<double> guy(3.5, 3);
//	cout << "T was set to double\n";
//	guy.Show();
//	cout << "V was to T, which is double, then V was set to int\n";
//	cout << guy.blab(10, 2.3) << endl;
//	cout << "U was set to int\n";
//	cout << guy.blab(10.0, 2.3) << endl;
//	cout << "U was set to double\n";
//	cout << "Done\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
T was set to double
3.5
3
V was to T, which is double, then V was set to int
28
U was set to int
28.2609
U was set to double
Done
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/