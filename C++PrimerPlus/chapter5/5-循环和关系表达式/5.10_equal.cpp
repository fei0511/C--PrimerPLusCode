#include <iostream>
#include <string>
//功能：5.10 赋值运算法在for中的应用
//时间：2020年11月25日10:41:38
//

//int main()
//{
//	using namespace std;
//	int quizscores[10] = { 20, 20, 20, 20, 20, 19, 20, 18, 20 ,20 };
//
//	cout << "Doing it right:\n";
//	int i;
//	for (i = 0; quizscores[i] == 20; i++)    //直到第一个不是20的位置结束
//	{
//		cout << "quiz " << i << " is a 20\n";
//	}
//
//
//	system("pause");
//	return 0;
//}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Doing it right:
quiz 0 is a 20
quiz 1 is a 20
quiz 2 is a 20
quiz 3 is a 20
quiz 4 is a 20
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/