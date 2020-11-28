#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 }; //定义了一个应用于类的符号常量MAX，非枚举变量
	Item items[MAX];
	int top;

public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item & item);
	bool pop(Item & item);
};


#endif // !STOCK00_H_


