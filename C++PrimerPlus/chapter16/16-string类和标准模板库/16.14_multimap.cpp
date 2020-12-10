#include <iostream>
#include <string>
#include <map>
#include <algorithm>


//功能：16.14 标准模板库(关联容器multiset)
//时间：2020年12月9日19:47:19
//typedef int KeyType;
//typedef std::pair<const KeyType, std::string> Pair;
//typedef std::multimap<KeyType, std::string> MapCode;
//
//
//int main()
//{
//	using namespace std;
//	MapCode codes;
//
//	codes.insert(Pair(415, "San Francisco"));
//	codes.insert(Pair(510, "Oakland"));
//	codes.insert(Pair(718, "Brooklyn"));
//	codes.insert(Pair(718, "Staten Island"));
//	codes.insert(Pair(415, "San Rafael"));
//	codes.insert(Pair(510, "Berkeley"));
//
//	cout << "Number of cities with area code 415: " << codes.count(415) << endl;   //返回415的数目
//	cout << "Number of cities with area code 718: " << codes.count(718) << endl;
//	cout << "Number of cities with area code 510: " << codes.count(510) << endl;
//	cout << "Arrea Code   City\n";
//	MapCode::iterator it;
//	for ( it = codes.begin(); it != codes.end(); ++it)
//	{
//		cout << "      " << (*it).first << "    " << (*it).second << endl;
//	}
//
//	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);   //返回一个718所在的区间
//	cout << "Cities with area code 718:\n";
//	for (it = range.first; it != range.second; ++it)
//	{
//		cout << (*it).second << endl;
//	}
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Number of cities with area code 415: 2
Number of cities with area code 718: 2
Number of cities with area code 510: 2
Arrea Code   City
	  415    San Francisco
	  415    San Rafael
	  510    Oakland
	  510    Berkeley
	  718    Brooklyn
	  718    Staten Island
Cities with area code 718:
Brooklyn
Staten Island
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/