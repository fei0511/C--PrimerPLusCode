#ifndef ARRAYTP_H_
#define ARRAYTP_H_

#include <iostream>
#include <cstdlib>

template <class T, int n>
class ArrayTP
{
public:
	ArrayTP() { };
	explicit ArrayTP(const T & v);
	virtual T & operator[](int i);
	virtual T operator[](int i) const;

private:
	T ar[n];
};

template <class T, int n>
ArrayTP<T, n>::ArrayTP(const T & v)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] = v;
	}
}

template <class T, int n>
T & ArrayTP<T, n>::operator[](int i)    //返回引用
{
	if (i < 0 || i >= n)
	{
		std::cerr << "Error in array limits: " << i
			<< " is out of range\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[i];
}

template <class T, int n>
T ArrayTP<T, n>::operator[](int i) const   //返回值
{
	if (i < 0 || i >= n)
	{
		std::cerr << "Error in array limits: " << i
			<< " is out of range\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[i];
}


#endif // !STUDENTC_H_



