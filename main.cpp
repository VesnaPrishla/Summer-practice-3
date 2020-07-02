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




/*int main()
{
	setlocale(LC_ALL, "RUS");
	int  count = 0, i = 0;
	struct queue* q;
	q = (struct queue*)malloc(sizeof(struct queue));
	if (!q)
	{
		printf("�� ������� �������� ������\n");
		return NULL;
	}

	init_queue(q);// ������������� queue
	struct stack* stk;
	stk = (struct stack*)malloc(sizeof(struct stack));
	if (!stk)
	{
		printf("�� ������� �������� ������\n");
		return NULL;
	}
	init_stack(stk); //������������� stack
	count = vvod(q, stk, count);
	if (comparison(stk, q, count) == 0)
		printf("\n����� �� ���������\n");
	else
		printf("\n����� ���������\n");
	free(stk);
	free(q);
	system("pause");
	return 0;
}
*/
int main()
{
	setlocale(LC_ALL, "RUS");
	int  count = 0, i = 0;
	struct stack* stk;
	stk = (struct stack*)malloc(sizeof(struct stack));
	if (!stk)
	{
		printf("�� ������� �������� ������\n");
		return NULL;
	}
	init_stack(stk); //������������� stack
	count = vvod(stk, count);
	if (check_stack(stk, count) == 0)
		printf("���������\n");

	free(stk);
	system("pause");
	return 0;
}