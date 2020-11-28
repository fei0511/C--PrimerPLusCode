#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
//���ܣ�8.8 ��ļ̳�
//ʱ�䣺2020��11��26��20:43:15
//
//void file_it(ostream & os, double fo, const double fe[], int n);
//const int LIMIT = 5;
//
//int main()
//{
//	ofstream fout;
//	const char * fn = "ep-data.txt";
//	fout.open(fn);
//	if (!fout.is_open())
//	{
//		cout << "Can't open " << fn << ". Bye.\n";
//		exit(EXIT_FAILURE);
//	}
//	double objective;
//	cout << "Enter the focal length of your telescope objective in mm: ";
//	cin >> objective;
//	double eps[LIMIT];
//	cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyepieces:\n";
//	for (int i = 0; i < LIMIT; i++)
//	{
//		cout << "Eyepiece #" << i + 1 << ": ";
//		cin >> eps[i];
//	}
//	file_it(fout, objective, eps, LIMIT);
//	file_it(cout, objective, eps, LIMIT);
//	cout << "Done\n";
//
//	system("pause");
//	return 0;
//}
//
//void file_it(ostream & os, double fo, const double fe[], int n)
//{
//	ios_base::fmtflags initial; //�������ɳ�Ա������־setf��unsetf�����������/�򷵻�ֵ��
//	initial = os.setf(ios_base::fixed);  //����coutΪ���������ʽ
//	os.precision(0);
//	os << "Focal length of objective: " << fo << " mm\n";
//	os.setf(ios::showpoint);  //������ʾС��������
//	os.precision(1);          //���þ�ȷ��Ϊ1����ʾһλС��
//	os.width(12);             //������һ���������ʹ�õ��ֶο��
//	os << "f.1. eyepiece";
//	os.width(15);
//	os << "magnification" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		os.width(12);
//		os << fe[i];
//		os.width(15);
//		os << int(fo / fe[i] + 0.5) << endl;
//	}
//	os.setf(initial);  //�ָ�ԭ���ĸ�ʽ������
//}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Enter the focal length of your telescope objective in mm: 1800
Enter the focal lengths, in mm, of 5 eyepieces:
Eyepiece #1: 30
Eyepiece #2: 19
Eyepiece #3: 14
Eyepiece #4: 8.8
Eyepiece #5: 7.5
Focal length of objective: 1800 mm
f.1. eyepiece  magnification
		30.0             60
		19.0             95
		14.0            129
		 8.8            205
		 7.5            240
Done
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/