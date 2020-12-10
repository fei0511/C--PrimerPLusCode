#include <iostream>
#include <string>
#include <memory>  //使用智能指针必须包含该头文件

//功能：16.6 使用智能指针(auto_ptr、unique_ptr、shared_ptr)
//时间：2020年12月7日21:06:32



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
//	//pwin = films[2];      //此处会将film[2]的所有权转给pwin，因此在下面输出film[2]时，会直接报错
//
//	//将auto_ptr替换为shared_ptr
//	shared_ptr<string> films[5] =
//	{
//		shared_ptr<string>(new string("Fowl Balls")),
//		shared_ptr<string>(new string("Duck Walks")),
//		shared_ptr<string>(new string("Chicken Runs")),
//		shared_ptr<string>(new string("Turkey Errors")),
//		shared_ptr<string>(new string("Goose Eggs")),
//	};
//	shared_ptr<string> pwin;
//	pwin = films[2];      //此处会将film[2]的所有权转给pwin，因此在下面输出film[2]时，会直接报错
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
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
The nominees for best avian baseball film are
Fowl Balls
Duck Walks
Chicken Runs
Turkey Errors
Goose Eggs
The winner is Chicken Runs!

请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/