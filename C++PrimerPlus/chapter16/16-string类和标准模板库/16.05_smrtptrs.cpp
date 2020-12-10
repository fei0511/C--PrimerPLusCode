#include <iostream>
#include <string>
#include <memory>

//功能：16.5 使用智能指针
//时间：2020年12月7日20:43:07
//class Report
//{
//public:
//	Report(const std::string s) : str(s) { std::cout << "Object created!\n";};
//	~Report() { std::cout << "Object deleted!\n";  };
//	void comment() const { std::cout << str << "\n"; }
//
//private:
//	std::string str;
//};
//
//
//int main()
//{
//	{
//		std::auto_ptr<Report> ps(new Report("using auto_ptr"));
//		ps->comment();
//	}
//	std::cout << std::endl;
//	{
//		std::shared_ptr<Report> ps(new Report("using shared_ptr"));
//		ps->comment();
//	}
//	std::cout << std::endl;
//	{
//		std::unique_ptr<Report> ps(new Report("using unique_ptr"));
//		ps->comment();
//	}
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Object created!
using auto_ptr
Object deleted!

Object created!
using shared_ptr
Object deleted!

Object created!
using unique_ptr
Object deleted!
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/