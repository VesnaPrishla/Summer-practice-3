#include "stack.h"
#include <stdio.h>
//������� ��������� ����� � ����� 1 ���� ��������- ���������
int check_stack(struct stack* stk, int count)
{
int i = 0, j = 0; char k, s[MAX];
printf("������� ����� : ");
gets_s(s);
for (i = 0; s[i] != '\0'; i++)
{
	push_stack(stk, s[i]);//���������� � ����
	count++;
}
if (count % 2 == 0)
{
	for (i = 0; i <= count / 2 - 1; i++) //���������� ������� �������� ��� �������� �����
		s[i] = pop_stack(stk);
	i = 0; j = 0;

	for (i = count / 2, j = count / 2 - 1; i < count, j >= 0; i++, j--)//j  �� ������� �� 1 �� 0, i  �� ����� 
	{

		k = pop_stack2(stk, i, count); //������� ���������� ��������� �� ����� ��� i-�� ��������
		if (s[j] != k)
		{
			printf(" �� ���������\n");
			return 0;
		}
	}
}
else
{
	for (i = 0; i <= count / 2; i++)//���������� ������� �������� ��� ������� (�� 1) ����� �����
		s[i] = pop_stack(stk);
	i = 0; j = 0;
	for (i = count / 2 + 1, j = count / 2 - 1; i < count, j >= 0; i++, j--)//j  �� ������� �� 1 �� 0, i  �� ����� 
	{
		k = pop_stack2(stk, i, count); //������� ���������� ��������� �� ����� ��� i-�� ��������
		if (s[j] != k)
		{
			printf(" �� ���������\n");
			return 0;
		}
	}
}

return  1;
}

