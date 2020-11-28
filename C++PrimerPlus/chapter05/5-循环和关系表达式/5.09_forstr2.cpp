#include <iostream>
#include <string>
//功能：5.9 逗号运算法、将string类对象的内容进行反转
//时间：2020年11月25日10:10:00
//

//int main()
//{
//	using namespace std;
//	cout << "Enter a word: ";
//	char str_temp[100];
//	string word;
//	//cin >> word;  //这种格式，读取的字符串中间不能包含空格
//	//cin.getline(str_temp,100) ;  //这种格式，先把一整行的数据保存到char数组中，再赋给字符串对象
//	cin.get(str_temp,100).get();  //或者采用这种格式，先把一整行的数据保存到char数组中，再赋给字符串对象
//	word = str_temp;
//
//	char temp;
//	int i, j;
//	for (j = 0, i = word.size() - 1; j < i; --i, ++j)   //翻转字符串内容
//	{
//		temp = word[i];
//		word[i] = word[j];
//		word[j] = temp;
//	}
//	cout << word << "\nDone\n";
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Enter a word: HelloWorld!
!dlroWolleH
Done
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/