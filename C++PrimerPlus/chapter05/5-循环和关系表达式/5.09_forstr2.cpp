#include <iostream>
#include <string>
//���ܣ�5.9 �������㷨����string���������ݽ��з�ת
//ʱ�䣺2020��11��25��10:10:00
//

//int main()
//{
//	using namespace std;
//	cout << "Enter a word: ";
//	char str_temp[100];
//	string word;
//	//cin >> word;  //���ָ�ʽ����ȡ���ַ����м䲻�ܰ����ո�
//	//cin.getline(str_temp,100) ;  //���ָ�ʽ���Ȱ�һ���е����ݱ��浽char�����У��ٸ����ַ�������
//	cin.get(str_temp,100).get();  //���߲������ָ�ʽ���Ȱ�һ���е����ݱ��浽char�����У��ٸ����ַ�������
//	word = str_temp;
//
//	char temp;
//	int i, j;
//	for (j = 0, i = word.size() - 1; j < i; --i, ++j)   //��ת�ַ�������
//	{
//		temp = word[i];
//		word[i] = word[j];
//		word[j] = temp;
//	}
//	cout << word << "\nDone\n";
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter a word: HelloWorld!
!dlroWolleH
Done
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��

*/