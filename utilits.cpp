#include "utilits.h"
#include <stdio.h>
#include <string.h>
#include "queue.h"
#include "stack.h"
#define MAX 100
//����� ����� � �� ������
int vvod(struct stack* stk, int count)
{
	int i = 0; char s[MAX];
	printf("������� ����� : ");
	gets_s(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		push_stack(stk, s[i]);//���������� � ����
		count++;
	}
	return count;
}
