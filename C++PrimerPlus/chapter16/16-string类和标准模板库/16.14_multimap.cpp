#include <iostream>
#include <string>
#include <map>
#include <algorithm>


//���ܣ�16.14 ��׼ģ���(��������multiset)
//ʱ�䣺2020��12��9��19:47:19
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
//	cout << "Number of cities with area code 415: " << codes.count(415) << endl;   //����415����Ŀ
//	cout << "Number of cities with area code 718: " << codes.count(718) << endl;
//	cout << "Number of cities with area code 510: " << codes.count(510) << endl;
//	cout << "Arrea Code   City\n";
//	MapCode::iterator it;
//	for ( it = codes.begin(); it != codes.end(); ++it)
//	{
//		cout << "      " << (*it).first << "    " << (*it).second << endl;
//	}
//
//	pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);   //����һ��718���ڵ�����
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
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
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
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/