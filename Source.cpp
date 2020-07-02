#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 100
struct queue
{
	char qu[MAX];
	int rear, frnt;
};
void init_queue(struct queue* q) //������������� �������
{
	q->frnt = 1;
	q->rear = 0;
	return;
}

void push_queue(struct queue* q, int x, int n) //���������� �������� � �������
{
	if (q->rear < MAX)
	{
		q->qu[q->rear] = x;
		q->rear++;
	}
	else
		printf("������� �����!\n");
	return;
}

int isempty_queue(struct queue* q) //��������,  ����� �� �������
{
	if (q->rear < q->frnt)    //���� ���������� rear ������ ��� frnt!
		return 1;               //������� �����
	else  return 0;
}

int pop_queue(struct queue* q) //���������� ��������� �� �������
{
	char x;
	if (isempty_queue(q) == 1)
	{
		printf("������� �����!\n");
		return(0);
	}
	x = q->qu[q->frnt - 1];
	q->frnt++;
	return x;
}
struct stack
{
	char elem[MAX];
	int top;
};
void init_stack(struct stack* stk) //������������� �����
{
	stk->top = 0;
}
void push_stack(struct stack* stk, int f, int n)//��������� �������� � ����
{
	if (stk->top < MAX)
	{
		stk->elem[stk->top] = f;
		stk->top++;
	}
	else
		printf("���� �����\n");
}
char pop_stack(struct stack* stk) //�������� �������� �� �����
{
	char elem;
	if ((stk->top) > 0)
	{
		stk->top--;
		elem = stk->elem[stk->top];
		return elem;
	}
	else
	{
		printf("���� ����!\n");
		return 0;
	}
}

int isempty_stack(struct stack* stk) //����������� ���� �� ����
{
	if (stk->top == 0)
		return 1;
	else return 0;
}

int sravnenie(struct stack* s, struct queue* q, int count1)
{

	while ((isempty_queue(q) != 1) && (isempty_stack(s) != 1) && (count1 - 1 != 0)) //������� ��� ����� 
	{
		if (pop_stack(s) != pop_queue(q))
			return 0;
		count1--;
	}
	return 1;
}
/*���� ���� � ������� �� �����
	���� ����� ��� �� ����� ������� ���
	������ 0

	� ����� 1*/



	//������� ����������� �����
int right_input(int* n)
{
	int is_correct;
	while (1)
	{
		is_correct = scanf_s("%d", n);
		if (!is_correct)
		{
			while (getchar() != '\n');
			printf("Try again");
			continue;
		}
		return *n;
	}
}
//������� �����������, �������������� �����
void overheating_protection(int* n)
{
	do
	{
		printf("\nPrint positive\n");
		right_input(n);
	} while (*n <= 0);

}

void vvod_slova(int count)
{

}

int main()
{
	setlocale(LC_ALL, "RUS");

	int  n = 0, count = 0, count1 = 0, i = 0, perepolnenie = 0;
	char a, k, elem;

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
	overheating_protection(&n);


	printf("������� �����: ");

	if (i == 0)
	{
		scanf("%c", &a);
		i++;
	}

	for (i = 1; i <= n; i++)
	{
		scanf("%c", &a);
		push_queue(q, a, n); //���������� � �������
		push_stack(stk, a, n);//���������� � ����

	}
	printf("\n");

	/*printf("������� �������\n");
	do
	{
		a = getchar();
		//putchar(a);
		push_queue(q, a); //���������� � �������
		push_stack(stk, a); //���������� � ����
		count1++;
	} while (a != '.');//�� ��������
	*/




	if (sravnenie(stk, q, count1) == 0)
		printf("\n����� �� ���������\n");
	else
		printf("\n����� ���������\n");


	/*for (struct queue* cur = q; cur != NULL;) //������� ������
	{
		q = cur;
		cur = cur->frnt;  //� �� ���� ��� ������� � ���� ��������!
		free(q);
	}
	for (struct stack* cur = stk; cur != NULL;) //������� ������
	{
		stk = cur;
		cur = cur->top;
		free(stk);
	}*/

	system("pause");
	return 0;
}

/*������ ��� �����
1234
1 - 1234
������ �� 4
4321
2- 1234

4321       4321
���������� ����� ���
� ������� ��� � �����
� ����� ��� � ������

���� �� ���� � ������� �� �����
���� ����� ��� �� ����� ������� ���
������ 0

� ����� 1

����� ����




*/