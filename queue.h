#ifndef _QUEUE_H
#define _QUEUE_H
#include <stdio.h>
#define MAX 100
//��������� �������
struct queue
{
	char qu[MAX];
	int rear, frnt;
};

//������������� �������
void init_queue(struct queue* q);

//���������� �������� � �������
void push_queue(struct queue* q, int x);

//��������,  ����� �� �������
int isempty_queue(struct queue* q);

//���������� ��������� �� �������
int pop_queue(struct queue* q);

#endif // _QUEUE_H

