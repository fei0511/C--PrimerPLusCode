#include <iostream>
#include <cstring>
#pragma warning(disable:4996) //让编译器忽略这种警告
//功能：4.20 指针和字符串
//时间：2020年11月24日19:46:24

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
//	strcpy(ps, animal);  //将animal的内容复制到ps处。
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
请按任意键继续. . .
*/