#include <iostream>
#include <list>
#include <algorithm>

//���ܣ�16.18 ��������������
//ʱ�䣺2020��12��10��20:29:21
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
//	la.remove(4);        //ֱ��ɾ��������ֵΪ4�Ľڵ㣬���Զ���������ĳ���
//	cout << "After using the remove() method:\n";
//	cout << "la:\t";
//	for_each(la.begin(), la.end(), Show);
//	cout << endl;
//	list<int>::iterator last;
//	last = remove(lb.begin(), lb.end(), 4);   //��������ֵΪ4�Ľڵ��ƶ�������棬��Ϊ4�Ľڵ��ƶ�ǰ��������ĳ��ȱ��ֲ��䣬�����ص�һ��ֵΪ4�Ľڵ��λ��
//	cout << "After using the remove() function:\n";
//	cout << "lb:\t";
//	for_each(lb.begin(), lb.end(), Show);
//	cout << endl;
//	lb.erase(last, lb.end());     //ɾ��ֵΪ4�Ľڵ������
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter the letter grounping (quit to quit): awl
Original list contents:
		4 5 4 2 2 3 4 8 1 4
After using the remove() method:
la:     5 2 2 3 8 1
After using the remove() function:
lb:     5 2 2 3 8 1 4 8 1 4
After using the erase() method:
lb:     5 2 2 3 8 1
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/


