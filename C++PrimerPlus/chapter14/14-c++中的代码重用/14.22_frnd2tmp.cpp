#include <iostream>

//���ܣ�14.22 ģ�������Ԫ
//ʱ�䣺2020��12��4��19:56:39
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
//int HasFriend<T>::ct = 0;  //ģ����Ϊÿһ�ֲ�ͬ�����͵�ʵ���ṩ�˸������͵ľ�̬��Ա
//
//void counts()
//{
//	cout << "int count: " << HasFriend<int>::ct << "; ";
//	cout << "double count: " << HasFriend<double>::ct << endl;
//}
//
//void reports(HasFriend<int> & hf) //��ҪΪÿ�����Ͷ���дһ����Ԫ����
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
No objects declared: int count: 0; double count: 0
After hfil declared: int count: 1; double count: 0
After hfi2 declared: int count: 2; double count: 0
After hfdb declared: int count: 2; double count: 1
HasFriend<int>: 10
HasFriend<int>: 20
HasFriend<double>: 10.5
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/