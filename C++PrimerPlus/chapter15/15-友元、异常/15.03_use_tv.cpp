#include <iostream>
//#include "tv.h"
#include "tvfm.h"

//���ܣ�15.3 ��Ԫ��
//ʱ�䣺2020��12��5��18:52:39

//
//int main()
//{
//	using std::cout;
//	Tv s42;
//	cout << "Initial settings for 42\" TV:\n";
//	s42.settings();
//	s42.onoff();
//	s42.chanup();
//	cout << "\nAdjusted settings for 42\" TV:\n";
//	s42.chanup();
//	cout << "\nAdjusted settings for 42\" TV:\n";
//	s42.settings();
//
//	Remote grey;
//
//	grey.set_chan(s42, 10);
//	grey.volup(s42);
//	grey.volup(s42);
//	cout << "\n42\" settings after using remote:\n";
//	s42.settings();
//
//	Tv s58(Tv::On);
//	s58.set_mode();
//	grey.set_chan(s58, 28);
//	cout << "\n58\" settings:\n";
//	s58.settings();
// 
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Initial settings for 42" TV:
TV isOff

Adjusted settings for 42" TV:

Adjusted settings for 42" TV:
TV isOn
Volume setting = 5
Channel setting = 4
Mode = cable
Input = TV

42" settings after using remote:
TV isOn
Volume setting = 7
Channel setting = 10
Mode = cable
Input = TV

58" settings:
TV isOn
Volume setting = 5
Channel setting = 28
Mode = antenna
Input = TV
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/