#include <iostream>
#include <string>
#include <memory>  //ʹ������ָ����������ͷ�ļ�

//���ܣ�16.6 ʹ������ָ��(auto_ptr��unique_ptr��shared_ptr)
//ʱ�䣺2020��12��7��21:06:32



//int main()
//{
//	using namespace std;
//
//	//auto_ptr<string> films[5] =
//	//{
//	//	auto_ptr<string>(new string("Fowl Balls")),
//	//	auto_ptr<string>(new string("Duck Walks")),
//	//	auto_ptr<string>(new string("Chicken Runs")),
//	//	auto_ptr<string>(new string("Turkey Errors")),
//	//	auto_ptr<string>(new string("Goose Eggs")),
//	//};
//	//auto_ptr<string> pwin;
//	//pwin = films[2];      //�˴��Ὣfilm[2]������Ȩת��pwin��������������film[2]ʱ����ֱ�ӱ���
//
//	//��auto_ptr�滻Ϊshared_ptr
//	shared_ptr<string> films[5] =
//	{
//		shared_ptr<string>(new string("Fowl Balls")),
//		shared_ptr<string>(new string("Duck Walks")),
//		shared_ptr<string>(new string("Chicken Runs")),
//		shared_ptr<string>(new string("Turkey Errors")),
//		shared_ptr<string>(new string("Goose Eggs")),
//	};
//	shared_ptr<string> pwin;
//	pwin = films[2];      //�˴��Ὣfilm[2]������Ȩת��pwin��������������film[2]ʱ����ֱ�ӱ���
//
//
//	cout << "The nominees for best avian baseball film are\n";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << *films[i] << endl;
//	}
//	cout << "The winner is " << *pwin << "!\n";
//	cin.get();      
//
//	system("pause");
//	return 0;
//}



/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
The nominees for best avian baseball film are
Fowl Balls
Duck Walks
Chicken Runs
Turkey Errors
Goose Eggs
The winner is Chicken Runs!

�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/