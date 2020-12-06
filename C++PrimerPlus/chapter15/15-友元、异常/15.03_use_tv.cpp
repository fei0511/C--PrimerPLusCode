#include <iostream>
//#include "tv.h"
#include "tvfm.h"

//功能：15.3 友元类
//时间：2020年12月5日18:52:39

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
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
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
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/