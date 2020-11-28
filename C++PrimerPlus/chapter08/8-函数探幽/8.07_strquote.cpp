#include <iostream>
#include <string>
using namespace std;
//功能：8.7 将引用用于类对象
//时间：2020年11月26日20:16:47
//
//string version1(const string & s1, const string & s2);
//const string & version2(string & s1, const string & s2);
//const string & version3(string & s1, const string & s2);
//
//int main()
//{
//	string input;
//	string copy;
//	string result;
//
//	cout << "Enter a string: ";
//	getline(cin, input);
//	copy = input;
//	cout << "Your string as entered: " << input << endl;
//	result = version1(input, "***");
//	cout << "Your string enhanced: " << result << endl;
//	cout << "Your original string: " << input << endl;
//
//	result = version2(input, "###");
//	cout << "Your string enhanced: " << result << endl;
//	cout << "Your original string: " << input << endl;
//
//	//cout << "Resetting original string.\n";    //调用函数version3()，程序将会崩溃，因为version3函数返回了局部变量的引用
//	//input = copy;
//	//result = version3(input, "@@@");
//	//cout << "Your string enhanced: " << result << endl;
//	//cout << "Your original string: " << input << endl;
//
//	system("pause");
//	return 0;
//}
//
//string version1(const string & s1, const string & s2)
//{
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;
//}
//
//const string & version2(string & s1, const string & s2)
//{
//	s1 = s2 + s1 + s2;
//	return s1;
//}
//
//const string & version3(string & s1, const string & s2)
//{
//	string temp;
//
//	temp = s2 + s1 + s2;
//	return temp;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter a string: It's not my fault.
Your string as entered: It's not my fault.
Your string enhanced: ***It's not my fault.***
Your original string: It's not my fault.
Your string enhanced: ###It's not my fault.###
Your original string: ###It's not my fault.###
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/