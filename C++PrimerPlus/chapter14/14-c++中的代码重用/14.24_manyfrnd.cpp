#include <iostream>

//���ܣ�14.24 ģ�������Ԫ(ģ����ķ�Լ��ģ����Ԫ���������������ڲ�)
//ʱ�䣺2020��12��4��20:58:49
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
hfil, hfi2: 10, 20
hfdb, hfi2: 10.5, 20
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/