#include <iostream>
#include <string>

//���ܣ�16.4 ʹ���ַ���
//ʱ�䣺2020��12��7��20:21:02


//int main()
//{
//	using namespace std;
//	string empty;
//	string small = "bit";
//	string larger = "Elephants are a girl's best friend";
//	cout << "Sizes:\n";
//	cout << "\tempty: " << empty.size() << endl;       //�����ַ����Ĵ�С
//	cout << "\tsmall: " << small.size() << endl;
//	cout << "\tlarger: " << larger.size() << endl;
//	cout << "Capacities:\n";
//	cout << "\tempty: " << empty.capacity() << endl;   //������ַ����ܹ�������ڴ�ռ��С
//	cout << "\tsmall: " << small.capacity() << endl;
//	cout << "\tlarger: " << larger.capacity() << endl;
//
//	empty.reserve(50);
//	cout << "Capacity after empty.reserve(50): " << empty.capacity() << endl;   //���ַ���Ԥ�����ڴ�ռ�
//
//
//	system("pause");
//	return 0;
//}



/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Sizes:
		empty: 0
		small: 3
		larger: 34
Capacities:
		empty: 15
		small: 15
		larger: 47
Capacity after empty.reserve(50): 63    15+50 = 64��16�ı�����һ��
�밴���������. . .

-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/