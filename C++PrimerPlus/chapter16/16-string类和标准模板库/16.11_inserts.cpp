#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector> 

//���ܣ�16.11 ��׼ģ���(����������)
//ʱ�䣺2020��12��8��21:25:00
//void output(const std::string& s) { std::cout << s << " "; }
//
//int main()
//{
//	using namespace std;
//
//	string s1[4] = { "fine", "fish", "fashion", "fate" };
//	string s2[4] = { "busy", "bats" };
//	string s3[2] = { "silly", "singers" };
//	vector<string> words(4);
//
//	copy(s1, s1 + 4, words.begin());    //��s1���ĸ����ݸ��Ƶ�words��
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//	copy(s2, s2 + 2, back_insert_iterator<vector<string>>(words));  //��s2���������ݲ��뵽words����
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//
//	copy(s3, s3 + 2, insert_iterator<vector<string>>(words, words.begin())); //��s3���������ݲ��뵽words��ǰ��
//	for_each(words.begin(), words.end(), output);
//
//	cout << endl;
//
//	system("pause");
//	return 0;
//}



/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
fine fish fashion fate
fine fish fashion fate busy bats
silly singers fine fish fashion fate busy bats
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/