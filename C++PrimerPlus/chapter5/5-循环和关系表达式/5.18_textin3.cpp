#include <iostream>
//���ܣ�5.18 ѭ�����ı����루�ļ�β����EOF��
//ʱ�䣺2020��11��25��14:05:30
//cin.eof()��cin.fail()���� ��CTRL+Z��+��Enter�����Դ���EOF��־

//int main()
//{
//	using namespace std;
//
//	char ch;
//	int count = 0;
//	cin.get(ch);           //cin.get()�ܰѿո�Ҳ���������
//	while (cin.fail() == false)     //cin������������ȱ����ڻ������У�ֱ�������س������ٰ��������뽻������ϵͳ���������ݵĻ����봦��
//	{
//		cout << ch;
//		++count;
//		cin.get(ch);
//	}
//	cout << endl << count << " characters read.\n";
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
The green bird sings in the winter.
The green bird sings in the winter.
Yes,but the crow files in the daw.
Yes,but the crow files in the daw.
^Z

71 characters read.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��

*/