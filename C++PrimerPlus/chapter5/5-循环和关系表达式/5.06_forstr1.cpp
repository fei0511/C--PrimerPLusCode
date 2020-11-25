#include <iostream>
#include <string>
//功能：5.6 使用for循环访问字符串(倒序遍历字符串)
//时间：2020年11月25日09:40:12
//

//int main()
//{
//	using namespace std;
//	cout << "Enter an word: ";
//	string word;
//	cin >> word;
//
//	for (int i = word.size() - 1; i >= 0; i--)    //str.size()返回字符串的长度
//	{
//		cout << word[i];
//	}
//	cout << "\nBye.\n";
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter an word: animal
lamina
Bye.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/