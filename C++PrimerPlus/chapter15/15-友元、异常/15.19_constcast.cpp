#include <iostream>

//���ܣ�15.19 ����ת�������
//ʱ�䣺2020��12��6��17:08:54
using std::cout;
using std::endl;

void change(const int* pt, int n);

int main()
{
	int pop1 = 38383;
	const int pop2 = 2000;

	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
	change(&pop1, -103);
	change(&pop2, -103);  //����pop2��ֵ����δ���޸ĳɹ�
	cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;

	system("pause");
	return 0;
}

void change(const int* pt, int n)   //ptָ���ֵ�����޸�
{
	int* pc;

	pc = const_cast<int*> (pt);    //ָ��pcɾ����pt��const���������������޸�ָ���ֵ��������ָ���ֵ����constʱ�ſ���
	*pc += n;
}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
pop1, pop2: 38383, 2000
pop1, pop2: 38280, 2000
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/