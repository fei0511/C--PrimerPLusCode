#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

//���ܣ�15.18 �쳣��RTTI:���н׶�����ʶ��  typeid�������type_info�ࣩ
//ʱ�䣺2020��12��6��16:47:46
//using namespace std;
//
//class Grand
//{
//public:
//	Grand(int h = 0) : hold(h) {  };
//	virtual void Speak() const { cout << "I am a grand class!\n"; }
//	virtual int Value() const { return hold; }
//
//private:
//	int hold;
//};
//
//class Superb : public Grand
//{
//public:
//	Superb(int h = 0) : Grand(h) { };
//	void Speak() const { cout << "I am a superb class!!\n"; }
//	virtual void Say() const { cout << "I hold the superb value of " << Value() << "!\n"; }
//
//};
//
//class Magnificent : public Superb
//{
//public:
//	Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) { };
//	void Speak() const { cout << "I am a magnificent class!!!\n"; }
//	void Say() const { cout << "I hold the character " << ch << " and the integer " << Value() << "!\n"; }
//
//private:
//	char ch;
//};
//
//Grand* GetOne();
//
//int main()
//{
//	std::srand(std::time(0));
//	Grand* pg;
//	Superb* ps;
//	for (int i = 0; i < 5; i++)
//	{
//		pg = GetOne();
//		cout << "Now processing type " << typeid(*pg).name() << endl;
//		pg->Speak();
//		if (ps = dynamic_cast<Superb*>(pg))   //�������ת��ʧ�ܣ������ؿ�ָ�룻����ת��Ϊ��Superb������
//		{
//			ps->Say();
//		}
//		if (typeid(Magnificent) == typeid(*pg))   //
//		{
//			cout << "Yes, you're really magnificent.\n";
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//
//Grand* GetOne()
//{
//	Grand* p = NULL;
//	switch (std::rand() % 3)
//	{
//	case 0: p = new Grand(std::rand() % 100); break;
//
//	case 1: p = new Superb(std::rand() % 100); break;
//
//	case 2: p = new Magnificent(std::rand() % 100, 'A' + std::rand()); break;
//	}
//	return p;
//}


/*
��x86���뻷���£����н�����£���ÿһ��ָ��ռ�����ĸ��ֽڵĴ�С��
Now processing type class Superb
I am a superb class!!
I hold the superb value of 69!
Now processing type class Superb
I am a superb class!!
I hold the superb value of 70!
Now processing type class Grand
I am a grand class!
Now processing type class Magnificent
I am a magnificent class!!!
I hold the character c and the integer 76!
Yes, you're really magnificent.
Now processing type class Superb
I am a superb class!!
I hold the superb value of 41!
�밴���������. . .
-------------------------------------------------------------------------
��x64���뻷���£����н�����£���ÿһ��ָ��ռ���˰˸��ֽڵĴ�С��
*/