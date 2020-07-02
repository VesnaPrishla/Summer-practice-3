#ifndef _STACK_H
#define _STACK_H
#define MAX 100
struct stack
{
	char elem[MAX];
	int top;
};

//Инициализация стека
void init_stack(struct stack* stk);

//Помещение элемента в стек
void push_stack(struct stack* stk, int f);

//Удаление элемента из стека
char pop_stack(struct stack* stk);

//Определение пуст ли стек
int isempty_stack(struct stack* stk);

#endif // !_STACK_H
