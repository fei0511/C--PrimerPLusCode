#include <iostream>
using namespace std;
int stonetolb(int);
//ʱ�䣺2020��11��22��21:29:30
//ѧϰ�з���ֵ�ĺ������ã�������λ֮���ת��
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