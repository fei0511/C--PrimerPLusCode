#include <iostream>
#include <string>
#include <new>

//功能：12.8 动态内存和类(再谈定位new运算符)
//时间：2020年11月29日22:08:06
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
//	char * buffer = new char[BUF];
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
//	pc3 = new (buffer) JustTesting("Bad Idea", 6);
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
//	delete[] buffer;
//	cout << "Done.\n";
//
//	system("pause");
//	return 0;
//}


/*
在x86编译环境下，运行结果如下：（每一个指针占用了四个字节的大小）
Just Testing constructed
Heap1 constructed
Memory block address:
buffer: 00F8DF00  heap: 00F89DF8
Memory contents:
00F8DF00: Just Testing, 0
00F89DF8: Heap1, 20
Bad Idea constructed
Heap2 constructed
Memory contents:
00F8DF00: Bad Idea, 6
00F89998: Heap2, 10
Heap1 destroyed
Heap2 destroyed
Done.
请按任意键继续. . .
-------------------------------------------------------------------------
在x64编译环境下，运行结果如下：（每一个指针占用了八个字节的大小）
*/