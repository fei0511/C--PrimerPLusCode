#include <iostream>
#include "sales.h"

//���ܣ�15.16 �쳣���쳣����ͼ̳У�
//ʱ�䣺2020��12��6��11:09:37


//int main()
//{
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	double valsl[12] =
//	{
//		1220, 1100, 1122, 2212, 1232, 2334,
//		2884, 2393, 3302, 2922, 3002, 3544
//	};
//
//	double vals2[12] = 
//	{
//		12, 11, 22, 21, 32, 34,
//		28, 29, 33, 29, 32, 35
//	};
//
//	Sales sales1(2011, valsl, 12);
//	LabeledSales sales2("Blogstar", 2012, vals2, 12);
//
//	cout << "First try block:\n";
//	try
//	{
//		int i;
//		cout << "Year = " << sales1.Year() << endl;
//		for ( i = 0; i < 12; i++)
//		{
//			cout << sales1[i] << " ";
//			if (i % 6 == 5)
//			{
//				cout << endl;
//			}
//		}
//		cout << "Year = " << sales2.Year() << endl;
//		cout << "Label = " << sales2.Label() << endl;
//		for ( i = 0; i <= 12; i++)       //�˴����ⳬ������
//		{
//			cout << sales2[i] << ' ';
//			if (i % 6 == 5)
//			{
//				cout << endl;
//			}
//		}
//		cout << "End of try block 1.\n";
//	}
//	catch (LabeledSales::nbad_index & bad)
//	{
//		cout << bad.what();
//		cout << "Company: " << bad.label_val() << endl;
//		cout << "bad index: " << bad.bi_val() << endl;
//	}
//	catch (Sales::bad_index& bad)
//	{
//		cout << bad.what();
//		cout << "bad index: " << bad.bi_val() << endl;
//	}
//	cout << "\nNext try block:\n";
//	try
//	{
//		sales2[2] = 37.5;
//		sales1[20] = 23345;
//		cout << "End of try block 2.\n";
//	}
//	catch (LabeledSales::nbad_index& bad)
//	{
//		cout << bad.what();
//		cout << "Company: " << bad.label_val() << endl;
//		cout << "bad index: " << bad.bi_val() << endl;
//	}
//	catch (Sales::bad_index& bad)
//	{
//		cout << bad.what();
//		cout << "bad index: " << bad.bi_val() << endl;
//	}
//	cout << "done\n";
//
//
//	system("pause");
//	return 0;
//}
//
//


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
First try block:
Year = 2011
1220 1100 1122 2212 1232 2334
2884 2393 3302 2922 3002 3544
Year = 2012
Label = Blogstar
12 11 22 21 32 34
28 29 33 29 32 35
Index error in LabeledSales object
Company: Blogstar
bad index: 12

Next try block:
Index error in Sales object
bad index: 20
done
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/