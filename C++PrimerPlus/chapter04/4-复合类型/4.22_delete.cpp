#include <iostream>
#include <cstring>
#pragma warning(disable:4996) //让编译器忽略这种警告
//using namespace std;
////功能：4.22 new和delete的使用技巧
////时间：2020年11月24日20:17:11
//char * getname();
//
//int main()
//{
//	char * name;
//
//	name = getname();
//	cout << name << " at " << (int *)name << "\n";
//	delete [] name;
//
//	name = getname();
//	cout << name << " at " << (int *)name << "\n";
//	delete [] name;
//
//
//	system("pause");
//	return 0;
//}
//
//char * getname() 
//{
//	char temp[80];
//	cout << "Enter last name:";
//	cin >> temp;
//	char * pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);
//
//	return pn;
//}
/*
-------------------------------------------------------------------------
Enter last name:Fredeldumpkin
Fredeldumpkin at 000001B025AD1D60
Enter last name:Pook
Pook at 000001B025AD1DB0
请按任意键继续. . .
*/