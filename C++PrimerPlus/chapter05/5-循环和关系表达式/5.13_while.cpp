#include <iostream>
#include <string>
//���ܣ�5.13 whileѭ��
//ʱ�䣺2020��11��25��11:05:48
//
//const int ArSize = 20;
//
//int main()
//{
//	using namespace std;
//	char name[ArSize];
//
//	cout << "Your first name, please: ";
//	//cin >> name;                     //���ָ�ʽ����ȡ���ַ����м䲻�ܰ����ո�
//	//	//cin.getline(name,20) ;  //���ָ�ʽ���Ȱ�һ���е����ݱ��浽char�����У��ٸ����ַ�������
//	cin.get(name,20).get();  //���߲������ָ�ʽ���Ȱ�һ���е����ݱ��浽char������
//	cout << "Here is your name, verticalized and ASCIIized:\n";
//	int i = 0;
//	while (name[i] != '\0')
//	{
//		cout << name[i] << ": " << int(name[i]) << endl;
//		i++;
//	}
//
//	system("pause");
//	return 0;
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Your first name, please: Fei
Here is your name, verticalized and ASCIIized:
F: 70
e: 101
i: 105
�밴���������. . .
-------------------------------------------------------------------------
Your first name, please: Yun Fei
Here is your name, verticalized and ASCIIized:
Y: 89
u: 117
n: 110
 : 32
F: 70
e: 101
i: 105
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��

*/