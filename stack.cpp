#include "stack.h"
#include<stdio.h>
#define MAX 100
//������������� �����
void init_stack(struct stack* stk) 
{
	stk->top = 0;
}

//��������� �������� � ����
void push_stack(struct stack* stk, int f)
{
	if (stk->top < MAX)
	{
		stk->elem[stk->top] = f;
		stk->top++;
	}
	else
		printf("���� �����\n");
}

//�������� �������� �� �����
char pop_stack(struct stack* stk) 
{
	char elem;
	if ((stk->top) > 0)
	{
		stk->top--;
		elem = stk->elem[stk->top];
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
	if (stk->top == 0)
		return 1;
	else return 0;
}
