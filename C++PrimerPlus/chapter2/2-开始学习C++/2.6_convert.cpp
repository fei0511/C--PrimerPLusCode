#include <iostream>
using namespace std;
int stonetolb(int);
//时间：2020年11月22日21:29:30
//学习有返回值的函数调用，重量单位之间的转换
int main()
{
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = " << pounds << " pounds." << endl;

	system("pause");
	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}