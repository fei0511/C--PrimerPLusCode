#include <iostream>
//���ܣ�5.19 ѭ�����ı����루�ļ�β����EOF��
//ʱ�䣺2020��11��25��14:16:09
//cin.eof()��cin.fail()���� ��CTRL+Z��+��Enter�����Դ���EOF��־

//int main()
//{
//	using namespace std;
//
//	int ch;
//	int count = 0;
//	
//	while ((ch = cin.get()) != EOF)     //cin������������ȱ����ڻ������У�ֱ�������س������ٰ��������뽻������ϵͳ���������ݵĻ����봦��
//	{
//		cout.put(char(ch));
//		++count;
//	}
//	cout << endl << count << " characters read.\n";
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
The sullen mackerel sulks in the shadowy shallows.
The sullen mackerel sulks in the shadowy shallows.
Yes, but the blue bird of happiness harbors secrets.
Yes, but the blue bird of happiness harbors secrets.
^Z

104 characters read.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��

*/