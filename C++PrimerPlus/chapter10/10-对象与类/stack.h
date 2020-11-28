#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 }; //������һ��Ӧ������ķ��ų���MAX����ö�ٱ���
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


