#ifndef STRING1_H_
#define STRING1_H_

#include <iostream>
using std::ostream;
using std::istream;

class String
{
public:
	String(const char * s);
	String();  //默认构造函数
	String(const String &);  //拷贝构造函数
	~String();
	int length() const { return len; }  //自动转换为内联函数
	//重载运算符
	String & operator=(const String &);
	String & operator=(const char *);
	char & operator[](int i);
	const char & operator[](int i) const;

	friend bool operator<(const String & st1, const String & st2);
	friend bool operator>(const String & st1, const String & st2);
	friend bool operator==(const String & st1, const String & st2);
	friend ostream & operator<<(ostream & os, const String & st);
	friend istream & operator>>(istream & is, String & st);
	//静态函数
	static int HowMany();

private:
	char * str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;   //cin输入限制
};



#endif // !STOCK00_H_

