#include <iostream>
#include <string>
#include <new>

//���ܣ�12.9 ��̬�ڴ����(�Ľ���λnew�����)
//ʱ�䣺2020��11��30��09:30:03
//using namespace std;
//const int BUF = 512;
//class JustTesting
//{
//public:
//	JustTesting(const string & s = "Just Testing", int n = 0)
//	{
//		words = s;
//		number = n;
//		cout << words << " constructed\n";
//	} 
//	~JustTesting()
//	{
//		cout << words << " destroyed\n";
//	}
//	void Show() const
//	{
//		cout << words << ", " << number << endl;
//	}
//
//private:
//	string words;
//	int number;
//};
//
//
//int main()
//{
//	char * buffer = new char[BUF];   //get a block of memory
//
//	JustTesting * pc1, *pc2;
//
//	pc1 = new (buffer) JustTesting;
//	pc2 = new JustTesting("Heap1", 20);
//
//	cout << "Memory block address:\n" << "buffer: "
//		<< (void *)buffer << "  heap: " << pc2 << endl;
//	cout << "Memory contents:\n";
//	cout << pc1 << ": ";
//	pc1->Show();
//	cout << pc2 << ": ";
//	pc2->Show();
//
//	JustTesting *pc3, *pc4;
//	//��Ҫ��֤pc3��pc1ռ�ò�ͬ���ڴ�ռ�
//	pc3 = new (buffer + sizeof(JustTesting)) JustTesting("Bad Idea", 6);   //fix placement new location
//	pc4 = new JustTesting("Heap2", 10);
//
//	cout << "Memory contents:\n";
//	cout << pc3 << ": ";
//	pc3->Show();
//	cout << pc4 << ": ";
//	pc4->Show();
//
//	delete pc2;
//	delete pc4;
//
//	pc3->~JustTesting();   //�����ö�λnew���������Ķ�����Ҫ�ֶ����������������ͷŶ���
//	pc1->~JustTesting();
//
//	delete[] buffer;   //�ͷŶ�̬�ռ�
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Just Testing constructed
Heap1 constructed
Memory block address:
buffer: 013CF770  heap: 013CDA58
Memory contents:
013CF770: Just Testing, 0
013CDA58: Heap1, 20
Bad Idea constructed
Heap2 constructed
Memory contents:
013CF790: Bad Idea, 6
013D1128: Heap2, 10
Heap1 destroyed
Heap2 destroyed
Bad Idea destroyed
Just Testing destroyed
Done.
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/