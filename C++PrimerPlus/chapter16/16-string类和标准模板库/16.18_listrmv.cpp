#include <iostream>
#include <list>
#include <algorithm>

//功能：16.18 函数和容器方法
//时间：2020年12月10日20:29:21
//void Show(int);
//const int LIM = 10;
//
//int main()
//{
//	using namespace std;
//	int ar[LIM] = { 4, 5, 4, 2, 2, 3, 4, 8, 1, 4 };
//	list<int> la(ar, ar + LIM);
//	list <int> lb(la);
//	cout << "Original list contents:\n\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << endl;
//	la.remove(4);        //直接删除链表中值为4的节点，并自动调节链表的长度
//	cout << "After using the remove() method:\n";
//	cout << "la:\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << endl;
//	list<int>::iterator last;
//	last = remove(lb.begin(), lb.end(), 4);   //将链表中值为4的节点移动到最后面，不为4的节点移动前方，链表的长度保持不变，并返回第一个值为4的节点的位置
//	cout << "After using the remove() function:\n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << endl;
//	lb.erase(last, lb.end());     //删除值为4的节点的区间
//	cout << "After using the erase() method:\n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//
//void Show(int v)
//{
//	std::cout << v << ' ';
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter the letter grounping (quit to quit): awl
Original list contents:
		4 5 4 2 2 3 4 8 1 4
After using the remove() method:
la:     5 2 2 3 8 1
After using the remove() function:
lb:     5 2 2 3 8 1 4 8 1 4
After using the erase() method:
lb:     5 2 2 3 8 1
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/


