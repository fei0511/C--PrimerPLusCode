#include <iostream>
#include "dma.h"

//功能：13.16 类的继承(继承和动态内存分配)
//时间：2020年12月2日20:02:07
//

const int CLIENTS = 4;

int main()
{
	using std::cout;
	using std::endl;

	baseDMA shirt("Portablelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	cout << "Displaying baseDMA object:\n";
	cout << shirt << endl;
	cout << "Displaying lacksDMA object:\n";
	cout << balloon << endl;
	cout << "Displaying hasDMA object:\n";
	cout << map << endl;
	lacksDMA balloon2(balloon);   //调用复制构造函数
	cout << "Result of lacksDMA copy:\n";
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "Result of hasDMA assignment:\n";
	cout << map2 << endl;

	system("pause");
	return 0;
}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Displaying baseDMA object:
Label: Portablelly
Rating: 8

Displaying lacksDMA object:
Label: Blimpo
Rating: 4
Color: red

Displaying hasDMA object:
Label: Buffalo Keys
Rating: 5
Style: Mercator

Result of lacksDMA copy:
Label: Blimpo
Rating: 4
Color: red

Result of hasDMA assignment:
Label: Buffalo Keys
Rating: 5
Style: Mercator

请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/