#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>


//���ܣ�16.12 ��׼ģ���(˫������list)
//ʱ�䣺2020��12��8��22:12:00
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
//	three.remove(2);    //�Ƴ�Ԫ��2
//	cout << endl << "List three minus 2s: ";
//	for_each(three.begin(), three.end(), outint);
//	three.splice(three.begin(), one);   //��one��ֵ���뵽three����ǰ��
//	cout << endl << "List three after splice: ";
//	for_each(three.begin(), three.end(), outint);
//	cout << endl << "List one: ";
//	for_each(one.begin(), one.end(), outint);
//	three.unique();
//	cout << endl << "List three after unique: ";
//	for_each(three.begin(), three.end(), outint);
//	three.sort();
//	three.unique();        //��three��������ͬ��Ԫ��ѹ��Ϊ����Ԫ��
//	cout << endl << "List three after sort & unique: ";
//	for_each(three.begin(), three.end(), outint);
//	two.sort();           //��two����
//	three.merge(two);     //��two�ϲ���three
//	cout << endl << "Sorted two merged into three: ";
//	for_each(three.begin(), three.end(), outint);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}



/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
List one: 2 2 2 2 2
List two: 1 2 4 8 6
List three: 1 2 4 8 6 6 4 2 4 6 5
List three minus 2s: 1 4 8 6 6 4 4 6 5
List three after splice: 2 2 2 2 2 1 4 8 6 6 4 4 6 5
List one:
List three after unique: 2 1 4 8 6 4 6 5
List three after sort & unique: 1 2 4 5 6 8
Sorted two merged into three: 1 1 2 2 4 4 5 6 6 8 8
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/