#include <iostream>
#include <string>
//功能：5.12 比较string字符串
//时间：2020年11月25日10:59:20
//

//int main()
//{
//	using namespace std;
//	string word = "?ate";
//
//	for (char ch = 'a'; word != "mate"; ch++)    
//	{
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "After loop ends, word is " << word << endl;
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
?ate
aate
bate
cate
date
eate
fate
gate
hate
iate
jate
kate
late
After loop ends, word is mate
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/