#include <iostream>
#include <fstream>
using namespace std;
//���ܣ�6.15 ���ļ��������
//ʱ�䣺2020��11��25��19:10:22
// 

//int main()
//{
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//	ofstream outFile;    //�����ļ�����
//	outFile.open("carinfo.txt");   //��ofstream�������ļ���������
//
//	cout << "Enter the make and model of automobile: ";
//	cin.getline(automobile, 50);
//	cout << "Enter the model year��";
//	cin >> year;
//	cout << "Enter the original asking price: ";
//	cin >> a_price;
//	d_price = 0.913 * a_price;
//
//	cout << fixed;
//	cout.precision(2);    //���þ�ȷ��Ϊ2
//	cout.setf(ios_base::showpoint);     //��ʾ������С����������
//	cout << "Make and model: " << automobile << endl;
//	cout << "Year: " << year << endl;
//	cout << "Was asking $" << a_price << endl;
//	cout << "Now asking $" << d_price << endl;
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "Make and model: " << automobile << endl;
//	outFile << "Year: " << year << endl;
//	outFile << "Was asking $" << a_price << endl;
//	outFile << "Now asking $" << d_price << endl;
//
//	outFile.close();
//
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter the make and model of automobile: Flitz Perky
Enter the model year��2009
Enter the original asking price: 13500
Make and model: Flitz Perky
Year: 2009
Was asking $13500.00
Now asking $12325.50
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/