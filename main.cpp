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
	//���������� �������� � �����
	int count = 0;
	//��������� �� ���������� ��������
	int* pntr;
	pntr = &count;
	//�������� �����
	char str[MAX + 1];
	//���� ��������� �����
	input_word(str, pntr);
	//��������� ������ ��� �����
	struct stack* stk;
	stk = (struct stack*)malloc(sizeof(struct stack));
	if (!stk)
	{
		printf("�� ������� �������� ������\n");
		return NULL;
	}
	//������������� stack
	init_stack(stk);

	//��������, �������� �� ����� �����������
	if (check_by_stack(stk, *pntr, str) == 1)
		printf("���������\n");

	//������������ ������
	free(stk);
	system("pause");

	return 0;
}