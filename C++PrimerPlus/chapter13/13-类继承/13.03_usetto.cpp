#include <iostream>
#include "tabtenn0.h"

//功能：13.3 类的继承
//时间：2020年11月30日16:42:11


//int main()
//{
//	using std::cout;
//
//	TableTennisPlayer player1("Chuck", "Blizzard", true);
//	TableTennisPlayer player2("Tara", "Boomdea", false);
//	player1.Name();
//	if (player1.HasTable())
//	{
//		cout << ": has a table.\n";
//	}
//	else
//	{
//		cout << ": hasn't a table.\n";
//	}
//	player2.Name();
//	if (player2.HasTable())
//	{
//		cout << ": has a table.\n";
//	}
//	else
//	{
//		cout << ": hasn't a table.\n";
//	}
//	
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Blizzard, Chuck: has a table.
Boomdea, Tara: hasn't a table.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/