#include <iostream>
#include <string>
//功能：5.11 字符串比较
//时间：2020年11月25日10:52:22
//

//int main()
//{
//	using namespace std;
//	char word[5] = "?ate";
//
//	for (char ch = 'a'; strcmp(word, "mate"); ch++)    //strcmp()函数包含在string头文件里，用于比较两个字符串是否相同，不同则返回False
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