#include "stack.h"
#include "utilits.h"
#include <stdio.h>
//������� ��������� ����� � ����� 1 ���� ��������- ���������
int check_by_stack(struct stack* stk, char str[MAX])
{
	int i = 0, count = 0; char s[MAX];//����
	printf("������� ����� : ");
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
			printf(" �� ���������\n");
			return 0;
		}
	}
	else
	{
		if (input_uneven(stk, i, count, str) == 0)
		{
			printf(" �� ���������\n");
			return 0;
		}
	}
	return  1;
}
