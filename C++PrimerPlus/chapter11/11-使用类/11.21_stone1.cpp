#include <iostream>
#include "stonewt1.h"
//���ܣ�11.21 ʵ������Զ�����ת����ǿ������ת��(�����ת������)
//ʱ�䣺2020��11��28��22:26:54
 
int main()
{
	using std::cout;
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;
	
	cout << "Convert to double => ";
	cout << "Poppins: " << p_wt << " pounds.\n";   //������doubleת������
	cout << "Poppins to int => ";
	cout << "Poppins: " << int(poppins) << " pounds.\n";  //������intת������

	system("pause");
	return 0;
}

/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Convert to double => Poppins: 128.8 pounds.
Poppins to int => Poppins: 129 pounds.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/