#include <iostream>
//���ܣ�5.17 ѭ�����ı����루ʹ��cin.get(char)���в��ȣ�
//ʱ�䣺2020��11��25��14:05:30
//

//int main()
//{
//	using namespace std;
//
//	char ch;
//	int count = 0;
//
//	cout << "Enter characters; enter # to quit:\n";
//	cin.get(ch);           //cin.get()�ܰѿո�Ҳ���������
//	while (ch != '#')     //cin������������ȱ����ڻ������У�ֱ�������س������ٰ��������뽻������ϵͳ���������ݵĻ����봦��
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
Enter characters; enter # to quit:
Did you use a pencil?#2
Did you use a pencil?
21 characters read.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��

*/