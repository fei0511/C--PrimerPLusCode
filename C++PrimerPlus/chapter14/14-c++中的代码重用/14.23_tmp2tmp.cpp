#include <iostream>

//���ܣ�14.23 ģ�������Ԫ(ģ�����Լ��ģ����Ԫ��������Ҫ������������)
//ʱ�䣺2020��12��4��20:20:49
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
//	friend void counts<TT>();        //����ǰ��ġ�����ʾ��ģ����廯
//	friend void report<>(HasFriendT<TT> &);   //
//
//private:
//	TT item;
//	static int ct;
//};
//
//template <typename T>
//int HasFriendT<T>::ct = 0;  //ģ����Ϊÿһ�ֲ�ͬ�����͵�ʵ���ṩ�˸������͵ľ�̬��Ա
//
//template <typename T>
//void counts()
//{
//	cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
//	cout << "template counts(): " << HasFriendT<T>::ct << endl;
//}
//
//template <typename T>
//void report(T & hf) //��ҪΪÿ�����Ͷ���дһ����Ԫ����
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
template size: 4; template counts(): 0
10
20
10.5
coutns<int>() output:
template size: 4; template counts(): 2
counts<double>() output:
template size: 8; template counts(): 1
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/