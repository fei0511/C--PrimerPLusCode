#include <iostream>
#include <cctype>   
//���ܣ�6.8 �ַ�������cctypes
//ʱ�䣺2020��11��25��16:06:35
// 

//int main()
//{
//	using namespace std;
//
//	cout << "Enter text for analysis, and type @ to terminate input.\n";
//	char ch;
//	int whitespace = 0;
//	int digits = 0;
//	int chars = 0;
//	int punct = 0;
//	int others = 0;
//
//	cin.get(ch);
//	while (ch != '@')
//	{
//		if (isalpha(ch))        //��ĸ
//		{
//			chars++;
//		}
//		else if (isspace(ch))   //�ո�
//		{
//			whitespace++;
//		}
//		else if (isdigit(ch))   //����
//		{
//			digits++;
//		}
//		else if (ispunct(ch))   //������
//		{
//			punct++;
//		}
//		else
//		{
//			others++;
//		}
//		cin.get(ch);
//	}
//	cout << chars << " letters, " << whitespace << " whitespace, " << digits << " digits, "
//		<< punct << " punctuations, " << others << " others.\n";
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter text for analysis, and type @ to terminate input.
AdrenalVision International producer Adrienne Vismonger
announced production of their new 3-D film, a remake of
"My Dinner with Andre," scheduled for 2013. "wait until
you see the the new scene with an enraged Collossipede!"@
177 letters, 33 whitespace, 5 digits, 9 punctuations, 0 others.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/