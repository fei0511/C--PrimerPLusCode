#include <iostream>
//功能：3.14 c++强制类型转换
//时间：2020年11月23日21:00:34
int main()
{
	using namespace std;
	int auks, bats, coots;

	auks = 19.99 + 11.99;

	bats = (int) 19.99 + (int) 11.99;
	coots = int(19.99) + int(11.99);
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is ";
	cout << int(ch) << endl;
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;

	system("pause");
	return 0;
}

/*
auks = 31, bats = 30, coots = 30
The code for Z is 90
Yes, the code is 90
请按任意键继续. . .
*/