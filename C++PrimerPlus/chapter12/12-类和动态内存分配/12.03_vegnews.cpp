#include <iostream>
#include "stringbad.h"
//���ܣ�12.3 ��̬�ڴ����(�ó�����Ϊ�������캯����ԭ�򣬻ᷢ������)
//ʱ�䣺2020��11��29��10:22:43
//using std::cout;
//using std::endl;
//
//void callme1(StringBad &);
//void callme2(StringBad);
//
//int main()
//{
//	{
//		cout << "Starting an inner block.\n";
//		StringBad headline1("Celery Stalks at Midnight");
//		StringBad headline2("Lettuce Prey");
//		StringBad sports("Spinach Leaves Bowl for Dollars");
//
//		cout << "headline1: " << headline1 << endl;
//		cout << "headline2: " << headline2 << endl;
//		cout << "sports: " << sports << endl;
//		callme1(headline1);
//		cout << "headline1: " << headline1 << endl;
//		//������������Ϊ�Ǵ�ֵ�ķ�ʽ���д��Σ������������캯������û�ж�num_strings���м�һ����ˣ����������Ĵ������          
//		//callme2(headline2);
//		//cout << "headline2: " << headline2 << endl;
//		//cout << "Initalize one object to another:\n";
//		//���������ÿ������캯�������������캯������û�ж�num_strings���м�һ����ˣ����������Ĵ������           
//		//StringBad sailor = sports;       
//		//cout << "sailor: " << sailor << endl;
//		//cout << "Assign one object to another:\n";
//		//StringBad knot;
//		//knot = headline1;   //�˴�����ø�ֵ�������������Լ��ṩ��ֵ��������������ǳ�������⣬���ձ���
//		//cout << "knot: " << knot << endl;
//		//cout << "Exiting the block.\n";
//
//	}
//	cout << "End of main()\n";
//
//	system("pause");
//	return 0;
//}
//
//void callme1(StringBad & rsb)
//{
//	cout << "String passed by reference:\n";
//	cout << "  \"" << rsb << "\"\n";
//}
//
//void callme2(StringBad sb)
//{
//	cout << "String passed by value:\n";
//	cout << "  \"" << sb << "\"\n";
//}
/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Starting an inner block.
1: "Celery Stalks at Midnight" object created
2: "Lettuce Prey" object created
3: "Spinach Leaves Bowl for Dollars" object created
headline1: Celery Stalks at Midnight
headline2: Lettuce Prey
sports: Spinach Leaves Bowl for Dollars
String passed by reference:
  "Celery Stalks at Midnight"
headline1: Celery Stalks at Midnight


String passed by value:
  "Lettuce Prey"
"Lettuce Prey" object deleted, 2 left
headline2: �����������������[
Initalize one object to another:
sailor: Spinach Leaves Bowl for Dollars
Assign one object to another:
3: "C++" default object created
knot: Celery Stalks at Midnight
Exiting the block.
"Celery Stalks at Midnight" object deleted, 2 left
"Spinach Leaves Bowl for Dollars" object deleted, 1 left
"������������������������������������l" object deleted, 0 left
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/