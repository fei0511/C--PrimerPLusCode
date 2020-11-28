#include "stack.h"
//���ܣ�10.11 ջ�ĺ���ʵ��
//ʱ�䣺2020��11��28��14:36:54
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
		items[top++] = item;   //�ȸ�items[top]��ֵ���ٽ�top++;
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
		item = items[--top];  //�Ƚ�top--,�ٽ�items[top]����item
		return true;
	}
	else
	{
		return false;
	}
}

