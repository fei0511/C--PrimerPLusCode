#include <iostream>
#include <cstring>
#pragma warning(disable:4996) //�ñ������������־���
//���ܣ�4.20 ָ����ַ���
//ʱ�䣺2020��11��24��19:46:24

//int main()
//{
//	using namespace std;
//
//	char animal[20] = "bear";
//	const char * bird = "wren";
//	char * ps;
//
//	cout << animal << " and " << bird << endl;
//	cout << "Enter a kind of animal: ";
//	cin >> animal;
//
//	ps = animal;
//	cout << ps << "!\n";
//	cout << "Before using strcpy():\n";
//	cout << animal << " at " << (int *)animal << endl;
//	cout << ps << " at " << (int *)ps << endl;
//
//	ps = new char[strlen(animal) + 1];
//	strcpy(ps, animal);  //��animal�����ݸ��Ƶ�ps����
//	cout << "After using strcpy():\n";
//	cout << animal << " at " << (int *)animal << endl;
//	cout << ps << " at " << (int *)ps << endl;
//	delete[] ps;
//
//	system("pause");
//	return 0;
//}

/*
-------------------------------------------------------------------------
bear and wren
Enter a kind of animal: fox
fox!
Before using strcpy():
fox at 00000080E00FFA88
fox at 00000080E00FFA88
After using strcpy():
fox at 00000080E00FFA88
fox at 000001EB3A1A6B40
�밴���������. . .
*/