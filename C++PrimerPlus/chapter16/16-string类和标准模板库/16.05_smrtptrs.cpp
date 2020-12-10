#include <iostream>
#include <string>
#include <memory>

//���ܣ�16.5 ʹ������ָ��
//ʱ�䣺2020��12��7��20:43:07
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Object created!
using auto_ptr
Object deleted!

Object created!
using shared_ptr
Object deleted!

Object created!
using unique_ptr
Object deleted!
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/