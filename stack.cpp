#include "stack.h"
#include<stdio.h>
#define MAX 100
//������������� �����
void init_stack(struct stack* stk)
{
	stk->top = -1; //top-������ ����������
}

//��������� �������� � ����
void push_stack(struct stack* stk, char value)
{

	if (stk->top < MAX - 1)
	{
		stk->top++;
		stk->elem[stk->top] = value;
	}
	else
		printf("���� �����\n");
}

//�������� �������� �� �����
char pop_stack(struct stack* stk)
{
	char elem;
	if (stk->top >= 0)
	{
		elem = stk->elem[stk->top];
		stk->top--;
		return elem;
	}
	else
	{
		printf("���� ����!\n");
		return 0;
	}
}

//����������� ���� �� ����
int isempty_stack(struct stack* stk)
{
	if (stk->top == -1)
		return 1;
	else return 0;
}

