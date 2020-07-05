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
	int  i = 0;
	//количество символов в слове
	int count = 0;
	//указатель на количество символов
	int* pntr;
	pntr = &count;
	//исходное слово
	char str[MAX + 1];
	//ввод исходного слова
	input_word(str, pntr);
	//выделение пам€ти дл€ стека
	struct stack* stk;
	stk = (struct stack*)malloc(sizeof(struct stack));
	if (!stk)
	{
		printf("Ќе удалось выделить пам€ть\n");
		return NULL;
	}
	//инициализаци€ stack
	init_stack(stk);

	//проверка, €вл€етс€ ли слово палиндромом
	if (check_by_stack(stk, *pntr, str) == 1)
		printf("палиндром\n");

	//освобождение пам€ти
	free(stk);
	system("pause");

	return 0;
}