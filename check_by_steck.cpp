#include "stack.h"
#include "utilits.h"
#include <stdio.h>
//������� ��������� ����� � ����� 1 ���� ��������- ���������
int check_by_stack(struct stack* stk, int count, char str[MAX + 1])
{
	//�������
	int counter = 0, i = 0;
	//recoverable - �����������
	char rec;
	//���������� � ���� �������� �����
	while (i < count / 2)
	{
		//���������� � ����
		push_stack(stk, str[i]);
		i++;
		//�������� �� ��, ������� ��������� ��������� � ����
		counter++;
	}
	while (counter != 0)
	{
		rec = pop_stack(stk);
		if (str[count - counter] != rec)
		{
			printf("�� ���������\n");
			return 0;
		}
		counter--;
	}
	return 1;
}

