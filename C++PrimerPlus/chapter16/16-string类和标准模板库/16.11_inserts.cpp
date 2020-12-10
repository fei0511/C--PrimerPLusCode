#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector> 

//功能：16.11 标准模板库(迭代器类型)
//时间：2020年12月8日21:25:00
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
//	copy(s1, s1 + 4, words.begin());    //把s1的四个数据复制到words中
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//	copy(s2, s2 + 2, back_insert_iterator<vector<string>>(words));  //把s2的两个数据插入到words后面
//	for_each(words.begin(), words.end(), output);
//	cout << endl;
//
//	copy(s3, s3 + 2, insert_iterator<vector<string>>(words, words.begin())); //把s3的两个数据插入到words最前面
//	for_each(words.begin(), words.end(), output);
//
//	cout << endl;
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
fine fish fashion fate
fine fish fashion fate busy bats
silly singers fine fish fashion fate busy bats
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/