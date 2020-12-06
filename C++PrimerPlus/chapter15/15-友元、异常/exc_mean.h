#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_
//1.Ctrl + Enter移动到上一行插入
//2.Ctrl + Shift + Enter移动到下一行插入
//3.输入）光标移出（）
//4.输入】光标移出【】
//5.输入}光标移出{ }

#include <iostream>

class bad_hmean
{
private:
	double v1;
	double v2;

public:
	bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) {  };
	void mesg();
};

inline void bad_hmean::mesg()
{
	std::cout << "hmean(" << v1 << ", " << v2 << "): " << "invalid arguments: a = -b\n";
}

class bad_gmean
{
public:
	double v1;
	double v2;

	bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) { };
	const char* mesg();

};

inline const char * bad_gmean::mesg()
{
	return "gmean() arguments should be >= 0\n";
}


#endif // !TV_H_
