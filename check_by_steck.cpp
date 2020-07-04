#include "stack.h"
#include "utilits.h"
#include <stdio.h>
//‘ункци€ считывает слово и выдаЄт 1 если этослово- палиндром
int check_by_stack(struct stack* stk, char str[MAX])
{
	int i = 0, count = 0; char s[MAX];//ввод
	printf("¬ведите слово : ");
	gets_s(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		str[i] = s[i];
		count++;
	}
	i = 0;
	if (count % 2 == 0)
	{
		if (input_even(stk, i, count, str) == 0)
		{
			printf(" не палиндром\n");
			return 0;
		}
	}
	else
	{
		if (input_uneven(stk, i, count, str) == 0)
		{
			printf(" не палиндром\n");
			return 0;
		}
	}
	return  1;
}
