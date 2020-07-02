#include "stack.h"
#include <stdio.h>
//Решение задачи стеком
int check_stack(struct stack* stk, int count)
{
	int i = 0, j = 0; char s[MAX];
	for (i = 0; i < count; i++)
		s[i] = pop_stack(stk);
	i = 0; j = count - 1;
	for (i = 0, j = count - 1; i <= count / 2 - 1, j >= count / 2; i++, j--)
	{
		if (s[i] != s[j])
		{
			printf("не палиндром\n");
			return 1;
		}
	}
	return 0;
}