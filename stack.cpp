#include "stack.h"
#include<stdio.h>
#define MAX 100
//Инициализация стека
void init_stack(struct stack* stk)
{
	stk->top = -1; //top-индекс последнего
}

//Помещение элемента в стек
void push_stack(struct stack* stk, char value)
{

	if (stk->top < MAX - 1)
	{
		stk->top++;
		stk->elem[stk->top] = value;
	}
	else
		printf("Стек полон\n");
}

//Удаление элемента из стека
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
		printf("Стек пуст!\n");
		return 0;
	}
}

//Определение пуст ли стек
int isempty_stack(struct stack* stk)
{
	if (stk->top == -1)
		return 1;
	else return 0;
}

