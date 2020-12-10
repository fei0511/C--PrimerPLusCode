#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>


//���ܣ�16.15 ��׼ģ���(��������)
//ʱ�䣺2020��12��9��20:41:12
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
//	for_each(yadayada.begin(), yadayada.end(), outint);    //��ӡ�������
//	cout << endl;
//	for_each(etcetera.begin(), etcetera.end(), outint);    
//	cout << endl;
//	yadayada.remove_if(f100);                              //�Ƴ�����100��Ԫ��
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Original lists:
50 100 90 180 60 210 415 88 188 201
50 100 90 180 60 210 415 88 188 201
Trimmed lists:
50 100 90 60 88
50 100 90 180 60 88 188
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/