#include <iostream>
#include "tabtenn1.h"

//功能：13.6 类的继承
//时间：2020年11月30日18:42:15


//int main()
//{
//	using std::cout;
//	using std::endl;
//
//	TableTennisPlayer player1("Tara", "Boomdea", false);
//	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
//	rplayer1.Name();
//
//	if (rplayer1.HasTable())
//	{
//		cout << ": has a table.\n";
//	}
//	else
//	{
//		cout << ": hasn't a table.\n";
//	}
//	player1.Name();
//	if (player1.HasTable())
//	{
//		cout << ": has a table.\n";
//	}
//	else
//	{
//		cout << ": hasn't a table.\n";
//	}
//	cout << "Name: ";
//	rplayer1.Name();
//	cout << "; Rating: " << rplayer1.Rating() << endl;
//
//	RatedPlayer rplayer2(1212, player1);
//	cout << "Name: ";
//	rplayer2.Name();
//	cout << "; Rating: " << rplayer2.Rating() << endl;
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Duck, Mallory: has a table.
Boomdea, Tara: hasn't a table.
Name: Duck, Mallory; Rating: 1140
Name: Boomdea, Tara; Rating: 1212
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/