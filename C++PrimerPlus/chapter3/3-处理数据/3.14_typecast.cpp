#include <iostream>
//���ܣ�3.14 c++ǿ������ת��
//ʱ�䣺2020��11��23��21:00:34
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
�밴���������. . .
*/