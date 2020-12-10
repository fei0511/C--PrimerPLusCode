#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>


//功能：16.13 标准模板库(关联容器set)
//时间：2020年12月9日18:57:09
//
//int main()
//{
//	using namespace std;
//	const int N = 6;
//	string s1[N] = { "buffoon", "thinkers", "for", "heavy", "can", "for" };
//	string s2[N] = { "metal", "any", "food", "elegant", "deliver", "for" };
//
//	set<string> A(s1, s1 + N);
//	set<string> B(s2, s2 + N);
//
//	ostream_iterator<string, char> out(cout, " ");
//	cout << "Set A: ";
//	copy(A.begin(), A.end(), out);
//	cout << endl;
//	cout << "Set B: ";
//	copy(B.begin(), B.end(), out);
//	cout << endl;
//	cout << "Union of A and B:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), out);   //求并集
//	cout << endl;
//
//	cout << "Intersection of A and B:\n";
//	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);   //求交集
//	cout << endl;
//
//	cout << "Difference of A and B:\n";
//	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);     //求A-B的差集
//	cout << endl;
//	
//	set<string> C;
//	cout << "Set C:\n";
//	set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set<string>>(C, C.begin()));
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	string s3("grungy");
//	C.insert(s3);
//	cout << "Set C after insertion:\n";
//	copy(C.begin(), C.end(), out);
//	cout << endl;
//
//	cout << "Showing a range:\n";
//	copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}



/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Set A: buffoon can for heavy thinkers
Set B: any deliver elegant food for metal
Union of A and B:
any buffoon can deliver elegant food for heavy metal thinkers
Intersection of A and B:
for
Difference of A and B:
buffoon can heavy thinkers
Set C:
any buffoon can deliver elegant food for heavy metal thinkers
Set C after insertion:
any buffoon can deliver elegant food for grungy heavy metal thinkers
Showing a range:
grungy heavy metal
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/