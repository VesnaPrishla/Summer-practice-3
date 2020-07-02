#include "queue.h"
#define MAX 100
//������������� �������
void init_queue(struct queue* q) 
{
	q->frnt = 1;
	q->rear = 0;
	return;
}
//���������� �������� � �������
void push_queue(struct queue* q, int x) 
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
//��������,  ����� �� �������
int isempty_queue(struct queue* q) 
{
	if (q->rear < q->frnt)    //���� ���������� rear ������ ��� frnt!
		return 1;               //������� �����
	else  return 0;
}

//���������� ��������� �� �������
int pop_queue(struct queue* q) 
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