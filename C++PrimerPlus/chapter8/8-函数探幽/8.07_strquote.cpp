#include <iostream>
#include <string>
using namespace std;
//���ܣ�8.7 ���������������
//ʱ�䣺2020��11��26��20:16:47
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
//	//cout << "Resetting original string.\n";    //���ú���version3()�����򽫻��������Ϊversion3���������˾ֲ�����������
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter a string: It's not my fault.
Your string as entered: It's not my fault.
Your string enhanced: ***It's not my fault.***
Your original string: It's not my fault.
Your string enhanced: ###It's not my fault.###
Your original string: ###It's not my fault.###
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/