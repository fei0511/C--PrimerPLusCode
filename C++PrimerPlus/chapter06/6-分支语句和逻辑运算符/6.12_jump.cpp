#include <iostream>
using namespace std;
//���ܣ�6.12 break��continue���
//ʱ�䣺2020��11��25��16:53:59
// 
//const int ArSize = 80;
//int main()
//{
//	char line[ArSize];
//	int spaces = 0;
//
//	cout << "Enter a line of text:\n";
//	cin.get(line, ArSize);
//	cout << "Complete line:\n" << line << endl;
//	cout << "Line through first period:\n";
//	for (int i = 0; line[i] != '\0'; i++)
//	{
//		cout << line[i];
//		if (line[i] == '.')
//		{
//			break;
//		}
//		if (line[i] != ' ')
//		{
//			continue;
//		}
//		spaces++;
//	}
//	cout << "\n" << spaces << " spaces\n";
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter a line of text:
Let's do lunch today. You can pay!
Complete line:
Let's do lunch today. You can pay!
Line through first period:
Let's do lunch today.
3 spaces
Done.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/