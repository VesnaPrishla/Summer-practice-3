#include "utilits.h"
#include <stdio.h>
#include <string.h>
#include "queue.h"
#include "stack.h"
#define MAX 100
//����
void input_word(char str[MAX + 1], int* count)
{
	//�������
	int i = 0;
	//����������� ������
	char c;
	//���� �����
	printf("������� ����� : ");
	//���� ����������� ������ �� \0 ��� �� ����� ��� ���� ���� ������ ���� ������
	while (((c = getchar()) != '\0') && (c != '\n') && (i <= MAX))
	{
		str[i] = c;
		(*count)++;
		i++;
	}
	str[MAX] = '\0';
	//���� ���������� ���� � ����� ������ ������ ������������ ���������� ���� �� ���������� 
	if (MAX < *count)
	{
		*count = MAX;
		printf("\n������������ ���������� ���� %d\n", *count);
	}
	return;
}