#include <iostream>
#include <new>
#include <cstdlib>


//���ܣ�15.13 �쳣��bad_alloc�쳣��new��
//ʱ�䣺2020��12��6��10:28:15
//using namespace std;
//
//struct Big
//{
//	double stuff[20000];
//};
//
//
//
//int main()
//{
//	Big* pb;
//
//	try
//	{
//		cout << "Trying to get a big block of memory:\n";
//		pb = new Big[10000];
//		cout << "Got past the new request:\n";
//	}
//	catch (bad_alloc & ba)
//	{
//		cout << "Caught the exception!\n";
//		cout << ba.what() << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "Memory successfully allocated!\n";
//	pb[0].stuff[0] = 4;
//	cout << pb[0].stuff[0] << endl;
//	delete[] pb;
//
//
//	system("pause");
//	return 0;
//}




/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��

-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/