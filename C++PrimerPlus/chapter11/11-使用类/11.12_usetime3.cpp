#include <iostream>
#include "mytime3.h"
//���ܣ�11.12 ʹ��Time��(����˼ӷ����������˷�����<<�����)
//ʱ�䣺2020��11��28��19:10:21
// 

//int main()
//{
//	using std::cout;
//	using std::endl;
//
//	Time aida(3, 35);
//	Time tosca(2, 48);
//	Time temp;
//
//	cout << "Aida and Tosca:\n";
//	cout << aida << "; " << tosca << endl;  //�˴�����������<<���������Ԫ������
//	temp = aida + tosca;     //�˴�����������+�����
//	cout << "Aida + Tosca: " << temp << endl;
//	temp = aida * 1.17;     //�˴�����������*����������Ա������
//	cout << "Aida * 1.17" << temp << endl;
//	cout << "10.0 * Tosca: " << 10.0 * tosca << endl;  //�˴�����������*���������Ԫ������
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Aida and Tosca:
3 hours, 35 minutes; 2 hours, 48 minutes
Aida + Tosca: 6 hours, 23 minutes
Aida * 1.174 hours, 11 minutes
10.0 * Tosca: 28 hours, 0 minutes
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/