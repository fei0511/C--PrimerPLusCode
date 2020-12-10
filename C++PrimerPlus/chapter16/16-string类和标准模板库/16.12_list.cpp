#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>


//功能：16.12 标准模板库(双向链表list)
//时间：2020年12月8日22:12:00
//void outint(int n) { std::cout << n << " "; }
//
//int main()
//{
//	using namespace std;
//
//	list<int> one(5, 2);
//	int stuff[5] = { 1,2,4,8,6 };
//	list<int> two;
//	two.insert(two.begin(), stuff, stuff + 5);
//	int more[6] = { 6, 4, 2, 4, 6, 5 };
//	list<int> three(two);
//	three.insert(three.end(), more, more + 6);
//
//	cout << "List one: ";
//	for_each(one.begin(), one.end(), outint);
//	cout << endl << "List two: ";
//	for_each(two.begin(), two.end(), outint);
//	cout << endl << "List three: ";
//	for_each(three.begin(), three.end(), outint);
//	three.remove(2);    //移除元素2
//	cout << endl << "List three minus 2s: ";
//	for_each(three.begin(), three.end(), outint);
//	three.splice(three.begin(), one);   //将one的值插入到three的最前面
//	cout << endl << "List three after splice: ";
//	for_each(three.begin(), three.end(), outint);
//	cout << endl << "List one: ";
//	for_each(one.begin(), one.end(), outint);
//	three.unique();
//	cout << endl << "List three after unique: ";
//	for_each(three.begin(), three.end(), outint);
//	three.sort();
//	three.unique();        //将three中连续相同的元素压缩为单个元素
//	cout << endl << "List three after sort & unique: ";
//	for_each(three.begin(), three.end(), outint);
//	two.sort();           //将two排序
//	three.merge(two);     //将two合并到three
//	cout << endl << "Sorted two merged into three: ";
//	for_each(three.begin(), three.end(), outint);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
List one: 2 2 2 2 2
List two: 1 2 4 8 6
List three: 1 2 4 8 6 6 4 2 4 6 5
List three minus 2s: 1 4 8 6 6 4 4 6 5
List three after splice: 2 2 2 2 2 1 4 8 6 6 4 4 6 5
List one:
List three after unique: 2 1 4 8 6 4 6 5
List three after sort & unique: 1 2 4 5 6 8
Sorted two merged into three: 1 1 2 2 4 4 5 6 6 8 8
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/