#include <iostream>
//功能：5.20 嵌套循环与二维数组
//时间：2020年11月25日14:20:57
//
const int Cities = 5;
const int Years = 4;

int main()
{
	using namespace std;

	const char * cities[Cities] = { "Gribble City", "Gribbletown", "New Gribble", "San Gribble", "Gribble Vista" };

	int maxtemps[Years][Cities] = 
	{
		{96, 100, 87, 101, 105},
		{96, 98, 91, 107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108}
	};

	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
		{
			cout << maxtemps[year][city] << "\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}

/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Maximum temperatures for 2008 - 2011

Gribble City:   96      96      97      98
Gribbletown:    100     98      101     103
New Gribble:    87      91      93      95
San Gribble:    101     107     108     109
Gribble Vista:  105     104     107     108
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）

*/