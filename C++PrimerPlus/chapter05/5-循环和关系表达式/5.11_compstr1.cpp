#include <iostream>
#include <string>
//���ܣ�5.11 �ַ����Ƚ�
//ʱ�䣺2020��11��25��10:52:22
//

//int main()
//{
//	using namespace std;
//	char word[5] = "?ate";
//
//	for (char ch = 'a'; strcmp(word, "mate"); ch++)    //strcmp()����������stringͷ�ļ�����ڱȽ������ַ����Ƿ���ͬ����ͬ�򷵻�False
//	{
//		cout << word << endl;
//		word[0] = ch;
//	}
//	cout << "After loop ends, word is " << word << endl;
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
?ate
aate
bate
cate
date
eate
fate
gate
hate
iate
jate
kate
late
After loop ends, word is mate
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��

*/