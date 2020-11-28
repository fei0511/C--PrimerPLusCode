#include <iostream>
#include <string>
//功能：5.13 while循环
//时间：2020年11月25日11:05:48
//
//const int ArSize = 20;
//
//int main()
//{
//	using namespace std;
//	char name[ArSize];
//
//	cout << "Your first name, please: ";
//	//cin >> name;                     //这种格式，读取的字符串中间不能包含空格
//	//	//cin.getline(name,20) ;  //这种格式，先把一整行的数据保存到char数组中，再赋给字符串对象
//	cin.get(name,20).get();  //或者采用这种格式，先把一整行的数据保存到char数组中
//	cout << "Here is your name, verticalized and ASCIIized:\n";
//	int i = 0;
//	while (name[i] != '\0')
//	{
//		cout << name[i] << ": " << int(name[i]) << endl;
//		i++;
//	}
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Your first name, please: Fei
Here is your name, verticalized and ASCIIized:
F: 70
e: 101
i: 105
请按任意键继续. . .
-------------------------------------------------------------------------
Your first name, please: Yun Fei
Here is your name, verticalized and ASCIIized:
Y: 89
u: 117
n: 110
 : 32
F: 70
e: 101
i: 105
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/