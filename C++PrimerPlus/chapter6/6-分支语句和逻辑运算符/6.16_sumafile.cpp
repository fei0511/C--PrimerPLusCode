#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
//���ܣ�6.16 ��ȡ�ı��ļ�
//ʱ�䣺2020��11��25��19:44:41
// 
const int SIZE = 60;

int main()
{
	char filename[SIZE];
	ifstream inFile;    //�����ļ�����

	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);     //��ifstream�������ļ���������
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good()) //�ж����һ�ζ�ȡ����Ĳ����Ƿ�ɹ�
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
	{
		cout << "End of file reached.\n";
	}
	else if (inFile.fail())
	{
		cout << "Input terminated by data mismatch.\n";
	}
	else
	{
		cout << "Input terminated for unknown reason.\n";
	}
	if (count == 0)
	{
		cout << "No data processed.\n";
	}
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();

	system("pause");
	return 0;
}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter name of data file: scores.txt
End of file reached.
Items read: 12
Sum: 204.5
Average: 17.0417
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/