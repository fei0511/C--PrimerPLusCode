#include "stack.h"
//功能：10.11 栈的函数实现
//时间：2020年11月28日14:36:54
// 
Stack::Stack()
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & item) 
{
	if (top < MAX)
	{
		items[top++] = item;   //先给items[top]赋值，再将top++;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = items[--top];  //先将top--,再将items[top]赋给item
		return true;
	}
	else
	{
		return false;
	}
}

