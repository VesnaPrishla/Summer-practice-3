#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <cstdio>
#include "queue.h"
#include "stack.h"
#include "utilits.h"
#include "comparison.h"
#include "check_by_steck.h"
#define MAX 100
int main()
{
	setlocale(LC_ALL, "RUS");
	int  i = 0; char str[MAX]; struct stack* stk;
	stk = (struct stack*)malloc(sizeof(struct stack));
	if (!stk)
	{
		printf("Не удалось выделить память\n");
		return NULL;
	}
	init_stack(stk); //инициализация stack
	if (check_by_stack(stk, str) == 1)
		printf("палиндром\n");


	free(stk);
	system("pause");
	return 0;
}