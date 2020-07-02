#include "stack.h"
#include<stdio.h>
#define MAX 100
//Инициализация стека
void init_stack(struct stack* stk) 
{
	stk->top = 0;
}

//Помещение элемента в стек
void push_stack(struct stack* stk, int f)
{
	if (stk->top < MAX)
	{
		stk->elem[stk->top] = f;
		stk->top++;
	}
	else
		printf("Стек полон\n");
}

//Удаление элемента из стека
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
		printf("Стек пуст!\n");
		return 0;
	}
}

//Определение пуст ли стек
int isempty_stack(struct stack* stk) 
{
	if (stk->top == 0)
		return 1;
	else return 0;
}
