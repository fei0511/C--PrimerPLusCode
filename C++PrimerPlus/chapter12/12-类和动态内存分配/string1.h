#ifndef STRING1_H_
#define STRING1_H_

#include <iostream>
using std::ostream;
using std::istream;

class String
{
public:
	String(const char * s);
	String();  //Ĭ�Ϲ��캯��
	String(const String &);  //�������캯��
	~String();
	int length() const { return len; }  //�Զ�ת��Ϊ��������
	//���������
	String & operator=(const String &);
	String & operator=(const char *);
	char & operator[](int i);
	const char & operator[](int i) const;

	friend bool operator<(const String & st1, const String & st2);
	friend bool operator>(const String & st1, const String & st2);
	friend bool operator==(const String & st1, const String & st2);
	friend ostream & operator<<(ostream & os, const String & st);
	friend istream & operator>>(istream & is, String & st);
	//��̬����
	static int HowMany();

private:
	char * str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;   //cin��������
};



#endif // !STOCK00_H_

