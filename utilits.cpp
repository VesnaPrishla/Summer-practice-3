#include "utilits.h"
#include <stdio.h>
#include <string.h>
#include "queue.h"
#include "stack.h"
#define MAX 100
//«аполнение стека, если количество букв в слове- чЄтное
int input_even(struct stack* stk, int i, int count, char str[MAX])
{
	char rec;
	while (i <= count / 2 - 1)
	{
		push_stack(stk, str[i]);//добавление в стек
		i++;
	}
	for (i = count / 2; i < count; i++)
	{
		rec = pop_stack(stk);
		if (str[i] != rec)
			return 0;

	}
	return 1;//палиндром
}
//«аполнение стека, если количество букв в слове- нечЄтное
int input_uneven(struct stack* stk, int i, int count, char str[MAX])
{
	char rec;
	while (i <= count / 2)
	{
		push_stack(stk, str[i]);//добавление в стек
		i++;
	}
	for (i = count / 2; i < count; i++)
	{
		rec = pop_stack(stk);
		if (str[i] != rec)
			return 0;
	}
	return 1;
}
